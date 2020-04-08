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
uuid: 872610771
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 9, 6, 7);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_free_fields(board, 2) == 72 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, -1, 6) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_free_fields(board, 3) == 65 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_free_fields(board, 2) == 62 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_free_fields(board, 3) == 61 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_golden_move(board, 2, 8, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 6, 0) == 1 );


char* board350532984 = gamma_board(board);
assert( board350532984 != NULL );
assert( strcmp(board350532984, 
".5......\n"
".....3..\n"
"......2.\n"
"2..1....\n"
"......3.\n"
".....4..\n"
"4...4..3\n"
"...4.55.\n"
"......5.\n") == 0);
free(board350532984);
board350532984 = NULL;
assert( gamma_move(board, 6, -1, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );


char* board729796741 = gamma_board(board);
assert( board729796741 != NULL );
assert( strcmp(board729796741, 
"15......\n"
"5....3..\n"
"......24\n"
"2..1....\n"
"......3.\n"
".....4..\n"
"4...4..3\n"
"...4655.\n"
"....355.\n") == 0);
free(board729796741);
board729796741 = NULL;
assert( gamma_move(board, 3, 5, 6) == 1 );


char* board234329203 = gamma_board(board);
assert( board234329203 != NULL );
assert( strcmp(board234329203, 
"15......\n"
"5....3..\n"
".....324\n"
"2..1....\n"
"......3.\n"
".....4..\n"
"4...4..3\n"
"...4655.\n"
"....355.\n") == 0);
free(board234329203);
board234329203 = NULL;
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );


char* board558487118 = gamma_board(board);
assert( board558487118 != NULL );
assert( strcmp(board558487118, 
"15......\n"
"5....3..\n"
".....324\n"
"2..1....\n"
".....63.\n"
"..5..4.3\n"
"42..4..3\n"
"...4655.\n"
"....355.\n") == 0);
free(board558487118);
board558487118 = NULL;
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_golden_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_free_fields(board, 1) == 46 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 3, -1) == 0 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board940309706 = gamma_board(board);
assert( board940309706 != NULL );
assert( strcmp(board940309706, 
"15....1.\n"
"5....32.\n"
".....324\n"
"2..1....\n"
".1...63.\n"
"..5.24.3\n"
"42..4..3\n"
"...4655.\n"
"....355.\n") == 0);
free(board940309706);
board940309706 = NULL;
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 6, 7, 9) == 0 );


gamma_delete(board);

    return 0;
}
