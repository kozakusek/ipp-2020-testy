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
uuid: 442413279
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 10, 8, 7);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 9) == 1 );
assert( gamma_free_fields(board, 6) == 77 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 9) == 1 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 5, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_free_fields(board, 1) == 67 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_golden_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 9, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 8) == 1 );


char* board841453956 = gamma_board(board);
assert( board841453956 != NULL );
assert( strcmp(board841453956, 
"36...6.6\n"
".4......\n"
"..2...1.\n"
"....8...\n"
"...5.2..\n"
"....84.4\n"
"...87...\n"
"........\n"
"7.......\n"
".7......\n") == 0);
free(board841453956);
board841453956 = NULL;
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_free_fields(board, 6) == 62 );
assert( gamma_move(board, 7, -1, 8) == 0 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 1, 1, 8) == 0 );


char* board784502144 = gamma_board(board);
assert( board784502144 != NULL );
assert( strcmp(board784502144, 
"36...6.6\n"
".4......\n"
"..2...15\n"
"....8...\n"
"...5.2..\n"
"....84.4\n"
"...87...\n"
"........\n"
"7.8.....\n"
".7......\n") == 0);
free(board784502144);
board784502144 = NULL;
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 7, 5, 8) == 1 );
assert( gamma_move(board, 8, -1, 1) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_free_fields(board, 6) == 55 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 8, 7, 6) == 1 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board579757290 = gamma_board(board);
assert( board579757290 != NULL );
assert( strcmp(board579757290, 
"36...6.6\n"
".4...7..\n"
"..2...15\n"
"....8..8\n"
"...5.2..\n"
"....84.4\n"
"...87...\n"
".....6..\n"
"7.8.3...\n"
"5774...5\n") == 0);
free(board579757290);
board579757290 = NULL;
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board721092537 = gamma_board(board);
assert( board721092537 != NULL );
assert( strcmp(board721092537, 
"36...6.6\n"
".4...7..\n"
"..2...15\n"
"....8..8\n"
"...5.2..\n"
"....84.4\n"
"...87...\n"
".....6..\n"
"7.8.3...\n"
"5774...5\n") == 0);
free(board721092537);
board721092537 = NULL;
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, -1) == 0 );


char* board426311176 = gamma_board(board);
assert( board426311176 != NULL );
assert( strcmp(board426311176, 
"36...6.6\n"
".4...7..\n"
"..2...15\n"
"....8..8\n"
"...5.2..\n"
"....84.4\n"
"..887...\n"
".....6..\n"
"7.8.3...\n"
"5774...5\n") == 0);
free(board426311176);
board426311176 = NULL;
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 3, 4) == 1 );


char* board572877987 = gamma_board(board);
assert( board572877987 != NULL );
assert( strcmp(board572877987, 
"366..6.6\n"
".4...7..\n"
"..2...15\n"
"....8..8\n"
"...5.2..\n"
"...884.4\n"
"..887...\n"
".....6..\n"
"7.8.3.4.\n"
"5774...5\n") == 0);
free(board572877987);
board572877987 = NULL;
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 7, 1, 10) == 0 );


char* board463606915 = gamma_board(board);
assert( board463606915 != NULL );
assert( strcmp(board463606915, 
"366..6.6\n"
".4...7..\n"
"..2...15\n"
"....8..8\n"
"...5.2..\n"
"...884.4\n"
"..887...\n"
"....36.5\n"
"7.8.3.4.\n"
"5774...5\n") == 0);
free(board463606915);
board463606915 = NULL;
assert( gamma_move(board, 8, 7, 8) == 1 );


gamma_delete(board);

    return 0;
}
