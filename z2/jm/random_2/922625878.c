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
uuid: 922625878
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 4, 12, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 9, 10, 2) == 1 );
assert( gamma_move(board, 11, 0, 1) == 0 );
assert( gamma_move(board, 11, 9, 3) == 1 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_move(board, 12, 2, 4) == 0 );
assert( gamma_move(board, 12, 7, 3) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_golden_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_free_fields(board, 10) == 30 );


char* board590630312 = gamma_board(board);
assert( board590630312 != NULL );
assert( strcmp(board590630312, 
".3...3.12.11.\n"
"...3.8....9\n"
"546......1.\n"
"...8.21....\n") == 0);
free(board590630312);
board590630312 = NULL;
assert( gamma_move(board, 11, 1, 3) == 0 );
assert( gamma_move(board, 12, 3, 3) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 7, 10, 3) == 1 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_free_fields(board, 8) == 24 );
assert( gamma_move(board, 9, 2, 0) == 1 );
assert( gamma_move(board, 10, 0, 8) == 0 );
assert( gamma_move(board, 10, 2, 1) == 0 );
assert( gamma_move(board, 11, 3, 0) == 0 );
assert( gamma_move(board, 12, 2, 6) == 0 );
assert( gamma_move(board, 12, 9, 2) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_free_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 9, 10, 1) == 1 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 10, 2) == 0 );
assert( gamma_move(board, 10, 2, 1) == 0 );
assert( gamma_busy_fields(board, 10) == 0 );


char* board855575415 = gamma_board(board);
assert( board855575415 != NULL );
assert( strcmp(board855575415, 
"23.12.3.124117\n"
"..93.87..129\n"
"546.5754119\n"
"..98.214...\n") == 0);
free(board855575415);
board855575415 = NULL;
assert( gamma_move(board, 11, 2, 7) == 0 );


char* board447105944 = gamma_board(board);
assert( board447105944 != NULL );
assert( strcmp(board447105944, 
"23.12.3.124117\n"
"..93.87..129\n"
"546.5754119\n"
"..98.214...\n") == 0);
free(board447105944);
board447105944 = NULL;
assert( gamma_move(board, 12, 8, 0) == 1 );
assert( gamma_free_fields(board, 12) == 14 );


char* board660003609 = gamma_board(board);
assert( board660003609 != NULL );
assert( strcmp(board660003609, 
"23.12.3.124117\n"
"..93.87..129\n"
"546.5754119\n"
"..98.21412..\n") == 0);
free(board660003609);
board660003609 = NULL;
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );


char* board618700126 = gamma_board(board);
assert( board618700126 != NULL );
assert( strcmp(board618700126, 
"23.12.3.124117\n"
"..93.87.2129\n"
"546.5754119\n"
"..98.21412..\n") == 0);
free(board618700126);
board618700126 = NULL;
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 8, 2, 2) == 0 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_move(board, 11, 3, 6) == 0 );
assert( gamma_move(board, 12, 3, 2) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 10, 2, 7) == 0 );
assert( gamma_golden_move(board, 10, 3, 9) == 0 );
assert( gamma_move(board, 11, 3, 4) == 0 );
assert( gamma_move(board, 11, 1, 2) == 1 );
assert( gamma_move(board, 12, 3, 6) == 0 );
assert( gamma_move(board, 12, 5, 3) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );


char* board278542684 = gamma_board(board);
assert( board278542684 != NULL );
assert( strcmp(board278542684, 
"23.12.3.124117\n"
".1193.87.2129\n"
"546.5754119\n"
"7.98.21412..\n") == 0);
free(board278542684);
board278542684 = NULL;
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 2, 2) == 0 );


char* board904996195 = gamma_board(board);
assert( board904996195 != NULL );
assert( strcmp(board904996195, 
"23.12.3.124117\n"
"31193.87.2129\n"
"546.5754119\n"
"7.98.21412..\n") == 0);
free(board904996195);
board904996195 = NULL;
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_move(board, 10, 0, 1) == 0 );
assert( gamma_move(board, 11, 1, 3) == 0 );
assert( gamma_move(board, 12, 2, 7) == 0 );
assert( gamma_move(board, 12, 8, 3) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 1, 0) == 1 );


gamma_delete(board);

    return 0;
}
