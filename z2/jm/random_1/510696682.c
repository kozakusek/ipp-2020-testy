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
uuid: 510696682
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 10, 5, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_free_fields(board, 3) == 68 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_free_fields(board, 4) == 67 );
assert( gamma_free_fields(board, 5) == 67 );
assert( gamma_move(board, 1, 3, 7) == 1 );


char* board349723997 = gamma_board(board);
assert( board349723997 != NULL );
assert( strcmp(board349723997, 
".3.....\n"
".......\n"
"...1...\n"
"....4..\n"
".......\n"
".......\n"
".......\n"
".1.....\n"
".......\n"
".......\n") == 0);
free(board349723997);
board349723997 = NULL;
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_free_fields(board, 2) == 65 );
assert( gamma_golden_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_free_fields(board, 3) == 64 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_golden_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_free_fields(board, 5) == 58 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_free_fields(board, 1) == 55 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_free_fields(board, 2) == 55 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );


char* board607504755 = gamma_board(board);
assert( board607504755 != NULL );
assert( strcmp(board607504755, 
".3.....\n"
"....21.\n"
".4.1...\n"
"....4.1\n"
".4.....\n"
"..3....\n"
"5..3...\n"
".1.....\n"
"..5.424\n"
"..5....\n") == 0);
free(board607504755);
board607504755 = NULL;
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );


char* board240195432 = gamma_board(board);
assert( board240195432 != NULL );
assert( strcmp(board240195432, 
".3.....\n"
"....21.\n"
".4.1...\n"
"..4.4.1\n"
".4.....\n"
"..3....\n"
"5..3...\n"
"51...2.\n"
"3.5.424\n"
"..5....\n") == 0);
free(board240195432);
board240195432 = NULL;
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_golden_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 3, 4) == 1 );


gamma_delete(board);

    return 0;
}
