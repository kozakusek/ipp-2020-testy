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
uuid: 129652825
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 6, 5, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 14, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 1, 14, 5) == 1 );
assert( gamma_move(board, 2, 11, 5) == 1 );
assert( gamma_free_fields(board, 3) == 79 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_free_fields(board, 5) == 79 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );


char* board274018611 = gamma_board(board);
assert( board274018611 != NULL );
assert( strcmp(board274018611, 
"..1........23.1\n"
"...............\n"
".5....4........\n"
"..51..........2\n"
".1......3......\n"
".........2.....\n") == 0);
free(board274018611);
board274018611 = NULL;
assert( gamma_move(board, 5, 10, -1) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_golden_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_move(board, 1, 11, 4) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 2) == 1 );


char* board242070089 = gamma_board(board);
assert( board242070089 != NULL );
assert( strcmp(board242070089, 
"5.1..1.....23.1\n"
"1...2......1...\n"
".5....4........\n"
"..31.....5....2\n"
"31......3......\n"
".1.......2.....\n") == 0);
free(board242070089);
board242070089 = NULL;
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 15, 2) == 0 );
assert( gamma_free_fields(board, 2) == 66 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 15, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_free_fields(board, 1) == 65 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_free_fields(board, 2) == 64 );
assert( gamma_move(board, 5, 15, -1) == 0 );
assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 15, 6) == 0 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_move(board, 1, 12, 0) == 1 );
assert( gamma_free_fields(board, 1) == 62 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_free_fields(board, 3) == 61 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_move(board, 5, 15, 6) == 0 );
assert( gamma_move(board, 1, 13, 2) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 15, 6) == 0 );
assert( gamma_move(board, 5, 15, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 15, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 12, 4) == 1 );
assert( gamma_move(board, 2, 12, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_free_fields(board, 5) == 57 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );


char* board134323644 = gamma_board(board);
assert( board134323644 != NULL );
assert( strcmp(board134323644, 
"5.1..1.4...23.1\n"
"1...2.....111..\n"
".53..34....3...\n"
"..31.....5.2.12\n"
"31....4.3..22..\n"
".1......12..1..\n") == 0);
free(board134323644);
board134323644 = NULL;
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 1, 13, -1) == 0 );
assert( gamma_golden_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 14, 5) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 4, 5) == 1 );


gamma_delete(board);

    return 0;
}
