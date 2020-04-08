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
uuid: 431117846
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 5, 8, 11);
assert( board != NULL );


assert( gamma_free_fields(board, 2) == 70 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_free_fields(board, 3) == 70 );


char* board660115651 = gamma_board(board);
assert( board660115651 != NULL );
assert( strcmp(board660115651, 
"..............\n"
"..............\n"
"..............\n"
"..............\n"
"..............\n") == 0);
free(board660115651);
board660115651 = NULL;
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 5, 10, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 4) == 1 );
assert( gamma_free_fields(board, 4) == 66 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 13, 0) == 1 );
assert( gamma_move(board, 7, 11, -1) == 0 );
assert( gamma_move(board, 8, 10, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );


char* board715234251 = gamma_board(board);
assert( board715234251 != NULL );
assert( strcmp(board715234251, 
".............3\n"
"..5...........\n"
".2.4..........\n"
"....5....18...\n"
".........45..6\n") == 0);
free(board715234251);
board715234251 = NULL;
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 8, -1, -1) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 10, 3) == 1 );
assert( gamma_free_fields(board, 7) == 56 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_golden_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_golden_move(board, 7, 0, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 12, 1) == 1 );
assert( gamma_move(board, 7, 9, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_free_fields(board, 4) == 49 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 7, 14, -1) == 0 );
assert( gamma_move(board, 8, 14, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_free_fields(board, 4) == 47 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 13, -1) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 3, 7) == 0 );


char* board415667516 = gamma_board(board);
assert( board415667516 != NULL );
assert( strcmp(board415667516, 
"35......3....3\n"
"7.5.52.1..7...\n"
".274..4..7....\n"
".6.35....18.6.\n"
"5.6...52.452.6\n") == 0);
free(board415667516);
board415667516 = NULL;
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_free_fields(board, 5) == 41 );
assert( gamma_free_fields(board, 8) == 41 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 11, -1) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 2) == 1 );
assert( gamma_move(board, 7, 2, -1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 13, -1) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_free_fields(board, 6) == 37 );
assert( gamma_golden_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_move(board, 5, 13, -1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 14, 3) == 0 );
assert( gamma_free_fields(board, 7) == 36 );
assert( gamma_move(board, 8, 8, 0) == 1 );
assert( gamma_move(board, 1, 13, 3) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 3) == 1 );
assert( gamma_move(board, 6, 13, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 9, -1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 1, 12, 4) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );


char* board375770807 = gamma_board(board);
assert( board375770807 != NULL );
assert( strcmp(board375770807, 
"35..152.3...13\n"
"7.5.52.1..75.1\n"
".274..43.7..66\n"
"56.3523..18.6.\n"
"5.6...528452.6\n") == 0);
free(board375770807);
board375770807 = NULL;
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );


char* board206485986 = gamma_board(board);
assert( board206485986 != NULL );
assert( strcmp(board206485986, 
"35..152.3...13\n"
"7.5.52.1..75.1\n"
".274..43.7..66\n"
"56.3523..18.6.\n"
"5.62..528452.6\n") == 0);
free(board206485986);
board206485986 = NULL;
assert( gamma_move(board, 4, 12, 3) == 1 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_golden_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_golden_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 8, -1) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 7, 14, -1) == 0 );
assert( gamma_move(board, 8, 10, 4) == 1 );
assert( gamma_golden_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 10, -1) == 0 );


gamma_delete(board);

    return 0;
}
