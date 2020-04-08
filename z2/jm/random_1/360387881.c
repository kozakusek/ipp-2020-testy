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
uuid: 360387881
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 12, 4, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_free_fields(board, 2) == 127 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_golden_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_golden_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 10, 8) == 1 );
assert( gamma_golden_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );


char* board145418403 = gamma_board(board);
assert( board145418403 != NULL );
assert( strcmp(board145418403, 
"...........\n"
"...........\n"
".........3.\n"
".......2..2\n"
"...........\n"
"..4..1....2\n"
".....1....4\n"
"....2......\n"
"...3......3\n"
"......1....\n"
"2..........\n"
"..2.4.....2\n") == 0);
free(board145418403);
board145418403 = NULL;
assert( gamma_move(board, 3, 5, 11) == 1 );
assert( gamma_move(board, 4, 8, 11) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );


char* board350661193 = gamma_board(board);
assert( board350661193 != NULL );
assert( strcmp(board350661193, 
".....3..4..\n"
"...........\n"
".........3.\n"
".......2..2\n"
"...........\n"
"..4..1....2\n"
".....1....4\n"
"....2......\n"
"...3......3\n"
"......1....\n"
"2..........\n"
"..2.4.....2\n") == 0);
free(board350661193);
board350661193 = NULL;
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_move(board, 1, 10, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 9, 2) == 1 );


char* board418395670 = gamma_board(board);
assert( board418395670 != NULL );
assert( strcmp(board418395670, 
".....3..4..\n"
"..4.......1\n"
".........3.\n"
".......2.22\n"
"...........\n"
"..4..1....2\n"
".....1....4\n"
"....2...4..\n"
"...32.....3\n"
".....41..3.\n"
"2..........\n"
"..2.41....2\n") == 0);
free(board418395670);
board418395670 = NULL;
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_golden_move(board, 4, 4, 4) == 0 );


char* board510332739 = gamma_board(board);
assert( board510332739 != NULL );
assert( strcmp(board510332739, 
".....3..4..\n"
"..4.......1\n"
".1.......3.\n"
".......2.22\n"
"...........\n"
"..4..1....2\n"
".....1....4\n"
"....2...4..\n"
"...32.....3\n"
".....41..3.\n"
"2..........\n"
"..2.41....2\n") == 0);
free(board510332739);
board510332739 = NULL;
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 1, 10, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, -1, 8) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 11, -1) == 0 );
assert( gamma_move(board, 3, 1, 11) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_free_fields(board, 1) == 103 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_golden_move(board, 2, 9, 9) == 0 );
assert( gamma_free_fields(board, 3) == 103 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 1, 11, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 5, 10) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 2, 11, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_golden_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );


char* board978420877 = gamma_board(board);
assert( board978420877 != NULL );
assert( strcmp(board978420877, 
".3...3..4..\n"
"..4..3....1\n"
".1.......31\n"
".......2.22\n"
"...........\n"
"..4..1....2\n"
".....1....4\n"
"...22...4..\n"
"...32.....3\n"
"....441..31\n"
"2.1........\n"
".32.41....2\n") == 0);
free(board978420877);
board978420877 = NULL;
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_golden_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );


char* board912361227 = gamma_board(board);
assert( board912361227 != NULL );
assert( strcmp(board912361227, 
".3...3..4..\n"
"..4..3....1\n"
".1.......31\n"
".......2.22\n"
"...........\n"
"..4..1....2\n"
".....1....4\n"
"...22...4..\n"
"...32.....3\n"
"....441..31\n"
"2.1........\n"
".32.41....2\n") == 0);
free(board912361227);
board912361227 = NULL;
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board805117427 = gamma_board(board);
assert( board805117427 != NULL );
assert( strcmp(board805117427, 
".3...3..4..\n"
"..4..3....1\n"
".1.......31\n"
".......2.22\n"
"...........\n"
"..4..1....2\n"
".....1....4\n"
"...22...4..\n"
"...32.....3\n"
"....441..31\n"
"2.1........\n"
".32.41....2\n") == 0);
free(board805117427);
board805117427 = NULL;
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_golden_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_free_fields(board, 4) == 23 );


gamma_delete(board);

    return 0;
}
