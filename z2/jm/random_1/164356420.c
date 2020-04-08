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
uuid: 164356420
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 10, 6, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_free_fields(board, 3) == 94 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_free_fields(board, 6) == 92 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_free_fields(board, 5) == 84 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_golden_move(board, 3, 1, 4) == 0 );


char* board938431041 = gamma_board(board);
assert( board938431041 != NULL );
assert( strcmp(board938431041, 
"...4..1...\n"
"4........2\n"
"....5....3\n"
"....63....\n"
".....3.2..\n"
".....5.6.2\n"
"........22\n"
".....1....\n"
"5...14....\n"
"....3.....\n") == 0);
free(board938431041);
board938431041 = NULL;
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 10, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_free_fields(board, 3) == 79 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_golden_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 7, -1) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_golden_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );


char* board315880232 = gamma_board(board);
assert( board315880232 != NULL );
assert( strcmp(board315880232, 
"4..4..1...\n"
"4.4......2\n"
"....5....3\n"
"....63....\n"
"...5.3.2..\n"
".....5.662\n"
"........22\n"
".....1....\n"
"5...14....\n"
"....3..1..\n") == 0);
free(board315880232);
board315880232 = NULL;
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_golden_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_free_fields(board, 6) == 72 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_free_fields(board, 4) == 69 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 1, -1, 6) == 0 );


char* board729013377 = gamma_board(board);
assert( board729013377 != NULL );
assert( strcmp(board729013377, 
"4..4..1...\n"
"4.4......2\n"
"....5....3\n"
"....635...\n"
"...5.3.2..\n"
".....5.662\n"
".......222\n"
"4..4.1....\n"
"5...14...3\n"
"6...3..1..\n") == 0);
free(board729013377);
board729013377 = NULL;
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_free_fields(board, 6) == 63 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, -1, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_free_fields(board, 3) == 63 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_golden_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_golden_move(board, 4, 4, 4) == 0 );


char* board221452732 = gamma_board(board);
assert( board221452732 != NULL );
assert( strcmp(board221452732, 
"4..4..1...\n"
"4.4....2.2\n"
"46..5..2.3\n"
"....635...\n"
"...5.3.2..\n"
"....15.662\n"
"..4..5.222\n"
"4..4.1....\n"
"5.3.14...3\n"
"6...3..1.4\n") == 0);
free(board221452732);
board221452732 = NULL;
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_golden_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 3, -1, 10) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );


gamma_delete(board);

    return 0;
}
