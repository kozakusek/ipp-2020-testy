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
uuid: 225698347
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 6, 6, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 9, 0) == 0 );


char* board581541317 = gamma_board(board);
assert( board581541317 != NULL );
assert( strcmp(board581541317, 
".........\n"
".....3...\n"
"......4..\n"
".........\n"
".........\n"
".........\n") == 0);
free(board581541317);
board581541317 = NULL;
assert( gamma_move(board, 6, 1, 0) == 1 );


char* board870607290 = gamma_board(board);
assert( board870607290 != NULL );
assert( strcmp(board870607290, 
".........\n"
".....3...\n"
"......4..\n"
".........\n"
".........\n"
".6.......\n") == 0);
free(board870607290);
board870607290 = NULL;
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_golden_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );


char* board998704806 = gamma_board(board);
assert( board998704806 != NULL );
assert( strcmp(board998704806, 
".........\n"
"..5..3..1\n"
"......4..\n"
".........\n"
".........\n"
".6...6...\n") == 0);
free(board998704806);
board998704806 = NULL;
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 2, -1) == 0 );
assert( gamma_golden_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_free_fields(board, 5) == 43 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_free_fields(board, 6) == 42 );
assert( gamma_move(board, 1, 9, 4) == 0 );


char* board704467337 = gamma_board(board);
assert( board704467337 != NULL );
assert( strcmp(board704467337, 
".........\n"
"..5..3.61\n"
"5.4...4..\n"
"........1\n"
"........2\n"
".6.4.6...\n") == 0);
free(board704467337);
board704467337 = NULL;
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_golden_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_golden_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 5, -1) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 0) == 0 );


char* board232908826 = gamma_board(board);
assert( board232908826 != NULL );
assert( strcmp(board232908826, 
".....3...\n"
"..5..3.61\n"
"5.4...4..\n"
"..5....11\n"
"........2\n"
".6.4.62..\n") == 0);
free(board232908826);
board232908826 = NULL;
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 1, -1, 6) == 0 );


char* board997504164 = gamma_board(board);
assert( board997504164 != NULL );
assert( strcmp(board997504164, 
".....3...\n"
"..5..3.61\n"
"5.4...4..\n"
"..5....11\n"
"......6.2\n"
".6.4.62..\n") == 0);
free(board997504164);
board997504164 = NULL;
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_free_fields(board, 3) == 37 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 0, 3) == 0 );


gamma_delete(board);

    return 0;
}
