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
uuid: 535276083
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 10, 6, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 10, -1) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_golden_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_free_fields(board, 5) == 89 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );


char* board846854198 = gamma_board(board);
assert( board846854198 != NULL );
assert( strcmp(board846854198, 
"...45.....\n"
"4.........\n"
"...6......\n"
"......1...\n"
"..........\n"
"...5......\n"
"3..6......\n"
".......2..\n"
"3.........\n"
"3.2.......\n") == 0);
free(board846854198);
board846854198 = NULL;
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_free_fields(board, 6) == 83 );


char* board171825013 = gamma_board(board);
assert( board171825013 != NULL );
assert( strcmp(board171825013, 
"...45.....\n"
"4.........\n"
"...6..46..\n"
"...4..1...\n"
"..........\n"
"...5......\n"
"3..6....5.\n"
".......2..\n"
"3........3\n"
"3.2.......\n") == 0);
free(board171825013);
board171825013 = NULL;
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_golden_move(board, 2, 1, 0) == 0 );


char* board386043861 = gamma_board(board);
assert( board386043861 != NULL );
assert( strcmp(board386043861, 
"...45.....\n"
"4.........\n"
"...6..46..\n"
"...4..1...\n"
"..........\n"
"...5......\n"
"3..6....5.\n"
".......2..\n"
"3........3\n"
"3.2.......\n") == 0);
free(board386043861);
board386043861 = NULL;
assert( gamma_move(board, 3, 8, 7) == 1 );


char* board806165692 = gamma_board(board);
assert( board806165692 != NULL );
assert( strcmp(board806165692, 
"...45.....\n"
"4.........\n"
"...6..463.\n"
"...4..1...\n"
"..........\n"
"...5......\n"
"3..6....5.\n"
".......2..\n"
"3........3\n"
"3.2.......\n") == 0);
free(board806165692);
board806165692 = NULL;
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 8, -1) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 5) == 73 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board965651764 = gamma_board(board);
assert( board965651764 != NULL );
assert( strcmp(board965651764, 
"...45.3...\n"
"4.22......\n"
"...6.3463.\n"
"...4..1...\n"
"...5......\n"
"...5......\n"
"3.16....54\n"
".62.5..2..\n"
"3........3\n"
"3.2.......\n") == 0);
free(board965651764);
board965651764 = NULL;
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board263212348 = gamma_board(board);
assert( board263212348 != NULL );
assert( strcmp(board263212348, 
"...45.3...\n"
"4.22......\n"
"...6.3463.\n"
"...4..1...\n"
"...5......\n"
"...5......\n"
"3.16....54\n"
".62.5..2..\n"
"3........3\n"
"3.2.......\n") == 0);
free(board263212348);
board263212348 = NULL;
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board765842889 = gamma_board(board);
assert( board765842889 != NULL );
assert( strcmp(board765842889, 
"...45.3...\n"
"4.22......\n"
"...6.3463.\n"
"...4..1...\n"
"...5......\n"
"...5......\n"
"3216....54\n"
".62.5..2..\n"
"3.....4..3\n"
"3.2.......\n") == 0);
free(board765842889);
board765842889 = NULL;
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_free_fields(board, 1) == 67 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_golden_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_free_fields(board, 1) == 65 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_golden_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );


char* board859373674 = gamma_board(board);
assert( board859373674 != NULL );
assert( strcmp(board859373674, 
"...45.3...\n"
"4522.5....\n"
"...6.3463.\n"
"...4.31...\n"
"...5...6..\n"
"...5......\n"
"3216....54\n"
".62.5..2..\n"
"3....64..3\n"
"3.2.......\n") == 0);
free(board859373674);
board859373674 = NULL;


char* board999300560 = gamma_board(board);
assert( board999300560 != NULL );
assert( strcmp(board999300560, 
"...45.3...\n"
"4522.5....\n"
"...6.3463.\n"
"...4.31...\n"
"...5...6..\n"
"...5......\n"
"3216....54\n"
".62.5..2..\n"
"3....64..3\n"
"3.2.......\n") == 0);
free(board999300560);
board999300560 = NULL;
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_golden_move(board, 3, 6, 3) == 0 );


gamma_delete(board);

    return 0;
}
