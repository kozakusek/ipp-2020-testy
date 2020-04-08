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
uuid: 833057392
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 9, 8, 5);
assert( board != NULL );


assert( gamma_free_fields(board, 1) == 72 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_free_fields(board, 6) == 70 );
assert( gamma_move(board, 7, -1, 7) == 0 );
assert( gamma_move(board, 8, 8, 8) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_free_fields(board, 7) == 65 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_free_fields(board, 3) == 65 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_free_fields(board, 5) == 64 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_move(board, 8, -1, 4) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_free_fields(board, 1) == 63 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 5, 8) == 1 );


char* board479826340 = gamma_board(board);
assert( board479826340 != NULL );
assert( strcmp(board479826340, 
".6..43..\n"
"........\n"
"....5...\n"
"........\n"
"........\n"
"22......\n"
"3......4\n"
"63.7...1\n"
".2......\n") == 0);
free(board479826340);
board479826340 = NULL;
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 6, -1, 2) == 0 );
assert( gamma_free_fields(board, 6) == 58 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_free_fields(board, 6) == 53 );
assert( gamma_golden_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, -1, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_free_fields(board, 1) == 53 );


char* board606590348 = gamma_board(board);
assert( board606590348 != NULL );
assert( strcmp(board606590348, 
".6..43..\n"
"........\n"
"....5..1\n"
"........\n"
"....5...\n"
"228.....\n"
"3.....24\n"
"63.7...1\n"
".247....\n") == 0);
free(board606590348);
board606590348 = NULL;
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );


char* board571097923 = gamma_board(board);
assert( board571097923 != NULL );
assert( strcmp(board571097923, 
".6..43..\n"
"........\n"
"....5..1\n"
"........\n"
"....5...\n"
"228.....\n"
"3.....24\n"
"63.7...1\n"
".247....\n") == 0);
free(board571097923);
board571097923 = NULL;
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_free_fields(board, 2) == 51 );
assert( gamma_move(board, 3, 3, 5) == 1 );


char* board713180157 = gamma_board(board);
assert( board713180157 != NULL );
assert( strcmp(board713180157, 
".6..43.2\n"
"........\n"
"....5..1\n"
"...3....\n"
"....5...\n"
"228.....\n"
"3...1.24\n"
"63.7...1\n"
".247....\n") == 0);
free(board713180157);
board713180157 = NULL;
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 8, 8, 4) == 0 );


gamma_delete(board);

    return 0;
}
