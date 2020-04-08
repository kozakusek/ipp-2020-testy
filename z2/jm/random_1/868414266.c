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
uuid: 868414266
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 8, 8, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );


char* board492580962 = gamma_board(board);
assert( board492580962 != NULL );
assert( strcmp(board492580962, 
"........\n"
"...1....\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n") == 0);
free(board492580962);
board492580962 = NULL;
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_free_fields(board, 4) == 63 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_golden_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_free_fields(board, 3) == 59 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 6, 8, -1) == 0 );
assert( gamma_golden_move(board, 7, 5, 0) == 0 );


char* board457673683 = gamma_board(board);
assert( board457673683 != NULL );
assert( strcmp(board457673683, 
"3.......\n"
".4.1....\n"
"2.......\n"
"........\n"
"........\n"
".68.....\n"
"........\n"
"........\n") == 0);
free(board457673683);
board457673683 = NULL;
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );


char* board192708384 = gamma_board(board);
assert( board192708384 != NULL );
assert( strcmp(board192708384, 
"3.......\n"
".4.1....\n"
"2.......\n"
"...8....\n"
"........\n"
".68.....\n"
"........\n"
".......2\n") == 0);
free(board192708384);
board192708384 = NULL;
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 2, -1) == 0 );
assert( gamma_move(board, 8, 4, 2) == 1 );


char* board841408932 = gamma_board(board);
assert( board841408932 != NULL );
assert( strcmp(board841408932, 
"3.......\n"
".4.1....\n"
"2.......\n"
"...8..5.\n"
"........\n"
".68.8...\n"
"....4...\n"
".......2\n") == 0);
free(board841408932);
board841408932 = NULL;
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_free_fields(board, 3) == 46 );


char* board789788864 = gamma_board(board);
assert( board789788864 != NULL );
assert( strcmp(board789788864, 
"38......\n"
".4.1....\n"
"27.2....\n"
"...8..5.\n"
"1.......\n"
"668.8...\n"
"....4.41\n"
".......2\n") == 0);
free(board789788864);
board789788864 = NULL;
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 7, -1) == 0 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 4, 7) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_move(board, 2, 6, 2) == 1 );


char* board588685109 = gamma_board(board);
assert( board588685109 != NULL );
assert( strcmp(board588685109, 
"38..8..1\n"
".4.1....\n"
"27.2..5.\n"
"...8..5.\n"
"1.......\n"
"668.8.2.\n"
"....4.41\n"
"..2....2\n") == 0);
free(board588685109);
board588685109 = NULL;
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 6, 2, 7) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 1, -1) == 0 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_golden_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 5, 7) == 1 );


gamma_delete(board);

    return 0;
}
