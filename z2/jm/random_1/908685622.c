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
uuid: 908685622
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 8, 3, 6);
assert( board != NULL );


assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_golden_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_free_fields(board, 2) == 72 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_free_fields(board, 3) == 68 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_free_fields(board, 2) == 66 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 1) == 61 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_golden_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );


char* board456877482 = gamma_board(board);
assert( board456877482 != NULL );
assert( strcmp(board456877482, 
".....31...\n"
"3........2\n"
".13......2\n"
"...1.2....\n"
".1....3..2\n"
"..2..11...\n"
".322......\n"
"33..3....2\n") == 0);
free(board456877482);
board456877482 = NULL;
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 1, 8, 7) == 0 );


char* board142555820 = gamma_board(board);
assert( board142555820 != NULL );
assert( strcmp(board142555820, 
".....31...\n"
"3........2\n"
".13......2\n"
"...1.2....\n"
".1....3..2\n"
"..2..11...\n"
".322......\n"
"33..3.1..2\n") == 0);
free(board142555820);
board142555820 = NULL;
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );


char* board377737350 = gamma_board(board);
assert( board377737350 != NULL );
assert( strcmp(board377737350, 
".....31...\n"
"3........2\n"
".13......2\n"
"...1.2....\n"
".1....3..2\n"
"..22.11...\n"
".322......\n"
"33..3.1..2\n") == 0);
free(board377737350);
board377737350 = NULL;
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_free_fields(board, 2) == 55 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 10, 5) == 0 );


char* board114938890 = gamma_board(board);
assert( board114938890 != NULL );
assert( strcmp(board114938890, 
".....31...\n"
"3........2\n"
".13......2\n"
".1.1.2....\n"
".1....3..2\n"
"..22.11...\n"
".322......\n"
"331.3.1..2\n") == 0);
free(board114938890);
board114938890 = NULL;
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );


gamma_delete(board);

    return 0;
}
