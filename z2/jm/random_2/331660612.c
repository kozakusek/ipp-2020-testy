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
uuid: 331660612
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 11, 13, 17);
assert( board != NULL );


assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 7, 2, 9) == 1 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_move(board, 8, 4, 10) == 1 );
assert( gamma_move(board, 10, 3, 3) == 1 );
assert( gamma_move(board, 10, 5, 10) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_golden_move(board, 10, 10, 0) == 0 );
assert( gamma_move(board, 11, 9, 4) == 0 );
assert( gamma_move(board, 11, 0, 4) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 0, 3) == 1 );
assert( gamma_free_fields(board, 12) == 54 );
assert( gamma_move(board, 13, 5, 5) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_golden_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 9, 4, 9) == 1 );
assert( gamma_move(board, 10, 2, 4) == 0 );
assert( gamma_move(board, 10, 5, 9) == 1 );
assert( gamma_move(board, 11, 1, 5) == 0 );
assert( gamma_move(board, 11, 1, 9) == 1 );
assert( gamma_move(board, 12, 8, 0) == 0 );
assert( gamma_free_fields(board, 12) == 42 );
assert( gamma_move(board, 13, 1, 3) == 0 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_golden_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 9, 1, 6) == 1 );
assert( gamma_move(board, 10, 0, 3) == 0 );
assert( gamma_move(board, 11, 2, 2) == 1 );
assert( gamma_move(board, 11, 1, 7) == 1 );
assert( gamma_move(board, 12, 4, 0) == 1 );
assert( gamma_move(board, 13, 10, 3) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );


char* board733853297 = gamma_board(board);
assert( board733853297 != NULL );
assert( strcmp(board733853297, 
"4...810\n"
".117.910\n"
"..82..\n"
".111.6.\n"
".9321.\n"
"6443.13\n"
"11.35..\n"
"122310..\n"
"55112..\n"
"11....\n"
"..5.12.\n") == 0);
free(board733853297);
board733853297 = NULL;
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_free_fields(board, 6) == 29 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 9, 4, 2) == 1 );
assert( gamma_move(board, 10, 8, 4) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 8, 4) == 0 );
assert( gamma_move(board, 11, 2, 1) == 1 );
assert( gamma_move(board, 12, 8, 4) == 0 );
assert( gamma_free_fields(board, 12) == 25 );
assert( gamma_move(board, 13, 0, 1) == 0 );
assert( gamma_move(board, 13, 2, 10) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_golden_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 9, 7, 5) == 0 );
assert( gamma_move(board, 10, 0, 0) == 1 );
assert( gamma_free_fields(board, 10) == 22 );
assert( gamma_move(board, 11, 9, 0) == 0 );
assert( gamma_move(board, 12, 2, 0) == 0 );
assert( gamma_move(board, 13, 6, 5) == 0 );
assert( gamma_move(board, 13, 2, 8) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_free_fields(board, 7) == 18 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 7, 3) == 0 );
assert( gamma_move(board, 10, 0, 1) == 0 );
assert( gamma_move(board, 10, 2, 1) == 0 );
assert( gamma_move(board, 11, 0, 4) == 0 );


char* board417951711 = gamma_board(board);
assert( board417951711 != NULL );
assert( strcmp(board417951711, 
"4613.810\n"
".117.910\n"
"..82..\n"
".111.6.\n"
".9321.\n"
"6443713\n"
"11.3517\n"
"122310.5\n"
"5511297\n"
"1111..4\n"
"10.5712.\n") == 0);
free(board417951711);
board417951711 = NULL;
assert( gamma_move(board, 12, 9, 0) == 0 );
assert( gamma_move(board, 12, 5, 0) == 1 );
assert( gamma_busy_fields(board, 12) == 3 );
assert( gamma_move(board, 13, 2, 3) == 0 );
assert( gamma_move(board, 13, 1, 4) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 9, 2, 8) == 0 );


char* board657536445 = gamma_board(board);
assert( board657536445 != NULL );
assert( strcmp(board657536445, 
"4613.810\n"
".117.910\n"
"..82..\n"
".111.6.\n"
".9321.\n"
"6443713\n"
"11133517\n"
"122310.5\n"
"5511297\n"
"1111..4\n"
"10.571212\n") == 0);
free(board657536445);
board657536445 = NULL;
assert( gamma_move(board, 10, 7, 0) == 0 );
assert( gamma_move(board, 11, 4, 7) == 0 );
assert( gamma_move(board, 12, 7, 3) == 0 );
assert( gamma_free_fields(board, 12) == 16 );
assert( gamma_move(board, 13, 6, 5) == 0 );
assert( gamma_move(board, 13, 1, 9) == 0 );
assert( gamma_busy_fields(board, 13) == 3 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_move(board, 9, 5, 6) == 1 );
assert( gamma_move(board, 10, 3, 4) == 0 );
assert( gamma_move(board, 11, 8, 0) == 0 );
assert( gamma_free_fields(board, 11) == 15 );
assert( gamma_move(board, 12, 3, 4) == 0 );
assert( gamma_golden_move(board, 12, 2, 4) == 1 );
assert( gamma_move(board, 13, 2, 3) == 0 );
assert( gamma_move(board, 13, 4, 6) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_free_fields(board, 5) == 15 );


char* board286786096 = gamma_board(board);
assert( board286786096 != NULL );
assert( strcmp(board286786096, 
"4613.810\n"
".117.910\n"
"..82..\n"
".111.6.\n"
".93219\n"
"6443713\n"
"111312517\n"
"122310.5\n"
"5511297\n"
"1111..4\n"
"10.571212\n") == 0);
free(board286786096);
board286786096 = NULL;
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 8, 4, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 4, 10) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 10, 3, 4) == 0 );
assert( gamma_move(board, 10, 4, 10) == 0 );
assert( gamma_move(board, 11, 0, 1) == 0 );
assert( gamma_move(board, 11, 3, 9) == 1 );
assert( gamma_move(board, 12, 8, 1) == 0 );
assert( gamma_move(board, 13, 2, 10) == 0 );
assert( gamma_move(board, 13, 5, 0) == 0 );


char* board657744335 = gamma_board(board);
assert( board657744335 != NULL );
assert( strcmp(board657744335, 
"4613.810\n"
".11711910\n"
"..82..\n"
".111.6.\n"
".93219\n"
"6443713\n"
"111312517\n"
"122310.5\n"
"5511297\n"
"1111..4\n"
"10.571212\n") == 0);
free(board657744335);
board657744335 = NULL;
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 7, 5, 7) == 1 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 10, 5, 9) == 0 );
assert( gamma_move(board, 10, 3, 7) == 1 );
assert( gamma_move(board, 11, 8, 5) == 0 );
assert( gamma_move(board, 12, 1, 4) == 0 );
assert( gamma_move(board, 12, 5, 1) == 0 );


char* board177782729 = gamma_board(board);
assert( board177782729 != NULL );
assert( strcmp(board177782729, 
"46135810\n"
".11711910\n"
"..823.\n"
".1111067\n"
".93219\n"
"6443713\n"
"111312517\n"
"12231085\n"
"5511297\n"
"1111..4\n"
"102571212\n") == 0);
free(board177782729);
board177782729 = NULL;
assert( gamma_move(board, 13, 4, 3) == 0 );
assert( gamma_move(board, 13, 2, 4) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_golden_move(board, 2, 7, 1) == 0 );


gamma_delete(board);

    return 0;
}
