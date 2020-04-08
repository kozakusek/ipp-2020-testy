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
uuid: 144507420
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 9, 7, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board658423056 = gamma_board(board);
assert( board658423056 != NULL );
assert( strcmp(board658423056, 
".....2...\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
"....1....\n"
".........\n"
".........\n") == 0);
free(board658423056);
board658423056 = NULL;
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_golden_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 6) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_golden_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 2, 7) == 1 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_free_fields(board, 7) == 66 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );


char* board644412882 = gamma_board(board);
assert( board644412882 != NULL );
assert( strcmp(board644412882, 
"..3..2...\n"
"..6......\n"
".5...7..4\n"
"..63...2.\n"
".5.......\n"
".........\n"
"....1.5..\n"
"...3.62..\n"
".........\n") == 0);
free(board644412882);
board644412882 = NULL;
assert( gamma_move(board, 6, 4, 1) == 1 );


char* board490230072 = gamma_board(board);
assert( board490230072 != NULL );
assert( strcmp(board490230072, 
"..3..2...\n"
"..6......\n"
".5...7..4\n"
"..63...2.\n"
".5.......\n"
".........\n"
"....1.5..\n"
"...3662..\n"
".........\n") == 0);
free(board490230072);
board490230072 = NULL;
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, -1, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_free_fields(board, 5) == 59 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_golden_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, -1, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_free_fields(board, 6) == 58 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 5, 2) == 1 );


char* board671712866 = gamma_board(board);
assert( board671712866 != NULL );
assert( strcmp(board671712866, 
"..34.2...\n"
"1.6.....1\n"
".54..7..4\n"
"..631..2.\n"
".5.4.....\n"
"..7.2....\n"
"....175.3\n"
"...3662..\n"
".........\n") == 0);
free(board671712866);
board671712866 = NULL;
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_golden_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );


char* board747390489 = gamma_board(board);
assert( board747390489 != NULL );
assert( strcmp(board747390489, 
"..34.2...\n"
"1.6.....1\n"
".54..7..4\n"
"..631..2.\n"
".514.....\n"
"..7.2...7\n"
"....175.3\n"
"...3662..\n"
"....1....\n") == 0);
free(board747390489);
board747390489 = NULL;
assert( gamma_move(board, 3, 5, 8) == 0 );


char* board369902124 = gamma_board(board);
assert( board369902124 != NULL );
assert( strcmp(board369902124, 
"..34.2...\n"
"1.6.....1\n"
".54..7..4\n"
"..631..2.\n"
".514.....\n"
"..7.2...7\n"
"....175.3\n"
"...3662..\n"
"....1....\n") == 0);
free(board369902124);
board369902124 = NULL;
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 5, 4) == 1 );


gamma_delete(board);

    return 0;
}
