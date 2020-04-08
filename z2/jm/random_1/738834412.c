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
uuid: 738834412
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 6, 4);
assert( board != NULL );




char* board575941822 = gamma_board(board);
assert( board575941822 != NULL );
assert( strcmp(board575941822, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n") == 0);
free(board575941822);
board575941822 = NULL;
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 5, 4, -1) == 0 );


char* board340993558 = gamma_board(board);
assert( board340993558 != NULL );
assert( strcmp(board340993558, 
".......\n"
".......\n"
".......\n"
"....23.\n"
".......\n"
".......\n"
".......\n") == 0);
free(board340993558);
board340993558 = NULL;
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );


char* board598201288 = gamma_board(board);
assert( board598201288 != NULL );
assert( strcmp(board598201288, 
".......\n"
".......\n"
"6......\n"
"...523.\n"
".....2.\n"
".4.....\n"
".2.....\n") == 0);
free(board598201288);
board598201288 = NULL;
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_free_fields(board, 6) == 37 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board708903214 = gamma_board(board);
assert( board708903214 != NULL );
assert( strcmp(board708903214, 
".3.....\n"
"2.3....\n"
"6..1...\n"
"...523.\n"
".....2.\n"
".4...4.\n"
"52.....\n") == 0);
free(board708903214);
board708903214 = NULL;
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );


char* board237622783 = gamma_board(board);
assert( board237622783 != NULL );
assert( strcmp(board237622783, 
".3.4...\n"
"2.3...6\n"
"6..1...\n"
"...523.\n"
".....2.\n"
".4...4.\n"
"52.....\n") == 0);
free(board237622783);
board237622783 = NULL;
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_free_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, -1, 3) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_golden_possible(board, 1) == 1 );


gamma_delete(board);

    return 0;
}
