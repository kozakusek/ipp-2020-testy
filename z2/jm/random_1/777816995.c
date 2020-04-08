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
uuid: 777816995
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 10, 3, 5);
assert( board != NULL );


assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );


char* board841993181 = gamma_board(board);
assert( board841993181 != NULL );
assert( strcmp(board841993181, 
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
"....3....\n"
".........\n"
".........\n"
".........\n"
".........\n") == 0);
free(board841993181);
board841993181 = NULL;
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_free_fields(board, 1) == 89 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 9, 1) == 0 );


char* board958723554 = gamma_board(board);
assert( board958723554 != NULL );
assert( strcmp(board958723554, 
".........\n"
".........\n"
"..1......\n"
".........\n"
"........1\n"
"....3....\n"
".........\n"
".........\n"
".........\n"
"......2..\n") == 0);
free(board958723554);
board958723554 = NULL;
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_free_fields(board, 1) == 83 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_golden_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_golden_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_free_fields(board, 2) == 76 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board541461823 = gamma_board(board);
assert( board541461823 != NULL );
assert( strcmp(board541461823, 
"3.2.3....\n"
"......1..\n"
".21......\n"
".........\n"
"......1.1\n"
"....3....\n"
"........3\n"
".1....3.2\n"
".........\n"
"...2..2..\n") == 0);
free(board541461823);
board541461823 = NULL;
assert( gamma_move(board, 2, -1, 10) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );


char* board541848939 = gamma_board(board);
assert( board541848939 != NULL );
assert( strcmp(board541848939, 
"3.2.3....\n"
"......1..\n"
".21......\n"
".........\n"
"......1.1\n"
"...33....\n"
"........3\n"
".1....3.2\n"
".........\n"
"...2..2..\n") == 0);
free(board541848939);
board541848939 = NULL;
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 1, 0, 7) == 0 );


char* board676328442 = gamma_board(board);
assert( board676328442 != NULL );
assert( strcmp(board676328442, 
"3.2.3....\n"
"......1..\n"
".21......\n"
".........\n"
"......1.1\n"
"...33....\n"
"........3\n"
".1....3.2\n"
".........\n"
"...2..2..\n") == 0);
free(board676328442);
board676328442 = NULL;
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 3, -1, 10) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_golden_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, -1) == 0 );


gamma_delete(board);

    return 0;
}
