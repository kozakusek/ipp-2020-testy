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
uuid: 265378925
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 9, 8, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );


char* board704575300 = gamma_board(board);
assert( board704575300 != NULL );
assert( strcmp(board704575300, 
"84......\n"
".3.....5\n"
"2.......\n"
"....5...\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n") == 0);
free(board704575300);
board704575300 = NULL;


char* board866734843 = gamma_board(board);
assert( board866734843 != NULL );
assert( strcmp(board866734843, 
"84......\n"
".3.....5\n"
"2.......\n"
"....5...\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n") == 0);
free(board866734843);
board866734843 = NULL;
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_golden_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, -1, 6) == 0 );
assert( gamma_move(board, 7, 1, 3) == 1 );


char* board564742703 = gamma_board(board);
assert( board564742703 != NULL );
assert( strcmp(board564742703, 
"84......\n"
".3.....5\n"
"2.......\n"
"....5...\n"
".....3..\n"
".7......\n"
".....5..\n"
"...8....\n"
".......7\n") == 0);
free(board564742703);
board564742703 = NULL;
assert( gamma_free_fields(board, 8) == 61 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_free_fields(board, 7) == 58 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_free_fields(board, 1) == 58 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 8, 5, 1) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 4, 2) == 0 );


char* board821124191 = gamma_board(board);
assert( board821124191 != NULL );
assert( strcmp(board821124191, 
"84......\n"
".3.....5\n"
"2.......\n"
"....5.1.\n"
".....3..\n"
".7616...\n"
"5...25.5\n"
"...8.8..\n"
".6.....7\n") == 0);
free(board821124191);
board821124191 = NULL;
assert( gamma_move(board, 8, -1, 0) == 0 );
assert( gamma_free_fields(board, 8) == 52 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );


char* board524817675 = gamma_board(board);
assert( board524817675 != NULL );
assert( strcmp(board524817675, 
"84......\n"
".3.....5\n"
"2.......\n"
"....5.1.\n"
".3...3..\n"
".7616...\n"
"5...25.5\n"
"...8.8..\n"
".6.....7\n") == 0);
free(board524817675);
board524817675 = NULL;
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 7, -1, 2) == 0 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_free_fields(board, 4) == 48 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_free_fields(board, 8) == 47 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_golden_move(board, 3, 1, 5) == 0 );


char* board577656633 = gamma_board(board);
assert( board577656633 != NULL );
assert( strcmp(board577656633, 
"843...1.\n"
".3.....5\n"
"2.6.....\n"
"....5.1.\n"
".3...3..\n"
"77616...\n"
"51..25.5\n"
"..88.8..\n"
".6.....7\n") == 0);
free(board577656633);
board577656633 = NULL;
assert( gamma_move(board, 4, -1, 9) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );


gamma_delete(board);

    return 0;
}
