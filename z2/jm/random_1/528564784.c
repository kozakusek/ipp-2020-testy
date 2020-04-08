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
uuid: 528564784
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 5, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 4, 10, 7) == 0 );


char* board592722803 = gamma_board(board);
assert( board592722803 != NULL );
assert( strcmp(board592722803, 
"2.........\n"
".5..4.....\n"
"..........\n"
"..........\n"
"..........\n"
"2...4....2\n"
".3...1....\n") == 0);
free(board592722803);
board592722803 = NULL;
assert( gamma_move(board, 5, -1, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_golden_move(board, 1, 0, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board859717106 = gamma_board(board);
assert( board859717106 != NULL );
assert( strcmp(board859717106, 
"2.........\n"
".5..4.....\n"
"..........\n"
".......1..\n"
"..........\n"
"1...4....2\n"
".3...1....\n") == 0);
free(board859717106);
board859717106 = NULL;
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_free_fields(board, 3) == 59 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_free_fields(board, 1) == 58 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_free_fields(board, 5) == 58 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 1) == 58 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_golden_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );


char* board317079588 = gamma_board(board);
assert( board317079588 != NULL );
assert( strcmp(board317079588, 
"2.........\n"
".55.4...2.\n"
"...4......\n"
".....3.1..\n"
"..........\n"
"1...4....2\n"
".3...1....\n") == 0);
free(board317079588);
board317079588 = NULL;
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_free_fields(board, 3) == 56 );
assert( gamma_golden_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 10, -1) == 0 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_move(board, 5, -1, 7) == 0 );


char* board744078773 = gamma_board(board);
assert( board744078773 != NULL );
assert( strcmp(board744078773, 
"2.5.......\n"
".55.4...2.\n"
"...4......\n"
".....3.1..\n"
"..........\n"
"1...4....2\n"
".331.1....\n") == 0);
free(board744078773);
board744078773 = NULL;
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_free_fields(board, 3) == 50 );


char* board283342301 = gamma_board(board);
assert( board283342301 != NULL );
assert( strcmp(board283342301, 
"2.5.......\n"
".55.4...2.\n"
"...4......\n"
".....3.1.3\n"
"..........\n"
"1...454..2\n"
".331.1...1\n") == 0);
free(board283342301);
board283342301 = NULL;
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 5, -1, 3) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_golden_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_move(board, 5, 7, 1) == 1 );


gamma_delete(board);

    return 0;
}
