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
uuid: 509939199
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 9, 3, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_golden_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_free_fields(board, 1) == 67 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_free_fields(board, 1) == 65 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_golden_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );


char* board491889896 = gamma_board(board);
assert( board491889896 != NULL );
assert( strcmp(board491889896, 
"........\n"
".3......\n"
"...2..2.\n"
"...21..3\n"
".1......\n"
"..2.....\n"
".....1..\n"
"..11..3.\n"
"3.....3.\n") == 0);
free(board491889896);
board491889896 = NULL;
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_free_fields(board, 2) == 17 );


char* board239509548 = gamma_board(board);
assert( board239509548 != NULL );
assert( strcmp(board239509548, 
"........\n"
".3......\n"
"...2..2.\n"
"...21..3\n"
".1......\n"
"..2...2.\n"
".....1..\n"
"..11..3.\n"
"3.....3.\n") == 0);
free(board239509548);
board239509548 = NULL;
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 5, -1) == 0 );


char* board270724700 = gamma_board(board);
assert( board270724700 != NULL );
assert( strcmp(board270724700, 
"........\n"
".3......\n"
"...2..2.\n"
"...21..3\n"
".1......\n"
"..2...2.\n"
".....1..\n"
"..11..3.\n"
"3.....3.\n") == 0);
free(board270724700);
board270724700 = NULL;
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );


char* board153232982 = gamma_board(board);
assert( board153232982 != NULL );
assert( strcmp(board153232982, 
"........\n"
".3......\n"
"...2..2.\n"
"...21..3\n"
".1......\n"
"..2..12.\n"
".....1..\n"
"..11..3.\n"
"3.....3.\n") == 0);
free(board153232982);
board153232982 = NULL;
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 6, 0) == 0 );


gamma_delete(board);

    return 0;
}
