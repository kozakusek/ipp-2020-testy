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
uuid: 855438696
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 17, 6, 20);
assert( board != NULL );


assert( gamma_free_fields(board, 1) == 51 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_free_fields(board, 3) == 50 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );


char* board802990737 = gamma_board(board);
assert( board802990737 != NULL );
assert( strcmp(board802990737, 
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
".3.\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n") == 0);
free(board802990737);
board802990737 = NULL;
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 16) == 1 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );


char* board713621145 = gamma_board(board);
assert( board713621145 != NULL );
assert( strcmp(board713621145, 
"5..\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
".3.\n"
".6.\n"
"...\n"
".3.\n"
"..2\n"
".2.\n"
"...\n"
"...\n"
".5.\n"
"...\n") == 0);
free(board713621145);
board713621145 = NULL;
assert( gamma_move(board, 3, -1, 14) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );


char* board102511000 = gamma_board(board);
assert( board102511000 != NULL );
assert( strcmp(board102511000, 
"5..\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
"...\n"
".3.\n"
".6.\n"
"...\n"
".3.\n"
"..2\n"
".2.\n"
".6.\n"
"...\n"
".5.\n"
"...\n") == 0);
free(board102511000);
board102511000 = NULL;
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 4, 1, 16) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_golden_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 4, 3, 15) == 0 );
assert( gamma_golden_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 2, 0, 11) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 6, 3, 14) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, -1, 17) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );


char* board690203590 = gamma_board(board);
assert( board690203590 != NULL );
assert( strcmp(board690203590, 
"54.\n"
"...\n"
"...\n"
"...\n"
"...\n"
"2..\n"
"...\n"
".3.\n"
".6.\n"
".6.\n"
".3.\n"
"..2\n"
"32.\n"
".6.\n"
"...\n"
".5.\n"
"...\n") == 0);
free(board690203590);
board690203590 = NULL;
assert( gamma_move(board, 4, 0, 13) == 1 );
assert( gamma_free_fields(board, 5) == 38 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_free_fields(board, 3) == 37 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_move(board, 6, 2, 17) == 0 );
assert( gamma_move(board, 1, 1, 12) == 1 );
assert( gamma_free_fields(board, 2) == 36 );
assert( gamma_move(board, 3, 3, 6) == 0 );


gamma_delete(board);

    return 0;
}
