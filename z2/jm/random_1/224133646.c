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
uuid: 224133646
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 8, 8, 8);
assert( board != NULL );


assert( gamma_move(board, 2, 1, 5) == 1 );


char* board139065772 = gamma_board(board);
assert( board139065772 != NULL );
assert( strcmp(board139065772, 
"........\n"
"........\n"
".2......\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n") == 0);
free(board139065772);
board139065772 = NULL;
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 8, -1) == 0 );
assert( gamma_free_fields(board, 6) == 63 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_golden_move(board, 3, 5, 1) == 0 );


char* board283035659 = gamma_board(board);
assert( board283035659 != NULL );
assert( strcmp(board283035659, 
"..3.....\n"
"........\n"
".2......\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n") == 0);
free(board283035659);
board283035659 = NULL;
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_golden_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 8, 7, 2) == 1 );
assert( gamma_free_fields(board, 8) == 59 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_free_fields(board, 5) == 56 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_free_fields(board, 7) == 55 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_golden_move(board, 3, 7, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_free_fields(board, 3) == 50 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 4, -1) == 0 );


char* board243373106 = gamma_board(board);
assert( board243373106 != NULL );
assert( strcmp(board243373106, 
"..33...5\n"
".......6\n"
".21.....\n"
"...8....\n"
"5...6.26\n"
".......3\n"
"...5.4..\n"
"........\n") == 0);
free(board243373106);
board243373106 = NULL;
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 8, -1, -1) == 0 );
assert( gamma_free_fields(board, 8) == 49 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_golden_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_free_fields(board, 5) == 43 );
assert( gamma_move(board, 6, -1, 2) == 0 );


char* board298338726 = gamma_board(board);
assert( board298338726 != NULL );
assert( strcmp(board298338726, 
"5.33...5\n"
".......6\n"
"7214....\n"
"...8....\n"
"54..6.26\n"
"...2...3\n"
"..55.4..\n"
"....8...\n") == 0);
free(board298338726);
board298338726 = NULL;
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 8, -1, 8) == 0 );


gamma_delete(board);

    return 0;
}
