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
uuid: 561354802
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 10, 4, 7);
assert( board != NULL );


assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_golden_move(board, 3, 1, 3) == 0 );
assert( gamma_free_fields(board, 4) == 70 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_golden_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_free_fields(board, 2) == 69 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_free_fields(board, 3) == 68 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_free_fields(board, 2) == 62 );


char* board699459576 = gamma_board(board);
assert( board699459576 != NULL );
assert( strcmp(board699459576, 
"...2...\n"
".......\n"
"......4\n"
".......\n"
".3..31.\n"
"......2\n"
".......\n"
".......\n"
"..42...\n"
".......\n") == 0);
free(board699459576);
board699459576 = NULL;
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_free_fields(board, 3) == 61 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 2, 8) == 1 );


char* board294521688 = gamma_board(board);
assert( board294521688 != NULL );
assert( strcmp(board294521688, 
"..42...\n"
"..2....\n"
".....34\n"
".....1.\n"
".3..31.\n"
"......2\n"
".......\n"
".1.....\n"
"..42...\n"
".......\n") == 0);
free(board294521688);
board294521688 = NULL;
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_golden_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_golden_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_free_fields(board, 2) == 54 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_free_fields(board, 4) == 47 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_golden_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );


char* board602105538 = gamma_board(board);
assert( board602105538 != NULL );
assert( strcmp(board602105538, 
"3142..1\n"
"..21...\n"
"2....34\n"
"24..11.\n"
"33..33.\n"
"2.3...2\n"
"......2\n"
".14..1.\n"
"..42...\n"
"3...2..\n") == 0);
free(board602105538);
board602105538 = NULL;
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_free_fields(board, 2) == 15 );


gamma_delete(board);

    return 0;
}
