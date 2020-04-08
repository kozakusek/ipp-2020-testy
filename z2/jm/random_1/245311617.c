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
uuid: 245311617
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 20, 9, 12);
assert( board != NULL );




char* board290324316 = gamma_board(board);
assert( board290324316 != NULL );
assert( strcmp(board290324316, 
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n") == 0);
free(board290324316);
board290324316 = NULL;
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_golden_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 4, 1, 18) == 1 );
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_free_fields(board, 5) == 58 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board574933274 = gamma_board(board);
assert( board574933274 != NULL );
assert( strcmp(board574933274, 
"...\n"
".4.\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
".2.\n"
"...\n"
"...\n"
"...\n"
"...\n") == 0);
free(board574933274);
board574933274 = NULL;
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 8, 1, 9) == 1 );
assert( gamma_move(board, 9, 0, 7) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, -1, 9) == 0 );
assert( gamma_move(board, 5, 3, 16) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_move(board, 8, -1, 7) == 0 );
assert( gamma_golden_move(board, 8, 18, 1) == 0 );
assert( gamma_move(board, 9, -1, 15) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_free_fields(board, 1) == 51 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 3, -1, 19) == 0 );
assert( gamma_free_fields(board, 3) == 51 );


char* board449441469 = gamma_board(board);
assert( board449441469 != NULL );
assert( strcmp(board449441469, 
"...\n"
".4.\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
".3.\n"
".8.\n"
".47\n"
"9..\n"
"...\n"
"...\n"
".2.\n"
"...\n"
"...\n"
".2.\n"
"1..\n") == 0);
free(board449441469);
board449441469 = NULL;
assert( gamma_move(board, 4, 1, 15) == 1 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 8, 2, 13) == 1 );
assert( gamma_free_fields(board, 8) == 48 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_free_fields(board, 1) == 48 );


char* board378746040 = gamma_board(board);
assert( board378746040 != NULL );
assert( strcmp(board378746040, 
"...\n"
".4.\n"
"...\n"
"...\n"
".4.\n"
"...\n"
"..8\n"
"...\n"
"...\n"
".3.\n"
".8.\n"
".47\n"
"9..\n"
"7..\n"
"...\n"
".2.\n"
"...\n"
"...\n"
".2.\n"
"1..\n") == 0);
free(board378746040);
board378746040 = NULL;
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 5, 2, 18) == 1 );


char* board820103010 = gamma_board(board);
assert( board820103010 != NULL );
assert( strcmp(board820103010, 
"...\n"
".45\n"
"...\n"
"...\n"
".4.\n"
"...\n"
"..8\n"
"...\n"
"...\n"
".3.\n"
".8.\n"
".47\n"
"9..\n"
"7..\n"
"...\n"
".2.\n"
"...\n"
"...\n"
".2.\n"
"1.3\n") == 0);
free(board820103010);
board820103010 = NULL;
assert( gamma_move(board, 6, 2, 20) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_free_fields(board, 8) == 46 );
assert( gamma_move(board, 9, -1, 9) == 0 );
assert( gamma_free_fields(board, 9) == 46 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 12) == 1 );
assert( gamma_golden_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_free_fields(board, 8) == 42 );
assert( gamma_move(board, 9, 2, 19) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );


char* board715479456 = gamma_board(board);
assert( board715479456 != NULL );
assert( strcmp(board715479456, 
"..9\n"
".45\n"
"...\n"
"...\n"
".4.\n"
"...\n"
"..8\n"
"3..\n"
"...\n"
".3.\n"
"486\n"
"147\n"
"9.7\n"
"7..\n"
"...\n"
".2.\n"
"...\n"
"...\n"
".2.\n"
"1.3\n") == 0);
free(board715479456);
board715479456 = NULL;
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_free_fields(board, 4) == 38 );
assert( gamma_golden_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_free_fields(board, 5) == 38 );
assert( gamma_move(board, 6, 3, 17) == 0 );


gamma_delete(board);

    return 0;
}
