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
uuid: 130570239
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 5, 11, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 8, 9, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 0) == 1 );
assert( gamma_move(board, 10, 2, 0) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );


char* board762394953 = gamma_board(board);
assert( board762394953 != NULL );
assert( strcmp(board762394953, 
"..5...5......\n"
"..7.....18...\n"
"..2..........\n"
"......4......\n"
"..109.........\n") == 0);
free(board762394953);
board762394953 = NULL;
assert( gamma_move(board, 11, 4, 0) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 7, 1, 12) == 0 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 9, 11, 2) == 1 );
assert( gamma_move(board, 10, 11, 1) == 1 );


char* board809163483 = gamma_board(board);
assert( board809163483 != NULL );
assert( strcmp(board809163483, 
"..57..5......\n"
"..7.4.4.18...\n"
"..2..1.....9.\n"
"...55.4....10.\n"
"..10911.......3\n") == 0);
free(board809163483);
board809163483 = NULL;
assert( gamma_move(board, 11, 4, 8) == 0 );
assert( gamma_free_fields(board, 11) == 46 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_golden_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 4, 1) == 0 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_move(board, 11, 4, 0) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_free_fields(board, 4) == 38 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_golden_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 8, 6, 0) == 1 );
assert( gamma_move(board, 9, 0, 4) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board949258346 = gamma_board(board);
assert( board949258346 != NULL );
assert( strcmp(board949258346, 
"9.57.45....2.\n"
"..784.4118...\n"
".22.71.....9.\n"
"35.55.4....10.\n"
".410911.8..6..3\n") == 0);
free(board949258346);
board949258346 = NULL;
assert( gamma_move(board, 10, 1, 9) == 0 );
assert( gamma_move(board, 10, 11, 3) == 1 );
assert( gamma_golden_move(board, 10, 0, 4) == 1 );
assert( gamma_move(board, 11, 8, 4) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_golden_move(board, 2, 0, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_free_fields(board, 7) == 31 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 12) == 0 );
assert( gamma_move(board, 10, 8, 2) == 1 );


char* board317469692 = gamma_board(board);
assert( board317469692 != NULL );
assert( strcmp(board317469692, 
"10.57.45511..2.\n"
"..784.4118.10.\n"
".22.71..10..9.\n"
"35.55.4....10.\n"
".410911.8..6..3\n") == 0);
free(board317469692);
board317469692 = NULL;
assert( gamma_move(board, 11, 7, 1) == 1 );
assert( gamma_move(board, 11, 11, 1) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_free_fields(board, 2) == 28 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 3, 12, 2) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 9, 3, 12) == 0 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_free_fields(board, 9) == 26 );
assert( gamma_move(board, 10, 1, 10) == 0 );
assert( gamma_move(board, 10, 1, 0) == 0 );
assert( gamma_move(board, 11, 5, 0) == 1 );
assert( gamma_move(board, 11, 0, 0) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_free_fields(board, 9) == 23 );
assert( gamma_move(board, 10, 0, 4) == 0 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 11, 4, 1) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );


char* board972642774 = gamma_board(board);
assert( board972642774 != NULL );
assert( strcmp(board972642774, 
"10.57.45511..2.\n"
"..784.4118.10.\n"
".22.71..10..93\n"
"35455.411.2.10.\n"
"1410911118.66..3\n") == 0);
free(board972642774);
board972642774 = NULL;
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );


char* board274171663 = gamma_board(board);
assert( board274171663 != NULL );
assert( strcmp(board274171663, 
"10.57.455111.2.\n"
"..784.4118.10.\n"
".22.71..10..93\n"
"35455.411.2.10.\n"
"1410911118.66..3\n") == 0);
free(board274171663);
board274171663 = NULL;
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 3, 10) == 0 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 9, 0, 11) == 0 );
assert( gamma_free_fields(board, 9) == 20 );
assert( gamma_move(board, 10, 2, 3) == 0 );
assert( gamma_move(board, 11, 12, 4) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 5, 12, 3) == 1 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_golden_move(board, 6, 2, 12) == 0 );
assert( gamma_move(board, 7, 1, 12) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_free_fields(board, 7) == 16 );
assert( gamma_move(board, 8, 0, 7) == 0 );


char* board213185825 = gamma_board(board);
assert( board213185825 != NULL );
assert( strcmp(board213185825, 
"10457.455111.211\n"
"..78484118.105\n"
".22.713.10..93\n"
"354552411.2.10.\n"
"1410911118.66..3\n") == 0);
free(board213185825);
board213185825 = NULL;
assert( gamma_move(board, 9, 6, 0) == 0 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 10, 6, 2) == 0 );
assert( gamma_move(board, 11, 11, 2) == 0 );
assert( gamma_move(board, 11, 4, 3) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_free_fields(board, 8) == 15 );
assert( gamma_move(board, 9, 8, 1) == 1 );
assert( gamma_move(board, 10, 3, 1) == 0 );
assert( gamma_move(board, 11, 2, 9) == 0 );
assert( gamma_move(board, 11, 4, 1) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 3, 2) == 1 );
assert( gamma_free_fields(board, 10) == 13 );
assert( gamma_move(board, 11, 2, 9) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_golden_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 8, 1, 12) == 0 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_move(board, 9, 8, 3) == 0 );


gamma_delete(board);

    return 0;
}
