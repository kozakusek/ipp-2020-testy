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
uuid: 819335359
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 13, 7, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );


char* board746300506 = gamma_board(board);
assert( board746300506 != NULL );
assert( strcmp(board746300506, 
"..............\n"
"..............\n"
"..............\n"
"....1.........\n"
"..............\n"
"..............\n"
"..............\n"
"..............\n"
"..............\n"
"..............\n"
"..............\n"
"..............\n"
".......1......\n") == 0);
free(board746300506);
board746300506 = NULL;
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 6, 9, 4) == 1 );
assert( gamma_move(board, 7, 10, 12) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );


char* board610171556 = gamma_board(board);
assert( board610171556 != NULL );
assert( strcmp(board610171556, 
"..........7...\n"
"..............\n"
"..............\n"
"..1.1.........\n"
".......3.4....\n"
"..............\n"
"5.............\n"
"2......3......\n"
".........6....\n"
"..............\n"
"..3...........\n"
"......4.......\n"
".....2.1......\n") == 0);
free(board610171556);
board610171556 = NULL;
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 4, 10, 10) == 1 );
assert( gamma_free_fields(board, 4) == 167 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 8, 11) == 1 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 5, 12) == 1 );
assert( gamma_free_fields(board, 2) == 162 );
assert( gamma_move(board, 3, 6, 12) == 1 );
assert( gamma_move(board, 4, 11, 7) == 1 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 7, 12, 7) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 13, 9) == 1 );
assert( gamma_move(board, 2, 12, 1) == 1 );
assert( gamma_free_fields(board, 2) == 152 );
assert( gamma_move(board, 3, 4, 12) == 1 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_free_fields(board, 6) == 144 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 11) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 11, 10) == 1 );
assert( gamma_move(board, 3, 13, 0) == 1 );
assert( gamma_move(board, 4, 12, 8) == 1 );
assert( gamma_move(board, 5, 11, 13) == 0 );
assert( gamma_move(board, 5, 3, 11) == 1 );
assert( gamma_golden_move(board, 6, 12, 13) == 0 );
assert( gamma_move(board, 1, 13, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_free_fields(board, 1) == 135 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_golden_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 6, 10, 5) == 1 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 3, 8, 12) == 1 );
assert( gamma_busy_fields(board, 3) == 11 );


char* board130892330 = gamma_board(board);
assert( board130892330 != NULL );
assert( strcmp(board130892330, 
"....323.3.7...\n"
"7..5....6.....\n"
"1..2...3..43..\n"
"..111....2...2\n"
".5.....3.4..4.\n"
".5....1..3.47.\n"
"5.2..5........\n"
"2.54...3416...\n"
".........6....\n"
"..5.........21\n"
"..3....6...11.\n"
"..3...41....2.\n"
".1.2.2.1.6...3\n") == 0);
free(board130892330);
board130892330 = NULL;
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 10, 11) == 0 );


char* board143533072 = gamma_board(board);
assert( board143533072 != NULL );
assert( strcmp(board143533072, 
"....323.3.7...\n"
"7..5....6.....\n"
"1..2...3..43..\n"
"..111....2...2\n"
".5.....3.4..4.\n"
".5....1..3.47.\n"
"5.2..5........\n"
"2.54...3416...\n"
".........6....\n"
"..5..5......21\n"
"..3....6...11.\n"
"..3..641....2.\n"
".1.2.2.1.6...3\n") == 0);
free(board143533072);
board143533072 = NULL;
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_free_fields(board, 4) == 124 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_golden_move(board, 5, 10, 10) == 1 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 7, 8, 0) == 1 );
assert( gamma_move(board, 7, 11, 9) == 1 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_golden_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 12, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_golden_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 7, 8, 4) == 1 );
assert( gamma_move(board, 7, 9, 2) == 1 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 2, 13, 11) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 11, 13) == 0 );


char* board745720021 = gamma_board(board);
assert( board745720021 != NULL );
assert( strcmp(board745720021, 
"....323.3.7...\n"
"7..5....6.....\n"
"1..2...3..53..\n"
"..111....2.742\n"
".5.....3.4..4.\n"
".5....1..3.47.\n"
"5.2..5........\n"
"2.54...3416...\n"
"...5.4..76....\n"
"..5..5....1.21\n"
"..3....6.7.11.\n"
"..3..641....2.\n"
".1.2.2.176...3\n") == 0);
free(board745720021);
board745720021 = NULL;
assert( gamma_move(board, 5, 3, 11) == 0 );


char* board532998268 = gamma_board(board);
assert( board532998268 != NULL );
assert( strcmp(board532998268, 
"....323.3.7...\n"
"7..5....6.....\n"
"1..2...3..53..\n"
"..111....2.742\n"
".5.....3.4..4.\n"
".5....1..3.47.\n"
"5.2..5........\n"
"2.54...3416...\n"
"...5.4..76....\n"
"..5..5....1.21\n"
"..3....6.7.11.\n"
"..3..641....2.\n"
".1.2.2.176...3\n") == 0);
free(board532998268);
board532998268 = NULL;
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 7, 13, 7) == 1 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_free_fields(board, 1) == 116 );
assert( gamma_move(board, 2, 5, 11) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 6, 10, 2) == 1 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 7, 10, 8) == 1 );
assert( gamma_free_fields(board, 7) == 110 );
assert( gamma_golden_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 2, 12, 0) == 1 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 3, 12) == 1 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 7, 5, 12) == 0 );
assert( gamma_move(board, 1, 11, 10) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_move(board, 7, 11, 0) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_golden_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 11, 13) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 13, 10) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 6, 6, 10) == 1 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 4, 13, 8) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 6, 11, 12) == 1 );


char* board999385593 = gamma_board(board);
assert( board999385593 != NULL );
assert( strcmp(board999385593, 
"...4323.3.76..\n"
"7..5.2..6.....\n"
"1..2..63..53.2\n"
"..111....2.742\n"
".561.4.3.47.44\n"
".5....1..3.477\n"
"5.2..5..4.....\n"
"2.54.143416...\n"
"...554.376....\n"
".557.5....1.21\n"
"..3....6.7611.\n"
".53..641.6.22.\n"
".1.2.2.176.723\n") == 0);
free(board999385593);
board999385593 = NULL;
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );


char* board630823799 = gamma_board(board);
assert( board630823799 != NULL );
assert( strcmp(board630823799, 
"...4323.3.76..\n"
"7..5.2..6.....\n"
"1..2..63..53.2\n"
"..111...22.742\n"
".561.4.3.47.44\n"
".5...11..3.477\n"
"5.2..5..4.....\n"
"2.54.143416...\n"
"...554.376....\n"
".557.5....1.21\n"
"..3....6.7611.\n"
".53..641.6.22.\n"
".1.2.2.176.723\n") == 0);
free(board630823799);
board630823799 = NULL;
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 10, 9) == 1 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_golden_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_golden_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 5, 6, 13) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 12, 12) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 11, 10) == 0 );
assert( gamma_move(board, 7, 11, 10) == 0 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 12, 12) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );


char* board449377776 = gamma_board(board);
assert( board449377776 != NULL );
assert( strcmp(board449377776, 
"...4323.3.76..\n"
"7..5.2..6.....\n"
"1..2.263..53.2\n"
"..111...222742\n"
"5561.4.3.47.44\n"
".5...11..3.477\n"
"5.22.5..4.....\n"
"2.54.143416...\n"
"...554.376....\n"
".557.5.6..1.21\n"
"..3..5.6.7611.\n"
".53..641.6.22.\n"
".132.2.176.723\n") == 0);
free(board449377776);
board449377776 = NULL;
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_golden_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 5, 11, 12) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_move(board, 2, 11, 13) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_golden_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 13, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_golden_move(board, 7, 12, 11) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 4, 13, 12) == 0 );
assert( gamma_move(board, 5, 4, 13) == 0 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 11, 5) == 0 );
assert( gamma_move(board, 7, 13, 11) == 0 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_golden_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 7, 10, 11) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 6, 13, 10) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_free_fields(board, 1) == 75 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 2, 12, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_free_fields(board, 5) == 72 );
assert( gamma_move(board, 6, 12, 13) == 0 );
assert( gamma_move(board, 7, 5, 13) == 0 );
assert( gamma_move(board, 7, 10, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 7, 0, 12) == 1 );
assert( gamma_free_fields(board, 7) == 16 );


char* board401694145 = gamma_board(board);
assert( board401694145 != NULL );
assert( strcmp(board401694145, 
"7..4323.3.76..\n"
"7.15.2..6.7...\n"
"1..2.2633.53.2\n"
"..111...222742\n"
"556114.3447.44\n"
"55..1111.3.477\n"
"5.22.51.41....\n"
"2554.143416...\n"
"...5545376..2.\n"
".557.556..1.21\n"
"..3..5.6.7611.\n"
".53..641.6.22.\n"
".132.24176.723\n") == 0);
free(board401694145);
board401694145 = NULL;
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_golden_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_free_fields(board, 2) == 66 );
assert( gamma_golden_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_free_fields(board, 3) == 17 );


char* board506122861 = gamma_board(board);
assert( board506122861 != NULL );
assert( strcmp(board506122861, 
"7..4323.3.76..\n"
"7.15.2..6.7...\n"
"1..252633.53.2\n"
"..111...222742\n"
"556114.3447.44\n"
"55..1111.3.477\n"
"5.22.51.41....\n"
"2554.143416...\n"
"...5545376..2.\n"
".577.556..1.21\n"
"..3..5.6.7611.\n"
".53..641.6.22.\n"
".132224176.723\n") == 0);
free(board506122861);
board506122861 = NULL;
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 7, 13, 3) == 0 );
assert( gamma_free_fields(board, 7) == 17 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 12, 12) == 1 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 12, 5) == 0 );
assert( gamma_move(board, 7, 6, 13) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_move(board, 7, 13, 5) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 8, 11) == 0 );


char* board191803765 = gamma_board(board);
assert( board191803765 != NULL );
assert( strcmp(board191803765, 
"7..4323.3.762.\n"
"7.15.2..6.7...\n"
"11.252633.53.2\n"
"..111..2222742\n"
"556114.3447.44\n"
"55..1111.34477\n"
"5.22.51.41....\n"
"2554.143416...\n"
"...5545376..2.\n"
".577.556..1.21\n"
"..33.5.6.7611.\n"
".53..641.6.22.\n"
".132224176.723\n") == 0);
free(board191803765);
board191803765 = NULL;
assert( gamma_move(board, 4, 2, 12) == 1 );
assert( gamma_move(board, 5, 6, 4) == 0 );


char* board771996195 = gamma_board(board);
assert( board771996195 != NULL );
assert( strcmp(board771996195, 
"7.44323.3.762.\n"
"7.15.2..6.7...\n"
"11.252633.53.2\n"
"..111..2222742\n"
"556114.3447.44\n"
"55..1111.34477\n"
"5.22.51.41....\n"
"2554.143416...\n"
"...5545376..2.\n"
".577.556..1.21\n"
"..33.5.6.7611.\n"
".53..641.6.22.\n"
".132224176.723\n") == 0);
free(board771996195);
board771996195 = NULL;
assert( gamma_move(board, 6, 11, 10) == 0 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 7, 11, 13) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 1, 12, 11) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 11) == 1 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 13, 11) == 0 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_golden_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 2, 9, 10) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );


char* board378588591 = gamma_board(board);
assert( board378588591 != NULL );
assert( strcmp(board378588591, 
"7.44323.3.762.\n"
"7.15.2..6.73..\n"
"11.252633253.2\n"
"..111..2222742\n"
"556114.3447.44\n"
"55..1111.34477\n"
"5.22.51.41.4..\n"
"2554.143416...\n"
"...5545376..2.\n"
".577.556..1.21\n"
"..33.5.6.7611.\n"
".53..641.6.22.\n"
".132224176.723\n") == 0);
free(board378588591);
board378588591 = NULL;
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );


char* board424441210 = gamma_board(board);
assert( board424441210 != NULL );
assert( strcmp(board424441210, 
"7.44323.3.762.\n"
"7.15.2..6.73..\n"
"11.252633253.2\n"
"..111..2222742\n"
"556114.3447.44\n"
"55..1111.34477\n"
"5.22.51.41.4..\n"
"2554.143416...\n"
"...5545376..2.\n"
".577.556..1.21\n"
"..33.5.6.7611.\n"
".53..641.6.22.\n"
".132224176.723\n") == 0);
free(board424441210);
board424441210 = NULL;
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );


char* board917246016 = gamma_board(board);
assert( board917246016 != NULL );
assert( strcmp(board917246016, 
"7.44323.3.762.\n"
"7.15.2..6.73..\n"
"11.252633253.2\n"
"..111..2222742\n"
"556114.3447.44\n"
"55..1111.34477\n"
"5.22.51.41.4..\n"
"2554.143416...\n"
"...5545376..2.\n"
".577.556..1.21\n"
"..33.5.6.7611.\n"
".53..641.6.22.\n"
".132224176.723\n") == 0);
free(board917246016);
board917246016 = NULL;
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 12, 7) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );


char* board560181739 = gamma_board(board);
assert( board560181739 != NULL );
assert( strcmp(board560181739, 
"7.44323.3.762.\n"
"7.15.2..6.73..\n"
"11.252633253.2\n"
"..111..2222742\n"
"556114.3447.44\n"
"55..1111.34477\n"
"5.22.51.41.4..\n"
"2554.143416...\n"
"...5545376..2.\n"
".577.556..1.21\n"
"..33.5.6.7611.\n"
".53..641.6.22.\n"
".132224176.723\n") == 0);
free(board560181739);
board560181739 = NULL;
assert( gamma_move(board, 7, 8, 12) == 0 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );


char* board644372173 = gamma_board(board);
assert( board644372173 != NULL );
assert( strcmp(board644372173, 
"7.44323.3.762.\n"
"7.15.2..6.73..\n"
"11.252633253.2\n"
"..111..2222742\n"
"556114.3447.44\n"
"55..1111.34477\n"
"5.22.51.41.4..\n"
"2554.143416...\n"
"...5545376..2.\n"
".577.556..1.21\n"
"..33.5.6.7611.\n"
".53..641.6.22.\n"
".132224176.723\n") == 0);
free(board644372173);
board644372173 = NULL;
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );


char* board508348769 = gamma_board(board);
assert( board508348769 != NULL );
assert( strcmp(board508348769, 
"7.44323.3.762.\n"
"7.15.2..6.73..\n"
"11.252633253.2\n"
"..111.62222742\n"
"556114.3447.44\n"
"55..1111.34477\n"
"5.22.51.41.4..\n"
"2554.143416...\n"
"...5545376..2.\n"
".577.556..1.21\n"
"..33.5.6.7611.\n"
".53..641.6.22.\n"
".132224176.723\n") == 0);
free(board508348769);
board508348769 = NULL;
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_free_fields(board, 6) == 17 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_free_fields(board, 6) == 17 );
assert( gamma_move(board, 7, 11, 12) == 0 );


gamma_delete(board);

    return 0;
}
