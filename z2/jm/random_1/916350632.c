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
uuid: 916350632
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 9, 4, 5);
assert( board != NULL );


assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_free_fields(board, 4) == 57 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_free_fields(board, 1) == 55 );
assert( gamma_move(board, 2, 5, 7) == 1 );


char* board755959922 = gamma_board(board);
assert( board755959922 != NULL );
assert( strcmp(board755959922, 
".......\n"
"...4.23\n"
"1.43...\n"
".......\n"
".......\n"
".......\n"
".......\n"
"..3....\n"
".....43\n") == 0);
free(board755959922);
board755959922 = NULL;
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_free_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 5, 2) == 1 );


char* board580278021 = gamma_board(board);
assert( board580278021 != NULL );
assert( strcmp(board580278021, 
".1.....\n"
"...4.23\n"
"1.43...\n"
".......\n"
"2......\n"
"1......\n"
"..4.44.\n"
"..3...1\n"
"...3.43\n") == 0);
free(board580278021);
board580278021 = NULL;
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );


gamma_delete(board);

    return 0;
}
