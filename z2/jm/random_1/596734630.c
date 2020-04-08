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
uuid: 596734630
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(3, 5, 10, 20);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board181033939 = gamma_board(board);
assert( board181033939 != NULL );
assert( strcmp(board181033939, 
"...\n"
"..3\n"
"...\n"
"...\n"
"...\n") == 0);
free(board181033939);
board181033939 = NULL;
assert( gamma_move(board, 6, 0, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board165897914 = gamma_board(board);
assert( board165897914 != NULL );
assert( strcmp(board165897914, 
"...\n"
"..3\n"
"...\n"
"...\n"
"...\n") == 0);
free(board165897914);
board165897914 = NULL;
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );


char* board594040736 = gamma_board(board);
assert( board594040736 != NULL );
assert( strcmp(board594040736, 
"...\n"
"..3\n"
"...\n"
"...\n"
"...\n") == 0);
free(board594040736);
board594040736 = NULL;
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_free_fields(board, 9) == 13 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_move(board, 5, 2, -1) == 0 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_busy_fields(board, 10) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_free_fields(board, 4) == 10 );


char* board564864512 = gamma_board(board);
assert( board564864512 != NULL );
assert( strcmp(board564864512, 
"6..\n"
"9.3\n"
"3..\n"
"...\n"
"..1\n") == 0);
free(board564864512);
board564864512 = NULL;
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_golden_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 10, 1, 5) == 0 );
assert( gamma_free_fields(board, 10) == 8 );


gamma_delete(board);

    return 0;
}
