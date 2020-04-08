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
uuid: 984078112
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 10, 5, 8);
assert( board != NULL );


assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 4, 7, 6) == 1 );


char* board316998979 = gamma_board(board);
assert( board316998979 != NULL );
assert( strcmp(board316998979, 
"........\n"
"........\n"
"........\n"
".......4\n"
"........\n"
"....2...\n"
"........\n"
"........\n"
"........\n"
".5......\n") == 0);
free(board316998979);
board316998979 = NULL;
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 2, 10) == 0 );


char* board357853114 = gamma_board(board);
assert( board357853114 != NULL );
assert( strcmp(board357853114, 
"........\n"
"....2...\n"
".......3\n"
".......4\n"
"........\n"
"4...2...\n"
"........\n"
"........\n"
"........\n"
".5......\n") == 0);
free(board357853114);
board357853114 = NULL;
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_free_fields(board, 1) == 70 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_free_fields(board, 1) == 67 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_free_fields(board, 2) == 67 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_free_fields(board, 2) == 62 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_golden_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_golden_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_free_fields(board, 4) == 50 );


char* board998085349 = gamma_board(board);
assert( board998085349 != NULL );
assert( strcmp(board998085349, 
"...2....\n"
".53.2...\n"
"2...1..3\n"
".....1.4\n"
".5.5.2..\n"
"4...23.5\n"
"..3.....\n"
"....4.1.\n"
"13.25..1\n"
"5531..21\n") == 0);
free(board998085349);
board998085349 = NULL;
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );


char* board260621871 = gamma_board(board);
assert( board260621871 != NULL );
assert( strcmp(board260621871, 
"...2....\n"
".53.2...\n"
"2..11..3\n"
"2....1.4\n"
".5.5.2..\n"
"4.5.23.5\n"
"..3.....\n"
"....4.1.\n"
"13.25..1\n"
"5531..21\n") == 0);
free(board260621871);
board260621871 = NULL;
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 5, 1, 7) == 1 );


gamma_delete(board);

    return 0;
}
