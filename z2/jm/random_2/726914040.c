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
uuid: 726914040
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 4, 9, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 9, 2) == 1 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 9, 1, 10) == 0 );
assert( gamma_busy_fields(board, 9) == 0 );
assert( gamma_free_fields(board, 9) == 37 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_golden_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 3, 11, 1) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 8, 9, 3) == 1 );
assert( gamma_free_fields(board, 8) == 31 );


char* board132147668 = gamma_board(board);
assert( board132147668 != NULL );
assert( strcmp(board132147668, 
"..3..6.2.8..\n"
"..3..2..37..\n"
"54.1....1..3\n"
"4.5.....4..2\n") == 0);
free(board132147668);
board132147668 = NULL;
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 9, 3, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_free_fields(board, 5) == 28 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 10, 1) == 1 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_free_fields(board, 9) == 23 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 8, 8, 3) == 1 );
assert( gamma_golden_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 4, 6, 3) == 1 );


char* board121017754 = gamma_board(board);
assert( board121017754 != NULL );
assert( strcmp(board121017754, 
"..3.5642883.\n"
"1239.2..371.\n"
"84716...1.83\n"
"495.....45.2\n") == 0);
free(board121017754);
board121017754 = NULL;
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 2, 3) == 1 );


char* board616274420 = gamma_board(board);
assert( board616274420 != NULL );
assert( strcmp(board616274420, 
"..9.5642883.\n"
"1239.2..371.\n"
"84716...1.83\n"
"495.....45.2\n") == 0);
free(board616274420);
board616274420 = NULL;
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 9, 1) == 1 );


char* board973420125 = gamma_board(board);
assert( board973420125 != NULL );
assert( strcmp(board973420125, 
"..9.5642883.\n"
"1239.2..371.\n"
"84716...1483\n"
"495.....45.2\n") == 0);
free(board973420125);
board973420125 = NULL;
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_golden_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 8, 0, 10) == 0 );
assert( gamma_move(board, 8, 10, 0) == 1 );
assert( gamma_move(board, 9, 3, 11) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_golden_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_golden_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 8, 2, 11) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_free_fields(board, 8) == 14 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );


char* board371047364 = gamma_board(board);
assert( board371047364 != NULL );
assert( strcmp(board371047364, 
"..945642883.\n"
"1239.2..371.\n"
"84716...1483\n"
"4751..7.4582\n") == 0);
free(board371047364);
board371047364 = NULL;
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );


char* board657957468 = gamma_board(board);
assert( board657957468 != NULL );
assert( strcmp(board657957468, 
"..945642883.\n"
"1239.2..371.\n"
"84716...1483\n"
"4751..7.4582\n") == 0);
free(board657957468);
board657957468 = NULL;


gamma_delete(board);

    return 0;
}
