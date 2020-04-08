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
uuid: 652509158
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 12, 4, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 8, 11) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 3, 10) == 1 );
assert( gamma_free_fields(board, 3) == 102 );
assert( gamma_free_fields(board, 4) == 102 );


char* board903302718 = gamma_board(board);
assert( board903302718 != NULL );
assert( strcmp(board903302718, 
"........2\n"
"...3.....\n"
".........\n"
".........\n"
"...2.....\n"
".........\n"
"....3....\n"
"........4\n"
".........\n"
".........\n"
"...1.....\n"
".........\n") == 0);
free(board903302718);
board903302718 = NULL;
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );


char* board521751658 = gamma_board(board);
assert( board521751658 != NULL );
assert( strcmp(board521751658, 
"........2\n"
"...3.....\n"
"...3.....\n"
"2........\n"
"...2.....\n"
"...4.....\n"
"....3....\n"
".....4..4\n"
".........\n"
".........\n"
"...1.....\n"
".........\n") == 0);
free(board521751658);
board521751658 = NULL;
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_free_fields(board, 2) == 98 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 1, -1, 11) == 0 );
assert( gamma_free_fields(board, 1) == 98 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_free_fields(board, 2) == 97 );


char* board912642325 = gamma_board(board);
assert( board912642325 != NULL );
assert( strcmp(board912642325, 
"........2\n"
"...3.....\n"
"...3.2...\n"
"2........\n"
"...2.....\n"
"...4.....\n"
"....3....\n"
".....4..4\n"
".........\n"
".........\n"
"...1.....\n"
".........\n") == 0);
free(board912642325);
board912642325 = NULL;
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_golden_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_move(board, 1, -1, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, -1, 11) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 1, 8, 10) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, -1, 10) == 0 );
assert( gamma_free_fields(board, 3) == 82 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_golden_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, -1, 10) == 0 );


char* board355235884 = gamma_board(board);
assert( board355235884 != NULL );
assert( strcmp(board355235884, 
"........2\n"
".1.3....1\n"
"..43.2...\n"
"2.......3\n"
".4.2.....\n"
".2.4.....\n"
"....3.4..\n"
".32..4.34\n"
"......2..\n"
"3...1....\n"
"...13....\n"
"4.....12.\n") == 0);
free(board355235884);
board355235884 = NULL;
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board628743573 = gamma_board(board);
assert( board628743573 != NULL );
assert( strcmp(board628743573, 
"........2\n"
".1.3....1\n"
"..43.2...\n"
"2..1....3\n"
".4.2.....\n"
".2.4.....\n"
"....3.41.\n"
".32414.34\n"
"......2..\n"
"3...1....\n"
"..313....\n"
"4.....12.\n") == 0);
free(board628743573);
board628743573 = NULL;
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_golden_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_golden_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 4, -1, 11) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );


gamma_delete(board);

    return 0;
}
