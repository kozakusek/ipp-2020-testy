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
uuid: 390275084
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 10, 6, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_free_fields(board, 6) == 85 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_free_fields(board, 4) == 84 );
assert( gamma_move(board, 5, 8, 9) == 1 );
assert( gamma_move(board, 6, 3, -1) == 0 );
assert( gamma_free_fields(board, 6) == 83 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, -1, 0) == 0 );
assert( gamma_move(board, 6, 5, 9) == 1 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_golden_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, -1, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );


char* board828865776 = gamma_board(board);
assert( board828865776 != NULL );
assert( strcmp(board828865776, 
"...1.6..5\n"
".54..4..4\n"
"....3....\n"
"......2..\n"
"..2.6...1\n"
"..3......\n"
"1........\n"
"....4..1.\n"
"...1...35\n"
"..6......\n") == 0);
free(board828865776);
board828865776 = NULL;
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 9, 9) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_free_fields(board, 4) == 64 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, -1, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_golden_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, -1, 8) == 0 );
assert( gamma_free_fields(board, 5) == 62 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_move(board, 1, -1, 4) == 0 );


char* board625721926 = gamma_board(board);
assert( board625721926 != NULL );
assert( strcmp(board625721926, 
".3.1.6..5\n"
".54..4..4\n"
"...43....\n"
"56....2..\n"
"..2.6...1\n"
".13......\n"
"1........\n"
"....4.116\n"
".4.1.3.35\n"
"..6......\n") == 0);
free(board625721926);
board625721926 = NULL;
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );


char* board974146666 = gamma_board(board);
assert( board974146666 != NULL );
assert( strcmp(board974146666, 
".321.64.5\n"
".54..4..4\n"
"...43....\n"
"563...2..\n"
"..2.6...1\n"
".13......\n"
"1...6....\n"
"....4.116\n"
".4.1.3.35\n"
"..6......\n") == 0);
free(board974146666);
board974146666 = NULL;
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_golden_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 6, 5) == 1 );


gamma_delete(board);

    return 0;
}
