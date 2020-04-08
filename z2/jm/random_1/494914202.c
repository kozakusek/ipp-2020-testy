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
uuid: 494914202
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 9, 4, 5);
assert( board != NULL );


assert( gamma_golden_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_golden_move(board, 3, 0, 5) == 1 );
assert( gamma_free_fields(board, 4) == 75 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 2, -1) == 0 );


char* board352616309 = gamma_board(board);
assert( board352616309 != NULL );
assert( strcmp(board352616309, 
"....2....\n"
".........\n"
".........\n"
"3..1....2\n"
".........\n"
".......3.\n"
".1....3..\n"
"....2....\n"
".....4...\n") == 0);
free(board352616309);
board352616309 = NULL;
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_golden_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_free_fields(board, 4) == 66 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );


char* board716227409 = gamma_board(board);
assert( board716227409 != NULL );
assert( strcmp(board716227409, 
"....2...1\n"
".........\n"
".1...2.2.\n"
"3..1....2\n"
".........\n"
".......3.\n"
".1....3..\n"
"....23...\n"
"...334...\n") == 0);
free(board716227409);
board716227409 = NULL;
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, -1, 6) == 0 );


char* board401147263 = gamma_board(board);
assert( board401147263 != NULL );
assert( strcmp(board401147263, 
"....2.1.1\n"
".........\n"
".1...2.2.\n"
"3..1....2\n"
"....4....\n"
".......3.\n"
".1....3..\n"
"....23...\n"
"...334...\n") == 0);
free(board401147263);
board401147263 = NULL;
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );


char* board304620282 = gamma_board(board);
assert( board304620282 != NULL );
assert( strcmp(board304620282, 
"....2.1.1\n"
".......4.\n"
".1...2.2.\n"
"3..1....2\n"
"....4....\n"
".......3.\n"
"11....3..\n"
"....23...\n"
"...334...\n") == 0);
free(board304620282);
board304620282 = NULL;
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );


char* board692565701 = gamma_board(board);
assert( board692565701 != NULL );
assert( strcmp(board692565701, 
"....2.1.1\n"
".......4.\n"
".1...2.2.\n"
"3..1....2\n"
"....4....\n"
".......3.\n"
"11....3..\n"
"4...23...\n"
"4..334.4.\n") == 0);
free(board692565701);
board692565701 = NULL;
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_golden_move(board, 1, 4, 8) == 0 );


gamma_delete(board);

    return 0;
}
