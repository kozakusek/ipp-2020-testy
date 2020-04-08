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
uuid: 566122961
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 10, 6, 7);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );


char* board638921779 = gamma_board(board);
assert( board638921779 != NULL );
assert( strcmp(board638921779, 
"........\n"
"..2.....\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n") == 0);
free(board638921779);
board638921779 = NULL;
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_free_fields(board, 2) == 77 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_free_fields(board, 3) == 73 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_free_fields(board, 2) == 69 );
assert( gamma_golden_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_move(board, 4, 7, 4) == 1 );


char* board943047699 = gamma_board(board);
assert( board943047699 != NULL );
assert( strcmp(board943047699, 
"6......1\n"
"..2.....\n"
"2...5...\n"
"......1.\n"
".4......\n"
"...2...4\n"
"....3...\n"
".....53.\n"
"...5....\n"
"....2...\n") == 0);
free(board943047699);
board943047699 = NULL;
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_free_fields(board, 2) == 62 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_golden_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 6, 7, 5) == 1 );


char* board719632825 = gamma_board(board);
assert( board719632825 != NULL );
assert( strcmp(board719632825, 
"6......1\n"
"..213...\n"
"2...5...\n"
"......1.\n"
".4.....6\n"
"...2...4\n"
"....345.\n"
"....453.\n"
"...5.2..\n"
"....2...\n") == 0);
free(board719632825);
board719632825 = NULL;
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );


char* board745644591 = gamma_board(board);
assert( board745644591 != NULL );
assert( strcmp(board745644591, 
"6......1\n"
"..213...\n"
"2...5...\n"
"...3..1.\n"
".4.....6\n"
"...2...4\n"
"....345.\n"
"....453.\n"
"...5.2.2\n"
"..1.2...\n") == 0);
free(board745644591);
board745644591 = NULL;
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_free_fields(board, 5) == 54 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 5, -1) == 0 );


char* board389151552 = gamma_board(board);
assert( board389151552 != NULL );
assert( strcmp(board389151552, 
"6...63.1\n"
"..213...\n"
"2...5...\n"
"...3..1.\n"
".4..1..6\n"
"...2...4\n"
"....345.\n"
"....453.\n"
"...5.2.2\n"
"..1.2...\n") == 0);
free(board389151552);
board389151552 = NULL;
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 8, -1) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_free_fields(board, 2) == 49 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 4, -1, 10) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );


char* board635272372 = gamma_board(board);
assert( board635272372 != NULL );
assert( strcmp(board635272372, 
"63..63.1\n"
"..213...\n"
"2...5...\n"
".3.3..1.\n"
".4..1..6\n"
"...2...4\n"
"....345.\n"
"4...453.\n"
"..65.2.2\n"
"..1.2.4.\n") == 0);
free(board635272372);
board635272372 = NULL;
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );


gamma_delete(board);

    return 0;
}
