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
uuid: 900675913
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 3, 7);
assert( board != NULL );


assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_free_fields(board, 1) == 64 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_golden_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_free_fields(board, 3) == 56 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_free_fields(board, 2) == 54 );
assert( gamma_move(board, 3, 4, 4) == 1 );


char* board367500535 = gamma_board(board);
assert( board367500535 != NULL );
assert( strcmp(board367500535, 
".......3.\n"
"....1.1..\n"
".........\n"
".2..3..3.\n"
".1.11322.\n"
".2.3.....\n"
"..1......\n"
"3..2..12.\n") == 0);
free(board367500535);
board367500535 = NULL;
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );


char* board593942335 = gamma_board(board);
assert( board593942335 != NULL );
assert( strcmp(board593942335, 
"..2....3.\n"
"....1.1..\n"
".........\n"
".2..3..3.\n"
".1.11322.\n"
".2.3....3\n"
"..1......\n"
"3..2..12.\n") == 0);
free(board593942335);
board593942335 = NULL;
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_free_fields(board, 1) == 51 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );


char* board801733815 = gamma_board(board);
assert( board801733815 != NULL );
assert( strcmp(board801733815, 
"..2....3.\n"
"....1.1..\n"
"2........\n"
".2..3..3.\n"
".1.11322.\n"
".2.3....3\n"
"..1......\n"
"3..2..12.\n") == 0);
free(board801733815);
board801733815 = NULL;
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 7, 8) == 0 );


char* board826051843 = gamma_board(board);
assert( board826051843 != NULL );
assert( strcmp(board826051843, 
"..2....3.\n"
"....1.1..\n"
"22.......\n"
".2..3..3.\n"
".1.11322.\n"
".2.3....3\n"
"..1...1..\n"
"3..2..12.\n") == 0);
free(board826051843);
board826051843 = NULL;
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_free_fields(board, 3) == 17 );


gamma_delete(board);

    return 0;
}
