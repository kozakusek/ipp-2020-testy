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
uuid: 199174878
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 9, 10, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_free_fields(board, 4) == 49 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_move(board, 10, 1, 0) == 1 );
assert( gamma_move(board, 10, 1, 5) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );


char* board871742907 = gamma_board(board);
assert( board871742907 != NULL );
assert( strcmp(board871742907, 
"......\n"
"......\n"
"..2...\n"
".10...1\n"
"......\n"
".3....\n"
"......\n"
"..4.6.\n"
".102...\n") == 0);
free(board871742907);
board871742907 = NULL;
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );


char* board137891997 = gamma_board(board);
assert( board137891997 != NULL );
assert( strcmp(board137891997, 
"......\n"
"......\n"
"..2...\n"
".10...1\n"
"..12..\n"
".3..32\n"
"......\n"
"..4.6.\n"
".102...\n") == 0);
free(board137891997);
board137891997 = NULL;
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_move(board, 9, 4, 5) == 1 );


char* board448910395 = gamma_board(board);
assert( board448910395 != NULL );
assert( strcmp(board448910395, 
"......\n"
"......\n"
"..2...\n"
".10..91\n"
"..12..\n"
".3..32\n"
".....8\n"
"..4.6.\n"
".102...\n") == 0);
free(board448910395);
board448910395 = NULL;
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_golden_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 7) == 1 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_free_fields(board, 7) == 35 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 10, 0, 3) == 0 );
assert( gamma_move(board, 10, 4, 0) == 0 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_golden_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_free_fields(board, 3) == 32 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_free_fields(board, 9) == 29 );
assert( gamma_move(board, 10, 1, 6) == 0 );
assert( gamma_move(board, 10, 3, 3) == 1 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_free_fields(board, 6) == 25 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_move(board, 9, 0, 2) == 1 );
assert( gamma_move(board, 10, 2, 4) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_free_fields(board, 6) == 19 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 10, 8, 5) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_free_fields(board, 6) == 18 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_golden_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 10, 8, 2) == 0 );
assert( gamma_move(board, 10, 0, 5) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 8, 2) == 0 );


char* board769749610 = gamma_board(board);
assert( board769749610 != NULL );
assert( strcmp(board769749610, 
"7..5..\n"
"...817\n"
"1325.7\n"
"4105391\n"
".112..\n"
"5321032\n"
"9.27.8\n"
".44.62\n"
"110241.\n") == 0);
free(board769749610);
board769749610 = NULL;
assert( gamma_move(board, 7, 4, 5) == 0 );


char* board567938437 = gamma_board(board);
assert( board567938437 != NULL );
assert( strcmp(board567938437, 
"7..5..\n"
"...817\n"
"1325.7\n"
"4105391\n"
".112..\n"
"5321032\n"
"9.27.8\n"
".44.62\n"
"110241.\n") == 0);
free(board567938437);
board567938437 = NULL;
assert( gamma_move(board, 9, 4, 4) == 1 );
assert( gamma_move(board, 10, 1, 4) == 0 );
assert( gamma_move(board, 10, 2, 1) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_free_fields(board, 8) == 12 );
assert( gamma_golden_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 10, 2, 4) == 0 );
assert( gamma_move(board, 10, 4, 2) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 9, 1, 1) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_free_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_free_fields(board, 8) == 11 );


gamma_delete(board);

    return 0;
}
