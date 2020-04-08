#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>
#include <string.h>


int main() {

/*
scenario: test_random_actions
uuid: 667032321
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 15, 11, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_free_fields(board, 3) == 87 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 12, 0) == 0 );
assert( gamma_move(board, 7, 0, 14) == 1 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_move(board, 9, 5, 0) == 1 );
assert( gamma_move(board, 9, 5, 1) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 0, 8) == 1 );
assert( gamma_move(board, 11, 2, 1) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 1, 12) == 1 );
assert( gamma_golden_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_move(board, 6, 13, 4) == 0 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board174175696 = gamma_board(board);
assert( board174175696 != NULL );
assert( strcmp(board174175696, 
"7.....\n"
"......\n"
".2....\n"
"......\n"
"......\n"
"...5..\n"
"10.....\n"
"......\n"
"...6..\n"
"....4.\n"
"......\n"
".5..2.\n"
"23.1..\n"
"..11..9\n"
".3...9\n") == 0);
free(board174175696);
board174175696 = NULL;
assert( gamma_move(board, 8, 5, 13) == 1 );
assert( gamma_move(board, 9, 11, 5) == 0 );
assert( gamma_move(board, 9, 4, 14) == 1 );
assert( gamma_free_fields(board, 9) == 73 );
assert( gamma_move(board, 10, 4, 2) == 1 );
assert( gamma_move(board, 11, 14, 3) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );


char* board893383987 = gamma_board(board);
assert( board893383987 != NULL );
assert( strcmp(board893383987, 
"7...9.\n"
".....8\n"
".2....\n"
"......\n"
"......\n"
"..45..\n"
"10.....\n"
"......\n"
"...6..\n"
"....4.\n"
"......\n"
".5..23\n"
"23.110.\n"
".411..9\n"
".3...9\n") == 0);
free(board893383987);
board893383987 = NULL;
assert( gamma_move(board, 6, 5, 10) == 1 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_golden_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_free_fields(board, 8) == 68 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 9, 0, 7) == 1 );
assert( gamma_move(board, 10, 0, 5) == 1 );
assert( gamma_move(board, 10, 1, 7) == 1 );
assert( gamma_move(board, 11, 8, 5) == 0 );
assert( gamma_move(board, 11, 3, 14) == 1 );
assert( gamma_busy_fields(board, 11) == 2 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 14, 5) == 0 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 7, 4, 11) == 1 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 11, 4, 1) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 2, 1, 14) == 1 );
assert( gamma_golden_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 14, 2) == 0 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_golden_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_free_fields(board, 8) == 52 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_free_fields(board, 10) == 52 );
assert( gamma_move(board, 11, 8, 2) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 7, 12, 5) == 0 );
assert( gamma_move(board, 7, 1, 6) == 1 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_free_fields(board, 9) == 48 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 1, 14) == 0 );
assert( gamma_move(board, 11, 11, 3) == 0 );
assert( gamma_move(board, 11, 1, 0) == 0 );


char* board754131685 = gamma_board(board);
assert( board754131685 != NULL );
assert( strcmp(board754131685, 
"72.119.\n"
".....8\n"
".2..2.\n"
"....75\n"
".....6\n"
"..45..\n"
"10..6..\n"
"910....\n"
".7.6..\n"
"10...4.\n"
"....32\n"
"75.423\n"
"23.1101\n"
".4111119\n"
"936.29\n") == 0);
free(board754131685);
board754131685 = NULL;
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_free_fields(board, 2) == 47 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 13, 4) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 6, 4, 10) == 1 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 7, 1, 10) == 1 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 8, 2, 5) == 1 );
assert( gamma_golden_move(board, 8, 14, 3) == 0 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 10, 6, 0) == 0 );
assert( gamma_move(board, 10, 0, 11) == 1 );
assert( gamma_move(board, 11, 2, 1) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 14, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 0, 14) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 9, 2, 12) == 1 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 10, 4, 0) == 0 );
assert( gamma_move(board, 10, 3, 10) == 1 );
assert( gamma_move(board, 11, 13, 0) == 0 );
assert( gamma_free_fields(board, 11) == 37 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_golden_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 13, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 4, 14) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );


char* board449275848 = gamma_board(board);
assert( board449275848 != NULL );
assert( strcmp(board449275848, 
"72.119.\n"
".....8\n"
".29.2.\n"
"10...75\n"
".7.1066\n"
"..45..\n"
"10..6..\n"
"910..1.\n"
".766..\n"
"1018.4.\n"
"....32\n"
"75.423\n"
"2361101\n"
"44111119\n"
"936.29\n") == 0);
free(board449275848);
board449275848 = NULL;
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 8, 12, 0) == 0 );
assert( gamma_free_fields(board, 8) == 37 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_move(board, 11, 0, 10) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 2, 14) == 1 );
assert( gamma_move(board, 2, 0, 12) == 1 );


char* board577197858 = gamma_board(board);
assert( board577197858 != NULL );
assert( strcmp(board577197858, 
"722119.\n"
".....8\n"
"229.2.\n"
"10...75\n"
"117.1066\n"
"..45..\n"
"10..6..\n"
"910..1.\n"
".766..\n"
"1018.41\n"
"....32\n"
"75.423\n"
"2361101\n"
"44111119\n"
"936.29\n") == 0);
free(board577197858);
board577197858 = NULL;
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_golden_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_golden_move(board, 8, 13, 5) == 0 );
assert( gamma_move(board, 9, 9, 1) == 0 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 1, 10) == 0 );
assert( gamma_move(board, 11, 1, 12) == 0 );
assert( gamma_move(board, 11, 4, 2) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 4, 14) == 0 );
assert( gamma_free_fields(board, 3) == 32 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_golden_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 13) == 0 );
assert( gamma_move(board, 10, 4, 1) == 0 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 13, 0) == 0 );
assert( gamma_move(board, 8, 5, 11) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 10, 13, 0) == 0 );
assert( gamma_move(board, 11, 13, 0) == 0 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_golden_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );


char* board969680278 = gamma_board(board);
assert( board969680278 != NULL );
assert( strcmp(board969680278, 
"722119.\n"
".....8\n"
"229.2.\n"
"10...75\n"
"117.1066\n"
".4451.\n"
"10.46..\n"
"910..1.\n"
".7665.\n"
"1018.41\n"
".3.432\n"
"75.423\n"
"2361101\n"
"44111119\n"
"936.29\n") == 0);
free(board969680278);
board969680278 = NULL;
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 13, 1) == 0 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_move(board, 9, 0, 6) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board149319223 = gamma_board(board);
assert( board149319223 != NULL );
assert( strcmp(board149319223, 
"722119.\n"
".....8\n"
"229.2.\n"
"10...75\n"
"117.1066\n"
".4451.\n"
"10.46..\n"
"910..1.\n"
"97665.\n"
"1018.41\n"
".3.432\n"
"75.423\n"
"2361101\n"
"44111119\n"
"936.29\n") == 0);
free(board149319223);
board149319223 = NULL;
assert( gamma_move(board, 11, 2, 14) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 5, 12) == 1 );
assert( gamma_move(board, 5, 4, 13) == 1 );
assert( gamma_move(board, 6, 14, 5) == 0 );
assert( gamma_free_fields(board, 6) == 23 );
assert( gamma_move(board, 7, 14, 5) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_free_fields(board, 9) == 23 );
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_move(board, 11, 0, 4) == 1 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_golden_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 6, 1, 14) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_free_fields(board, 7) == 21 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_move(board, 10, 13, 1) == 0 );
assert( gamma_move(board, 10, 4, 12) == 0 );
assert( gamma_move(board, 11, 9, 5) == 0 );
assert( gamma_move(board, 11, 4, 6) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 10, 3, 7) == 1 );
assert( gamma_free_fields(board, 10) == 19 );
assert( gamma_move(board, 11, 9, 5) == 0 );
assert( gamma_move(board, 11, 3, 4) == 0 );
assert( gamma_free_fields(board, 11) == 19 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );


gamma_delete(board);

    return 0;
}
