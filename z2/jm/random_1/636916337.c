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
uuid: 636916337
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 10, 6, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_free_fields(board, 2) == 89 );
assert( gamma_move(board, 3, 3, 5) == 1 );


char* board296579754 = gamma_board(board);
assert( board296579754 != NULL );
assert( strcmp(board296579754, 
".........\n"
".........\n"
"....1....\n"
".........\n"
"...3.....\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n") == 0);
free(board296579754);
board296579754 = NULL;
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_free_fields(board, 6) == 87 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 1, 6) == 1 );


char* board115017775 = gamma_board(board);
assert( board115017775 != NULL );
assert( strcmp(board115017775, 
".........\n"
".........\n"
"....1.2..\n"
".6.......\n"
"...3.....\n"
".........\n"
".........\n"
".........\n"
"55.......\n"
".........\n") == 0);
free(board115017775);
board115017775 = NULL;
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 5, 2, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_free_fields(board, 5) == 81 );
assert( gamma_move(board, 6, -1, 2) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 9, -1) == 0 );


char* board806762200 = gamma_board(board);
assert( board806762200 != NULL );
assert( strcmp(board806762200, 
".........\n"
"......3.4\n"
"....1.2..\n"
".6.......\n"
"...3.....\n"
".........\n"
"........1\n"
".........\n"
"55...1...\n"
".........\n") == 0);
free(board806762200);
board806762200 = NULL;
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_golden_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_golden_move(board, 4, 7, 4) == 0 );
assert( gamma_free_fields(board, 6) == 76 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_free_fields(board, 2) == 76 );
assert( gamma_golden_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_free_fields(board, 2) == 74 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_free_fields(board, 6) == 69 );
assert( gamma_move(board, 1, 2, 3) == 0 );


char* board547957593 = gamma_board(board);
assert( board547957593 != NULL );
assert( strcmp(board547957593, 
"......4.2\n"
"5..1..3.2\n"
"....1.22.\n"
".6.......\n"
".1.3.....\n"
"..5...4..\n"
"..46.4..1\n"
".........\n"
"55...1...\n"
".........\n") == 0);
free(board547957593);
board547957593 = NULL;
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_free_fields(board, 5) == 65 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_golden_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_free_fields(board, 6) == 63 );
assert( gamma_free_fields(board, 1) == 63 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_free_fields(board, 1) == 62 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_free_fields(board, 3) == 62 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_free_fields(board, 5) == 62 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_free_fields(board, 3) == 55 );
assert( gamma_move(board, 4, -1, 3) == 0 );


char* board726137170 = gamma_board(board);
assert( board726137170 != NULL );
assert( strcmp(board726137170, 
"....2.452\n"
"5..1.63.2\n"
"1...1.22.\n"
".6.......\n"
"41.3....3\n"
"..5..1442\n"
".246.4..1\n"
"...6.....\n"
"55...1..5\n"
"...4.6...\n") == 0);
free(board726137170);
board726137170 = NULL;
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );


gamma_delete(board);

    return 0;
}
