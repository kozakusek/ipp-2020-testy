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
uuid: 601075491
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 10, 7, 8);
assert( board != NULL );


assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 5, 8, 9) == 1 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_free_fields(board, 4) == 85 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_free_fields(board, 6) == 84 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_free_fields(board, 2) == 83 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 7) == 0 );


char* board799830241 = gamma_board(board);
assert( board799830241 != NULL );
assert( strcmp(board799830241, 
".....4..5\n"
".......6.\n"
"........3\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".4...2...\n"
"..2......\n") == 0);
free(board799830241);
board799830241 = NULL;
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, -1, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board933275871 = gamma_board(board);
assert( board933275871 != NULL );
assert( strcmp(board933275871, 
"...2.4..5\n"
"3...1536.\n"
"....1...3\n"
".........\n"
"..6....3.\n"
"7..37....\n"
"......1..\n"
".....6...\n"
".4...2...\n"
"..2.....4\n") == 0);
free(board933275871);
board933275871 = NULL;
assert( gamma_move(board, 5, 3, 0) == 1 );


char* board673162608 = gamma_board(board);
assert( board673162608 != NULL );
assert( strcmp(board673162608, 
"...2.4..5\n"
"3...1536.\n"
"....1...3\n"
".........\n"
"..6....3.\n"
"7..37....\n"
"......1..\n"
".....6...\n"
".4...2...\n"
"..25....4\n") == 0);
free(board673162608);
board673162608 = NULL;
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_free_fields(board, 5) == 64 );


char* board446363033 = gamma_board(board);
assert( board446363033 != NULL );
assert( strcmp(board446363033, 
"...2.4..5\n"
"3...1536.\n"
"...41...3\n"
".........\n"
"..6..7.3.\n"
"7..37....\n"
"......13.\n"
".....6...\n"
".4...2...\n"
"..251...4\n") == 0);
free(board446363033);
board446363033 = NULL;
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_free_fields(board, 1) == 62 );
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 7, -1) == 0 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );


gamma_delete(board);

    return 0;
}
