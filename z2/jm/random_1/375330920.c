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
uuid: 375330920
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 10, 4, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_free_fields(board, 3) == 77 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );


char* board493153998 = gamma_board(board);
assert( board493153998 != NULL );
assert( strcmp(board493153998, 
"1...4....\n"
"4.22.....\n"
"4..2.4...\n"
"..3......\n"
".........\n"
".........\n"
"23....131\n"
"......3..\n"
"..2.1....\n"
"4...22...\n") == 0);
free(board493153998);
board493153998 = NULL;
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_move(board, 2, -1, 0) == 0 );


char* board832099533 = gamma_board(board);
assert( board832099533 != NULL );
assert( strcmp(board832099533, 
"1...4....\n"
"4.22.....\n"
"4..2.4...\n"
"..3......\n"
".........\n"
".........\n"
"23....131\n"
"......3..\n"
"..2.1....\n"
"4...22...\n") == 0);
free(board832099533);
board832099533 = NULL;
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );


char* board267296998 = gamma_board(board);
assert( board267296998 != NULL );
assert( strcmp(board267296998, 
"11..4....\n"
"4.22.....\n"
"4..2.4...\n"
"..3......\n"
".........\n"
".........\n"
"23....131\n"
"......3..\n"
"..2.1....\n"
"4...22...\n") == 0);
free(board267296998);
board267296998 = NULL;
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, -1, 10) == 0 );
assert( gamma_free_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_golden_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );


char* board514417613 = gamma_board(board);
assert( board514417613 != NULL );
assert( strcmp(board514417613, 
"11..4....\n"
"4.22.....\n"
"4..2.4...\n"
"..3......\n"
".........\n"
".........\n"
"23....131\n"
"....1.3..\n"
"..2.1....\n"
"4...22...\n") == 0);
free(board514417613);
board514417613 = NULL;
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 0, 9) == 0 );


gamma_delete(board);

    return 0;
}
