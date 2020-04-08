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
uuid: 526529567
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 10, 4, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, -1, 9) == 0 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_free_fields(board, 3) == 81 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_free_fields(board, 4) == 80 );
assert( gamma_move(board, 1, 8, 6) == 1 );


char* board761582327 = gamma_board(board);
assert( board761582327 != NULL );
assert( strcmp(board761582327, 
".........\n"
"....1....\n"
".44......\n"
"........1\n"
"1.......2\n"
".......1.\n"
"......4..\n"
".........\n"
"22..3....\n"
".........\n") == 0);
free(board761582327);
board761582327 = NULL;
assert( gamma_free_fields(board, 2) == 79 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );


char* board331455167 = gamma_board(board);
assert( board331455167 != NULL );
assert( strcmp(board331455167, 
".........\n"
"....1....\n"
".44......\n"
"........1\n"
"1.......2\n"
".......1.\n"
"......4.4\n"
".........\n"
"22..3....\n"
".........\n") == 0);
free(board331455167);
board331455167 = NULL;
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_free_fields(board, 1) == 77 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 4) == 77 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_free_fields(board, 3) == 76 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_free_fields(board, 3) == 71 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board623991249 = gamma_board(board);
assert( board623991249 != NULL );
assert( strcmp(board623991249, 
".2.......\n"
"....1...2\n"
".44.....3\n"
"...1....1\n"
"1.......2\n"
".2.....1.\n"
"......4.4\n"
".....1...\n"
"22..3....\n"
"...44....\n") == 0);
free(board623991249);
board623991249 = NULL;
assert( gamma_golden_move(board, 1, 0, 4) == 0 );


char* board862154228 = gamma_board(board);
assert( board862154228 != NULL );
assert( strcmp(board862154228, 
".2.......\n"
"....1...2\n"
".44.....3\n"
"...1....1\n"
"1.......2\n"
".2.....1.\n"
"......4.4\n"
".....1...\n"
"22..3....\n"
"...44....\n") == 0);
free(board862154228);
board862154228 = NULL;
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board748607615 = gamma_board(board);
assert( board748607615 != NULL );
assert( strcmp(board748607615, 
".2.......\n"
"....1...2\n"
".44.....3\n"
"...1....1\n"
"1.......2\n"
".2.....1.\n"
"......4.4\n"
".....1...\n"
"22..3....\n"
"...44....\n") == 0);
free(board748607615);
board748607615 = NULL;


char* board180123109 = gamma_board(board);
assert( board180123109 != NULL );
assert( strcmp(board180123109, 
".2.......\n"
"....1...2\n"
".44.....3\n"
"...1....1\n"
"1.......2\n"
".2.....1.\n"
"......4.4\n"
".....1...\n"
"22..3....\n"
"...44....\n") == 0);
free(board180123109);
board180123109 = NULL;
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_free_fields(board, 4) == 70 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_free_fields(board, 3) == 68 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_golden_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 3, 8) == 1 );


char* board804274467 = gamma_board(board);
assert( board804274467 != NULL );
assert( strcmp(board804274467, 
".2.......\n"
"...21.3.2\n"
".44.....3\n"
"...1....1\n"
"1.......2\n"
".2.....1.\n"
".2....4.4\n"
".....1...\n"
"22..3....\n"
"...44..4.\n") == 0);
free(board804274467);
board804274467 = NULL;
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_golden_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 10) == 0 );


char* board627877349 = gamma_board(board);
assert( board627877349 != NULL );
assert( strcmp(board627877349, 
".22......\n"
"...21.3.2\n"
".44.....3\n"
"...1....1\n"
"1.3.....2\n"
".2.....1.\n"
".2....4.4\n"
".3...1.4.\n"
"22..3....\n"
"...44..4.\n") == 0);
free(board627877349);
board627877349 = NULL;
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_golden_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );


gamma_delete(board);

    return 0;
}
