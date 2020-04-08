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
uuid: 649558966
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 8, 7, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 11, 0) == 1 );
assert( gamma_golden_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_free_fields(board, 4) == 95 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 7, 9, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_free_fields(board, 4) == 87 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_move(board, 6, 9, 2) == 1 );
assert( gamma_move(board, 7, 10, 4) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 10, 1) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, -1, 2) == 0 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_golden_move(board, 5, 5, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_golden_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, 7, -1) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );


char* board150281695 = gamma_board(board);
assert( board150281695 != NULL );
assert( strcmp(board150281695, 
"............\n"
"...6........\n"
"....61......\n"
".355...1.27.\n"
"51..17......\n"
"4........6..\n"
"....2.3..53.\n"
"...5.....7.1\n") == 0);
free(board150281695);
board150281695 = NULL;
assert( gamma_move(board, 3, 11, 1) == 1 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 7, 12, 7) == 0 );
assert( gamma_move(board, 1, 11, -1) == 0 );
assert( gamma_move(board, 2, 10, 3) == 1 );


char* board318394365 = gamma_board(board);
assert( board318394365 != NULL );
assert( strcmp(board318394365, 
"5...........\n"
"...6........\n"
"....61......\n"
".355...1.27.\n"
"51..17....2.\n"
"4........6..\n"
"....2.3..533\n"
"...5.....7.1\n") == 0);
free(board318394365);
board318394365 = NULL;
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_golden_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_golden_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );


char* board896110453 = gamma_board(board);
assert( board896110453 != NULL );
assert( strcmp(board896110453, 
"5...........\n"
"...6........\n"
"....61.7....\n"
".355.3.1.27.\n"
"512.17....2.\n"
"4..4.....6..\n"
"....233..533\n"
"...5.....7.1\n") == 0);
free(board896110453);
board896110453 = NULL;
assert( gamma_move(board, 6, 10, 5) == 1 );
assert( gamma_free_fields(board, 6) == 65 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_free_fields(board, 5) == 61 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_free_fields(board, 7) == 57 );
assert( gamma_free_fields(board, 1) == 13 );


char* board693361451 = gamma_board(board);
assert( board693361451 != NULL );
assert( strcmp(board693361451, 
"5....2.5....\n"
"...6........\n"
".5..61.7.46.\n"
".355.3.1.27.\n"
"512.171...2.\n"
"4..4...3.6..\n"
"....2337.533\n"
"..15.....7.1\n") == 0);
free(board693361451);
board693361451 = NULL;
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 11, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_golden_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_free_fields(board, 6) == 52 );
assert( gamma_move(board, 7, 6, -1) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_golden_move(board, 2, 3, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, -1, 3) == 0 );
assert( gamma_golden_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_free_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 8, 2) == 0 );


char* board311584720 = gamma_board(board);
assert( board311584720 != NULL );
assert( strcmp(board311584720, 
"5....2.5.2..\n"
"...6........\n"
"45.561.7.46.\n"
".755.3.1.27.\n"
"512.171...27\n"
"4..4...366..\n"
"..3.23376533\n"
"..15.....7.1\n") == 0);
free(board311584720);
board311584720 = NULL;
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 1, -1) == 0 );
assert( gamma_free_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_golden_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_free_fields(board, 3) == 47 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );


char* board719173749 = gamma_board(board);
assert( board719173749 != NULL );
assert( strcmp(board719173749, 
"5....2.532..\n"
".2.6...6....\n"
"46.561.7.46.\n"
".755.3.1.27.\n"
"512.171...27\n"
"4..4...366..\n"
"..3.23376533\n"
"..15.....7.1\n") == 0);
free(board719173749);
board719173749 = NULL;
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_golden_move(board, 5, 5, 0) == 0 );
assert( gamma_free_fields(board, 6) == 47 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 11, 7) == 1 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 10, -1) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );


char* board965223836 = gamma_board(board);
assert( board965223836 != NULL );
assert( strcmp(board965223836, 
"5....2.532.3\n"
".2.6...6....\n"
"46.561.7746.\n"
".755.3.1.27.\n"
"512.171...27\n"
"4..4...366..\n"
"..3.23376533\n"
"..15.....7.1\n") == 0);
free(board965223836);
board965223836 = NULL;
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_free_fields(board, 2) == 16 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 6) == 45 );
assert( gamma_move(board, 7, 12, -1) == 0 );
assert( gamma_free_fields(board, 7) == 10 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_free_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_free_fields(board, 7) == 9 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


gamma_delete(board);

    return 0;
}
