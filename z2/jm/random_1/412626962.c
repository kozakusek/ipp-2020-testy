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
uuid: 412626962
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 7, 8);
assert( board != NULL );


assert( gamma_move(board, 2, 1, 2) == 1 );


char* board934675072 = gamma_board(board);
assert( board934675072 != NULL );
assert( strcmp(board934675072, 
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".2.......\n"
".........\n"
".........\n") == 0);
free(board934675072);
board934675072 = NULL;
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_golden_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_free_fields(board, 4) == 66 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_free_fields(board, 5) == 66 );
assert( gamma_move(board, 6, 0, 3) == 1 );


char* board311954670 = gamma_board(board);
assert( board311954670 != NULL );
assert( strcmp(board311954670, 
".........\n"
"......6..\n"
"..7.3....\n"
".........\n"
"6.5......\n"
".2.......\n"
".3.......\n"
".........\n") == 0);
free(board311954670);
board311954670 = NULL;
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 1, 5, 7) == 1 );


char* board195767020 = gamma_board(board);
assert( board195767020 != NULL );
assert( strcmp(board195767020, 
".....1...\n"
"......6..\n"
".77.3....\n"
".........\n"
"6.5......\n"
".2.......\n"
".3.......\n"
".........\n") == 0);
free(board195767020);
board195767020 = NULL;
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_free_fields(board, 7) == 62 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );


char* board173737546 = gamma_board(board);
assert( board173737546 != NULL );
assert( strcmp(board173737546, 
"....31...\n"
"......6..\n"
".77.3....\n"
".........\n"
"6.5......\n"
".2.......\n"
".3.......\n"
"2.......1\n") == 0);
free(board173737546);
board173737546 = NULL;
assert( gamma_busy_fields(board, 3) == 3 );


char* board916297057 = gamma_board(board);
assert( board916297057 != NULL );
assert( strcmp(board916297057, 
"....31...\n"
"......6..\n"
".77.3....\n"
".........\n"
"6.5......\n"
".2.......\n"
".3.......\n"
"2.......1\n") == 0);
free(board916297057);
board916297057 = NULL;
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_free_fields(board, 6) == 59 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_golden_move(board, 7, 6, 6) == 1 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, -1, 5) == 0 );


char* board322462455 = gamma_board(board);
assert( board322462455 != NULL );
assert( strcmp(board322462455, 
"....31...\n"
"......72.\n"
".77.3....\n"
".........\n"
"6.5......\n"
".2.......\n"
".3.......\n"
"2.5.....1\n") == 0);
free(board322462455);
board322462455 = NULL;
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, -1, -1) == 0 );


char* board879557433 = gamma_board(board);
assert( board879557433 != NULL );
assert( strcmp(board879557433, 
"....31...\n"
"......72.\n"
".77.3....\n"
".........\n"
"6.5......\n"
".2.......\n"
"53.......\n"
"2.5.....1\n") == 0);
free(board879557433);
board879557433 = NULL;
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_free_fields(board, 5) == 56 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_golden_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 6, 2, 7) == 1 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_busy_fields(board, 7) == 4 );


char* board265350545 = gamma_board(board);
assert( board265350545 != NULL );
assert( strcmp(board265350545, 
"..6.31...\n"
"......72.\n"
".77.3....\n"
"....71...\n"
"62554.14.\n"
".2.......\n"
"533......\n"
"2.55...11\n") == 0);
free(board265350545);
board265350545 = NULL;
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );


gamma_delete(board);

    return 0;
}
