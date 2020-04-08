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
uuid: 860333986
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 5, 11, 14);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_free_fields(board, 6) == 52 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 9, 7, 3) == 1 );
assert( gamma_move(board, 9, 10, 3) == 1 );
assert( gamma_move(board, 10, 10, 1) == 1 );
assert( gamma_move(board, 10, 1, 4) == 1 );
assert( gamma_move(board, 11, 4, 8) == 0 );
assert( gamma_golden_move(board, 11, 3, 4) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 0) == 0 );


char* board610264912 = gamma_board(board);
assert( board610264912 != NULL );
assert( strcmp(board610264912, 
".10.........\n"
".7..5..9..9\n"
"......6...2\n"
".41......210\n"
"..6....1...\n") == 0);
free(board610264912);
board610264912 = NULL;
assert( gamma_move(board, 9, 7, 4) == 1 );
assert( gamma_move(board, 10, 1, 4) == 0 );
assert( gamma_move(board, 11, 0, 0) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 9, 2) == 1 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_move(board, 10, 2, 1) == 0 );
assert( gamma_move(board, 11, 4, 8) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_free_fields(board, 8) == 29 );
assert( gamma_move(board, 9, 0, 10) == 0 );
assert( gamma_move(board, 9, 8, 3) == 1 );
assert( gamma_move(board, 11, 4, 9) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_move(board, 10, 0, 6) == 0 );
assert( gamma_move(board, 10, 7, 1) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 2, 0) == 0 );
assert( gamma_move(board, 11, 1, 1) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_golden_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 8, 6, 3) == 1 );


char* board762671323 = gamma_board(board);
assert( board762671323 != NULL );
assert( strcmp(board762671323, 
"81047.5.95..\n"
".76256899.9\n"
"..31.36..62\n"
"241..3110.210\n"
"11.6.2..14..\n") == 0);
free(board762671323);
board762671323 = NULL;
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 10, 1, 3) == 0 );
assert( gamma_move(board, 10, 10, 0) == 1 );
assert( gamma_move(board, 11, 2, 7) == 0 );


char* board535032079 = gamma_board(board);
assert( board535032079 != NULL );
assert( strcmp(board535032079, 
"81047.5.95..\n"
".76256899.9\n"
"..31.36..62\n"
"241..3110.210\n"
"11.6.2..14.10\n") == 0);
free(board535032079);
board535032079 = NULL;
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_free_fields(board, 6) == 17 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 9, 1, 3) == 0 );


char* board687062949 = gamma_board(board);
assert( board687062949 != NULL );
assert( strcmp(board687062949, 
"8104785.95..\n"
".76256899.9\n"
"..31.36..62\n"
"241..3110.210\n"
"11.632.614.10\n") == 0);
free(board687062949);
board687062949 = NULL;
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_free_fields(board, 10) == 16 );
assert( gamma_move(board, 11, 4, 6) == 0 );
assert( gamma_move(board, 11, 6, 2) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 1, 3) == 0 );
assert( gamma_move(board, 10, 8, 1) == 1 );
assert( gamma_move(board, 11, 7, 2) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );


char* board383879854 = gamma_board(board);
assert( board383879854 != NULL );
assert( strcmp(board383879854, 
"8104785.95..\n"
".76256899.9\n"
"..31.3611.62\n"
"241.5311010210\n"
"11.632.614.10\n") == 0);
free(board383879854);
board383879854 = NULL;
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_free_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_free_fields(board, 9) == 11 );
assert( gamma_move(board, 10, 0, 3) == 1 );
assert( gamma_move(board, 10, 3, 1) == 0 );
assert( gamma_move(board, 11, 4, 9) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_free_fields(board, 1) == 10 );


char* board293758377 = gamma_board(board);
assert( board293758377 != NULL );
assert( strcmp(board293758377, 
"8104785.95..\n"
"1076256899.9\n"
"7.31.3611.62\n"
"24165311010210\n"
"11.632.614.10\n") == 0);
free(board293758377);
board293758377 = NULL;
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 10, 7, 2) == 0 );
assert( gamma_move(board, 11, 4, 6) == 0 );


gamma_delete(board);

    return 0;
}
