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
uuid: 196730514
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 10, 4, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_golden_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_golden_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_free_fields(board, 4) == 93 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_golden_move(board, 1, 6, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_golden_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_free_fields(board, 2) == 83 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_golden_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 1, -1, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, -1, 3) == 0 );


char* board274496235 = gamma_board(board);
assert( board274496235 != NULL );
assert( strcmp(board274496235, 
"....411...\n"
"........32\n"
"...4.34...\n"
"....22....\n"
"1...1...1.\n"
"2....33...\n"
".32...3...\n"
"44....14..\n"
"1..4......\n"
"..........\n") == 0);
free(board274496235);
board274496235 = NULL;
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 4, -1, 9) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_free_fields(board, 3) == 73 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );


char* board954283025 = gamma_board(board);
assert( board954283025 != NULL );
assert( strcmp(board954283025, 
"....411...\n"
"........32\n"
"...4.34...\n"
"2...22..2.\n"
"1...1...1.\n"
"2.3..33...\n"
".32...3...\n"
"44....14..\n"
"1..4......\n"
"...3......\n") == 0);
free(board954283025);
board954283025 = NULL;
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_golden_move(board, 2, 9, 4) == 0 );


char* board845990122 = gamma_board(board);
assert( board845990122 != NULL );
assert( strcmp(board845990122, 
"....411...\n"
"........32\n"
"...4.34...\n"
"2...22..2.\n"
"1...1...1.\n"
"2.3..33...\n"
".32...3...\n"
"44....14..\n"
"1..4......\n"
"...3......\n") == 0);
free(board845990122);
board845990122 = NULL;
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_free_fields(board, 1) == 14 );


char* board653105048 = gamma_board(board);
assert( board653105048 != NULL );
assert( strcmp(board653105048, 
"....411...\n"
"........32\n"
"...4.34...\n"
"2...22..2.\n"
"1...1...1.\n"
"2.3..33...\n"
".32...3...\n"
"44....14..\n"
"1..4......\n"
"...3......\n") == 0);
free(board653105048);
board653105048 = NULL;
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 2, 4, 0) == 0 );


char* board303209776 = gamma_board(board);
assert( board303209776 != NULL );
assert( strcmp(board303209776, 
"....411...\n"
"........32\n"
"...4.34...\n"
"2...22..2.\n"
"1...1...1.\n"
"2.3..33...\n"
".32...3...\n"
"44....14..\n"
"1..4......\n"
"...3......\n") == 0);
free(board303209776);
board303209776 = NULL;
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_golden_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_golden_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 2, 4, 7) == 1 );


gamma_delete(board);

    return 0;
}
