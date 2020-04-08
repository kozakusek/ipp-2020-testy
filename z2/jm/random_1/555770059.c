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
uuid: 555770059
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 9, 4, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_free_fields(board, 3) == 62 );


char* board758169997 = gamma_board(board);
assert( board758169997 != NULL );
assert( strcmp(board758169997, 
"......2.\n"
"........\n"
"...1...3\n"
".....3..\n"
"..2..1..\n"
"........\n"
"1.......\n"
"....4...\n"
"..1.2...\n") == 0);
free(board758169997);
board758169997 = NULL;
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_golden_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_golden_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );


char* board319374635 = gamma_board(board);
assert( board319374635 != NULL );
assert( strcmp(board319374635, 
"..4...2.\n"
"........\n"
"21.13..3\n"
".....343\n"
"..2..1..\n"
"........\n"
"1....1..\n"
"24.243..\n"
"..112...\n") == 0);
free(board319374635);
board319374635 = NULL;
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 3, -1, 4) == 0 );


char* board749280757 = gamma_board(board);
assert( board749280757 != NULL );
assert( strcmp(board749280757, 
"..4...2.\n"
"........\n"
"21.13..3\n"
".....343\n"
"..2..1..\n"
"........\n"
"1....1..\n"
"24.243..\n"
"..112...\n") == 0);
free(board749280757);
board749280757 = NULL;
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_free_fields(board, 4) == 46 );


char* board229591077 = gamma_board(board);
assert( board229591077 != NULL );
assert( strcmp(board229591077, 
"..4...2.\n"
"........\n"
"21.13..3\n"
".....343\n"
"..2..1..\n"
".....3..\n"
"133..1..\n"
"24.2434.\n"
"..112...\n") == 0);
free(board229591077);
board229591077 = NULL;
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );


gamma_delete(board);

    return 0;
}
