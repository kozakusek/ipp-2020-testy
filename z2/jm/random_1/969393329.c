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
uuid: 969393329
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 10, 3, 4);
assert( board != NULL );


assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_free_fields(board, 2) == 85 );
assert( gamma_golden_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_golden_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_golden_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_golden_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_golden_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_move(board, 3, 2, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_golden_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_golden_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 1, -1, 10) == 0 );


char* board309261867 = gamma_board(board);
assert( board309261867 != NULL );
assert( strcmp(board309261867, 
"....3...3\n"
"....3....\n"
"...2.2...\n"
".........\n"
".1..1....\n"
".....22..\n"
"...1.3...\n"
".33..1...\n"
"....22...\n"
".........\n") == 0);
free(board309261867);
board309261867 = NULL;
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board448901611 = gamma_board(board);
assert( board448901611 != NULL );
assert( strcmp(board448901611, 
"....3...3\n"
"....3....\n"
"...2.2...\n"
".........\n"
".1..1....\n"
".....22..\n"
"...1.3...\n"
".33..1...\n"
"....22...\n"
".........\n") == 0);
free(board448901611);
board448901611 = NULL;
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 1, 8, 9) == 0 );


char* board682313854 = gamma_board(board);
assert( board682313854 != NULL );
assert( strcmp(board682313854, 
"....3...3\n"
"....3....\n"
"...2.2...\n"
".........\n"
".1..1....\n"
".....22..\n"
"...1.3...\n"
".33..1...\n"
"....22...\n"
".........\n") == 0);
free(board682313854);
board682313854 = NULL;
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_free_fields(board, 3) == 15 );


gamma_delete(board);

    return 0;
}
