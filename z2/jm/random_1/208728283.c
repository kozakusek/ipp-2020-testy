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
uuid: 208728283
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 18, 7, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 12) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_golden_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_free_fields(board, 5) == 87 );
assert( gamma_move(board, 6, 1, 11) == 1 );
assert( gamma_move(board, 7, 3, -1) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_free_fields(board, 1) == 85 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 3, 3, 11) == 1 );


char* board798123257 = gamma_board(board);
assert( board798123257 != NULL );
assert( strcmp(board798123257, 
".....\n"
".....\n"
".....\n"
".....\n"
".....\n"
"1....\n"
".6.3.\n"
".....\n"
".4...\n"
".....\n"
".....\n"
"1..5.\n"
".....\n"
".....\n"
".....\n"
".....\n"
".....\n"
".....\n") == 0);
free(board798123257);
board798123257 = NULL;
assert( gamma_move(board, 5, 1, -1) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_free_fields(board, 2) == 83 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_free_fields(board, 5) == 81 );


char* board967812911 = gamma_board(board);
assert( board967812911 != NULL );
assert( strcmp(board967812911, 
".....\n"
".....\n"
".....\n"
".....\n"
".....\n"
"1....\n"
".6.3.\n"
".2...\n"
".43..\n"
".....\n"
"....5\n"
"1..5.\n"
".....\n"
".....\n"
".....\n"
".....\n"
".....\n"
".....\n") == 0);
free(board967812911);
board967812911 = NULL;
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_free_fields(board, 7) == 79 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board721771646 = gamma_board(board);
assert( board721771646 != NULL );
assert( strcmp(board721771646, 
".....\n"
".....\n"
".....\n"
".....\n"
".....\n"
"1....\n"
".6.3.\n"
".2...\n"
".43..\n"
".....\n"
"7...5\n"
"1..5.\n"
".....\n"
".6...\n"
".....\n"
".....\n"
".....\n"
".....\n") == 0);
free(board721771646);
board721771646 = NULL;
assert( gamma_free_fields(board, 2) == 79 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 1, 15) == 1 );
assert( gamma_golden_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, -1, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_free_fields(board, 6) == 77 );
assert( gamma_move(board, 7, -1, 3) == 0 );
assert( gamma_golden_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_free_fields(board, 4) == 76 );
assert( gamma_move(board, 5, -1, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 12) == 1 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_free_fields(board, 2) == 74 );
assert( gamma_move(board, 3, 1, 14) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 2, 13) == 1 );
assert( gamma_move(board, 7, 0, 11) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_golden_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_free_fields(board, 6) == 67 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 3, -1, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 7, 4, 3) == 1 );


char* board560145721 = gamma_board(board);
assert( board560145721 != NULL );
assert( strcmp(board560145721, 
".....\n"
".....\n"
".4...\n"
".3...\n"
"..6..\n"
"1...7\n"
"76.3.\n"
".2.6.\n"
"2432.\n"
"..1..\n"
"7...5\n"
"13.55\n"
".....\n"
"76...\n"
"....7\n"
"3.3.1\n"
".6.4.\n"
"5....\n") == 0);
free(board560145721);
board560145721 = NULL;
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 16) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, -1, 18) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 3, 18) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, -1, 15) == 0 );
assert( gamma_move(board, 4, 3, 17) == 1 );
assert( gamma_move(board, 6, 5, 16) == 0 );
assert( gamma_move(board, 7, 0, 17) == 1 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 3, 1, 12) == 1 );
assert( gamma_move(board, 4, 0, 14) == 1 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 4, 2, 14) == 1 );
assert( gamma_golden_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 6, 4, 18) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 3, 12) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, -1, 8) == 0 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_move(board, 6, 4, 14) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );


char* board297636454 = gamma_board(board);
assert( board297636454 != NULL );
assert( strcmp(board297636454, 
"7..4.\n"
"...5.\n"
".4...\n"
"434.6\n"
"..6..\n"
"13.47\n"
"76.3.\n"
".2.6.\n"
"2432.\n"
"..126\n"
"7...5\n"
"13755\n"
"3..1.\n"
"76...\n"
"....7\n"
"3.3.1\n"
".6.4.\n"
"54...\n") == 0);
free(board297636454);
board297636454 = NULL;
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board556254828 = gamma_board(board);
assert( board556254828 != NULL );
assert( strcmp(board556254828, 
"7..4.\n"
"...5.\n"
".4...\n"
"434.6\n"
"..6..\n"
"13.47\n"
"76.3.\n"
".2.63\n"
"2432.\n"
"..126\n"
"7...5\n"
"13755\n"
"3..1.\n"
"76...\n"
".4..7\n"
"3.3.1\n"
".6.4.\n"
"54...\n") == 0);
free(board556254828);
board556254828 = NULL;
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 5, 15) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, -1, 4) == 0 );
assert( gamma_move(board, 1, 2, 15) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 3, 14) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 15) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_free_fields(board, 7) == 39 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 2, 16) == 1 );
assert( gamma_move(board, 7, 4, 0) == 1 );


char* board319414033 = gamma_board(board);
assert( board319414033 != NULL );
assert( strcmp(board319414033, 
"7..4.\n"
"..65.\n"
".41..\n"
"43426\n"
"..6..\n"
"13.47\n"
"76.3.\n"
".2.63\n"
"2432.\n"
"..126\n"
"77..5\n"
"13755\n"
"3.61.\n"
"76...\n"
".4..7\n"
"3.3.1\n"
".6.4.\n"
"544.7\n") == 0);
free(board319414033);
board319414033 = NULL;
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 2, 11) == 1 );
assert( gamma_move(board, 3, -1, 12) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 5, 15) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );


gamma_delete(board);

    return 0;
}
