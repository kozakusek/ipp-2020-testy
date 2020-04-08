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
uuid: 882059320
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 10, 3, 7);
assert( board != NULL );


assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, -1, 10) == 0 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );


char* board569924017 = gamma_board(board);
assert( board569924017 != NULL );
assert( strcmp(board569924017, 
"...1...\n"
".......\n"
".......\n"
".......\n"
"..2....\n"
"1..2...\n"
".......\n"
".......\n"
".......\n"
"......3\n") == 0);
free(board569924017);
board569924017 = NULL;
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );


char* board240171112 = gamma_board(board);
assert( board240171112 != NULL );
assert( strcmp(board240171112, 
"...1...\n"
".......\n"
".......\n"
".......\n"
"..2....\n"
"1..2...\n"
"....1..\n"
".......\n"
"...2...\n"
"1.....3\n") == 0);
free(board240171112);
board240171112 = NULL;
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 1, 7, -1) == 0 );


char* board805036906 = gamma_board(board);
assert( board805036906 != NULL );
assert( strcmp(board805036906, 
"..21...\n"
".......\n"
".......\n"
".......\n"
"..2...3\n"
"1..2...\n"
"....1..\n"
".......\n"
"...2...\n"
"1.....3\n") == 0);
free(board805036906);
board805036906 = NULL;
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_golden_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_golden_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_golden_move(board, 3, 5, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_free_fields(board, 3) == 56 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_free_fields(board, 2) == 56 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 10) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_free_fields(board, 3) == 51 );
assert( gamma_move(board, 1, 0, 6) == 1 );


char* board212688717 = gamma_board(board);
assert( board212688717 != NULL );
assert( strcmp(board212688717, 
"..21...\n"
".....3.\n"
".......\n"
"12.3.2.\n"
"..2...3\n"
"1..2...\n"
"3...1.2\n"
".......\n"
"1..2...\n"
"133...3\n") == 0);
free(board212688717);
board212688717 = NULL;
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_golden_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );


gamma_delete(board);

    return 0;
}
