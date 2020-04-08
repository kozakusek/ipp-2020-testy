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
uuid: 742846077
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 4, 5);
assert( board != NULL );


assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );


char* board751218503 = gamma_board(board);
assert( board751218503 != NULL );
assert( strcmp(board751218503, 
"......\n"
"......\n"
"...4..\n"
"......\n"
"....4.\n"
".2....\n"
"......\n") == 0);
free(board751218503);
board751218503 = NULL;
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );


char* board811274990 = gamma_board(board);
assert( board811274990 != NULL );
assert( strcmp(board811274990, 
"......\n"
"......\n"
"...4..\n"
"....3.\n"
"....4.\n"
".2....\n"
"......\n") == 0);
free(board811274990);
board811274990 = NULL;
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_golden_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_free_fields(board, 4) == 36 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_golden_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_free_fields(board, 1) == 33 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );


char* board185653440 = gamma_board(board);
assert( board185653440 != NULL );
assert( strcmp(board185653440, 
"4....4\n"
".11...\n"
"...4..\n"
"....3.\n"
"....4.\n"
".4....\n"
"...1.1\n") == 0);
free(board185653440);
board185653440 = NULL;
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );


gamma_delete(board);

    return 0;
}
