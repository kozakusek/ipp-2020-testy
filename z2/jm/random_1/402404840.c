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
uuid: 402404840
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 6, 6, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_move(board, 6, -1, 2) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_move(board, 5, 4, 1) == 1 );


char* board351564276 = gamma_board(board);
assert( board351564276 != NULL );
assert( strcmp(board351564276, 
"...2...\n"
"..11...\n"
".......\n"
".......\n"
"....5.2\n"
"3......\n") == 0);
free(board351564276);
board351564276 = NULL;
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_golden_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );


char* board569542309 = gamma_board(board);
assert( board569542309 != NULL );
assert( strcmp(board569542309, 
"...2...\n"
"..11...\n"
".4..1..\n"
".....1.\n"
"..6.5.2\n"
"3......\n") == 0);
free(board569542309);
board569542309 = NULL;
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_free_fields(board, 5) == 31 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_move(board, 5, 0, -1) == 0 );


char* board366976889 = gamma_board(board);
assert( board366976889 != NULL );
assert( strcmp(board366976889, 
"...2...\n"
"2.11...\n"
".4..1..\n"
".....1.\n"
"..615.2\n"
"3....2.\n") == 0);
free(board366976889);
board366976889 = NULL;
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_golden_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_free_fields(board, 5) == 27 );
assert( gamma_move(board, 6, 1, -1) == 0 );


gamma_delete(board);

    return 0;
}
