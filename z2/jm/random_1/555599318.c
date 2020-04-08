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
uuid: 555599318
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 10, 4, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 5) == 1 );


char* board933945304 = gamma_board(board);
assert( board933945304 != NULL );
assert( strcmp(board933945304, 
".......\n"
".......\n"
".......\n"
".......\n"
"...1...\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n") == 0);
free(board933945304);
board933945304 = NULL;
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );


char* board803711840 = gamma_board(board);
assert( board803711840 != NULL );
assert( strcmp(board803711840, 
".......\n"
"......3\n"
".......\n"
".2.....\n"
".4.1...\n"
".......\n"
".3.....\n"
".......\n"
".......\n"
".......\n") == 0);
free(board803711840);
board803711840 = NULL;
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_free_fields(board, 3) == 64 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board381379532 = gamma_board(board);
assert( board381379532 != NULL );
assert( strcmp(board381379532, 
".......\n"
"......3\n"
"...3...\n"
".2.....\n"
".4.11..\n"
"4......\n"
".3.....\n"
".......\n"
".......\n"
".......\n") == 0);
free(board381379532);
board381379532 = NULL;
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );


char* board415467758 = gamma_board(board);
assert( board415467758 != NULL );
assert( strcmp(board415467758, 
".......\n"
"......3\n"
"...3...\n"
".2.....\n"
".4.11..\n"
"4......\n"
".3.....\n"
".......\n"
".......\n"
"..2....\n") == 0);
free(board415467758);
board415467758 = NULL;
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board472638198 = gamma_board(board);
assert( board472638198 != NULL );
assert( strcmp(board472638198, 
"4...2..\n"
"....3.3\n"
"..23...\n"
".2.....\n"
".4.11.2\n"
"4......\n"
".3.....\n"
"4......\n"
".......\n"
"..2.43.\n") == 0);
free(board472638198);
board472638198 = NULL;
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 3, -1) == 0 );


char* board850226276 = gamma_board(board);
assert( board850226276 != NULL );
assert( strcmp(board850226276, 
"4...2..\n"
".1..3.3\n"
"..23...\n"
"22.....\n"
".4.11.2\n"
"4......\n"
".3.....\n"
"4......\n"
".......\n"
"..2.43.\n") == 0);
free(board850226276);
board850226276 = NULL;
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );


gamma_delete(board);

    return 0;
}
