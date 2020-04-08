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
uuid: 122235074
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 9, 8, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_golden_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_golden_move(board, 8, 1, 0) == 0 );


char* board847569828 = gamma_board(board);
assert( board847569828 != NULL );
assert( strcmp(board847569828, 
"..........\n"
"..........\n"
"..........\n"
".....8....\n"
"........1.\n"
"6.........\n"
"...4......\n"
"2.........\n"
"..........\n") == 0);
free(board847569828);
board847569828 = NULL;
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 2, 7) == 1 );


char* board729201483 = gamma_board(board);
assert( board729201483 != NULL );
assert( strcmp(board729201483, 
"..........\n"
"..3.......\n"
"..........\n"
".....8....\n"
"........1.\n"
"6....2....\n"
"...4......\n"
"2.........\n"
"..........\n") == 0);
free(board729201483);
board729201483 = NULL;
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_free_fields(board, 5) == 82 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_free_fields(board, 1) == 80 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_golden_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_free_fields(board, 4) == 77 );
assert( gamma_move(board, 5, -1, 9) == 0 );


char* board458032310 = gamma_board(board);
assert( board458032310 != NULL );
assert( strcmp(board458032310, 
"....5.....\n"
"..3.......\n"
"2.........\n"
".....8....\n"
"........1.\n"
"6....27...\n"
"...4.3....\n"
"2......4..\n"
"....8.....\n") == 0);
free(board458032310);
board458032310 = NULL;
assert( gamma_move(board, 6, -1, -1) == 0 );
assert( gamma_move(board, 7, 6, 7) == 1 );
assert( gamma_golden_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_free_fields(board, 5) == 75 );
assert( gamma_move(board, 6, -1, 8) == 0 );
assert( gamma_free_fields(board, 6) == 75 );
assert( gamma_move(board, 7, 2, 6) == 1 );


char* board489020904 = gamma_board(board);
assert( board489020904 != NULL );
assert( strcmp(board489020904, 
"..3.5.....\n"
"..3...7...\n"
"2.7.......\n"
".....8....\n"
"........1.\n"
"6....27...\n"
"...4.3....\n"
"2......4..\n"
"....8.....\n") == 0);
free(board489020904);
board489020904 = NULL;
assert( gamma_move(board, 8, 5, 4) == 1 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 9, 6) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 7, 0, -1) == 0 );
assert( gamma_move(board, 8, 7, -1) == 0 );


char* board945140453 = gamma_board(board);
assert( board945140453 != NULL );
assert( strcmp(board945140453, 
".13.5.....\n"
"..3...7...\n"
"2.7......5\n"
".....8....\n"
".24..8..1.\n"
"6....27...\n"
"...4.3....\n"
"2.6....4..\n"
"....8...3.\n") == 0);
free(board945140453);
board945140453 = NULL;
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 7, 5, 8) == 1 );
assert( gamma_free_fields(board, 7) == 64 );


char* board735751536 = gamma_board(board);
assert( board735751536 != NULL );
assert( strcmp(board735751536, 
".13.57....\n"
"..3...7...\n"
"2.7......5\n"
"2....8....\n"
".24..8..1.\n"
"6....27...\n"
"...4.3..5.\n"
"2.6....4..\n"
"....8...3.\n") == 0);
free(board735751536);
board735751536 = NULL;
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_free_fields(board, 1) == 63 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_free_fields(board, 7) == 61 );
assert( gamma_free_fields(board, 1) == 61 );
assert( gamma_golden_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_golden_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 7, -1, 1) == 0 );
assert( gamma_move(board, 8, 10, 8) == 0 );
assert( gamma_free_fields(board, 8) == 54 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_golden_move(board, 1, 8, 5) == 1 );


char* board462227688 = gamma_board(board);
assert( board462227688 != NULL );
assert( strcmp(board462227688, 
"113.57....\n"
"1.3...7.2.\n"
"2.775....5\n"
"2....8.51.\n"
".24..8..1.\n"
"65...27...\n"
"..54.34.5.\n"
"2.6....4.3\n"
"....8...3.\n") == 0);
free(board462227688);
board462227688 = NULL;
assert( gamma_busy_fields(board, 2) == 6 );


gamma_delete(board);

    return 0;
}
