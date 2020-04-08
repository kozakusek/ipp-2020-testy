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
uuid: 702829302
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 8, 7, 8);
assert( board != NULL );


assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_free_fields(board, 5) == 45 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_free_fields(board, 7) == 43 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_free_fields(board, 5) == 41 );
assert( gamma_move(board, 6, 5, 3) == 1 );


char* board797892130 = gamma_board(board);
assert( board797892130 != NULL );
assert( strcmp(board797892130, 
".....3\n"
"......\n"
"......\n"
"2.....\n"
"3.6..6\n"
"....17\n"
"......\n"
"...5..\n") == 0);
free(board797892130);
board797892130 = NULL;
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_free_fields(board, 3) == 39 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_free_fields(board, 7) == 38 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );


char* board580712198 = gamma_board(board);
assert( board580712198 != NULL );
assert( strcmp(board580712198, 
".....3\n"
"...4.3\n"
"......\n"
"2.....\n"
"3.6..6\n"
"....17\n"
"..2...\n"
"..35..\n") == 0);
free(board580712198);
board580712198 = NULL;
assert( gamma_move(board, 4, 3, 0) == 0 );


char* board124078971 = gamma_board(board);
assert( board124078971 != NULL );
assert( strcmp(board124078971, 
".....3\n"
"...4.3\n"
"......\n"
"2.....\n"
"3.6..6\n"
"....17\n"
"..2...\n"
"..35..\n") == 0);
free(board124078971);
board124078971 = NULL;
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 6, -1, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_golden_move(board, 1, 1, 4) == 0 );
assert( gamma_free_fields(board, 2) == 35 );


char* board649906257 = gamma_board(board);
assert( board649906257 != NULL );
assert( strcmp(board649906257, 
".....3\n"
"...4.3\n"
".....2\n"
"2.....\n"
"3.6..6\n"
"....17\n"
"..2...\n"
"..35..\n") == 0);
free(board649906257);
board649906257 = NULL;


char* board905913327 = gamma_board(board);
assert( board905913327 != NULL );
assert( strcmp(board905913327, 
".....3\n"
"...4.3\n"
".....2\n"
"2.....\n"
"3.6..6\n"
"....17\n"
"..2...\n"
"..35..\n") == 0);
free(board905913327);
board905913327 = NULL;
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_golden_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_golden_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_golden_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 0, 2) == 1 );


gamma_delete(board);

    return 0;
}
