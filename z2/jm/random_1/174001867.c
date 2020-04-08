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
uuid: 174001867
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 10, 7, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 4, -1) == 0 );


char* board240896998 = gamma_board(board);
assert( board240896998 != NULL );
assert( strcmp(board240896998, 
"......\n"
"......\n"
"......\n"
"......\n"
"....4.\n"
"......\n"
"....2.\n"
"......\n"
"......\n"
"...3..\n") == 0);
free(board240896998);
board240896998 = NULL;
assert( gamma_free_fields(board, 6) == 57 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_golden_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board382416585 = gamma_board(board);
assert( board382416585 != NULL );
assert( strcmp(board382416585, 
"...41.\n"
"......\n"
"......\n"
"3..5..\n"
"....4.\n"
"......\n"
"..3.2.\n"
".7...2\n"
".4....\n"
"...3..\n") == 0);
free(board382416585);
board382416585 = NULL;
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 5, 7) == 1 );
assert( gamma_free_fields(board, 7) == 47 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_free_fields(board, 3) == 47 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_golden_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_free_fields(board, 5) == 46 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_free_fields(board, 1) == 46 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );


char* board884496622 = gamma_board(board);
assert( board884496622 != NULL );
assert( strcmp(board884496622, 
"6..41.\n"
"......\n"
".....7\n"
"3..5..\n"
"....4.\n"
"......\n"
"..3.2.\n"
".7...2\n"
"44...2\n"
"...3..\n") == 0);
free(board884496622);
board884496622 = NULL;
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_free_fields(board, 4) == 45 );
assert( gamma_move(board, 5, -1, 5) == 0 );


char* board479316278 = gamma_board(board);
assert( board479316278 != NULL );
assert( strcmp(board479316278, 
"6..41.\n"
"......\n"
".....7\n"
"3..5..\n"
"....4.\n"
"......\n"
"..3.2.\n"
".7...2\n"
"44...2\n"
"...3..\n") == 0);
free(board479316278);
board479316278 = NULL;
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 1, 6) == 1 );
assert( gamma_free_fields(board, 7) == 44 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 6, 2) == 0 );


char* board900562305 = gamma_board(board);
assert( board900562305 != NULL );
assert( strcmp(board900562305, 
"6..41.\n"
"...2..\n"
".....7\n"
"37.5..\n"
"..1.4.\n"
"......\n"
"..3.2.\n"
"27...2\n"
"44...2\n"
"..53..\n") == 0);
free(board900562305);
board900562305 = NULL;
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, -1, 0) == 0 );


gamma_delete(board);

    return 0;
}
