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
uuid: 193178350
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 5, 15, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );


char* board811742319 = gamma_board(board);
assert( board811742319 != NULL );
assert( strcmp(board811742319, 
".........\n"
".........\n"
".....1...\n"
".........\n"
".........\n") == 0);
free(board811742319);
board811742319 = NULL;
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_free_fields(board, 8) == 37 );
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_free_fields(board, 9) == 37 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board894442881 = gamma_board(board);
assert( board894442881 != NULL );
assert( strcmp(board894442881, 
".5..4....\n"
"...7.....\n"
"...6.1...\n"
"32.......\n"
"8........\n") == 0);
free(board894442881);
board894442881 = NULL;
assert( gamma_move(board, 10, 2, 4) == 1 );
assert( gamma_move(board, 11, 2, 1) == 1 );
assert( gamma_move(board, 11, 3, 3) == 0 );
assert( gamma_move(board, 12, 4, 1) == 1 );
assert( gamma_move(board, 12, 4, 1) == 0 );
assert( gamma_free_fields(board, 12) == 34 );
assert( gamma_move(board, 13, 3, 1) == 1 );
assert( gamma_move(board, 14, 1, 7) == 0 );
assert( gamma_move(board, 15, 0, 6) == 0 );
assert( gamma_move(board, 15, 8, 0) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );


char* board753424143 = gamma_board(board);
assert( board753424143 != NULL );
assert( strcmp(board753424143, 
".510.4....\n"
"2..7.....\n"
"...6.1...\n"
"321113126...\n"
"8....3..15\n") == 0);
free(board753424143);
board753424143 = NULL;
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 8, 8, 2) == 1 );
assert( gamma_free_fields(board, 8) == 28 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 0 );
assert( gamma_move(board, 10, 2, 0) == 1 );
assert( gamma_move(board, 11, 4, 7) == 0 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_move(board, 12, 5, 0) == 0 );
assert( gamma_move(board, 12, 8, 1) == 1 );
assert( gamma_free_fields(board, 12) == 26 );
assert( gamma_golden_move(board, 12, 1, 2) == 0 );
assert( gamma_move(board, 13, 0, 1) == 0 );
assert( gamma_move(board, 14, 4, 8) == 0 );
assert( gamma_move(board, 14, 7, 4) == 1 );
assert( gamma_golden_move(board, 14, 1, 4) == 1 );
assert( gamma_move(board, 15, 5, 4) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_free_fields(board, 8) == 20 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 4, 6) == 0 );
assert( gamma_free_fields(board, 11) == 20 );
assert( gamma_move(board, 13, 8, 4) == 1 );
assert( gamma_move(board, 13, 6, 3) == 0 );
assert( gamma_move(board, 14, 2, 2) == 1 );
assert( gamma_move(board, 15, 3, 2) == 0 );
assert( gamma_move(board, 15, 0, 3) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 8, 2, 2) == 0 );
assert( gamma_golden_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 11, 7, 4) == 0 );
assert( gamma_move(board, 11, 0, 0) == 0 );
assert( gamma_free_fields(board, 11) == 15 );
assert( gamma_move(board, 13, 8, 4) == 0 );
assert( gamma_move(board, 14, 4, 0) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_golden_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_free_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 8, 3) == 1 );
assert( gamma_move(board, 8, 7, 0) == 0 );


char* board548562239 = gamma_board(board);
assert( board548562239 != NULL );
assert( strcmp(board548562239, 
".14101415.1413\n"
"2..7..218\n"
"6214671..8\n"
"321113126..12\n"
"8.10.83.515\n") == 0);
free(board548562239);
board548562239 = NULL;
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_free_fields(board, 9) == 13 );
assert( gamma_move(board, 10, 8, 4) == 0 );
assert( gamma_move(board, 11, 0, 1) == 0 );
assert( gamma_move(board, 12, 3, 0) == 1 );
assert( gamma_move(board, 12, 7, 4) == 0 );
assert( gamma_move(board, 13, 4, 0) == 0 );
assert( gamma_move(board, 14, 3, 2) == 0 );
assert( gamma_move(board, 14, 2, 4) == 0 );
assert( gamma_move(board, 15, 0, 1) == 0 );
assert( gamma_move(board, 15, 1, 0) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_free_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_golden_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );


char* board597931199 = gamma_board(board);
assert( board597931199 != NULL );
assert( strcmp(board597931199, 
".2101415.1413\n"
"2..7..218\n"
"6214671..8\n"
"321113126..12\n"
"8151012835515\n") == 0);
free(board597931199);
board597931199 = NULL;
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_free_fields(board, 8) == 10 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 0 );


char* board393350487 = gamma_board(board);
assert( board393350487 != NULL );
assert( strcmp(board393350487, 
".2101415.1413\n"
"2..7..218\n"
"6214671..8\n"
"321113126..12\n"
"8151012835515\n") == 0);
free(board393350487);
board393350487 = NULL;
assert( gamma_move(board, 10, 2, 7) == 0 );
assert( gamma_move(board, 10, 3, 3) == 0 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_move(board, 11, 5, 3) == 1 );
assert( gamma_move(board, 12, 1, 6) == 0 );
assert( gamma_move(board, 12, 3, 4) == 0 );
assert( gamma_busy_fields(board, 13) == 2 );
assert( gamma_move(board, 14, 2, 6) == 0 );
assert( gamma_move(board, 14, 7, 4) == 0 );
assert( gamma_move(board, 15, 1, 3) == 1 );


gamma_delete(board);

    return 0;
}
