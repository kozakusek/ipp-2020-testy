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
uuid: 938935962
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 8, 8, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 4, 11, 4) == 1 );
assert( gamma_move(board, 5, 9, 7) == 1 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_free_fields(board, 5) == 96 );
assert( gamma_golden_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 8, 5, 11) == 0 );
assert( gamma_free_fields(board, 8) == 93 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 7, 9, 3) == 1 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 8, 6, 5) == 1 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_free_fields(board, 1) == 86 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 12, 0) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 7, 7, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 5, 12, 7) == 1 );
assert( gamma_move(board, 5, 7, 7) == 1 );


char* board121958855 = gamma_board(board);
assert( board121958855 != NULL );
assert( strcmp(board121958855, 
".3..5..565..5\n"
"..7.4........\n"
"....6.8......\n"
"183.54.....4.\n"
"..1....7.7...\n"
"155...74.1...\n"
".............\n"
"..6.....2.2.6\n") == 0);
free(board121958855);
board121958855 = NULL;
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_move(board, 7, 2, 12) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_free_fields(board, 6) == 68 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_free_fields(board, 8) == 67 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_free_fields(board, 5) == 63 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 7, 10, 7) == 1 );
assert( gamma_move(board, 8, 6, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_free_fields(board, 5) == 55 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 6, 11, 3) == 1 );


char* board353904949 = gamma_board(board);
assert( board353904949 != NULL );
assert( strcmp(board353904949, 
".3..5.55657.5\n"
".6754..4.23..\n"
"..1.678......\n"
"183654...2.4.\n"
".21...17.7.6.\n"
"15545.74.1...\n"
"5......2.....\n"
"..6..6862.2.6\n") == 0);
free(board353904949);
board353904949 = NULL;
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_free_fields(board, 7) == 53 );
assert( gamma_move(board, 8, 2, 11) == 0 );
assert( gamma_busy_fields(board, 8) == 3 );


char* board679302107 = gamma_board(board);
assert( board679302107 != NULL );
assert( strcmp(board679302107, 
".3..5.55657.5\n"
".6754..4.23..\n"
"..1.6787.....\n"
"183654...2.4.\n"
".21...17.7.6.\n"
"15545.74.1...\n"
"5......2.....\n"
"..6..6862.2.6\n") == 0);
free(board679302107);
board679302107 = NULL;
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 12, 5) == 1 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 5, 12, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );


char* board161459869 = gamma_board(board);
assert( board161459869 != NULL );
assert( strcmp(board161459869, 
".3..5.55657.5\n"
".6754.44.23..\n"
"..1.6787....2\n"
"183654...2.4.\n"
".21...17.7.6.\n"
"15545.74.1...\n"
"5......2.....\n"
"..6..6862.2.6\n") == 0);
free(board161459869);
board161459869 = NULL;
assert( gamma_free_fields(board, 6) == 51 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_free_fields(board, 7) == 51 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 8, 0, 7) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_free_fields(board, 2) == 49 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 7, 10, 5) == 1 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 7, 12, 2) == 1 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_golden_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_free_fields(board, 6) == 40 );
assert( gamma_golden_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_golden_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 12, 7) == 0 );
assert( gamma_free_fields(board, 7) == 40 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 8, 12, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_free_fields(board, 8) == 36 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_golden_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );


char* board621417849 = gamma_board(board);
assert( board621417849 != NULL );
assert( strcmp(board621417849, 
"83.45655657.5\n"
"26754.44.23.1\n"
".11.6787..7.2\n"
"183654...2.4.\n"
"5218..1737.6.\n"
"1554537451..7\n"
"5..4...2....5\n"
"1.6..6862.236\n") == 0);
free(board621417849);
board621417849 = NULL;
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );


char* board447438866 = gamma_board(board);
assert( board447438866 != NULL );
assert( strcmp(board447438866, 
"83.45655657.5\n"
"26754.44.23.1\n"
".11.6787..7.2\n"
"183654...2.4.\n"
"5218..1737.6.\n"
"1554537451..7\n"
"5..4...2....5\n"
"1.6..68624236\n") == 0);
free(board447438866);
board447438866 = NULL;
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 7, 7, 11) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 11) == 0 );
assert( gamma_move(board, 8, 9, 6) == 0 );


char* board389053172 = gamma_board(board);
assert( board389053172 != NULL );
assert( strcmp(board389053172, 
"83.45655657.5\n"
"26754.44.23.1\n"
".1126787..7.2\n"
"183654...2.44\n"
"5218..1737.6.\n"
"15545374514.7\n"
"52.4.2.2....5\n"
"1.6..68624236\n") == 0);
free(board389053172);
board389053172 = NULL;
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 5, 12, 7) == 0 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 10, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 8, 11, 7) == 1 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );


char* board365694797 = gamma_board(board);
assert( board365694797 != NULL );
assert( strcmp(board365694797, 
"8354565565785\n"
"26754.44.23.1\n"
"11126787..7.2\n"
"183654...2644\n"
"52182.1737.6.\n"
"15545374514.7\n"
"52.4.2.2....5\n"
"1762.68624236\n") == 0);
free(board365694797);
board365694797 = NULL;
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_free_fields(board, 7) == 21 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 2, 11, 5) == 1 );
assert( gamma_golden_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 11, 2) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_free_fields(board, 6) == 18 );


char* board995236519 = gamma_board(board);
assert( board995236519 != NULL );
assert( strcmp(board995236519, 
"8354565565785\n"
"26754.44.23.1\n"
"11126787..722\n"
"183654...2644\n"
"52182.1737.6.\n"
"1554537451447\n"
"52.4.2.21...5\n"
"1762.68624236\n") == 0);
free(board995236519);
board995236519 = NULL;
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );


char* board153704852 = gamma_board(board);
assert( board153704852 != NULL );
assert( strcmp(board153704852, 
"8354565565785\n"
"26754244.23.1\n"
"111267872.722\n"
"183654...2644\n"
"52182.1737.6.\n"
"1554537451447\n"
"52.4.2.21...5\n"
"1762.68624236\n") == 0);
free(board153704852);
board153704852 = NULL;
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 12, 3) == 1 );
assert( gamma_free_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_free_fields(board, 2) == 15 );


char* board855806931 = gamma_board(board);
assert( board855806931 != NULL );
assert( strcmp(board855806931, 
"8354565565785\n"
"26754244.23.1\n"
"111267872.722\n"
"183654...2644\n"
"52182.1737.66\n"
"1554537451447\n"
"52.4.2.21...5\n"
"1762.68624236\n") == 0);
free(board855806931);
board855806931 = NULL;
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 8, 11, 1) == 1 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );


char* board386301858 = gamma_board(board);
assert( board386301858 != NULL );
assert( strcmp(board386301858, 
"8354565565785\n"
"26754244.23.1\n"
"111267872.722\n"
"1836541..2644\n"
"52182.1737.66\n"
"1554537451447\n"
"52.4.2.21..85\n"
"1762.68624236\n") == 0);
free(board386301858);
board386301858 = NULL;
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_free_fields(board, 8) == 13 );


gamma_delete(board);

    return 0;
}
