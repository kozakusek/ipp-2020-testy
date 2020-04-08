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
uuid: 992211039
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 10, 3, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_golden_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_free_fields(board, 3) == 62 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board423721857 = gamma_board(board);
assert( board423721857 != NULL );
assert( strcmp(board423721857, 
".3...3.\n"
".......\n"
"..3....\n"
"...1.1.\n"
"1....1.\n"
".......\n"
".11....\n"
".......\n"
".2....2\n"
".31....\n") == 0);
free(board423721857);
board423721857 = NULL;
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_free_fields(board, 2) == 57 );


char* board919018685 = gamma_board(board);
assert( board919018685 != NULL );
assert( strcmp(board919018685, 
".3...3.\n"
".......\n"
"..3....\n"
"...1.1.\n"
"1....1.\n"
".......\n"
".11....\n"
".......\n"
".2....2\n"
".31....\n") == 0);
free(board919018685);
board919018685 = NULL;
assert( gamma_move(board, 3, 7, -1) == 0 );


char* board444283319 = gamma_board(board);
assert( board444283319 != NULL );
assert( strcmp(board444283319, 
".3...3.\n"
".......\n"
"..3....\n"
"...1.1.\n"
"1....1.\n"
".......\n"
".11....\n"
".......\n"
".2....2\n"
".31....\n") == 0);
free(board444283319);
board444283319 = NULL;
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_golden_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );


char* board209133065 = gamma_board(board);
assert( board209133065 != NULL );
assert( strcmp(board209133065, 
".3...3.\n"
".......\n"
".23....\n"
"...1.11\n"
"1.1..1.\n"
".......\n"
".11....\n"
".......\n"
".2....2\n"
".11....\n") == 0);
free(board209133065);
board209133065 = NULL;
assert( gamma_busy_fields(board, 2) == 3 );


char* board341098866 = gamma_board(board);
assert( board341098866 != NULL );
assert( strcmp(board341098866, 
".3...3.\n"
".......\n"
".23....\n"
"...1.11\n"
"1.1..1.\n"
".......\n"
".11....\n"
".......\n"
".2....2\n"
".11....\n") == 0);
free(board341098866);
board341098866 = NULL;
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );


gamma_delete(board);

    return 0;
}
