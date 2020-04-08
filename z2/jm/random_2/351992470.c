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
uuid: 351992470
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 12, 6, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 14, 0) == 1 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );


char* board765752973 = gamma_board(board);
assert( board765752973 != NULL );
assert( strcmp(board765752973, 
"...............\n"
"1..............\n"
"...............\n"
"........5......\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"......3........\n"
"...............\n"
"5..............\n"
"..............4\n") == 0);
free(board765752973);
board765752973 = NULL;
assert( gamma_move(board, 6, 11, 6) == 1 );
assert( gamma_move(board, 1, 11, 14) == 0 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_move(board, 4, 13, 2) == 1 );
assert( gamma_move(board, 5, 9, 9) == 1 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_free_fields(board, 6) == 168 );
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_move(board, 1, 14, 5) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 2, 10, 11) == 1 );
assert( gamma_move(board, 3, 11, 7) == 1 );
assert( gamma_move(board, 3, 10, 0) == 1 );
assert( gamma_move(board, 4, 11, 8) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_free_fields(board, 5) == 160 );
assert( gamma_golden_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 4, 5, 10) == 1 );
assert( gamma_move(board, 5, 11, 2) == 1 );
assert( gamma_move(board, 6, 14, 0) == 0 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 13, 9) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 6, 9) == 1 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 1, 13, 5) == 1 );
assert( gamma_move(board, 1, 12, 1) == 1 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_free_fields(board, 2) == 143 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_golden_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 13, 10) == 1 );
assert( gamma_move(board, 5, 11, 3) == 1 );
assert( gamma_move(board, 5, 14, 9) == 1 );
assert( gamma_free_fields(board, 6) == 133 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_move(board, 1, 12, 5) == 1 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_free_fields(board, 3) == 130 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 0) == 0 );
assert( gamma_move(board, 5, 2, 8) == 1 );
assert( gamma_move(board, 6, 9, 5) == 1 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 3, 14, 10) == 1 );
assert( gamma_golden_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 5, 14, 7) == 1 );
assert( gamma_move(board, 6, 12, 6) == 1 );
assert( gamma_free_fields(board, 6) == 122 );
assert( gamma_golden_move(board, 6, 1, 12) == 0 );
assert( gamma_move(board, 1, 14, 8) == 1 );
assert( gamma_move(board, 2, 13, 3) == 1 );
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_free_fields(board, 5) == 117 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 12, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 9) == 1 );
assert( gamma_move(board, 5, 11, 11) == 1 );
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_move(board, 1, 4, 11) == 1 );
assert( gamma_free_fields(board, 1) == 109 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 2, 14, 2) == 1 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );


char* board516278829 = gamma_board(board);
assert( board516278829 != NULL );
assert( strcmp(board516278829, 
"....1.....25...\n"
"16..14..3....43\n"
"6...625..55.335\n"
"3.5....15..4..1\n"
".2.......213..5\n"
"13.4225.5.266..\n"
"..4...2..6..111\n"
"..6652.54......\n"
"3.....33..65.2.\n"
"5..........5.42\n"
"52..2...5..11..\n"
".....3.5..3...4\n") == 0);
free(board516278829);
board516278829 = NULL;
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_free_fields(board, 4) == 107 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_free_fields(board, 5) == 106 );
assert( gamma_move(board, 6, 10, 9) == 0 );


char* board369413384 = gamma_board(board);
assert( board369413384 != NULL );
assert( strcmp(board369413384, 
"....1.....25...\n"
"16..14..3....43\n"
"6...625..55.335\n"
"3.5..5.15..4..1\n"
".2.......213..5\n"
"13.4225.5.266..\n"
"..4...2..6..111\n"
"..6652.54......\n"
"3.....33..65.2.\n"
"5..........5.42\n"
"52..24..5..11..\n"
".....3.5..3...4\n") == 0);
free(board369413384);
board369413384 = NULL;
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_move(board, 2, 13, 6) == 1 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_free_fields(board, 4) == 102 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 5, 0, 11) == 1 );
assert( gamma_move(board, 6, 9, 4) == 1 );
assert( gamma_move(board, 1, 10, 10) == 1 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_golden_move(board, 1, 9, 9) == 1 );


char* board891670425 = gamma_board(board);
assert( board891670425 != NULL );
assert( strcmp(board891670425, 
"5.1.1.....25...\n"
"16..14..3.1..43\n"
"6..1625..15.335\n"
"3.5..5.15..4..1\n"
".2.......213..5\n"
"13.4225.5.2662.\n"
"..4...2..6..111\n"
"..6652.546.....\n"
"3..4..33..65.2.\n"
"5..........5.42\n"
"521.24..5..11..\n"
".....3.5..3...4\n") == 0);
free(board891670425);
board891670425 = NULL;
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 4, 5, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 9, 8) == 1 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 12, 7) == 1 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );


char* board903493694 = gamma_board(board);
assert( board903493694 != NULL );
assert( strcmp(board903493694, 
"5.1.14....25...\n"
"16..14..3.1..43\n"
"6..1625..15.335\n"
"3.5..5.155.4..1\n"
".2.......2132.5\n"
"13.4225.5.2662.\n"
"..4...24.6..111\n"
"..6652.546.....\n"
"3..4..33..65.2.\n"
"5.........45.42\n"
"521.24..5..11..\n"
".....3.5..3...4\n") == 0);
free(board903493694);
board903493694 = NULL;
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_free_fields(board, 1) == 93 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 4, 11, 9) == 1 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_free_fields(board, 5) == 90 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 10, 4) == 1 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_free_fields(board, 3) == 89 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 11, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_free_fields(board, 4) == 83 );
assert( gamma_move(board, 5, 14, 6) == 1 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_golden_move(board, 5, 0, 10) == 1 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );


char* board828169724 = gamma_board(board);
assert( board828169724 != NULL );
assert( strcmp(board828169724, 
"5.1.14....25...\n"
"56..14..3.1..43\n"
"6..1625..154335\n"
"3.51.5.155.4..1\n"
".2....2..2132.5\n"
"13.4225.5.26625\n"
"..4...24.64.111\n"
"..6652.54664...\n"
"3..4..33..65.2.\n"
"5..6......45.42\n"
"521.24..52.11..\n"
"3.1..3.5..3...4\n") == 0);
free(board828169724);
board828169724 = NULL;
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_golden_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 11, 13) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 4, 13) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_free_fields(board, 4) == 82 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_free_fields(board, 5) == 81 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_free_fields(board, 6) == 80 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_free_fields(board, 5) == 77 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 6, 11) == 1 );
assert( gamma_move(board, 2, 11, 14) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_golden_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_free_fields(board, 6) == 71 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 14, 1) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 24 );
assert( gamma_golden_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 6, 9, 11) == 1 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 3, 12, 4) == 1 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_golden_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_golden_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_free_fields(board, 2) == 62 );


char* board581114686 = gamma_board(board);
assert( board581114686 != NULL );
assert( strcmp(board581114686, 
"5.1.141..625...\n"
"56..14.33.1..43\n"
"6..1625..154335\n"
"3.5165.155.4..1\n"
".2....2..2132.5\n"
"135422515.26625\n"
"..4..224564.111\n"
"6.6652.546643..\n"
"3.243.33..65.2.\n"
"5566.3.64.45142\n"
"524124..52.11.4\n"
"3.1..3.5..3...4\n") == 0);
free(board581114686);
board581114686 = NULL;
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 13, 4) == 1 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 6, 14, 3) == 1 );
assert( gamma_move(board, 6, 13, 4) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 13, 11) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_golden_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_free_fields(board, 4) == 53 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );


char* board321834265 = gamma_board(board);
assert( board321834265 != NULL );
assert( strcmp(board321834265, 
"5.1.141..625.2.\n"
"56..14.33.1..43\n"
"6.31625..154335\n"
"3.5165.155.4..1\n"
".2....2.42132.5\n"
"135422515.26625\n"
"2.4..224564.111\n"
"6.6652.5466434.\n"
"3.243.331.65.26\n"
"5566.3.64.45142\n"
"524124..52.11.4\n"
"3.1..3253.3...4\n") == 0);
free(board321834265);
board321834265 = NULL;
assert( gamma_move(board, 6, 13, 11) == 0 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 1, 11) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_golden_move(board, 2, 9, 11) == 1 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_free_fields(board, 1) == 46 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_free_fields(board, 5) == 45 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 14, 8) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_golden_move(board, 1, 11, 11) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 12, 8) == 1 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_free_fields(board, 3) == 42 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 11) == 0 );


char* board741019448 = gamma_board(board);
assert( board741019448 != NULL );
assert( strcmp(board741019448, 
"561.1413.225.2.\n"
"562.14.33.1..43\n"
"6.31625..154335\n"
"3.5165.155.42.1\n"
".2..2.2442132.5\n"
"135422515.26625\n"
"2.43.224564.111\n"
"6.665265466434.\n"
"3.243.331.65.26\n"
"556643664145142\n"
"524124..52.11.4\n"
"3.1..3253.3...4\n") == 0);
free(board741019448);
board741019448 = NULL;
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_free_fields(board, 5) == 42 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 6, 8, 13) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 20 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_golden_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_free_fields(board, 5) == 42 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 6, 12, 3) == 1 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 1, 12, 11) == 1 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 11, 14) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 26 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );


char* board324907777 = gamma_board(board);
assert( board324907777 != NULL );
assert( strcmp(board324907777, 
"561.1413.22512.\n"
"562.14.33.1..43\n"
"6.316251.154335\n"
"3.5165.155.42.1\n"
".2..2.2442132.5\n"
"135422515.26625\n"
"2.43.224564.111\n"
"6.665265466434.\n"
"3.243.331.65626\n"
"556643664145142\n"
"524124..52.11.4\n"
"3.1..3253.3...4\n") == 0);
free(board324907777);
board324907777 = NULL;
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 5, 11, 11) == 0 );
assert( gamma_golden_move(board, 5, 5, 9) == 0 );


char* board396238756 = gamma_board(board);
assert( board396238756 != NULL );
assert( strcmp(board396238756, 
"561.1413.22512.\n"
"562214.33.1..43\n"
"6.316251.154335\n"
"3.5165.155.42.1\n"
".2..2.2442132.5\n"
"135422515.26625\n"
"2.43.224564.111\n"
"6.665265466434.\n"
"3.243.331.65626\n"
"556643664145142\n"
"524124..52.11.4\n"
"3.1..3253.3...4\n") == 0);
free(board396238756);
board396238756 = NULL;
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );


char* board256712119 = gamma_board(board);
assert( board256712119 != NULL );
assert( strcmp(board256712119, 
"561.1413.22512.\n"
"562214.33.1..43\n"
"6.316251.154335\n"
"3.5165.155.42.1\n"
".2..2.2442132.5\n"
"135422515.26625\n"
"2.43.224564.111\n"
"6.665265466434.\n"
"3.243.331.65626\n"
"556643664145142\n"
"524124..52.11.4\n"
"3.1..3253.3...4\n") == 0);
free(board256712119);
board256712119 = NULL;
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 26 );
assert( gamma_golden_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 25 );
assert( gamma_free_fields(board, 6) == 37 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 4, 14) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 13, 9) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_move(board, 6, 11, 14) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );


char* board847572976 = gamma_board(board);
assert( board847572976 != NULL );
assert( strcmp(board847572976, 
"561.1413.22512.\n"
"562214.33.1..43\n"
"6.316251.154335\n"
"3.5165.155.42.1\n"
".2..2.2442132.5\n"
"135422515.26625\n"
"2.43.224564.111\n"
"61665265466434.\n"
"3.243.331.65626\n"
"556643664145142\n"
"524124..52.11.4\n"
"3.1..3253.3...4\n") == 0);
free(board847572976);
board847572976 = NULL;
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 25 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_golden_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 25 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 1, 12, 10) == 1 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );


char* board600702369 = gamma_board(board);
assert( board600702369 != NULL );
assert( strcmp(board600702369, 
"561.1413.22512.\n"
"562214.33.1.143\n"
"6.316251.154335\n"
"3.5165.155.42.1\n"
".2..2.2442132.5\n"
"135422515.26625\n"
"2.43.224564.111\n"
"61665265466434.\n"
"3.243.331.65626\n"
"556643664145142\n"
"524124..52.11.4\n"
"3.1..3253.3...4\n") == 0);
free(board600702369);
board600702369 = NULL;
assert( gamma_move(board, 6, 8, 13) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );


char* board173356940 = gamma_board(board);
assert( board173356940 != NULL );
assert( strcmp(board173356940, 
"561.1413.22512.\n"
"562214.33.1.143\n"
"6.316251.154335\n"
"3.5165.155.42.1\n"
".2..2.2442132.5\n"
"135422515.26625\n"
"2.43.224564.111\n"
"61665265466434.\n"
"3.243.331.65626\n"
"556643664145142\n"
"524124..52.11.4\n"
"3.1..3253.3...4\n") == 0);
free(board173356940);
board173356940 = NULL;
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 11, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 25 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 14, 8) == 0 );
assert( gamma_move(board, 6, 0, 13) == 0 );
assert( gamma_move(board, 6, 13, 10) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_free_fields(board, 1) == 21 );


char* board425821376 = gamma_board(board);
assert( board425821376 != NULL );
assert( strcmp(board425821376, 
"561.1413.22512.\n"
"562214.33.1.143\n"
"6.316251.154335\n"
"3.5165.155.42.1\n"
".2..2.2442132.5\n"
"135422515.26625\n"
"2.43.224564.111\n"
"61665265466434.\n"
"3.243.331.65626\n"
"556643664145142\n"
"524124..52.11.4\n"
"3.1..3253.3...4\n") == 0);
free(board425821376);
board425821376 = NULL;
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 13, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_free_fields(board, 6) == 35 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );


char* board725068175 = gamma_board(board);
assert( board725068175 != NULL );
assert( strcmp(board725068175, 
"561.1413.22512.\n"
"562214.33.1.143\n"
"6.316251.154335\n"
"3.5165.155.42.1\n"
".2.32.2442132.5\n"
"135422515.26625\n"
"2443.224564.111\n"
"61665265466434.\n"
"3.243.331.65626\n"
"556643664145142\n"
"524124..52.11.4\n"
"3.1..3253.3...4\n") == 0);
free(board725068175);
board725068175 = NULL;
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_golden_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );


char* board658935121 = gamma_board(board);
assert( board658935121 != NULL );
assert( strcmp(board658935121, 
"561.1413.22512.\n"
"562214.33.1.143\n"
"6.316251.154335\n"
"3.5165.155.42.1\n"
".2.32.2642132.5\n"
"135422515.26625\n"
"2443.224564.111\n"
"61665265466434.\n"
"3.243.331.65626\n"
"556643664145142\n"
"5241245.52111.4\n"
"3.1..3253.3...4\n") == 0);
free(board658935121);
board658935121 = NULL;
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );


gamma_delete(board);

    return 0;
}
