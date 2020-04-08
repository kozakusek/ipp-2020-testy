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
uuid: 843135750
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 8, 4, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 3) == 0 );


char* board769461963 = gamma_board(board);
assert( board769461963 != NULL );
assert( strcmp(board769461963, 
"......\n"
"......\n"
"......\n"
"..1...\n"
"......\n"
"......\n"
"......\n"
"......\n") == 0);
free(board769461963);
board769461963 = NULL;
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 3, 7) == 1 );


char* board684938535 = gamma_board(board);
assert( board684938535 != NULL );
assert( strcmp(board684938535, 
"...2..\n"
"......\n"
"......\n"
"..1...\n"
".....1\n"
"......\n"
"......\n"
"......\n") == 0);
free(board684938535);
board684938535 = NULL;
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_free_fields(board, 3) == 42 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board763306947 = gamma_board(board);
assert( board763306947 != NULL );
assert( strcmp(board763306947, 
"...2..\n"
"......\n"
"..31..\n"
"..1...\n"
".....1\n"
"......\n"
"......\n"
"....4.\n") == 0);
free(board763306947);
board763306947 = NULL;
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_golden_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_free_fields(board, 3) == 39 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_free_fields(board, 4) == 39 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_golden_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );


char* board426122603 = gamma_board(board);
assert( board426122603 != NULL );
assert( strcmp(board426122603, 
"...23.\n"
"..4...\n"
"..31..\n"
".41...\n"
"3.3..1\n"
"......\n"
"......\n"
".3..4.\n") == 0);
free(board426122603);
board426122603 = NULL;
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, -1, -1) == 0 );


char* board735326048 = gamma_board(board);
assert( board735326048 != NULL );
assert( strcmp(board735326048, 
"...23.\n"
"..4...\n"
"..31..\n"
".41...\n"
"3.3..1\n"
"......\n"
"2.....\n"
".3..4.\n") == 0);
free(board735326048);
board735326048 = NULL;
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_golden_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );


char* board831510792 = gamma_board(board);
assert( board831510792 != NULL );
assert( strcmp(board831510792, 
"...23.\n"
"..41..\n"
".231..\n"
".41...\n"
"3.3..1\n"
"......\n"
"2.....\n"
".3..4.\n") == 0);
free(board831510792);
board831510792 = NULL;
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 1, -1) == 0 );


gamma_delete(board);

    return 0;
}
