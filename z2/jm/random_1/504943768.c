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
uuid: 504943768
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 12, 6, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_free_fields(board, 1) == 95 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_free_fields(board, 2) == 95 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_golden_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_free_fields(board, 6) == 89 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );


char* board686075213 = gamma_board(board);
assert( board686075213 != NULL );
assert( strcmp(board686075213, 
"........\n"
"........\n"
"........\n"
"6..4...3\n"
"........\n"
"...3....\n"
".1....2.\n"
"4.......\n"
".2......\n"
"....5...\n"
"........\n"
"........\n") == 0);
free(board686075213);
board686075213 = NULL;
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 6, 11) == 1 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, -1, 10) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 4, 11) == 1 );
assert( gamma_free_fields(board, 5) == 76 );
assert( gamma_move(board, 6, 5, 11) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_golden_move(board, 1, 4, 0) == 0 );


char* board986678155 = gamma_board(board);
assert( board986678155 != NULL );
assert( strcmp(board986678155, 
"...4565.\n"
"........\n"
".6....1.\n"
"6..41.63\n"
"...4....\n"
"...3....\n"
".1....2.\n"
"4.......\n"
".2..52..\n"
"....5...\n"
"........\n"
".31.....\n") == 0);
free(board986678155);
board986678155 = NULL;
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );


char* board620565430 = gamma_board(board);
assert( board620565430 != NULL );
assert( strcmp(board620565430, 
"...4565.\n"
"..2....3\n"
".6....1.\n"
"6..41.63\n"
"...4....\n"
"...3....\n"
".1....2.\n"
"4.......\n"
".2..52..\n"
"....5...\n"
"......2.\n"
".31.....\n") == 0);
free(board620565430);
board620565430 = NULL;
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_golden_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_free_fields(board, 2) == 68 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, -1, 9) == 0 );
assert( gamma_free_fields(board, 6) == 65 );
assert( gamma_golden_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_golden_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, -1, 8) == 0 );
assert( gamma_free_fields(board, 5) == 64 );
assert( gamma_golden_move(board, 5, 1, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_golden_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, -1, 12) == 0 );


char* board219577113 = gamma_board(board);
assert( board219577113 != NULL );
assert( strcmp(board219577113, 
".1.4565.\n"
"..2....3\n"
"46....1.\n"
"6..41.63\n"
"...4....\n"
"...3....\n"
".1...52.\n"
"4...5...\n"
"22..52..\n"
".1..5...\n"
".....22.\n"
".31....6\n") == 0);
free(board219577113);
board219577113 = NULL;
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );


char* board170121637 = gamma_board(board);
assert( board170121637 != NULL );
assert( strcmp(board170121637, 
".1.4565.\n"
"..2....3\n"
"46....1.\n"
"6..41.63\n"
"...4....\n"
"...3....\n"
".1...52.\n"
"4...5...\n"
"22..52..\n"
".1.65...\n"
".....22.\n"
".31...26\n") == 0);
free(board170121637);
board170121637 = NULL;
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_free_fields(board, 5) == 60 );
assert( gamma_golden_move(board, 5, 8, 4) == 0 );
assert( gamma_free_fields(board, 6) == 60 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );


char* board730904029 = gamma_board(board);
assert( board730904029 != NULL );
assert( strcmp(board730904029, 
".1.4565.\n"
"..2..5.3\n"
"46....1.\n"
"6..41.63\n"
"...4....\n"
"...3....\n"
".1..252.\n"
"4...5...\n"
"22..52..\n"
".1.65...\n"
".....22.\n"
".31...26\n") == 0);
free(board730904029);
board730904029 = NULL;
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board806652352 = gamma_board(board);
assert( board806652352 != NULL );
assert( strcmp(board806652352, 
".1.4565.\n"
"..2..5.3\n"
"46....1.\n"
"6..41463\n"
"...4....\n"
"...3....\n"
".1..252.\n"
"4...5...\n"
"22..52..\n"
".1.65...\n"
".....22.\n"
".31...26\n") == 0);
free(board806652352);
board806652352 = NULL;
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 4, 9) == 1 );


char* board129986796 = gamma_board(board);
assert( board129986796 != NULL );
assert( strcmp(board129986796, 
".1.4565.\n"
"..2..5.3\n"
"46..5.1.\n"
"6..41463\n"
"...42...\n"
"...3.1..\n"
".1..252.\n"
"4.3.5...\n"
"22..52..\n"
".1.65...\n"
".....22.\n"
".31...26\n") == 0);
free(board129986796);
board129986796 = NULL;
assert( gamma_free_fields(board, 6) == 54 );


gamma_delete(board);

    return 0;
}
