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
uuid: 396509883
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 8, 5, 8);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_free_fields(board, 4) == 63 );
assert( gamma_free_fields(board, 5) == 63 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_free_fields(board, 2) == 62 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_golden_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_free_fields(board, 5) == 60 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_free_fields(board, 3) == 58 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board670804577 = gamma_board(board);
assert( board670804577 != NULL );
assert( strcmp(board670804577, 
"....4...\n"
"...2....\n"
".......5\n"
"........\n"
"....2...\n"
"........\n"
".1.....1\n"
".....3..\n") == 0);
free(board670804577);
board670804577 = NULL;
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );


char* board143287112 = gamma_board(board);
assert( board143287112 != NULL );
assert( strcmp(board143287112, 
"2...4...\n"
"...2....\n"
"......45\n"
"......3.\n"
"....2...\n"
"..5.....\n"
".1..3..1\n"
".....3..\n") == 0);
free(board143287112);
board143287112 = NULL;
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_free_fields(board, 3) == 47 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_free_fields(board, 3) == 45 );


char* board857953182 = gamma_board(board);
assert( board857953182 != NULL );
assert( strcmp(board857953182, 
"2...4...\n"
"...2....\n"
".3....45\n"
"......3.\n"
"...32414\n"
"..5.....\n"
".1153..1\n"
".....3..\n") == 0);
free(board857953182);
board857953182 = NULL;
assert( gamma_golden_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_golden_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 5, 8, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board795350656 = gamma_board(board);
assert( board795350656 != NULL );
assert( strcmp(board795350656, 
"2...4..4\n"
"...2....\n"
".3....45\n"
"......3.\n"
"...42414\n"
"..5.....\n"
".1153..1\n"
".....3..\n") == 0);
free(board795350656);
board795350656 = NULL;
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );


gamma_delete(board);

    return 0;
}
