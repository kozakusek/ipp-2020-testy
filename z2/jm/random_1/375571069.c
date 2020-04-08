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
uuid: 375571069
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 10, 6, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_free_fields(board, 2) == 87 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_golden_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_free_fields(board, 4) == 85 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_free_fields(board, 6) == 83 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_free_fields(board, 1) == 83 );


char* board191515223 = gamma_board(board);
assert( board191515223 != NULL );
assert( strcmp(board191515223, 
"..52.....\n"
".......1.\n"
".6....5..\n"
".........\n"
".........\n"
".........\n"
".........\n"
"6........\n"
".1.......\n"
".........\n") == 0);
free(board191515223);
board191515223 = NULL;
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_free_fields(board, 2) == 82 );


char* board764904818 = gamma_board(board);
assert( board764904818 != NULL );
assert( strcmp(board764904818, 
"..52.....\n"
".......1.\n"
".6....5..\n"
".........\n"
".........\n"
".........\n"
"......2..\n"
"6........\n"
".1.......\n"
".........\n") == 0);
free(board764904818);
board764904818 = NULL;
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_move(board, 5, -1, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board215448610 = gamma_board(board);
assert( board215448610 != NULL );
assert( strcmp(board215448610, 
"..52.....\n"
".......1.\n"
".6..3.5.5\n"
".........\n"
"....2....\n"
".........\n"
".....12..\n"
"6........\n"
".11..4...\n"
".........\n") == 0);
free(board215448610);
board215448610 = NULL;


char* board435056650 = gamma_board(board);
assert( board435056650 != NULL );
assert( strcmp(board435056650, 
"..52.....\n"
".......1.\n"
".6..3.5.5\n"
".........\n"
"....2....\n"
".........\n"
".....12..\n"
"6........\n"
".11..4...\n"
".........\n") == 0);
free(board435056650);
board435056650 = NULL;
assert( gamma_golden_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_free_fields(board, 4) == 75 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_free_fields(board, 6) == 74 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_golden_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_free_fields(board, 6) == 70 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, -1, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, -1) == 0 );


char* board131379341 = gamma_board(board);
assert( board131379341 != NULL );
assert( strcmp(board131379341, 
"..52.....\n"
".6.....1.\n"
".6..3.5.5\n"
"24.......\n"
"..1.2....\n"
"..1.4..3.\n"
".....12.4\n"
"6........\n"
".41..4...\n"
"......6..\n") == 0);
free(board131379341);
board131379341 = NULL;
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_free_fields(board, 3) == 63 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, -1, 10) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_free_fields(board, 6) == 61 );
assert( gamma_golden_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_free_fields(board, 2) == 13 );


char* board858554708 = gamma_board(board);
assert( board858554708 != NULL );
assert( strcmp(board858554708, 
"..52...1.\n"
".6.....1.\n"
".6..3.5.5\n"
"243....6.\n"
"5.1.2....\n"
".31.4..3.\n"
".....1224\n"
"651.2....\n"
".416.4...\n"
"......6..\n") == 0);
free(board858554708);
board858554708 = NULL;
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_free_fields(board, 6) == 17 );


gamma_delete(board);

    return 0;
}
