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
uuid: 730248282
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 7, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );


char* board525075439 = gamma_board(board);
assert( board525075439 != NULL );
assert( strcmp(board525075439, 
".2........\n"
"......2.3.\n"
"........6.\n"
"3.4.......\n"
"..........\n"
".....5...1\n"
"..1.7.....\n") == 0);
free(board525075439);
board525075439 = NULL;
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 6, 8, -1) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_free_fields(board, 7) == 59 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_free_fields(board, 6) == 59 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_free_fields(board, 3) == 57 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 6, 9, 4) == 1 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_free_fields(board, 7) == 8 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_golden_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );


char* board557218974 = gamma_board(board);
assert( board557218974 != NULL );
assert( strcmp(board557218974, 
".2.63..276\n"
".7....2.3.\n"
"........66\n"
"3.4.55....\n"
"......25..\n"
".4...53..1\n"
"7.1.7.....\n") == 0);
free(board557218974);
board557218974 = NULL;
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_free_fields(board, 7) == 8 );


char* board974715822 = gamma_board(board);
assert( board974715822 != NULL );
assert( strcmp(board974715822, 
".2.63..276\n"
".7....2.3.\n"
"........66\n"
"3.4.55....\n"
"......25..\n"
".4...53..1\n"
"7.1.7.....\n") == 0);
free(board974715822);
board974715822 = NULL;
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_move(board, 7, 0, 6) == 0 );


gamma_delete(board);

    return 0;
}
