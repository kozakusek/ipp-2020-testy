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
uuid: 959910519
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 6, 5, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_free_fields(board, 3) == 58 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 1, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_free_fields(board, 4) == 54 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board860108397 = gamma_board(board);
assert( board860108397 != NULL );
assert( strcmp(board860108397, 
"..4.......\n"
"5..4.....4\n"
"..........\n"
"..........\n"
"..........\n"
"312.......\n") == 0);
free(board860108397);
board860108397 = NULL;
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );


char* board116767119 = gamma_board(board);
assert( board116767119 != NULL );
assert( strcmp(board116767119, 
"..4...4...\n"
"5..4.....4\n"
"..........\n"
"...1......\n"
"1.........\n"
"312..4..3.\n") == 0);
free(board116767119);
board116767119 = NULL;
assert( gamma_move(board, 5, 8, -1) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 1, 8, 4) == 1 );


char* board342973063 = gamma_board(board);
assert( board342973063 != NULL );
assert( strcmp(board342973063, 
"..4...4.3.\n"
"5..4....14\n"
"..1.......\n"
"...12.....\n"
"1.........\n"
"312..4..3.\n") == 0);
free(board342973063);
board342973063 = NULL;
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 5, 9, 3) == 1 );


char* board181501314 = gamma_board(board);
assert( board181501314 != NULL );
assert( strcmp(board181501314, 
"..4...4.3.\n"
"5..44...14\n"
"..1......5\n"
"...12.....\n"
"1...2.....\n"
"312..4..3.\n") == 0);
free(board181501314);
board181501314 = NULL;
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_golden_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_golden_move(board, 5, 0, 2) == 0 );


gamma_delete(board);

    return 0;
}
