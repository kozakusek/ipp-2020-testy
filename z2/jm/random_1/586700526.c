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
uuid: 586700526
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 6, 7, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_golden_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board651490563 = gamma_board(board);
assert( board651490563 != NULL );
assert( strcmp(board651490563, 
"..3......\n"
"........1\n"
".........\n"
".........\n"
".........\n"
".........\n") == 0);
free(board651490563);
board651490563 = NULL;
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_free_fields(board, 5) == 50 );
assert( gamma_golden_move(board, 5, 2, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_free_fields(board, 7) == 49 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_golden_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_free_fields(board, 6) == 45 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_free_fields(board, 2) == 44 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_free_fields(board, 5) == 42 );
assert( gamma_golden_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 9, 5) == 0 );


char* board794463498 = gamma_board(board);
assert( board794463498 != NULL );
assert( strcmp(board794463498, 
".154.....\n"
"57....5.1\n"
"......4..\n"
"6...74..2\n"
"...3.2.5.\n"
"...2.....\n") == 0);
free(board794463498);
board794463498 = NULL;
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 0, 3) == 1 );


char* board130539617 = gamma_board(board);
assert( board130539617 != NULL );
assert( strcmp(board130539617, 
".154.....\n"
"57....5.1\n"
"7.....4..\n"
"6...74..2\n"
"...3.2.5.\n"
"...2...5.\n") == 0);
free(board130539617);
board130539617 = NULL;
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_free_fields(board, 2) == 36 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_golden_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, -1) == 0 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );


char* board435410893 = gamma_board(board);
assert( board435410893 != NULL );
assert( strcmp(board435410893, 
".754.1...\n"
"57.3.25.1\n"
"7....345.\n"
"6...74..2\n"
"...3.2.5.\n"
"...2...5.\n") == 0);
free(board435410893);
board435410893 = NULL;


gamma_delete(board);

    return 0;
}
