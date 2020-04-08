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
uuid: 308705977
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 6, 4, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 0) == 1 );


char* board966301012 = gamma_board(board);
assert( board966301012 != NULL );
assert( strcmp(board966301012, 
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"..........1....\n") == 0);
free(board966301012);
board966301012 = NULL;
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_move(board, 3, 14, -1) == 0 );
assert( gamma_free_fields(board, 3) == 88 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 3, 14) == 0 );


char* board372884536 = gamma_board(board);
assert( board372884536 != NULL );
assert( strcmp(board372884536, 
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"..........2....\n"
"..........1....\n") == 0);
free(board372884536);
board372884536 = NULL;
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 14, 4) == 1 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 1, 5, -1) == 0 );


char* board107314801 = gamma_board(board);
assert( board107314801 != NULL );
assert( strcmp(board107314801, 
"...............\n"
"..1...........2\n"
"...............\n"
"..........4....\n"
"..........2....\n"
"..........1....\n") == 0);
free(board107314801);
board107314801 = NULL;
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 10, 0) == 0 );


char* board556579872 = gamma_board(board);
assert( board556579872 != NULL );
assert( strcmp(board556579872, 
"...............\n"
"..1...........2\n"
"...............\n"
"..........4....\n"
"..........2....\n"
"......2...1....\n") == 0);
free(board556579872);
board556579872 = NULL;
assert( gamma_free_fields(board, 4) == 84 );
assert( gamma_move(board, 1, 15, 0) == 0 );
assert( gamma_free_fields(board, 1) == 84 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 15, 4) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 15, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 14, 0) == 1 );
assert( gamma_move(board, 1, 15, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );


char* board139887182 = gamma_board(board);
assert( board139887182 != NULL );
assert( strcmp(board139887182, 
"...............\n"
"..13..........2\n"
".....2.........\n"
"..........4....\n"
"..........2....\n"
"......2...1...2\n") == 0);
free(board139887182);
board139887182 = NULL;
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 4) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_free_fields(board, 3) == 72 );
assert( gamma_golden_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 3, 14, 2) == 1 );
assert( gamma_move(board, 4, 15, 6) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_free_fields(board, 3) == 68 );
assert( gamma_move(board, 4, 12, -1) == 0 );
assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_move(board, 2, 15, 1) == 0 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 2, 14, 5) == 1 );
assert( gamma_free_fields(board, 2) == 64 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 2, 15, 6) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_free_fields(board, 4) == 63 );
assert( gamma_move(board, 1, 13, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 4, 13, 4) == 0 );


char* board381951663 = gamma_board(board);
assert( board381951663 != NULL );
assert( strcmp(board381951663, 
"..3.3..2..3...2\n"
".4133.......212\n"
"14...2...4.....\n"
"32..1.....4.1.3\n"
".21....14.2....\n"
"..1.432...1...2\n") == 0);
free(board381951663);
board381951663 = NULL;
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_golden_move(board, 1, 2, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 1, 15, 3) == 0 );


gamma_delete(board);

    return 0;
}
