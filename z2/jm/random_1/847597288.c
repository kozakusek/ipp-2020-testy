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
uuid: 847597288
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 9, 4, 7);
assert( board != NULL );


assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_golden_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_free_fields(board, 2) == 69 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );


char* board865863669 = gamma_board(board);
assert( board865863669 != NULL );
assert( strcmp(board865863669, 
"1.23....\n"
"........\n"
"........\n"
".......2\n"
"4.......\n"
"4.......\n"
".......3\n"
".......4\n"
"........\n") == 0);
free(board865863669);
board865863669 = NULL;
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_golden_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_free_fields(board, 2) == 55 );
assert( gamma_golden_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_free_fields(board, 3) == 55 );
assert( gamma_busy_fields(board, 4) == 6 );


char* board160439323 = gamma_board(board);
assert( board160439323 != NULL );
assert( strcmp(board160439323, 
"1.23....\n"
"..3.....\n"
".....41.\n"
".......2\n"
"43.2.2.1\n"
"4...4...\n"
".......3\n"
"4......4\n"
"........\n") == 0);
free(board160439323);
board160439323 = NULL;
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_free_fields(board, 2) == 51 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );


char* board272422736 = gamma_board(board);
assert( board272422736 != NULL );
assert( strcmp(board272422736, 
"1.23....\n"
"..3.....\n"
".....41.\n"
"3...2..2\n"
"43.2.2.1\n"
"4...4...\n"
"......33\n"
"4.4....4\n"
".4......\n") == 0);
free(board272422736);
board272422736 = NULL;
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_golden_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_golden_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_golden_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );


gamma_delete(board);

    return 0;
}
