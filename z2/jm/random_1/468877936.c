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
uuid: 468877936
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 5, 3, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );


char* board254787962 = gamma_board(board);
assert( board254787962 != NULL );
assert( strcmp(board254787962, 
".............\n"
".1...........\n"
".............\n"
".............\n"
".............\n") == 0);
free(board254787962);
board254787962 = NULL;
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );


char* board858515829 = gamma_board(board);
assert( board858515829 != NULL );
assert( strcmp(board858515829, 
".3...........\n"
".1..1....2...\n"
".............\n"
".3...........\n"
"1..3...2.....\n") == 0);
free(board858515829);
board858515829 = NULL;
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 1) == 56 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 12, 4) == 1 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_golden_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_golden_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_free_fields(board, 3) == 51 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 13, -1) == 0 );
assert( gamma_free_fields(board, 3) == 50 );
assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );


char* board642231529 = gamma_board(board);
assert( board642231529 != NULL );
assert( strcmp(board642231529, 
".3..2.....1.2\n"
"21..1...12...\n"
"...3..1......\n"
".3..3....3...\n"
"1..3...2.....\n") == 0);
free(board642231529);
board642231529 = NULL;
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 5, 5) == 0 );


char* board613098104 = gamma_board(board);
assert( board613098104 != NULL );
assert( strcmp(board613098104, 
"23..2.....1.2\n"
"21..1...123..\n"
"...3..1......\n"
".3..3....3...\n"
"1..3...2.....\n") == 0);
free(board613098104);
board613098104 = NULL;
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_golden_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 1, 13, -1) == 0 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_golden_move(board, 2, 4, 9) == 0 );


gamma_delete(board);

    return 0;
}
