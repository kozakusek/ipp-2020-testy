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
uuid: 417067337
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 9, 8, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, -1, 7) == 0 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 4, 5) == 0 );
assert( gamma_free_fields(board, 8) == 61 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_move(board, 6, 3, -1) == 0 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_golden_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 6, 4, -1) == 0 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, -1, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_move(board, 7, 0, -1) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_golden_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_free_fields(board, 2) == 53 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, -1) == 0 );


char* board775251696 = gamma_board(board);
assert( board775251696 != NULL );
assert( strcmp(board775251696, 
"....6..\n"
".......\n"
"....2.2\n"
"....8..\n"
"4....7.\n"
".......\n"
"..8....\n"
"....8..\n"
".17....\n") == 0);
free(board775251696);
board775251696 = NULL;
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 8, -1, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );


char* board847658212 = gamma_board(board);
assert( board847658212 != NULL );
assert( strcmp(board847658212, 
"....6..\n"
".......\n"
"....2.2\n"
"....8..\n"
"4....7.\n"
".......\n"
"..8....\n"
"..1.8..\n"
".17....\n") == 0);
free(board847658212);
board847658212 = NULL;
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_free_fields(board, 6) == 50 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 8, 2, 3) == 0 );


char* board364462953 = gamma_board(board);
assert( board364462953 != NULL );
assert( strcmp(board364462953, 
"....6..\n"
".......\n"
".2..2.2\n"
"....8..\n"
"4....7.\n"
"..7....\n"
"..8..3.\n"
"..1.8..\n"
".17....\n") == 0);
free(board364462953);
board364462953 = NULL;
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_free_fields(board, 7) == 46 );


char* board553462715 = gamma_board(board);
assert( board553462715 != NULL );
assert( strcmp(board553462715, 
"....6..\n"
".......\n"
"72..2.2\n"
"....8..\n"
"46...7.\n"
"..7....\n"
"..81.3.\n"
"..1.8..\n"
".17....\n") == 0);
free(board553462715);
board553462715 = NULL;
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 8) == 1 );


gamma_delete(board);

    return 0;
}
