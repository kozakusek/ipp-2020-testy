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
uuid: 887184958
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 4, 15, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_golden_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );


char* board133119333 = gamma_board(board);
assert( board133119333 != NULL );
assert( strcmp(board133119333, 
"......2.....\n"
"4..1...2....\n"
"........4...\n"
"....3.......\n") == 0);
free(board133119333);
board133119333 = NULL;
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 10, 0, 3) == 1 );
assert( gamma_move(board, 10, 0, 0) == 1 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_move(board, 11, 10, 1) == 1 );
assert( gamma_move(board, 12, 3, 7) == 0 );
assert( gamma_move(board, 13, 8, 3) == 1 );
assert( gamma_move(board, 14, 6, 0) == 1 );
assert( gamma_move(board, 15, 10, 1) == 0 );
assert( gamma_move(board, 15, 6, 1) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );


char* board184690676 = gamma_board(board);
assert( board184690676 != NULL );
assert( strcmp(board184690676, 
"10.41.42.13...\n"
"4.31...2....\n"
".8....15.4.11.\n"
"10...3.14.....\n") == 0);
free(board184690676);
board184690676 = NULL;
assert( gamma_move(board, 5, 1, 1) == 0 );


char* board952295821 = gamma_board(board);
assert( board952295821 != NULL );
assert( strcmp(board952295821, 
"10.41.42.13...\n"
"4.31...2....\n"
".8....15.4.11.\n"
"10...3.14.....\n") == 0);
free(board952295821);
board952295821 = NULL;
assert( gamma_move(board, 6, 9, 0) == 1 );


char* board611927923 = gamma_board(board);
assert( board611927923 != NULL );
assert( strcmp(board611927923, 
"10.41.42.13...\n"
"4.31...2....\n"
".8....15.4.11.\n"
"10...3.14..6..\n") == 0);
free(board611927923);
board611927923 = NULL;
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 9, 10, 2) == 1 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 1 );


char* board133420122 = gamma_board(board);
assert( board133420122 != NULL );
assert( strcmp(board133420122, 
"10.41.42.13...\n"
"4.31...2..9.\n"
".8....15.4.11.\n"
"10...3.14..6..\n") == 0);
free(board133420122);
board133420122 = NULL;
assert( gamma_move(board, 10, 1, 9) == 0 );
assert( gamma_move(board, 10, 10, 0) == 1 );
assert( gamma_move(board, 11, 2, 2) == 0 );
assert( gamma_move(board, 12, 0, 1) == 1 );
assert( gamma_free_fields(board, 12) == 27 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 1, 9) == 0 );
assert( gamma_move(board, 13, 8, 1) == 0 );
assert( gamma_free_fields(board, 13) == 27 );
assert( gamma_move(board, 14, 3, 3) == 0 );
assert( gamma_golden_move(board, 14, 3, 8) == 0 );
assert( gamma_move(board, 15, 3, 1) == 1 );
assert( gamma_move(board, 15, 7, 3) == 1 );
assert( gamma_busy_fields(board, 15) == 3 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_golden_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 11, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 9, 9, 2) == 1 );
assert( gamma_move(board, 10, 1, 1) == 0 );
assert( gamma_move(board, 11, 1, 5) == 0 );
assert( gamma_move(board, 12, 3, 11) == 0 );
assert( gamma_move(board, 13, 7, 2) == 0 );
assert( gamma_move(board, 14, 0, 1) == 0 );
assert( gamma_move(board, 14, 0, 0) == 0 );


char* board196707505 = gamma_board(board);
assert( board196707505 != NULL );
assert( strcmp(board196707505, 
"10.416421513...\n"
"4431...2.993\n"
"128.15..15.4.11.\n"
"10...3.1441610.\n") == 0);
free(board196707505);
board196707505 = NULL;
assert( gamma_move(board, 15, 11, 1) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_free_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 8, 3, 11) == 0 );
assert( gamma_free_fields(board, 8) == 16 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_move(board, 10, 2, 8) == 0 );
assert( gamma_move(board, 11, 3, 1) == 0 );
assert( gamma_move(board, 11, 10, 0) == 0 );
assert( gamma_golden_move(board, 12, 0, 6) == 0 );
assert( gamma_move(board, 13, 2, 0) == 1 );
assert( gamma_move(board, 13, 1, 1) == 0 );
assert( gamma_move(board, 14, 3, 9) == 0 );
assert( gamma_busy_fields(board, 14) == 1 );
assert( gamma_move(board, 15, 1, 9) == 0 );
assert( gamma_move(board, 15, 10, 1) == 0 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 9, 11, 2) == 0 );
assert( gamma_move(board, 10, 0, 11) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_golden_move(board, 11, 1, 0) == 0 );
assert( gamma_move(board, 12, 3, 11) == 0 );
assert( gamma_move(board, 13, 0, 3) == 0 );
assert( gamma_free_fields(board, 13) == 12 );
assert( gamma_move(board, 14, 4, 0) == 0 );
assert( gamma_golden_move(board, 14, 0, 10) == 0 );
assert( gamma_move(board, 15, 0, 5) == 0 );
assert( gamma_move(board, 15, 3, 2) == 0 );


char* board350033328 = gamma_board(board);
assert( board350033328 != NULL );
assert( strcmp(board350033328, 
"10.416421513...\n"
"44313.221993\n"
"128315..15.421115\n"
"10.13.3.1441610.\n") == 0);
free(board350033328);
board350033328 = NULL;
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 10, 3) == 1 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_move(board, 10, 8, 1) == 0 );
assert( gamma_move(board, 10, 5, 3) == 0 );
assert( gamma_free_fields(board, 10) == 11 );
assert( gamma_move(board, 11, 11, 0) == 1 );
assert( gamma_golden_move(board, 11, 3, 2) == 1 );
assert( gamma_move(board, 12, 2, 5) == 0 );
assert( gamma_move(board, 12, 8, 1) == 0 );
assert( gamma_move(board, 13, 0, 3) == 0 );
assert( gamma_busy_fields(board, 13) == 2 );
assert( gamma_move(board, 14, 1, 3) == 1 );
assert( gamma_move(board, 15, 5, 1) == 1 );
assert( gamma_move(board, 15, 9, 0) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 11, 3) == 1 );


gamma_delete(board);

    return 0;
}
