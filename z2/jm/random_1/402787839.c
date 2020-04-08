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
uuid: 402787839
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 8, 7, 5);
assert( board != NULL );


assert( gamma_free_fields(board, 1) == 80 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_golden_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 8, 0) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_golden_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );


char* board165186005 = gamma_board(board);
assert( board165186005 != NULL );
assert( strcmp(board165186005, 
"..........\n"
".....4...4\n"
"...1....3.\n"
"...3......\n"
"..........\n"
"6....6....\n"
"..5....5..\n"
"........7.\n") == 0);
free(board165186005);
board165186005 = NULL;
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_golden_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_free_fields(board, 2) == 68 );


char* board540414562 = gamma_board(board);
assert( board540414562 != NULL );
assert( strcmp(board540414562, 
"..........\n"
".....4...4\n"
"...1....3.\n"
"...3..7...\n"
"..........\n"
"6....6....\n"
"..5....5..\n"
"...2....7.\n") == 0);
free(board540414562);
board540414562 = NULL;
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_golden_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_free_fields(board, 1) == 64 );


char* board437662372 = gamma_board(board);
assert( board437662372 != NULL );
assert( strcmp(board437662372, 
".......1..\n"
".....4...4\n"
"44.1....3.\n"
"...3..7...\n"
"..6.......\n"
"6....6....\n"
"..5....5..\n"
"...2....7.\n") == 0);
free(board437662372);
board437662372 = NULL;
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 8, 5) == 0 );


char* board792657182 = gamma_board(board);
assert( board792657182 != NULL );
assert( strcmp(board792657182, 
"......21..\n"
".....4...4\n"
"44.1....3.\n"
"...3..7...\n"
"..6.......\n"
"6....6....\n"
"5.5....5..\n"
"...2..4.7.\n") == 0);
free(board792657182);
board792657182 = NULL;
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_free_fields(board, 7) == 53 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


gamma_delete(board);

    return 0;
}
