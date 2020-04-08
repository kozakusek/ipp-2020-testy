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
uuid: 665608046
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 7, 11, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_golden_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_free_fields(board, 4) == 74 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 11, 1, 0) == 1 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );


char* board713539480 = gamma_board(board);
assert( board713539480 != NULL );
assert( strcmp(board713539480, 
"...........\n"
".......3...\n"
".....2.....\n"
"...........\n"
"5........4.\n"
"...7.......\n"
"9111..8.....\n") == 0);
free(board713539480);
board713539480 = NULL;
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 4, 11, -1) == 0 );
assert( gamma_free_fields(board, 4) == 67 );
assert( gamma_golden_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_golden_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 7, 11, 0) == 0 );
assert( gamma_move(board, 9, 2, 1) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 10, 6, 2) == 1 );
assert( gamma_move(board, 11, 6, 5) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_free_fields(board, 1) == 63 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );


char* board979031430 = gamma_board(board);
assert( board979031430 != NULL );
assert( strcmp(board979031430, 
"..2....1...\n"
"......113...\n"
".....2.....\n"
"...........\n"
"5.....10..4.\n"
"..97.......\n"
"6114..8.....\n") == 0);
free(board979031430);
board979031430 = NULL;
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 2, -1) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 10, 7, 2) == 1 );
assert( gamma_move(board, 1, -1, 3) == 0 );


char* board663094526 = gamma_board(board);
assert( board663094526 != NULL );
assert( strcmp(board663094526, 
"..2....1...\n"
"......113...\n"
".....2.....\n"
"...........\n"
"5.....1010.4.\n"
"..97.......\n"
"6114..8.....\n") == 0);
free(board663094526);
board663094526 = NULL;
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 8, 9, -1) == 0 );
assert( gamma_move(board, 10, 1, 0) == 0 );
assert( gamma_move(board, 11, 5, 0) == 0 );
assert( gamma_free_fields(board, 11) == 60 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_move(board, 8, -1, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_move(board, 11, 9, 6) == 1 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_free_fields(board, 4) == 55 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 9, 1, 6) == 1 );
assert( gamma_free_fields(board, 9) == 54 );
assert( gamma_golden_move(board, 9, 4, 6) == 1 );
assert( gamma_move(board, 10, 9, -1) == 0 );
assert( gamma_move(board, 11, 3, 0) == 1 );
assert( gamma_busy_fields(board, 11) == 4 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_free_fields(board, 2) == 51 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 9, 0, 1) == 1 );
assert( gamma_move(board, 10, 3, 7) == 0 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_free_fields(board, 10) == 48 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_free_fields(board, 1) == 47 );


char* board578841188 = gamma_board(board);
assert( board578841188 != NULL );
assert( strcmp(board578841188, 
".92.9..1.11.\n"
"......1132.3\n"
".6...23....\n"
"..........3\n"
"5.....101014.\n"
"9197.6..7..\n"
"611411.8.5...\n") == 0);
free(board578841188);
board578841188 = NULL;
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 2, -1) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_free_fields(board, 6) == 45 );
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_move(board, 9, 4, 1) == 1 );
assert( gamma_move(board, 10, 1, 7) == 0 );
assert( gamma_move(board, 11, 4, 6) == 0 );
assert( gamma_busy_fields(board, 11) == 4 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );


char* board178605666 = gamma_board(board);
assert( board178605666 != NULL );
assert( strcmp(board178605666, 
".92.9..1.113\n"
"......1132.3\n"
".6...23....\n"
"..........3\n"
"5.....101014.\n"
"919796..7..\n"
"611411.8.5..2\n") == 0);
free(board178605666);
board178605666 = NULL;
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 10, 11, -1) == 0 );


char* board290531439 = gamma_board(board);
assert( board290531439 != NULL );
assert( strcmp(board290531439, 
".92.9..1.113\n"
"......1132.3\n"
".6...23....\n"
"..........3\n"
"5.9...101014.\n"
"919796..7..\n"
"611411.8.5..2\n") == 0);
free(board290531439);
board290531439 = NULL;
assert( gamma_move(board, 11, 9, 2) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 8, 8, 4) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 5, -1) == 0 );


char* board960263091 = gamma_board(board);
assert( board960263091 != NULL );
assert( strcmp(board960263091, 
".92.9..1.113\n"
"..5...1132.3\n"
".6...23.8.2\n"
"..........3\n"
"5.9...101014.\n"
"919796..7..\n"
"611411.8.5..2\n") == 0);
free(board960263091);
board960263091 = NULL;
assert( gamma_move(board, 11, 6, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 7, 3, -1) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_move(board, 10, 1, 6) == 0 );
assert( gamma_move(board, 11, 1, 1) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_golden_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board765805882 = gamma_board(board);
assert( board765805882 != NULL );
assert( strcmp(board765805882, 
".91.9..1.113\n"
"..5...1132.3\n"
".6...23.8.2\n"
"..........3\n"
"5.9...101014.\n"
"919796..7..\n"
"611411.8.5..2\n") == 0);
free(board765805882);
board765805882 = NULL;
assert( gamma_free_fields(board, 4) == 40 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_free_fields(board, 5) == 40 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 10, 5, 5) == 1 );
assert( gamma_move(board, 11, 9, 7) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_free_fields(board, 3) == 37 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 10, 1, 6) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 0, -1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 10, 8, 3) == 1 );


gamma_delete(board);

    return 0;
}
