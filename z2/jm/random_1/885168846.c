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
uuid: 885168846
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 6, 5, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_free_fields(board, 2) == 47 );
assert( gamma_golden_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_free_fields(board, 5) == 43 );
assert( gamma_golden_move(board, 5, 2, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_golden_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );


char* board664887390 = gamma_board(board);
assert( board664887390 != NULL );
assert( strcmp(board664887390, 
".2......\n"
".1......\n"
".45....3\n"
"...3....\n"
".51.....\n"
"..1.....\n") == 0);
free(board664887390);
board664887390 = NULL;
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );


char* board336823344 = gamma_board(board);
assert( board336823344 != NULL );
assert( strcmp(board336823344, 
"12...323\n"
".1....5.\n"
".45....3\n"
"...3....\n"
".51.....\n"
"..1.....\n") == 0);
free(board336823344);
board336823344 = NULL;
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_golden_move(board, 3, 3, 2) == 0 );


char* board483258892 = gamma_board(board);
assert( board483258892 != NULL );
assert( strcmp(board483258892, 
"12...323\n"
".1....5.\n"
".45....3\n"
"...3....\n"
".51.....\n"
"..1.....\n") == 0);
free(board483258892);
board483258892 = NULL;
assert( gamma_free_fields(board, 4) == 34 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


gamma_delete(board);

    return 0;
}
