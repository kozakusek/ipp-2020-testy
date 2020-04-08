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
uuid: 591474780
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 10, 4, 6);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 7) == 0 );


char* board775232944 = gamma_board(board);
assert( board775232944 != NULL );
assert( strcmp(board775232944, 
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n") == 0);
free(board775232944);
board775232944 = NULL;
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 6, -1) == 0 );


char* board943341103 = gamma_board(board);
assert( board943341103 != NULL );
assert( strcmp(board943341103, 
"..4...\n"
"......\n"
".....2\n"
"......\n"
"......\n"
"......\n"
"......\n"
"..3...\n"
"......\n"
"....3.\n") == 0);
free(board943341103);
board943341103 = NULL;
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, -1, 10) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_free_fields(board, 3) == 48 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 4, 6) == 1 );


char* board237779209 = gamma_board(board);
assert( board237779209 != NULL );
assert( strcmp(board237779209, 
"..4...\n"
"..2...\n"
".....2\n"
".1..3.\n"
"...1..\n"
"...4.4\n"
"......\n"
".33...\n"
"4.....\n"
"..2.3.\n") == 0);
free(board237779209);
board237779209 = NULL;
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_free_fields(board, 1) == 45 );
assert( gamma_golden_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );


char* board204063373 = gamma_board(board);
assert( board204063373 != NULL );
assert( strcmp(board204063373, 
"..4...\n"
"..2...\n"
".....2\n"
".1..3.\n"
"...1..\n"
"...4.4\n"
"......\n"
".33.14\n"
"44.1..\n"
"..2.3.\n") == 0);
free(board204063373);
board204063373 = NULL;
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_free_fields(board, 4) == 41 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_free_fields(board, 4) == 14 );


gamma_delete(board);

    return 0;
}
