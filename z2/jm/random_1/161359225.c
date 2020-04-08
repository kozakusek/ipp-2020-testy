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
uuid: 161359225
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 10, 4, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 3, 3) == 1 );
assert( gamma_free_fields(board, 2) == 86 );


char* board945023370 = gamma_board(board);
assert( board945023370 != NULL );
assert( strcmp(board945023370, 
".........\n"
".........\n"
".....1...\n"
".........\n"
".........\n"
"...2.1...\n"
"...1.....\n"
".........\n"
".........\n"
".........\n") == 0);
free(board945023370);
board945023370 = NULL;
assert( gamma_free_fields(board, 3) == 86 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_free_fields(board, 2) == 83 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, -1, -1) == 0 );


char* board363781933 = gamma_board(board);
assert( board363781933 != NULL );
assert( strcmp(board363781933, 
"....42...\n"
"......22.\n"
"2....1...\n"
"2..4.....\n"
"......1..\n"
"3..2.1...\n"
"...11..2.\n"
".......4.\n"
".....1...\n"
".........\n") == 0);
free(board363781933);
board363781933 = NULL;
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_free_fields(board, 3) == 71 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_free_fields(board, 4) == 70 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_golden_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );


char* board748712966 = gamma_board(board);
assert( board748712966 != NULL );
assert( strcmp(board748712966, 
"....42...\n"
"......22.\n"
"22...1...\n"
"2..4.....\n"
"......1..\n"
"3..241...\n"
"...11..2.\n"
".......4.\n"
".....1...\n"
"....3....\n") == 0);
free(board748712966);
board748712966 = NULL;
assert( gamma_move(board, 2, 7, 7) == 1 );


char* board949156740 = gamma_board(board);
assert( board949156740 != NULL );
assert( strcmp(board949156740, 
"....42...\n"
"......22.\n"
"22...1.2.\n"
"2..4.....\n"
"......1..\n"
"3..241...\n"
"...11..2.\n"
".......4.\n"
".....1...\n"
"....3....\n") == 0);
free(board949156740);
board949156740 = NULL;
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );


char* board287594876 = gamma_board(board);
assert( board287594876 != NULL );
assert( strcmp(board287594876, 
"....42.3.\n"
"....3.22.\n"
"22...1.2.\n"
"2..4.....\n"
"......1..\n"
"3..241...\n"
"...11..2.\n"
"..4.1..4.\n"
".....1...\n"
"....3....\n") == 0);
free(board287594876);
board287594876 = NULL;
assert( gamma_free_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board921074644 = gamma_board(board);
assert( board921074644 != NULL );
assert( strcmp(board921074644, 
"....42.3.\n"
"....3.22.\n"
"22...1.2.\n"
"2..4.....\n"
"......1..\n"
"3..241...\n"
"...11..2.\n"
"..4.1..4.\n"
".....1...\n"
"....3....\n") == 0);
free(board921074644);
board921074644 = NULL;
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 65 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_golden_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_free_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 7, 6) == 1 );


gamma_delete(board);

    return 0;
}
