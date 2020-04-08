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
uuid: 897601574
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 7, 9, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 15, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );


char* board730636120 = gamma_board(board);
assert( board730636120 != NULL );
assert( strcmp(board730636120, 
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n") == 0);
free(board730636120);
board730636120 = NULL;
assert( gamma_move(board, 3, 14, 0) == 1 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_free_fields(board, 6) == 101 );
assert( gamma_move(board, 7, 3, -1) == 0 );
assert( gamma_move(board, 8, 11, 4) == 1 );
assert( gamma_move(board, 9, 1, -1) == 0 );
assert( gamma_move(board, 1, 14, 5) == 1 );
assert( gamma_move(board, 2, 15, 6) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );


char* board604961821 = gamma_board(board);
assert( board604961821 != NULL );
assert( strcmp(board604961821, 
"35......4......\n"
"..............1\n"
"...........8...\n"
"...............\n"
"...............\n"
"...............\n"
"..........6...3\n") == 0);
free(board604961821);
board604961821 = NULL;
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 5, -1) == 0 );
assert( gamma_golden_move(board, 6, 6, 14) == 0 );
assert( gamma_move(board, 7, 7, 0) == 1 );


char* board441422758 = gamma_board(board);
assert( board441422758 != NULL );
assert( strcmp(board441422758, 
"35......4......\n"
"..............1\n"
"...........8...\n"
"...............\n"
"...............\n"
"...............\n"
".......7..6...3\n") == 0);
free(board441422758);
board441422758 = NULL;
assert( gamma_move(board, 8, 9, 4) == 1 );
assert( gamma_move(board, 9, 5, 3) == 1 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 9, -1, 7) == 0 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_free_fields(board, 2) == 90 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_free_fields(board, 4) == 89 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 6, 12, 3) == 1 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_move(board, 9, 8, 6) == 0 );


char* board341218895 = gamma_board(board);
assert( board341218895 != NULL );
assert( strcmp(board341218895, 
"35....6.4......\n"
".........3....1\n"
"...5.....8.8...\n"
"....79......6..\n"
"..2.5....1.....\n"
"...8....3......\n"
".......7..6...3\n") == 0);
free(board341218895);
board341218895 = NULL;
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 9, 10, 0) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 15, 6) == 0 );
assert( gamma_move(board, 4, 15, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 12, 2) == 1 );
assert( gamma_move(board, 8, 8, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board122082608 = gamma_board(board);
assert( board122082608 != NULL );
assert( strcmp(board122082608, 
"35....6.4......\n"
".1.......3....1\n"
"...5.....8.8...\n"
".6..79..8...6..\n"
"..2.5....1..5..\n"
"...8.4..3......\n"
".......7..6...3\n") == 0);
free(board122082608);
board122082608 = NULL;
assert( gamma_move(board, 9, 6, -1) == 0 );
assert( gamma_golden_move(board, 9, 5, 11) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 1) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 9, 10, 2) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 13, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 12, 5) == 1 );
assert( gamma_free_fields(board, 5) == 73 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_free_fields(board, 8) == 71 );


char* board675271508 = gamma_board(board);
assert( board675271508 != NULL );
assert( strcmp(board675271508, 
"35....6.4....4.\n"
".1.......3..5.1\n"
"..15....68.8...\n"
"16..79.38...6..\n"
"..2.5....19.5..\n"
"...8.4..3.....3\n"
"..8....7..6...3\n") == 0);
free(board675271508);
board675271508 = NULL;


char* board823719121 = gamma_board(board);
assert( board823719121 != NULL );
assert( strcmp(board823719121, 
"35....6.4....4.\n"
".1.......3..5.1\n"
"..15....68.8...\n"
"16..79.38...6..\n"
"..2.5....19.5..\n"
"...8.4..3.....3\n"
"..8....7..6...3\n") == 0);
free(board823719121);
board823719121 = NULL;
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 15, 1) == 0 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_golden_move(board, 8, 6, 6) == 1 );


char* board488729618 = gamma_board(board);
assert( board488729618 != NULL );
assert( strcmp(board488729618, 
"357...8.4....4.\n"
".1.......3..5.1\n"
"..15....68.8...\n"
"16..79.385..6..\n"
"..2.5....19.5..\n"
"...8.4..3.....3\n"
"..8....7..6...3\n") == 0);
free(board488729618);
board488729618 = NULL;
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_golden_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 14, 7) == 0 );


char* board457872087 = gamma_board(board);
assert( board457872087 != NULL );
assert( strcmp(board457872087, 
"357...8.4....4.\n"
".1.......3..5.1\n"
"..15....68.8...\n"
"16..79.385..6..\n"
"..1.5....19.5..\n"
"...8.4..3.....3\n"
"..8....7..6...3\n") == 0);
free(board457872087);
board457872087 = NULL;
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 0, -1) == 0 );
assert( gamma_move(board, 9, 3, 6) == 1 );
assert( gamma_free_fields(board, 9) == 67 );
assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 4, 15, 5) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 7, 13, 2) == 1 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_golden_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_free_fields(board, 3) == 61 );
assert( gamma_move(board, 4, 11, 2) == 1 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 4) == 0 );


gamma_delete(board);

    return 0;
}
