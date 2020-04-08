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
uuid: 866878459
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 8, 7);
assert( board != NULL );


assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_free_fields(board, 1) == 68 );
assert( gamma_golden_move(board, 1, 4, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, -1, 7) == 0 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_free_fields(board, 6) == 64 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 7, 6) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );


char* board717467698 = gamma_board(board);
assert( board717467698 != NULL );
assert( strcmp(board717467698, 
".3..1....\n"
"..8....8.\n"
"....2....\n"
".7.......\n"
".....2...\n"
"....6...1\n"
".........\n"
".....7...\n") == 0);
free(board717467698);
board717467698 = NULL;
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, -1, 0) == 0 );
assert( gamma_move(board, 6, 2, 7) == 1 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_free_fields(board, 8) == 60 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 8, 1, -1) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );


char* board263720720 = gamma_board(board);
assert( board263720720 != NULL );
assert( strcmp(board263720720, 
".36.1....\n"
"..8....8.\n"
"4...2....\n"
".7.......\n"
".....2...\n"
"...56..11\n"
".........\n"
"....77...\n") == 0);
free(board263720720);
board263720720 = NULL;


char* board305249279 = gamma_board(board);
assert( board305249279 != NULL );
assert( strcmp(board305249279, 
".36.1....\n"
"..8....8.\n"
"4...2....\n"
".7.......\n"
".....2...\n"
"...56..11\n"
".........\n"
"....77...\n") == 0);
free(board305249279);
board305249279 = NULL;
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 9, 6) == 0 );


char* board683472124 = gamma_board(board);
assert( board683472124 != NULL );
assert( strcmp(board683472124, 
".36.1.6.1\n"
"..8..3.8.\n"
"4...2....\n"
".7.......\n"
".....2...\n"
"...56..11\n"
"..4......\n"
"..5.77...\n") == 0);
free(board683472124);
board683472124 = NULL;
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );


char* board818634192 = gamma_board(board);
assert( board818634192 != NULL );
assert( strcmp(board818634192, 
".36.1.6.1\n"
"..8..3.8.\n"
"4...2....\n"
".7.......\n"
".....2...\n"
"...56..11\n"
"..4......\n"
"..5.77.1.\n") == 0);
free(board818634192);
board818634192 = NULL;


char* board375692940 = gamma_board(board);
assert( board375692940 != NULL );
assert( strcmp(board375692940, 
".36.1.6.1\n"
"..8..3.8.\n"
"4...2....\n"
".7.......\n"
".....2...\n"
"...56..11\n"
"..4......\n"
"..5.77.1.\n") == 0);
free(board375692940);
board375692940 = NULL;
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 8, 8, -1) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );


gamma_delete(board);

    return 0;
}
