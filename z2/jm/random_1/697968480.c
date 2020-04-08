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
uuid: 697968480
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 10, 7, 5);
assert( board != NULL );


assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_free_fields(board, 1) == 60 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_golden_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 6, 4, -1) == 0 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 4, -1) == 0 );


char* board246019242 = gamma_board(board);
assert( board246019242 != NULL );
assert( strcmp(board246019242, 
".2....\n"
"......\n"
"......\n"
"......\n"
"......\n"
"...7..\n"
"....2.\n"
"......\n"
"......\n"
"5..4..\n") == 0);
free(board246019242);
board246019242 = NULL;
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_golden_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_free_fields(board, 6) == 51 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_free_fields(board, 6) == 47 );


char* board534425156 = gamma_board(board);
assert( board534425156 != NULL );
assert( strcmp(board534425156, 
".2....\n"
"....2.\n"
"......\n"
"......\n"
".....7\n"
"...7..\n"
"...122\n"
"3..7.1\n"
"6.....\n"
"7..4..\n") == 0);
free(board534425156);
board534425156 = NULL;
assert( gamma_move(board, 7, -1, 1) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_free_fields(board, 5) == 44 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );


char* board802118786 = gamma_board(board);
assert( board802118786 != NULL );
assert( strcmp(board802118786, 
".2....\n"
".3..2.\n"
"......\n"
".5....\n"
".....7\n"
"...7..\n"
"...122\n"
"31.7.1\n"
"6.....\n"
"7..4..\n") == 0);
free(board802118786);
board802118786 = NULL;
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 4, -1, 10) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, -1, 5) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_free_fields(board, 3) == 43 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board985519555 = gamma_board(board);
assert( board985519555 != NULL );
assert( strcmp(board985519555, 
".2....\n"
".3..2.\n"
"......\n"
".5...5\n"
".....7\n"
"...7..\n"
"...122\n"
"31.7.1\n"
"65....\n"
"7..4..\n") == 0);
free(board985519555);
board985519555 = NULL;
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, -1, 5) == 0 );


char* board493475369 = gamma_board(board);
assert( board493475369 != NULL );
assert( strcmp(board493475369, 
".2.1..\n"
".3..2.\n"
"......\n"
".5...5\n"
".....7\n"
"...7..\n"
"...122\n"
"3157.1\n"
"65....\n"
"7..4..\n") == 0);
free(board493475369);
board493475369 = NULL;


gamma_delete(board);

    return 0;
}
