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
uuid: 118618808
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 9, 4, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );


char* board718173416 = gamma_board(board);
assert( board718173416 != NULL );
assert( strcmp(board718173416, 
".3......\n"
".4......\n"
"........\n"
"........\n"
"...1....\n"
"........\n"
".....4..\n"
"........\n"
"........\n") == 0);
free(board718173416);
board718173416 = NULL;
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_free_fields(board, 2) == 60 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );


char* board294458064 = gamma_board(board);
assert( board294458064 != NULL );
assert( strcmp(board294458064, 
"13..3...\n"
".43....4\n"
"2......3\n"
".11.14..\n"
"...1....\n"
"........\n"
"....24..\n"
"..4....2\n"
"........\n") == 0);
free(board294458064);
board294458064 = NULL;
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_free_fields(board, 2) == 53 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_golden_move(board, 4, 4, 3) == 1 );


char* board513133030 = gamma_board(board);
assert( board513133030 != NULL );
assert( strcmp(board513133030, 
"13..31..\n"
".43...44\n"
"2.2....3\n"
".12.14..\n"
"...1..3.\n"
"....4...\n"
"....244.\n"
"..4...32\n"
".......2\n") == 0);
free(board513133030);
board513133030 = NULL;
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board937704147 = gamma_board(board);
assert( board937704147 != NULL );
assert( strcmp(board937704147, 
"13..31..\n"
".43...44\n"
"2.2....3\n"
".12114..\n"
"...1..3.\n"
"....4...\n"
"....2444\n"
"..4...32\n"
"....2..2\n") == 0);
free(board937704147);
board937704147 = NULL;
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );


char* board182028064 = gamma_board(board);
assert( board182028064 != NULL );
assert( strcmp(board182028064, 
"132.31..\n"
".43...44\n"
"2.2....3\n"
"312114..\n"
"...1..3.\n"
"....4...\n"
"....2444\n"
"..4...32\n"
"....2..2\n") == 0);
free(board182028064);
board182028064 = NULL;
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_free_fields(board, 4) == 17 );


gamma_delete(board);

    return 0;
}
