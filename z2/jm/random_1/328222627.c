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
uuid: 328222627
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 7, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_golden_move(board, 1, 3, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_free_fields(board, 4) == 70 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_free_fields(board, 6) == 69 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );


char* board486169730 = gamma_board(board);
assert( board486169730 != NULL );
assert( strcmp(board486169730, 
".........\n"
"....76...\n"
".........\n"
".........\n"
"..1...3..\n"
".........\n"
".........\n"
"........3\n") == 0);
free(board486169730);
board486169730 = NULL;
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, -1, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board835090859 = gamma_board(board);
assert( board835090859 != NULL );
assert( strcmp(board835090859, 
".........\n"
"....76...\n"
".........\n"
".........\n"
"4.1...3..\n"
".........\n"
".........\n"
"........3\n") == 0);
free(board835090859);
board835090859 = NULL;
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_free_fields(board, 2) == 64 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_golden_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 1, 4) == 1 );


char* board178993405 = gamma_board(board);
assert( board178993405 != NULL );
assert( strcmp(board178993405, 
".........\n"
"....76.5.\n"
".......4.\n"
".77......\n"
"4.1...3..\n"
"....2....\n"
"..3......\n"
"........3\n") == 0);
free(board178993405);
board178993405 = NULL;
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 3, -1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );


char* board971383480 = gamma_board(board);
assert( board971383480 != NULL );
assert( strcmp(board971383480, 
".........\n"
"....76.5.\n"
".......4.\n"
".77..3.2.\n"
"4.1...3..\n"
"....2....\n"
"..3......\n"
"........3\n") == 0);
free(board971383480);
board971383480 = NULL;
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_free_fields(board, 6) == 56 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board576173841 = gamma_board(board);
assert( board576173841 != NULL );
assert( strcmp(board576173841, 
".....5...\n"
"....76.5.\n"
".......4.\n"
".77..3.2.\n"
"4.1..63..\n"
"....2....\n"
"..3......\n"
"........3\n") == 0);
free(board576173841);
board576173841 = NULL;
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_free_fields(board, 1) == 47 );


char* board613660255 = gamma_board(board);
assert( board613660255 != NULL );
assert( strcmp(board613660255, 
"11...5...\n"
"....76.5.\n"
"...5...4.\n"
".77..3.23\n"
"4.1.6633.\n"
"....2.2..\n"
"..3..65..\n"
"........3\n") == 0);
free(board613660255);
board613660255 = NULL;
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_free_fields(board, 4) == 45 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_free_fields(board, 5) == 44 );
assert( gamma_golden_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_free_fields(board, 5) == 42 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 5, -1, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 3) == 0 );


char* board493793406 = gamma_board(board);
assert( board493793406 != NULL );
assert( strcmp(board493793406, 
"11...5...\n"
"7...76.5.\n"
"...5...45\n"
".77..3.23\n"
"4.126633.\n"
"43..2.22.\n"
"..3..65.4\n"
"........3\n") == 0);
free(board493793406);
board493793406 = NULL;
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 6, 4) == 0 );


gamma_delete(board);

    return 0;
}
