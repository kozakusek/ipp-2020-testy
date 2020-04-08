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
uuid: 125397206
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 15, 9, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 9, 4, 8) == 1 );
assert( gamma_free_fields(board, 9) == 200 );
assert( gamma_golden_move(board, 9, 6, 3) == 0 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 1, 1, 13) == 1 );
assert( gamma_move(board, 2, 10, 9) == 1 );
assert( gamma_move(board, 2, 12, 11) == 1 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 3, 11, 13) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 14, 11) == 0 );
assert( gamma_move(board, 7, 0, 12) == 1 );
assert( gamma_move(board, 8, 11, 4) == 1 );
assert( gamma_move(board, 8, 12, 13) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 7) == 1 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 1, 13, 6) == 1 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_free_fields(board, 1) == 187 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_free_fields(board, 3) == 185 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 5, 12, 3) == 1 );
assert( gamma_free_fields(board, 5) == 183 );
assert( gamma_move(board, 6, 12, 2) == 1 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_golden_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 8, 5, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 10) == 1 );
assert( gamma_move(board, 9, 6, 3) == 1 );
assert( gamma_move(board, 1, 14, 11) == 0 );
assert( gamma_move(board, 2, 14, 11) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_free_fields(board, 2) == 178 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_move(board, 5, 13, 9) == 1 );
assert( gamma_free_fields(board, 5) == 174 );
assert( gamma_move(board, 6, 10, 10) == 1 );
assert( gamma_move(board, 7, 12, 5) == 1 );
assert( gamma_move(board, 7, 13, 6) == 0 );
assert( gamma_move(board, 8, 5, 6) == 1 );
assert( gamma_move(board, 9, 4, 2) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 9, 11) == 1 );
assert( gamma_move(board, 3, 0, 13) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_move(board, 5, 14, 5) == 0 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 6, 14, 3) == 0 );
assert( gamma_move(board, 7, 7, 10) == 1 );
assert( gamma_move(board, 8, 0, 13) == 0 );
assert( gamma_move(board, 9, 6, 4) == 1 );
assert( gamma_golden_move(board, 9, 12, 0) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 4, 13) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 9, 12) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_free_fields(board, 5) == 161 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 10) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 13, 7) == 1 );
assert( gamma_move(board, 8, 14, 12) == 0 );
assert( gamma_move(board, 8, 9, 10) == 0 );
assert( gamma_move(board, 9, 3, 12) == 1 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 11) == 1 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 13, 13) == 1 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_move(board, 9, 1, 0) == 0 );


char* board586334880 = gamma_board(board);
assert( board586334880 != NULL );
assert( strcmp(board586334880, 
"..............\n"
"31..1......387\n"
"7..9.....2....\n"
".......352..2.\n"
"....31.7966...\n"
"..........2..5\n"
"....9.5.4.....\n"
"5.9...5..2...7\n"
"2.56.8...15..1\n"
"1.3.....23..7.\n"
".2....9....8..\n"
".....69...5.5.\n"
".9.497.43.2.6.\n"
"....882.......\n"
"41......5.....\n") == 0);
free(board586334880);
board586334880 = NULL;
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 2, 1, 12) == 1 );
assert( gamma_move(board, 3, 12, 10) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_move(board, 5, 2, 12) == 1 );
assert( gamma_move(board, 6, 12, 6) == 1 );
assert( gamma_free_fields(board, 6) == 142 );
assert( gamma_move(board, 7, 2, 13) == 1 );
assert( gamma_move(board, 8, 8, 12) == 1 );
assert( gamma_move(board, 9, 3, 12) == 0 );
assert( gamma_move(board, 1, 7, 12) == 1 );
assert( gamma_move(board, 1, 10, 13) == 1 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 13, 3) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 7, 2, 12) == 0 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );


char* board183040650 = gamma_board(board);
assert( board183040650 != NULL );
assert( strcmp(board183040650, 
"..............\n"
"317.1.....1387\n"
"7259...182....\n"
".......352..2.\n"
"....31.7966.3.\n"
".6........2..5\n"
"....9.5.4.....\n"
"5.9...5..2...7\n"
"2.56.8...15.61\n"
"1.3....323..7.\n"
".2..7.9....84.\n"
"4..8.69...5254\n"
".9.497.43.226.\n"
"...1882.......\n"
"41......5.....\n") == 0);
free(board183040650);
board183040650 = NULL;
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 1, 14) == 1 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_golden_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_move(board, 6, 11, 1) == 1 );
assert( gamma_free_fields(board, 6) == 128 );
assert( gamma_move(board, 7, 12, 6) == 0 );
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_free_fields(board, 8) == 127 );
assert( gamma_move(board, 9, 11, 2) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_golden_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 12, 11) == 0 );
assert( gamma_move(board, 4, 8, 13) == 1 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_move(board, 6, 5, 11) == 1 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_golden_move(board, 7, 3, 12) == 1 );
assert( gamma_move(board, 8, 10, 9) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 9, 8, 12) == 0 );
assert( gamma_move(board, 9, 11, 9) == 1 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_move(board, 5, 14, 5) == 0 );
assert( gamma_move(board, 5, 12, 13) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_free_fields(board, 6) == 120 );
assert( gamma_move(board, 7, 13, 5) == 1 );
assert( gamma_move(board, 8, 13, 9) == 0 );


char* board885021856 = gamma_board(board);
assert( board885021856 != NULL );
assert( strcmp(board885021856, 
".3............\n"
"317.1...4.1387\n"
"7257...182....\n"
".....6.352..2.\n"
".4..31.7966.3.\n"
".66.......29.5\n"
"....9.5.4.....\n"
"5.9...5..2...7\n"
"2.56.8...15.61\n"
"1.3....323..77\n"
"82..7.9....84.\n"
"4..8769...5254\n"
".9.497.43.226.\n"
"...1882....6..\n"
"41....2.5.....\n") == 0);
free(board885021856);
board885021856 = NULL;
assert( gamma_move(board, 9, 13, 9) == 0 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 3, 11, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );


char* board988326542 = gamma_board(board);
assert( board988326542 != NULL );
assert( strcmp(board988326542, 
".3............\n"
"317.1...4.1387\n"
"7257...182....\n"
".....6.352..2.\n"
".4..31.7966.3.\n"
".66.......29.5\n"
"....9.5.4.....\n"
"5.9...5..2...7\n"
"2.56.86..15.61\n"
"1.3....323..77\n"
"82..7.9....84.\n"
"4..8769...5254\n"
".9.497.43.226.\n"
"...1882....6..\n"
"41....2.5.....\n") == 0);
free(board988326542);
board988326542 = NULL;
assert( gamma_move(board, 8, 13, 5) == 0 );
assert( gamma_move(board, 9, 0, 12) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_free_fields(board, 7) == 116 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 8, 5, 13) == 1 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 10, 6) == 0 );
assert( gamma_move(board, 1, 14, 13) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_move(board, 5, 12, 11) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 6, 11, 12) == 0 );
assert( gamma_move(board, 7, 6, 11) == 1 );
assert( gamma_move(board, 7, 0, 13) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_free_fields(board, 7) == 18 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 3, 7, 14) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 7, 14) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 5, 13, 6) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 6, 5, 14) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_free_fields(board, 6) == 24 );


char* board585496503 = gamma_board(board);
assert( board585496503 != NULL );
assert( strcmp(board585496503, 
".3............\n"
"317.18..4.1387\n"
"7257...182....\n"
".....67352..2.\n"
".4..31.7966.3.\n"
".66.......29.5\n"
"....9.5.4.....\n"
"5.9...5..2...7\n"
"2.56.86..15.61\n"
"1.3....323..77\n"
"82..7.9....84.\n"
"4..8769.465254\n"
".9.497.43.226.\n"
"...1882....6..\n"
"41....2.5.....\n") == 0);
free(board585496503);
board585496503 = NULL;
assert( gamma_move(board, 7, 6, 14) == 0 );
assert( gamma_move(board, 7, 11, 8) == 0 );
assert( gamma_move(board, 8, 12, 7) == 1 );
assert( gamma_move(board, 9, 1, 7) == 1 );
assert( gamma_move(board, 9, 5, 10) == 0 );
assert( gamma_free_fields(board, 9) == 112 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );


char* board556590073 = gamma_board(board);
assert( board556590073 != NULL );
assert( strcmp(board556590073, 
".3............\n"
"317.18..4.1387\n"
"7257...182....\n"
".....67352..2.\n"
".4..31.7966.3.\n"
".66.......29.5\n"
"....9.5.4.....\n"
"599...5..2..87\n"
"2.56.86..15.61\n"
"1.3....323..77\n"
"82..7.9....84.\n"
"4..8769.465254\n"
".9.497.43.226.\n"
"...1882....6..\n"
"41....2.5.....\n") == 0);
free(board556590073);
board556590073 = NULL;
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_golden_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 5, 11, 11) == 0 );
assert( gamma_move(board, 6, 11, 10) == 1 );
assert( gamma_move(board, 6, 13, 2) == 1 );
assert( gamma_move(board, 8, 11, 12) == 1 );
assert( gamma_move(board, 9, 11, 2) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 3, 13) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 13, 14) == 0 );
assert( gamma_move(board, 6, 10, 13) == 0 );
assert( gamma_golden_move(board, 7, 13, 12) == 0 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_move(board, 8, 12, 14) == 1 );
assert( gamma_move(board, 9, 10, 0) == 1 );


char* board889106675 = gamma_board(board);
assert( board889106675 != NULL );
assert( strcmp(board889106675, 
".3..........8.\n"
"317118..4.1387\n"
"7257...182.8..\n"
".....67352..2.\n"
".4..31.796663.\n"
".66.......29.5\n"
"....9.5.4.....\n"
"599..85..2..87\n"
"2.56.86..15.61\n"
"1.3....323..77\n"
"82..7.9....84.\n"
"4..8769.465254\n"
".9.497.43.2266\n"
"...1882....6..\n"
"41....2.5.9...\n") == 0);
free(board889106675);
board889106675 = NULL;
assert( gamma_move(board, 1, 11, 11) == 0 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_move(board, 6, 9, 12) == 0 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_move(board, 7, 6, 10) == 1 );
assert( gamma_move(board, 8, 14, 5) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 9, 3, 14) == 1 );
assert( gamma_free_fields(board, 9) == 103 );
assert( gamma_golden_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_golden_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board903896969 = gamma_board(board);
assert( board903896969 != NULL );
assert( strcmp(board903896969, 
".3.9........8.\n"
"317118..4.1387\n"
"7257...182.8..\n"
".....67352..2.\n"
".4..317796663.\n"
".66.......29.5\n"
"....9.5.4.....\n"
"599..85..2..87\n"
"2.56.86..15.61\n"
"1.3....323..77\n"
"82..7.9....84.\n"
"4..8769.465254\n"
".9.497.43.2266\n"
"...1882....6..\n"
"41....2.5.9...\n") == 0);
free(board903896969);
board903896969 = NULL;
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_free_fields(board, 6) == 23 );
assert( gamma_golden_move(board, 6, 5, 10) == 1 );
assert( gamma_move(board, 7, 4, 9) == 1 );
assert( gamma_move(board, 8, 14, 4) == 0 );
assert( gamma_move(board, 8, 13, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 13 );
assert( gamma_move(board, 9, 3, 7) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 2, 14, 13) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 6, 13, 1) == 1 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );


char* board486147976 = gamma_board(board);
assert( board486147976 != NULL );
assert( strcmp(board486147976, 
".3.9........8.\n"
"317118..4.1387\n"
"7257...182.8..\n"
".....67352..2.\n"
".4..367796663.\n"
".66.7.....29.5\n"
"....9.5.4.....\n"
"5999.85..2..87\n"
"2.56.86..15.61\n"
"1.3....323..77\n"
"82..7.9....84.\n"
"4..8769.465254\n"
".9.497.43.2266\n"
"...1882....6.6\n"
"41....2.5.9...\n") == 0);
free(board486147976);
board486147976 = NULL;
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_golden_move(board, 9, 5, 8) == 0 );


char* board663497497 = gamma_board(board);
assert( board663497497 != NULL );
assert( strcmp(board663497497, 
".3.9........8.\n"
"317118..4.1387\n"
"7257...182.8..\n"
".....67352..2.\n"
".4..367796663.\n"
".66.7.....29.5\n"
"....9.5.4.....\n"
"5999.85..2..87\n"
"2.56.86..15.61\n"
"1.3....323..77\n"
"82..7.9....84.\n"
"4..8769.465254\n"
".9.497.43.2266\n"
"...1882....6.6\n"
"41....2.5.9...\n") == 0);
free(board663497497);
board663497497 = NULL;
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 2, 12, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 5, 4, 13) == 0 );
assert( gamma_move(board, 5, 9, 14) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 7, 14, 11) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );


char* board643079927 = gamma_board(board);
assert( board643079927 != NULL );
assert( strcmp(board643079927, 
".3.9........8.\n"
"317118..4.1387\n"
"7257...182.8..\n"
".....67352..2.\n"
".4..367796663.\n"
".66.7.....29.5\n"
"....9.5.4.....\n"
"5999.85..2..87\n"
"2.56.86..15.61\n"
"1.3....323..77\n"
"82..7.9....84.\n"
"4..8769.465254\n"
".9.497.43.2266\n"
"...1882....6.6\n"
"41....215.9...\n") == 0);
free(board643079927);
board643079927 = NULL;
assert( gamma_move(board, 8, 11, 11) == 1 );
assert( gamma_move(board, 8, 11, 4) == 0 );
assert( gamma_move(board, 9, 8, 5) == 0 );
assert( gamma_free_fields(board, 9) == 98 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 2, 10, 13) == 0 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 13, 13) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 8, 9, 12) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 9, 1, 12) == 0 );
assert( gamma_busy_fields(board, 9) == 12 );
assert( gamma_move(board, 1, 14, 11) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );


char* board206780488 = gamma_board(board);
assert( board206780488 != NULL );
assert( strcmp(board206780488, 
".3.9........8.\n"
"317118..4.1387\n"
"7257...182.8..\n"
".....67352.82.\n"
".4..367796663.\n"
".66.7.....29.5\n"
"....9.5.4.....\n"
"5999.85..2..87\n"
"2.56.86..15.61\n"
"1.3....323..77\n"
"82..7.9....84.\n"
"4..8769.465254\n"
".9.497.43.2266\n"
".1.1882....6.6\n"
"41....215.9...\n") == 0);
free(board206780488);
board206780488 = NULL;
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_move(board, 3, 12, 10) == 0 );
assert( gamma_move(board, 4, 14, 11) == 0 );
assert( gamma_free_fields(board, 4) == 19 );


char* board240000453 = gamma_board(board);
assert( board240000453 != NULL );
assert( strcmp(board240000453, 
".3.9........8.\n"
"317118..4.1387\n"
"7257...182.8..\n"
".....67352.82.\n"
".4..367796663.\n"
".66.7.....29.5\n"
"....9.5.4.....\n"
"5999.85..2..87\n"
"2.56.86..15.61\n"
"1.3....323..77\n"
"82..7.9....84.\n"
"4..8769.465254\n"
".9.497.43.2266\n"
".1.1882....6.6\n"
"41....215.9...\n") == 0);
free(board240000453);
board240000453 = NULL;
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 10, 13) == 0 );
assert( gamma_move(board, 8, 2, 2) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 9, 14, 2) == 0 );
assert( gamma_move(board, 1, 10, 10) == 0 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board272758919 = gamma_board(board);
assert( board272758919 != NULL );
assert( strcmp(board272758919, 
".3.9........8.\n"
"317118..4.1387\n"
"7257...182.8..\n"
".....67352.82.\n"
".4..367796663.\n"
".66.7.....29.5\n"
"....9.5.4.....\n"
"5999.85..2..87\n"
"2.56.86..15.61\n"
"1.3....323..77\n"
"82..7.9....84.\n"
"4..8769.465254\n"
".9.497.43.2266\n"
".1.1882....6.6\n"
"41....215.9...\n") == 0);
free(board272758919);
board272758919 = NULL;
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );


char* board210659507 = gamma_board(board);
assert( board210659507 != NULL );
assert( strcmp(board210659507, 
".3.9........8.\n"
"317118..4.1387\n"
"7257...182.8..\n"
".....67352.82.\n"
".4..367796663.\n"
".66.7.....29.5\n"
"....9.5.4.....\n"
"5999.85..2..87\n"
"2.56.86..15.61\n"
"1.3....323..77\n"
"82..7.9....84.\n"
"4..8769.465254\n"
".9.497.43.2266\n"
".1.1882....6.6\n"
"41....215.9...\n") == 0);
free(board210659507);
board210659507 = NULL;
assert( gamma_move(board, 5, 2, 14) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 7, 13, 8) == 1 );
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_move(board, 8, 3, 14) == 0 );
assert( gamma_free_fields(board, 8) == 20 );
assert( gamma_move(board, 9, 11, 1) == 0 );
assert( gamma_move(board, 9, 3, 14) == 0 );
assert( gamma_move(board, 1, 14, 10) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_golden_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );


char* board934382608 = gamma_board(board);
assert( board934382608 != NULL );
assert( strcmp(board934382608, 
".3.9........8.\n"
"317118..4.1387\n"
"7257...182.8..\n"
".....67352.82.\n"
".4..367796663.\n"
".66.7.....29.5\n"
"....9.5.4....7\n"
"5999.85..2..87\n"
"2.56.86..15.61\n"
"1.3....323..77\n"
"82..7.9....84.\n"
"4..8769.465254\n"
".9.497.43.2266\n"
".1.1882....6.6\n"
"41....215.9...\n") == 0);
free(board934382608);
board934382608 = NULL;
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_free_fields(board, 6) == 22 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 7, 12) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 14 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_move(board, 9, 8, 1) == 1 );


char* board679907099 = gamma_board(board);
assert( board679907099 != NULL );
assert( strcmp(board679907099, 
".3.9........8.\n"
"317118..4.1387\n"
"7257...182.8..\n"
".....67352.82.\n"
".4..367796663.\n"
".66.7.....29.5\n"
"....9.5.4....7\n"
"5999.85..2..87\n"
"2.56.86..15.61\n"
"1.3....323..77\n"
"82..7.9....84.\n"
"4..8769.465254\n"
".9.497.43.2266\n"
".1.1882.9..6.6\n"
"41....215.9...\n") == 0);
free(board679907099);
board679907099 = NULL;
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );


char* board542861512 = gamma_board(board);
assert( board542861512 != NULL );
assert( strcmp(board542861512, 
".3.9........8.\n"
"317118..4.1387\n"
"7257...182.8..\n"
".....67352.82.\n"
".4..367796663.\n"
".66.7.....29.5\n"
"....9.5.4....7\n"
"5999.85..2..87\n"
"2.56.86..15.61\n"
"1.3....323..77\n"
"82..7.9....84.\n"
"4..8769.465254\n"
".9.497.43.2266\n"
".1.1882.9..6.6\n"
"41....215.9...\n") == 0);
free(board542861512);
board542861512 = NULL;
assert( gamma_move(board, 3, 14, 10) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 7, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 6, 6, 13) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 8, 7, 13) == 0 );
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_move(board, 9, 4, 12) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 5, 12, 12) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 4, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 14 );
assert( gamma_move(board, 9, 10, 11) == 0 );
assert( gamma_move(board, 9, 10, 1) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 5, 11) == 0 );
assert( gamma_move(board, 8, 10, 13) == 0 );
assert( gamma_move(board, 8, 12, 9) == 0 );
assert( gamma_move(board, 9, 8, 5) == 0 );


char* board379894465 = gamma_board(board);
assert( board379894465 != NULL );
assert( strcmp(board379894465, 
".3.9........8.\n"
"317118..4.1387\n"
"7257...182.8..\n"
".....67352.82.\n"
".4..367796663.\n"
".66.7.....29.5\n"
"....9.5.4....7\n"
"5999.85..2..87\n"
"2.56.86..15.61\n"
"1.3....323..77\n"
"82..7.9....84.\n"
"4..8769.465254\n"
".9.497.43.2266\n"
".1.1882.9.96.6\n"
"41....215.9...\n") == 0);
free(board379894465);
board379894465 = NULL;
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_move(board, 6, 11, 6) == 1 );
assert( gamma_move(board, 6, 10, 13) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 7, 9, 14) == 0 );
assert( gamma_free_fields(board, 7) == 18 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 14 );
assert( gamma_move(board, 9, 11, 2) == 0 );
assert( gamma_move(board, 9, 1, 14) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 10, 13) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 7, 13, 13) == 0 );
assert( gamma_move(board, 8, 14, 13) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 9, 14, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 10, 4) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 14, 0) == 0 );


char* board241185101 = gamma_board(board);
assert( board241185101 != NULL );
assert( strcmp(board241185101, 
".3.9........8.\n"
"317118..4.1387\n"
"7257...182.8..\n"
".....67352.82.\n"
".4..367796663.\n"
".66.7.....29.5\n"
"....9.5.4....7\n"
"5999.85..2..87\n"
"2.56.86..15661\n"
"1.3....323..77\n"
"82..7.9....84.\n"
"4..8769.465254\n"
".9.497.43.2266\n"
".1.1882.9.96.6\n"
"41....215.9...\n") == 0);
free(board241185101);
board241185101 = NULL;
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 6, 13, 7) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 7, 12, 8) == 1 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 8, 2, 2) == 0 );
assert( gamma_move(board, 9, 6, 8) == 0 );
assert( gamma_move(board, 9, 3, 13) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_golden_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 10, 13) == 0 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 8, 13, 11) == 0 );
assert( gamma_move(board, 8, 9, 11) == 0 );
assert( gamma_move(board, 9, 11, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 10, 13) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 4, 13, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 9, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 13) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 9, 8) == 0 );
assert( gamma_move(board, 9, 14, 10) == 0 );
assert( gamma_move(board, 9, 3, 11) == 0 );
assert( gamma_busy_fields(board, 9) == 14 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 11, 13) == 0 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 9, 5, 7) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );


char* board949383693 = gamma_board(board);
assert( board949383693 != NULL );
assert( strcmp(board949383693, 
".3.9........8.\n"
"317118..4.1387\n"
"7257...182.8..\n"
".....67352.82.\n"
".4..367796663.\n"
".66.7.....29.5\n"
"....9.5.4...77\n"
"5999.85..2..87\n"
"2.56.86..15661\n"
"1.3...6323..77\n"
"82..7.9....84.\n"
"4..8769.465254\n"
".9.497.43.2266\n"
".111882.9.96.6\n"
"41....215.9...\n") == 0);
free(board949383693);
board949383693 = NULL;
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 11, 14) == 0 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 6, 7) == 0 );


char* board208685059 = gamma_board(board);
assert( board208685059 != NULL );
assert( strcmp(board208685059, 
".3.9........8.\n"
"317118..4.1387\n"
"7257...182.8..\n"
".....67352.82.\n"
".4..367796663.\n"
".66.7.....29.5\n"
"....9.5.4...77\n"
"5999.85..2..87\n"
"2.56.86..15661\n"
"1.3...6323..77\n"
"82..7.9....84.\n"
"4..8769.465254\n"
".9.497.43.2266\n"
".111882.9.96.6\n"
"41....215.9...\n") == 0);
free(board208685059);
board208685059 = NULL;
assert( gamma_move(board, 6, 12, 10) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 14 );
assert( gamma_move(board, 9, 0, 2) == 1 );
assert( gamma_busy_fields(board, 9) == 15 );
assert( gamma_move(board, 1, 14, 13) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_move(board, 3, 12, 13) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 14, 7) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 6, 5, 9) == 1 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 1, 14) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );


char* board303427305 = gamma_board(board);
assert( board303427305 != NULL );
assert( strcmp(board303427305, 
".3.9........8.\n"
"317118..4.1387\n"
"7257...182.8..\n"
".....67352.82.\n"
".4..367796663.\n"
".66.76....29.5\n"
"....9.5142..77\n"
"5999.85..2..87\n"
"2.56.86..15661\n"
"1.3...6323..77\n"
"82..779....84.\n"
"4..8769.465254\n"
"99.497.43.2266\n"
".111882.9.96.6\n"
"41....215.9...\n") == 0);
free(board303427305);
board303427305 = NULL;
assert( gamma_move(board, 7, 10, 14) == 0 );
assert( gamma_move(board, 8, 3, 14) == 0 );
assert( gamma_move(board, 9, 7, 10) == 0 );
assert( gamma_move(board, 9, 9, 3) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_golden_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 10, 14) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_free_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 0, 13) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 14, 11) == 0 );
assert( gamma_move(board, 9, 11, 1) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_move(board, 5, 7, 12) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 9) == 0 );
assert( gamma_move(board, 9, 12, 10) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 6, 13, 6) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 4, 9) == 0 );


char* board851544370 = gamma_board(board);
assert( board851544370 != NULL );
assert( strcmp(board851544370, 
".3.9........8.\n"
"317118..4.1387\n"
"7257...182.8..\n"
".....67352.82.\n"
".4..367796663.\n"
".66.76....29.5\n"
"....9.5142..77\n"
"5999.85..2..87\n"
"2.56.86..15661\n"
"1.3..76323..77\n"
"82..779....84.\n"
"4..8769.465254\n"
"99.497.43.2266\n"
".111882.9.96.6\n"
"41....215.9...\n") == 0);
free(board851544370);
board851544370 = NULL;
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_golden_move(board, 9, 0, 8) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_golden_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_move(board, 7, 13, 1) == 0 );
assert( gamma_move(board, 8, 12, 10) == 0 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 9, 5, 11) == 0 );
assert( gamma_move(board, 9, 13, 9) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 3, 14, 10) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 5, 14, 13) == 0 );
assert( gamma_move(board, 6, 12, 12) == 0 );
assert( gamma_move(board, 7, 14, 2) == 0 );
assert( gamma_move(board, 7, 8, 13) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 13, 9) == 0 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_free_fields(board, 9) == 20 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_free_fields(board, 6) == 20 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 6, 13) == 0 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 14, 8) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 6, 14, 10) == 0 );
assert( gamma_move(board, 7, 12, 10) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 14, 7) == 0 );


char* board305565650 = gamma_board(board);
assert( board305565650 != NULL );
assert( strcmp(board305565650, 
".3.9........8.\n"
"317118..4.1387\n"
"7257...182.8..\n"
".....67352.82.\n"
".4..367796663.\n"
".66.76....29.5\n"
"..6.9.5142..77\n"
"5999.85..2..87\n"
"2.56.86..15661\n"
"1.33.76321..77\n"
"82..779....84.\n"
"4..8769.465254\n"
"999497.43.2266\n"
"111188229.96.6\n"
"41....215.9...\n") == 0);
free(board305565650);
board305565650 = NULL;
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_free_fields(board, 1) == 15 );


char* board921167801 = gamma_board(board);
assert( board921167801 != NULL );
assert( strcmp(board921167801, 
".3.9........8.\n"
"317118..4.1387\n"
"7257...182.8..\n"
".....67352.82.\n"
".4..367796663.\n"
".66.76....29.5\n"
"..6.9.5142..77\n"
"5999.85..2..87\n"
"2.56.86..15661\n"
"1.33.76321..77\n"
"82..779....84.\n"
"4..8769.465254\n"
"999497.43.2266\n"
"111188229.96.6\n"
"41....215.9...\n") == 0);
free(board921167801);
board921167801 = NULL;
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );


char* board630844079 = gamma_board(board);
assert( board630844079 != NULL );
assert( strcmp(board630844079, 
".3.9........8.\n"
"317118..4.1387\n"
"7257...182.8..\n"
".....67352.82.\n"
".4..367796663.\n"
".66.76....29.5\n"
"..6.9.5142..77\n"
"5999.85..2..87\n"
"2.56.86..15661\n"
"1.33.76321..77\n"
"82..779....84.\n"
"4..8769.465254\n"
"999497.43.2266\n"
"111188229.96.6\n"
"41....215.9...\n") == 0);
free(board630844079);
board630844079 = NULL;
assert( gamma_move(board, 3, 10, 14) == 1 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 5, 12, 9) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_free_fields(board, 6) == 20 );


gamma_delete(board);

    return 0;
}
