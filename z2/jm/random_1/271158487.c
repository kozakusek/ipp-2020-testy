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
uuid: 271158487
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 9, 4, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );


char* board231543276 = gamma_board(board);
assert( board231543276 != NULL );
assert( strcmp(board231543276, 
"......\n"
"......\n"
"3.....\n"
"......\n"
"....4.\n"
"......\n"
"......\n"
"......\n"
"......\n") == 0);
free(board231543276);
board231543276 = NULL;
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );


char* board311784178 = gamma_board(board);
assert( board311784178 != NULL );
assert( strcmp(board311784178, 
"......\n"
".4....\n"
"3.....\n"
"......\n"
"2...4.\n"
"......\n"
"......\n"
"......\n"
"......\n") == 0);
free(board311784178);
board311784178 = NULL;
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_golden_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_golden_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_free_fields(board, 3) == 43 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );


char* board310399328 = gamma_board(board);
assert( board310399328 != NULL );
assert( strcmp(board310399328, 
".3....\n"
"34....\n"
"3.....\n"
"......\n"
"2..24.\n"
".....2\n"
"3.....\n"
"..4.44\n"
".12...\n") == 0);
free(board310399328);
board310399328 = NULL;
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_free_fields(board, 3) == 39 );


char* board690717696 = gamma_board(board);
assert( board690717696 != NULL );
assert( strcmp(board690717696, 
".3....\n"
"34....\n"
"3.....\n"
".1....\n"
"2..24.\n"
".....2\n"
"3.....\n"
"..4.44\n"
".12...\n") == 0);
free(board690717696);
board690717696 = NULL;
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, -1, 6) == 0 );


gamma_delete(board);

    return 0;
}
