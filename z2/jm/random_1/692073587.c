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
uuid: 692073587
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 6, 8, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_free_fields(board, 3) == 47 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_free_fields(board, 7) == 43 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 8, -1) == 0 );


char* board407885787 = gamma_board(board);
assert( board407885787 != NULL );
assert( strcmp(board407885787, 
".1......\n"
"........\n"
"........\n"
"74....5.\n"
"1.......\n"
"6.......\n") == 0);
free(board407885787);
board407885787 = NULL;
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_free_fields(board, 8) == 39 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_golden_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 8, 7, 4) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, -1, 3) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_free_fields(board, 3) == 35 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, -1, 0) == 0 );


char* board958414597 = gamma_board(board);
assert( board958414597 != NULL );
assert( strcmp(board958414597, 
".1.....1\n"
".......8\n"
"5...5...\n"
"74...457\n"
"1..4....\n"
"68......\n") == 0);
free(board958414597);
board958414597 = NULL;
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board780693276 = gamma_board(board);
assert( board780693276 != NULL );
assert( strcmp(board780693276, 
".1.....1\n"
".......8\n"
"5...5...\n"
"74...457\n"
"1..4....\n"
"68......\n") == 0);
free(board780693276);
board780693276 = NULL;
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 5, 8, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );


char* board619881955 = gamma_board(board);
assert( board619881955 != NULL );
assert( strcmp(board619881955, 
".1.....1\n"
".......8\n"
"5...5...\n"
"74...457\n"
"1..4....\n"
"687...43\n") == 0);
free(board619881955);
board619881955 = NULL;
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_free_fields(board, 8) == 29 );


gamma_delete(board);

    return 0;
}
