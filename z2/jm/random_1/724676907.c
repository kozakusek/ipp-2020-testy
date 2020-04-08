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
uuid: 724676907
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 20, 4, 11);
assert( board != NULL );


assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 19) == 1 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 0, 17) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 20) == 0 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_move(board, 3, 4, 18) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, -1, 20) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 4, 5, 20) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_golden_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 2, 2, 17) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 1, 4, 17) == 1 );
assert( gamma_move(board, 2, 2, 13) == 1 );
assert( gamma_free_fields(board, 2) == 186 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 4, 3, 14) == 1 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_free_fields(board, 1) == 184 );
assert( gamma_golden_move(board, 1, 14, 3) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 6, 17) == 1 );
assert( gamma_free_fields(board, 3) == 181 );
assert( gamma_move(board, 4, 2, 11) == 1 );
assert( gamma_move(board, 3, 6, 13) == 1 );
assert( gamma_move(board, 4, 1, 17) == 1 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 5, 19) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 17) == 0 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 4, 16) == 1 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 3, 9, 19) == 1 );
assert( gamma_move(board, 4, 2, 14) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 2, 17) == 0 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 13) == 1 );
assert( gamma_move(board, 1, 7, 13) == 1 );
assert( gamma_move(board, 2, 2, 18) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_free_fields(board, 3) == 166 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 3, -1, 16) == 0 );
assert( gamma_move(board, 4, 5, 14) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, 19) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 4, 5, 10) == 1 );
assert( gamma_move(board, 1, 10, 14) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 4, 19) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_free_fields(board, 1) == 35 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 2, 0, 19) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 155 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_golden_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 8, 12) == 1 );
assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_move(board, 2, -1, 19) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 6, 16) == 0 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, -1, 20) == 0 );
assert( gamma_move(board, 3, 10, 17) == 0 );
assert( gamma_move(board, 4, 1, 11) == 1 );
assert( gamma_move(board, 1, 0, 19) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );


char* board497562780 = gamma_board(board);
assert( board497562780 != NULL );
assert( strcmp(board497562780, 
"24..43...3\n"
"..2.3.....\n"
"242.1.3...\n"
"....2.....\n"
"..........\n"
"..44.4....\n"
".42...31..\n"
"..1.....4.\n"
".44.......\n"
".1...4....\n"
"...2......\n"
".....1.3..\n"
".3........\n"
".1..3.2.2.\n"
".2...331..\n"
".4........\n"
"...2..1...\n"
"....4....1\n"
"..1......1\n"
"1.2.3....1\n") == 0);
free(board497562780);
board497562780 = NULL;
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 0, 15) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 4, 16) == 0 );
assert( gamma_move(board, 1, 9, 13) == 0 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, -1, 15) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, -1, 20) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 1, -1, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_move(board, 3, 5, 14) == 0 );
assert( gamma_move(board, 4, 9, 20) == 0 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_golden_move(board, 1, 19, 0) == 0 );
assert( gamma_move(board, 3, 10, 20) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 3, 20) == 0 );
assert( gamma_golden_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 9, 13) == 0 );


char* board377570411 = gamma_board(board);
assert( board377570411 != NULL );
assert( strcmp(board377570411, 
"24..43...3\n"
"..2.3.....\n"
"242.1.3...\n"
"....2.....\n"
"..........\n"
"..44.4....\n"
".42...31..\n"
"..1.....4.\n"
".44.......\n"
"31...4....\n"
"...2......\n"
".....1.3..\n"
".3........\n"
".1..3.2.2.\n"
".2...331..\n"
".4........\n"
"...2..1...\n"
"....4....1\n"
"..1......1\n"
"1.2.3....1\n") == 0);
free(board377570411);
board377570411 = NULL;
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_move(board, 1, 3, 17) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 6, 12) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 3, 8, 16) == 0 );
assert( gamma_move(board, 4, 10, 15) == 0 );


char* board227522073 = gamma_board(board);
assert( board227522073 != NULL );
assert( strcmp(board227522073, 
"24..43...3\n"
"..2.3.....\n"
"24211.3...\n"
"....2.....\n"
"..........\n"
"..44.4....\n"
".42...31..\n"
"..1...3.4.\n"
".44.......\n"
"31...4....\n"
"...2......\n"
".....1.3..\n"
".3........\n"
".1..3.2.2.\n"
".2...331..\n"
".4........\n"
"...2..1...\n"
"....4....1\n"
"..1......1\n"
"1.2.3....1\n") == 0);
free(board227522073);
board227522073 = NULL;
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 5, 15) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_free_fields(board, 3) == 32 );


char* board212122186 = gamma_board(board);
assert( board212122186 != NULL );
assert( strcmp(board212122186, 
"24..43...3\n"
"..2.3.....\n"
"24211.3...\n"
"....2.....\n"
"..........\n"
"..44.4....\n"
".42...31..\n"
"..1...3.4.\n"
".44.......\n"
"31...4....\n"
"...2......\n"
".....1.3..\n"
".3........\n"
".1..3.2.2.\n"
".2...331..\n"
".4........\n"
"...2..1...\n"
"....4....1\n"
"..1......1\n"
"1.2.3....1\n") == 0);
free(board212122186);
board212122186 = NULL;
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 2, 10, 18) == 0 );


char* board139664227 = gamma_board(board);
assert( board139664227 != NULL );
assert( strcmp(board139664227, 
"24..43...3\n"
"..2.3.....\n"
"24211.3...\n"
"....2.....\n"
"..........\n"
"..44.4....\n"
".42...31..\n"
"..1...3.4.\n"
".44.......\n"
"31...4....\n"
"...2......\n"
".....1.3..\n"
".3........\n"
".1..3.2.2.\n"
".2...331..\n"
".4........\n"
"...2..1...\n"
"....4....1\n"
"..1......1\n"
"1.2.3....1\n") == 0);
free(board139664227);
board139664227 = NULL;
assert( gamma_move(board, 3, -1, 20) == 0 );
assert( gamma_move(board, 4, 0, 16) == 0 );
assert( gamma_move(board, 1, 7, 14) == 1 );
assert( gamma_move(board, 2, 7, 16) == 0 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_free_fields(board, 4) == 32 );


char* board138167120 = gamma_board(board);
assert( board138167120 != NULL );
assert( strcmp(board138167120, 
"24..43...3\n"
"..2.3.....\n"
"24211.3...\n"
"....2.....\n"
"..........\n"
"..44.4.1..\n"
".42...31..\n"
"..1...3.4.\n"
".44.......\n"
"31...4....\n"
"...2......\n"
".....1.3..\n"
".3........\n"
".1..3.2.2.\n"
".2...331..\n"
".4........\n"
"...2..1...\n"
"....4....1\n"
"..1......1\n"
"1.2.3....1\n") == 0);
free(board138167120);
board138167120 = NULL;
assert( gamma_move(board, 2, 1, 16) == 0 );
assert( gamma_move(board, 4, 10, 20) == 0 );
assert( gamma_golden_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );


char* board688134985 = gamma_board(board);
assert( board688134985 != NULL );
assert( strcmp(board688134985, 
"24..43...3\n"
"..2.3.....\n"
"24211.3...\n"
"....2.....\n"
"..........\n"
"..44.4.1..\n"
".42...31..\n"
"..1...3.4.\n"
".44.......\n"
"31...4....\n"
"...2......\n"
".....1.3..\n"
".3........\n"
".1..3.2.2.\n"
".2...331..\n"
".4........\n"
"...2..1...\n"
"....4....1\n"
"..1......1\n"
"1.2.3....1\n") == 0);
free(board688134985);
board688134985 = NULL;
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 7, 19) == 0 );


char* board274320538 = gamma_board(board);
assert( board274320538 != NULL );
assert( strcmp(board274320538, 
"24..43...3\n"
"..2.3.....\n"
"24211.3...\n"
"....2.....\n"
"..........\n"
"..44.4.1..\n"
".42...31..\n"
"..1...3.4.\n"
".44.......\n"
"31...4....\n"
"...2......\n"
".....1.3..\n"
"33........\n"
".1..3.2.2.\n"
".2...331..\n"
".4........\n"
"...24.1...\n"
"....4....1\n"
"..1......1\n"
"1.2.3....1\n") == 0);
free(board274320538);
board274320538 = NULL;
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 3, 20) == 0 );
assert( gamma_move(board, 4, 3, 20) == 0 );


gamma_delete(board);

    return 0;
}
