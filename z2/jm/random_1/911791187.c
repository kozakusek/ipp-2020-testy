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
uuid: 911791187
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 12, 7, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board464512758 = gamma_board(board);
assert( board464512758 != NULL );
assert( strcmp(board464512758, 
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"7..2..\n"
"......\n"
"......\n"
"......\n"
".5..12\n"
".4....\n"
"1.....\n") == 0);
free(board464512758);
board464512758 = NULL;
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );


char* board498916624 = gamma_board(board);
assert( board498916624 != NULL );
assert( strcmp(board498916624, 
".1....\n"
"......\n"
"......\n"
"......\n"
"......\n"
"7..2..\n"
".....6\n"
"......\n"
"......\n"
".5..12\n"
".442..\n"
"1.....\n") == 0);
free(board498916624);
board498916624 = NULL;
assert( gamma_move(board, 3, -1, 11) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_free_fields(board, 7) == 60 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 7, 5, 10) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 6, 12) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );


char* board148164131 = gamma_board(board);
assert( board148164131 != NULL );
assert( strcmp(board148164131, 
".1....\n"
".....7\n"
"......\n"
"...2..\n"
".6....\n"
"7..2..\n"
"6....6\n"
".....1\n"
".....3\n"
".5.212\n"
".442..\n"
"1.....\n") == 0);
free(board148164131);
board148164131 = NULL;
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, -1, 11) == 0 );
assert( gamma_golden_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_free_fields(board, 6) == 47 );


char* board928683910 = gamma_board(board);
assert( board928683910 != NULL );
assert( strcmp(board928683910, 
".1....\n"
"...437\n"
"......\n"
"...2..\n"
".6...4\n"
"71.2..\n"
"6....6\n"
".1...1\n"
"....53\n"
".5.212\n"
".442..\n"
"1..7..\n") == 0);
free(board928683910);
board928683910 = NULL;
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_free_fields(board, 4) == 47 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );


gamma_delete(board);

    return 0;
}
