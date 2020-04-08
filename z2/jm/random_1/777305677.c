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
uuid: 777305677
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(18, 11, 4, 14);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 11, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 17, 1) == 1 );
assert( gamma_free_fields(board, 3) == 195 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_free_fields(board, 4) == 194 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 4, 13, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 9) == 1 );


char* board388335020 = gamma_board(board);
assert( board388335020 != NULL );
assert( strcmp(board388335020, 
"..................\n"
".1.3..............\n"
"..................\n"
"...........2......\n"
"..................\n"
"1.................\n"
"..................\n"
"..................\n"
"..................\n"
".................3\n"
".........4........\n") == 0);
free(board388335020);
board388335020 = NULL;
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 4, 18, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 13, 7) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_free_fields(board, 4) == 186 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 14, 7) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 11, 8) == 1 );
assert( gamma_move(board, 4, 17, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_move(board, 2, 15, 10) == 1 );
assert( gamma_move(board, 4, 10, 2) == 1 );


char* board731471520 = gamma_board(board);
assert( board731471520 != NULL );
assert( strcmp(board731471520, 
"1....1.........2..\n"
".1.34.............\n"
".....2.....2......\n"
"......2....2.12...\n"
".................4\n"
"1.......1.........\n"
"..................\n"
"..................\n"
"..........4.......\n"
".1...............3\n"
"..3......4........\n") == 0);
free(board731471520);
board731471520 = NULL;
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 17, 1) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 1, 17, 8) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 1, 14, 4) == 1 );


char* board507634666 = gamma_board(board);
assert( board507634666 != NULL );
assert( strcmp(board507634666, 
"1....1.........2..\n"
".1.34.............\n"
".....2.....2.....1\n"
"......2....2.12...\n"
".................4\n"
"1..4....1.........\n"
"..............1...\n"
"..................\n"
"..........4.......\n"
"31...............3\n"
"..3......4........\n") == 0);
free(board507634666);
board507634666 = NULL;
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 11, 4) == 1 );
assert( gamma_free_fields(board, 4) == 171 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, -1) == 0 );
assert( gamma_move(board, 3, 18, 7) == 0 );
assert( gamma_move(board, 4, 7, 10) == 1 );
assert( gamma_move(board, 1, 18, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 16, 11) == 0 );
assert( gamma_free_fields(board, 2) == 170 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 9, 9) == 1 );
assert( gamma_move(board, 1, 17, -1) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_free_fields(board, 2) == 169 );


char* board623596994 = gamma_board(board);
assert( board623596994 != NULL );
assert( strcmp(board623596994, 
"1....1.4.......2..\n"
".1.34....4........\n"
".....2.....2.....1\n"
"....3.2....2.12...\n"
".................4\n"
"1..4....1.........\n"
"...........4..1...\n"
"..................\n"
"......2...4.......\n"
"31...............3\n"
"..3......4........\n") == 0);
free(board623596994);
board623596994 = NULL;
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_move(board, 1, 18, 11) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 18, 4) == 0 );
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 15, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 18, 11) == 0 );
assert( gamma_move(board, 3, 11, 10) == 1 );
assert( gamma_move(board, 4, 11, 2) == 1 );
assert( gamma_free_fields(board, 4) == 162 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, -1) == 0 );
assert( gamma_move(board, 1, 15, 11) == 0 );
assert( gamma_move(board, 2, 16, 3) == 1 );
assert( gamma_free_fields(board, 2) == 161 );
assert( gamma_move(board, 3, 17, 4) == 1 );
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 17, 9) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 3, 16) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 11, 6) == 1 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_move(board, 4, 14, 5) == 1 );
assert( gamma_move(board, 1, 16, 10) == 1 );
assert( gamma_move(board, 2, 18, 11) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_golden_move(board, 3, 7, 13) == 0 );
assert( gamma_move(board, 1, 12, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 10) == 1 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 18, 5) == 0 );
assert( gamma_move(board, 4, 11, 10) == 0 );
assert( gamma_move(board, 1, 13, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 3, 14, 2) == 1 );
assert( gamma_move(board, 4, 14, 0) == 1 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 17, 10) == 1 );


char* board771148413 = gamma_board(board);
assert( board771148413 != NULL );
assert( strcmp(board771148413, 
"1....1.4...3.3.212\n"
".1.341.1.4.......3\n"
".....2.....2.....1\n"
"....3.21...2.12...\n"
".....3..4..3.....4\n"
"1..4....1.....4...\n"
"...2.......4..1..3\n"
"......2.........2.\n"
".4....2...44..3...\n"
"31.............1.3\n"
"..3......4.31.4...\n") == 0);
free(board771148413);
board771148413 = NULL;
assert( gamma_move(board, 3, 11, 5) == 1 );
assert( gamma_move(board, 4, 12, -1) == 0 );
assert( gamma_move(board, 2, 14, 8) == 1 );
assert( gamma_free_fields(board, 2) == 144 );
assert( gamma_golden_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 0, 14) == 0 );
assert( gamma_move(board, 4, 14, 8) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 1, 18, 10) == 0 );
assert( gamma_move(board, 2, 12, 1) == 1 );
assert( gamma_move(board, 3, 13, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_free_fields(board, 4) == 141 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_free_fields(board, 2) == 141 );
assert( gamma_move(board, 4, 11, 3) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 3, 13, 11) == 0 );


char* board512429192 = gamma_board(board);
assert( board512429192 != NULL );
assert( strcmp(board512429192, 
"1....1.4...3.3.212\n"
".1.341.1.4.......3\n"
".....2.....2..2..1\n"
"....3.21...2.12...\n"
".....3..4..3.....4\n"
"1..4...213.3..4...\n"
"...2.......4..1..3\n"
"......2....4....2.\n"
".4....2...44..3...\n"
"31..........2..1.3\n"
"..3......4.31.4...\n") == 0);
free(board512429192);
board512429192 = NULL;
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_golden_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 14, 2) == 0 );
assert( gamma_move(board, 4, 14, 8) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );


char* board187181619 = gamma_board(board);
assert( board187181619 != NULL );
assert( strcmp(board187181619, 
"1....1.4...3.3.212\n"
".1.341.1.4.......3\n"
".....2.....2..2..1\n"
"....3.21...2.12...\n"
".....3..4..3.....4\n"
"1..4...213.3..4...\n"
"...2.......4..1..3\n"
"......2....4....2.\n"
".4....2...44..3...\n"
"31..........2..1.3\n"
"..3...4..4.31.4...\n") == 0);
free(board187181619);
board187181619 = NULL;
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_free_fields(board, 2) == 138 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 17, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_free_fields(board, 2) == 137 );
assert( gamma_move(board, 3, 14, 9) == 0 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_free_fields(board, 2) == 135 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_move(board, 1, 18, 3) == 0 );
assert( gamma_move(board, 2, 15, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 15, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );


char* board836257488 = gamma_board(board);
assert( board836257488 != NULL );
assert( strcmp(board836257488, 
"1....1.4...3.3.212\n"
".1.341.1.4.......3\n"
".....2.....2..2..1\n"
"....3.211..2.12...\n"
"..2..3..4..3...2.4\n"
"1..4...213.3..4...\n"
"...2.......4..1..3\n"
"......24...4....2.\n"
".4....2...44..3...\n"
"31.....4....2..1.3\n"
"..3...4..4.31.4...\n") == 0);
free(board836257488);
board836257488 = NULL;
assert( gamma_move(board, 2, 18, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 10) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_golden_move(board, 3, 3, 0) == 0 );


char* board330254117 = gamma_board(board);
assert( board330254117 != NULL );
assert( strcmp(board330254117, 
"1....1.4.4.3.3.212\n"
".1.341.1.4.......3\n"
".....2.....2..2..1\n"
"....3.211..2.12...\n"
"..2..3..4..3...2.4\n"
"1..4...213.3..4...\n"
"...2.......4..1..3\n"
"......24...4....2.\n"
".4..2.2...44..3...\n"
"31.....4....2..1.3\n"
"..3...4..4.31.4...\n") == 0);
free(board330254117);
board330254117 = NULL;
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 2, 17, 2) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 1, 8, 3) == 0 );


char* board634001055 = gamma_board(board);
assert( board634001055 != NULL );
assert( strcmp(board634001055, 
"1....1.4.4.3.3.212\n"
".1.341.1.4.......3\n"
".....2.....2..2..1\n"
"....3.211..2.12...\n"
"..2..3..4..3...2.4\n"
"1..4...213.3..4...\n"
"...2.......4..1..3\n"
"......24...4....2.\n"
".4..2.2...44..3...\n"
"31.....4...42..1.3\n"
"..3...4..4.31.4...\n") == 0);
free(board634001055);
board634001055 = NULL;
assert( gamma_move(board, 2, 15, -1) == 0 );
assert( gamma_golden_move(board, 2, 10, 11) == 0 );


gamma_delete(board);

    return 0;
}
