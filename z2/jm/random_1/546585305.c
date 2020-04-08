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
uuid: 546585305
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 4, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_golden_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );


char* board325026468 = gamma_board(board);
assert( board325026468 != NULL );
assert( strcmp(board325026468, 
"..2...\n"
"...11.\n"
".2....\n"
"......\n"
"..44..\n"
"......\n"
"2.....\n") == 0);
free(board325026468);
board325026468 = NULL;
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );


char* board275824729 = gamma_board(board);
assert( board275824729 != NULL );
assert( strcmp(board275824729, 
".12...\n"
"...113\n"
".2....\n"
"......\n"
"..44..\n"
"....4.\n"
"2..1..\n") == 0);
free(board275824729);
board275824729 = NULL;
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 1, -1) == 0 );


char* board616823041 = gamma_board(board);
assert( board616823041 != NULL );
assert( strcmp(board616823041, 
".12...\n"
"...113\n"
".2....\n"
"......\n"
"..44..\n"
"....4.\n"
"2..1..\n") == 0);
free(board616823041);
board616823041 = NULL;
assert( gamma_move(board, 3, 3, 1) == 1 );


char* board251825916 = gamma_board(board);
assert( board251825916 != NULL );
assert( strcmp(board251825916, 
".12...\n"
"...113\n"
".2....\n"
"......\n"
"..44..\n"
"...34.\n"
"2..1..\n") == 0);
free(board251825916);
board251825916 = NULL;
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_busy_fields(board, 1) == 5 );


char* board220543724 = gamma_board(board);
assert( board220543724 != NULL );
assert( strcmp(board220543724, 
".12...\n"
"...113\n"
".22...\n"
"...1..\n"
"..44..\n"
".4.34.\n"
"2..1..\n") == 0);
free(board220543724);
board220543724 = NULL;
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_free_fields(board, 2) == 27 );


char* board156982865 = gamma_board(board);
assert( board156982865 != NULL );
assert( strcmp(board156982865, 
".12...\n"
"...113\n"
".22...\n"
"...1..\n"
"..44..\n"
".4.34.\n"
"2..1..\n") == 0);
free(board156982865);
board156982865 = NULL;
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_golden_move(board, 2, 3, 3) == 0 );


gamma_delete(board);

    return 0;
}
