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
uuid: 715916794
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 10, 6, 15);
assert( board != NULL );


assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_free_fields(board, 4) == 125 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 5, 8, 9) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_move(board, 6, 12, 2) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 11, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_free_fields(board, 6) == 115 );
assert( gamma_move(board, 1, 10, 9) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_free_fields(board, 5) == 107 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 12, 9) == 1 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 5, 9, 7) == 1 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_golden_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 2) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 9, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 10, 5) == 1 );
assert( gamma_free_fields(board, 2) == 84 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 5, 12, 4) == 1 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 10, 7) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_free_fields(board, 4) == 78 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_free_fields(board, 6) == 76 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 2, 11, 7) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_free_fields(board, 3) == 73 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 7, 12) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 10, 4) == 1 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_free_fields(board, 5) == 68 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 4, 11, 8) == 1 );
assert( gamma_free_fields(board, 4) == 60 );


char* board588571424 = gamma_board(board);
assert( board588571424 != NULL );
assert( strcmp(board588571424, 
"34.....5531.3\n"
".5.43.66.6.4.\n"
"23533.6.3532.\n"
"4.2.6.61..22.\n"
"1..142..522..\n"
"3.6...45.14.5\n"
".4..4....3.2.\n"
"..6613.661456\n"
"5.4.3..44....\n"
".5651..12....\n") == 0);
free(board588571424);
board588571424 = NULL;
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 6, 12) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );


char* board491406918 = gamma_board(board);
assert( board491406918 != NULL );
assert( strcmp(board491406918, 
"34.....5531.3\n"
".5.43.66.6.4.\n"
"2353356.3532.\n"
"4.2.6.61..22.\n"
"1..142..522..\n"
"3.6...45.14.5\n"
".4..4....3.2.\n"
"..6613.661456\n"
"5.423..44....\n"
".5651..12....\n") == 0);
free(board491406918);
board491406918 = NULL;
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_free_fields(board, 3) == 58 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_golden_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_golden_move(board, 6, 0, 7) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 12, 6) == 1 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board397797616 = gamma_board(board);
assert( board397797616 != NULL );
assert( strcmp(board397797616, 
"34.6...5531.3\n"
".5.43.66.6.4.\n"
"6353356.3532.\n"
"4.216.61..225\n"
"1..142..522..\n"
"3.6...45.14.5\n"
".4..4....3.2.\n"
"5.6613.661456\n"
"53423..44....\n"
".5651..12....\n") == 0);
free(board397797616);
board397797616 = NULL;
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 5, 9, 6) == 1 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 11, 0) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_golden_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_golden_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );


char* board131401295 = gamma_board(board);
assert( board131401295 != NULL );
assert( strcmp(board131401295, 
"34.6...5531.3\n"
".5.43666.6.4.\n"
"6353356.3532.\n"
"4.216.61.5225\n"
"1..1421.522..\n"
"3.6...45.1425\n"
".4..45...312.\n"
"5.6613.661456\n"
"53423.244....\n"
"55651..12516.\n") == 0);
free(board131401295);
board131401295 = NULL;
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_golden_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 4, 0, 0) == 0 );


char* board227932693 = gamma_board(board);
assert( board227932693 != NULL );
assert( strcmp(board227932693, 
"34.6...5531.3\n"
".5.43666.6.4.\n"
"6353356.3532.\n"
"4.216.61.5225\n"
"1..1421.522..\n"
"3.6...45.1425\n"
".4..45...312.\n"
"5.6613.661456\n"
"53423.244....\n"
"556514.12516.\n") == 0);
free(board227932693);
board227932693 = NULL;
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_free_fields(board, 5) == 39 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 1, 12, 0) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_golden_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_golden_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_free_fields(board, 1) == 33 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_golden_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_free_fields(board, 5) == 33 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );


char* board589161733 = gamma_board(board);
assert( board589161733 != NULL );
assert( strcmp(board589161733, 
"34.6...5531.3\n"
".5.43626.6.4.\n"
"635335613532.\n"
"4.21666145225\n"
"1.61421.522..\n"
"3.6...45.1425\n"
".4..45.2.312.\n"
"556613.661456\n"
"534236244....\n"
"556514.125161\n") == 0);
free(board589161733);
board589161733 = NULL;
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 11, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_golden_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 12, 9) == 0 );


char* board162995382 = gamma_board(board);
assert( board162995382 != NULL );
assert( strcmp(board162995382, 
"34.6...553123\n"
".5.4362646.4.\n"
"635335613532.\n"
"4.21666145225\n"
"1.61421.522..\n"
"3.6.5.45.1425\n"
".4..45.2.312.\n"
"556613.661456\n"
"534236244....\n"
"556514.125161\n") == 0);
free(board162995382);
board162995382 = NULL;
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 12, 5) == 1 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_free_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );


char* board228046967 = gamma_board(board);
assert( board228046967 != NULL );
assert( strcmp(board228046967, 
"34.6...553123\n"
".5.4362646.4.\n"
"635335613532.\n"
"4.21666145225\n"
"1.61421.522.3\n"
"3.6.5.45.1425\n"
".4.445.2.312.\n"
"5566132661456\n"
"5342362443...\n"
"556514.125161\n") == 0);
free(board228046967);
board228046967 = NULL;
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 11, 6) == 0 );


char* board306783043 = gamma_board(board);
assert( board306783043 != NULL );
assert( strcmp(board306783043, 
"34.6...553123\n"
".5.4362646.4.\n"
"635335613532.\n"
"4.21666145225\n"
"1.61421.522.3\n"
"3.6.5545.1425\n"
".4.445.2.312.\n"
"5566132661456\n"
"5342362443...\n"
"556514.125161\n") == 0);
free(board306783043);
board306783043 = NULL;
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_golden_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_golden_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 3) == 1 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );


char* board928685129 = gamma_board(board);
assert( board928685129 != NULL );
assert( strcmp(board928685129, 
"34.6..2553123\n"
".534362646.4.\n"
"633335613532.\n"
"4.21666145225\n"
"1161421.522.3\n"
"3.6.5545.1425\n"
".4.445.2.3126\n"
"5566132661456\n"
"5342362443...\n"
"556514.125161\n") == 0);
free(board928685129);
board928685129 = NULL;
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_free_fields(board, 6) == 21 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_golden_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_golden_move(board, 5, 2, 7) == 1 );


char* board389536198 = gamma_board(board);
assert( board389536198 != NULL );
assert( strcmp(board389536198, 
"34.6..2553123\n"
".534362646.4.\n"
"635335613532.\n"
"4.21666145225\n"
"1161421.522.3\n"
"3.6.5545.1425\n"
".4.445.2.3126\n"
"5566132661456\n"
"5342362443...\n"
"556514.125161\n") == 0);
free(board389536198);
board389536198 = NULL;
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_move(board, 2, 1, 2) == 0 );


char* board203387636 = gamma_board(board);
assert( board203387636 != NULL );
assert( strcmp(board203387636, 
"34.6..2553123\n"
".534362646.4.\n"
"635335613532.\n"
"4.21666145225\n"
"1161421.522.3\n"
"3.6.5545.1425\n"
".4.445.2.3126\n"
"5566132661456\n"
"5342362443...\n"
"556514.125161\n") == 0);
free(board203387636);
board203387636 = NULL;
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 2, 12, 7) == 1 );


char* board276170163 = gamma_board(board);
assert( board276170163 != NULL );
assert( strcmp(board276170163, 
"34.6..2553123\n"
".534362646.4.\n"
"6353356135322\n"
"4.21666145225\n"
"1161421.522.3\n"
"3.6.5545.1425\n"
".4.445.2.3126\n"
"5566132661456\n"
"5342362443...\n"
"556514.125161\n") == 0);
free(board276170163);
board276170163 = NULL;
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 23 );
assert( gamma_free_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );


gamma_delete(board);

    return 0;
}
