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
uuid: 728477133
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 15, 1, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 1, 2, 15) == 0 );


char* board481067362 = gamma_board(board);
assert( board481067362 != NULL );
assert( strcmp(board481067362, 
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
".1.\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n") == 0);
free(board481067362);
board481067362 = NULL;
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 1, -1, 4) == 0 );


char* board745778051 = gamma_board(board);
assert( board745778051 != NULL );
assert( strcmp(board745778051, 
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"..1\n"
".1.\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n") == 0);
free(board745778051);
board745778051 = NULL;
assert( gamma_move(board, 1, 0, 13) == 1 );


char* board711788739 = gamma_board(board);
assert( board711788739 != NULL );
assert( strcmp(board711788739, 
"...\n"
"1..\n"
"...\n"
"...\n"
"...\n"
"..1\n"
".1.\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n") == 0);
free(board711788739);
board711788739 = NULL;
assert( gamma_move(board, 1, -1, 14) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 1, -1, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );


char* board825593885 = gamma_board(board);
assert( board825593885 != NULL );
assert( strcmp(board825593885, 
"...\n"
"1..\n"
"...\n"
"...\n"
"...\n"
"..1\n"
".1.\n"
"...\n"
".11\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n") == 0);
free(board825593885);
board825593885 = NULL;
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );


char* board788066087 = gamma_board(board);
assert( board788066087 != NULL );
assert( strcmp(board788066087, 
"...\n"
"1..\n"
"...\n"
"...\n"
"...\n"
"..1\n"
".11\n"
"...\n"
".11\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n") == 0);
free(board788066087);
board788066087 = NULL;
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, -1, 15) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_move(board, 1, -1, 12) == 0 );


char* board902026167 = gamma_board(board);
assert( board902026167 != NULL );
assert( strcmp(board902026167, 
"...\n"
"1..\n"
"...\n"
"...\n"
"...\n"
"1.1\n"
".11\n"
"...\n"
"111\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n") == 0);
free(board902026167);
board902026167 = NULL;
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_golden_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_move(board, 1, -1, 15) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );


gamma_delete(board);

    return 0;
}
