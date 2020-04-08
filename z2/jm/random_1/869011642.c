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
uuid: 869011642
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 11, 5, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board795744286 = gamma_board(board);
assert( board795744286 != NULL );
assert( strcmp(board795744286, 
".............\n"
".............\n"
".............\n"
".............\n"
".............\n"
"..1..........\n"
".............\n"
".............\n"
".............\n"
".............\n"
".............\n") == 0);
free(board795744286);
board795744286 = NULL;
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_golden_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_golden_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 2, 12, 2) == 1 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 10, 9) == 1 );
assert( gamma_free_fields(board, 1) == 128 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_golden_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_free_fields(board, 5) == 119 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_free_fields(board, 3) == 119 );
assert( gamma_move(board, 4, 11, 3) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_move(board, 1, 13, 8) == 0 );
assert( gamma_golden_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 3, 11, 6) == 1 );


char* board795843535 = gamma_board(board);
assert( board795843535 != NULL );
assert( strcmp(board795843535, 
".2......4....\n"
"..........1..\n"
"5......2.....\n"
".1...........\n"
"...5......23.\n"
"..1.3..5.....\n"
".2..2..1.....\n"
"..4.......54.\n"
"...341......2\n"
"..3.3...4....\n"
"..1435.......\n") == 0);
free(board795843535);
board795843535 = NULL;
assert( gamma_move(board, 5, 12, 10) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 11, 11) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_golden_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_golden_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_golden_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 5, 13, 9) == 0 );


char* board279723023 = gamma_board(board);
assert( board279723023 != NULL );
assert( strcmp(board279723023, 
".2......4...5\n"
"..........1..\n"
"5.....22.....\n"
".1...........\n"
"...5.....323.\n"
"..1.3..5.....\n"
".2..2..1.....\n"
"..4.......54.\n"
"...341......2\n"
"..3.3...4....\n"
"..1435.......\n") == 0);
free(board279723023);
board279723023 = NULL;
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_move(board, 1, -1, 0) == 0 );


char* board716984661 = gamma_board(board);
assert( board716984661 != NULL );
assert( strcmp(board716984661, 
".2......4...5\n"
"..........1..\n"
"5.....22.....\n"
".1...........\n"
"...5.....323.\n"
"..1.3..5.....\n"
".2..2..1.....\n"
"..4.......54.\n"
"...341......2\n"
"..3.35..4....\n"
"..1435.......\n") == 0);
free(board716984661);
board716984661 = NULL;
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, -1, 9) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_free_fields(board, 4) == 16 );


char* board224138106 = gamma_board(board);
assert( board224138106 != NULL );
assert( strcmp(board224138106, 
".2......4...5\n"
"..........1..\n"
"5.....22.....\n"
".1...........\n"
"...5.....323.\n"
"..1.3..5.....\n"
".2..2..1.....\n"
"..4.......54.\n"
"...341......2\n"
"..3.35..4....\n"
"..1435.......\n") == 0);
free(board224138106);
board224138106 = NULL;
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_golden_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_golden_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_golden_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );


char* board613859631 = gamma_board(board);
assert( board613859631 != NULL );
assert( strcmp(board613859631, 
".2......4...5\n"
"..........1..\n"
"5.....22.....\n"
".1...........\n"
"...5.....323.\n"
"..1.3..5.....\n"
".2..2..1.....\n"
"..4.......54.\n"
"...341......2\n"
"..3.35..4....\n"
"..1435.......\n") == 0);
free(board613859631);
board613859631 = NULL;
assert( gamma_move(board, 1, -1, 11) == 0 );


char* board495430910 = gamma_board(board);
assert( board495430910 != NULL );
assert( strcmp(board495430910, 
".2......4...5\n"
"..........1..\n"
"5.....22.....\n"
".1...........\n"
"...5.....323.\n"
"..1.3..5.....\n"
".2..2..1.....\n"
"..4.......54.\n"
"...341......2\n"
"..3.35..4....\n"
"..1435.......\n") == 0);
free(board495430910);
board495430910 = NULL;
assert( gamma_move(board, 2, 7, 5) == 0 );


char* board555796121 = gamma_board(board);
assert( board555796121 != NULL );
assert( strcmp(board555796121, 
".2......4...5\n"
"..........1..\n"
"5.....22.....\n"
".1...........\n"
"...5.....323.\n"
"..1.3..5.....\n"
".2..2..1.....\n"
"..4.......54.\n"
"...341......2\n"
"..3.35..4....\n"
"..1435.......\n") == 0);
free(board555796121);
board555796121 = NULL;


gamma_delete(board);

    return 0;
}
