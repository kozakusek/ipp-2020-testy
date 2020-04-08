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
uuid: 346553981
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 8, 8, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );


char* board554412165 = gamma_board(board);
assert( board554412165 != NULL );
assert( strcmp(board554412165, 
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"1.....\n") == 0);
free(board554412165);
board554412165 = NULL;
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 8, 0, -1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_free_fields(board, 5) == 41 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_golden_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_free_fields(board, 7) == 40 );


char* board892876164 = gamma_board(board);
assert( board892876164 != NULL );
assert( strcmp(board892876164, 
"1.....\n"
"......\n"
"......\n"
"4.....\n"
"......\n"
"......\n"
"5.727.\n"
"6..2..\n") == 0);
free(board892876164);
board892876164 = NULL;
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, -1, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, -1, 2) == 0 );


char* board659304770 = gamma_board(board);
assert( board659304770 != NULL );
assert( strcmp(board659304770, 
"1.....\n"
"......\n"
".4....\n"
"4.....\n"
"......\n"
"3.....\n"
"5.727.\n"
"6..2..\n") == 0);
free(board659304770);
board659304770 = NULL;
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_golden_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_free_fields(board, 3) == 35 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 5) == 0 );


char* board791344463 = gamma_board(board);
assert( board791344463 != NULL );
assert( strcmp(board791344463, 
"1.....\n"
"......\n"
".4...2\n"
"4.....\n"
"......\n"
"3...3.\n"
"5.727.\n"
"6..21.\n") == 0);
free(board791344463);
board791344463 = NULL;
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 7, 2, -1) == 0 );
assert( gamma_move(board, 8, 5, -1) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_golden_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_golden_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_golden_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 5, -1, 7) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 8, -1, 3) == 0 );
assert( gamma_free_fields(board, 8) == 30 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_free_fields(board, 5) == 28 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, -1, 8) == 0 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, -1, 0) == 0 );
assert( gamma_golden_move(board, 8, 1, 0) == 1 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_golden_move(board, 2, 1, 0) == 1 );


char* board672073152 = gamma_board(board);
assert( board672073152 != NULL );
assert( strcmp(board672073152, 
"1..5..\n"
"...6..\n"
"14...5\n"
"4.....\n"
"...3..\n"
"371.3.\n"
"5.727.\n"
"62.21.\n") == 0);
free(board672073152);
board672073152 = NULL;
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_golden_move(board, 5, 5, 1) == 0 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );


char* board940772148 = gamma_board(board);
assert( board940772148 != NULL );
assert( strcmp(board940772148, 
"1..5..\n"
"...6..\n"
"14.3.5\n"
"4.....\n"
"...3..\n"
"371.3.\n"
"5.727.\n"
"62.21.\n") == 0);
free(board940772148);
board940772148 = NULL;
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_free_fields(board, 6) == 26 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 8, 5, 6) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_free_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, -1, 1) == 0 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );


char* board729321315 = gamma_board(board);
assert( board729321315 != NULL );
assert( strcmp(board729321315, 
"1..5..\n"
"..86.8\n"
"14.3.5\n"
"4.....\n"
"...3..\n"
"371.3.\n"
"5.7276\n"
"62.21.\n") == 0);
free(board729321315);
board729321315 = NULL;
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_free_fields(board, 8) == 23 );


gamma_delete(board);

    return 0;
}
