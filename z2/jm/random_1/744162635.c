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
uuid: 744162635
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 12, 5, 12);
assert( board != NULL );


assert( gamma_move(board, 2, -1, 11) == 0 );
assert( gamma_free_fields(board, 2) == 168 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 14, 7) == 0 );
assert( gamma_move(board, 1, 2, 12) == 0 );


char* board116844650 = gamma_board(board);
assert( board116844650 != NULL );
assert( strcmp(board116844650, 
"..............\n"
"..............\n"
"..............\n"
"..............\n"
"..............\n"
"..............\n"
"..............\n"
"..4...........\n"
"..............\n"
"..............\n"
"..............\n"
"..............\n") == 0);
free(board116844650);
board116844650 = NULL;
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_free_fields(board, 2) == 166 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 7) == 1 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 2, 14, 4) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 13, 12) == 0 );
assert( gamma_move(board, 4, 12, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 5) == 1 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_free_fields(board, 2) == 156 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 12, 2) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 3, 10) == 1 );
assert( gamma_move(board, 4, 13, 12) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, 14, 5) == 0 );
assert( gamma_move(board, 4, 14, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 1, 11, 11) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 5, 1, -1) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 11, 8) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_free_fields(board, 3) == 146 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_free_fields(board, 4) == 144 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_free_fields(board, 3) == 143 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 1, 13, 4) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 5, 13, 0) == 1 );


char* board385331425 = gamma_board(board);
assert( board385331425 != NULL );
assert( strcmp(board385331425, 
"...........1..\n"
"...3..........\n"
"..............\n"
"1......5...2..\n"
"...........3..\n"
".5.3..2.4..4..\n"
"1.3.4........5\n"
"5.4..2.......1\n"
"3.1254......4.\n"
".......1....4.\n"
"..............\n"
".3..2........5\n") == 0);
free(board385331425);
board385331425 = NULL;
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_free_fields(board, 4) == 135 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 5, 2, 11) == 1 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_golden_move(board, 1, 2, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, 14, 2) == 0 );


char* board952482598 = gamma_board(board);
assert( board952482598 != NULL );
assert( strcmp(board952482598, 
"..5........1..\n"
"...3..........\n"
".....1........\n"
"1......5...2..\n"
".......3...3..\n"
".5.3..234..4..\n"
"1.3.4........5\n"
"5.4..21......1\n"
"3.1254......4.\n"
".......1.4..4.\n"
"..............\n"
".3..2....4...5\n") == 0);
free(board952482598);
board952482598 = NULL;
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );


char* board568001184 = gamma_board(board);
assert( board568001184 != NULL );
assert( strcmp(board568001184, 
"..5........1..\n"
"...3..........\n"
".....1........\n"
"1......5...2..\n"
".......3...3..\n"
".5.3..234..4..\n"
"1.3.4........5\n"
"5.4..21......1\n"
"3.1254......4.\n"
".......1.4..4.\n"
"........4.....\n"
".3..2....4...5\n") == 0);
free(board568001184);
board568001184 = NULL;
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_golden_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_free_fields(board, 2) == 129 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_golden_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_golden_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 4, 12, 11) == 1 );
assert( gamma_free_fields(board, 4) == 124 );
assert( gamma_move(board, 5, 12, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 14, 11) == 0 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 1, 12, 12) == 0 );
assert( gamma_move(board, 2, 10, 11) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 5, 1, 12) == 0 );


char* board284031613 = gamma_board(board);
assert( board284031613 != NULL );
assert( strcmp(board284031613, 
".25.......214.\n"
"...3........5.\n"
".....1........\n"
"1......55..2..\n"
".....3.3...3..\n"
"55.3..134..4..\n"
"1.3.4........5\n"
"5.4..21......1\n"
"3.1254.3....4.\n"
"...2..51.4..4.\n"
"..3.....4.....\n"
"33212....4...5\n") == 0);
free(board284031613);
board284031613 = NULL;
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 13, 7) == 1 );
assert( gamma_move(board, 4, 10, 0) == 1 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_free_fields(board, 2) == 113 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 11, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 10) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_free_fields(board, 5) == 108 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 13, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 14, -1) == 0 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );


char* board886270212 = gamma_board(board);
assert( board886270212 != NULL );
assert( strcmp(board886270212, 
".25.......214.\n"
"...3........5.\n"
"2....1........\n"
"1......55..2..\n"
".....3.3...3.3\n"
"5513..134.14..\n"
"1.3.4........5\n"
"5.4..21.2....1\n"
"3.125413....4.\n"
"...2..51.4..4.\n"
"223.....45.3..\n"
"33212...444..5\n") == 0);
free(board886270212);
board886270212 = NULL;
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_golden_possible(board, 1) == 0 );


char* board480866564 = gamma_board(board);
assert( board480866564 != NULL );
assert( strcmp(board480866564, 
".25.......214.\n"
"...3........5.\n"
"2....1........\n"
"1......55..2..\n"
".....3.3...3.3\n"
"5513..134.14..\n"
"1.3.4........5\n"
"5.4..21.2....1\n"
"3.125413....4.\n"
"...2..51.4..4.\n"
"223.....45.3..\n"
"33212...444..5\n") == 0);
free(board480866564);
board480866564 = NULL;
assert( gamma_free_fields(board, 2) == 104 );
assert( gamma_move(board, 3, -1, 12) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 7, 12) == 0 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_golden_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 4, 13, 10) == 1 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_free_fields(board, 2) == 102 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_free_fields(board, 4) == 102 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 1, 14, 8) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_free_fields(board, 2) == 100 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 14, 3) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_free_fields(board, 2) == 99 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_golden_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, -1, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 4) == 1 );
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );


char* board381848573 = gamma_board(board);
assert( board381848573 != NULL );
assert( strcmp(board381848573, 
".25.......214.\n"
"...3........54\n"
"2....1........\n"
"1......55..2..\n"
".2...3.3...3.3\n"
"55135.134.14..\n"
"1.3.4........5\n"
"5.44.21.2..4.1\n"
"32125413....4.\n"
"..22..51.4..4.\n"
"5234....45.3..\n"
"33212...444..5\n") == 0);
free(board381848573);
board381848573 = NULL;
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_golden_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 9, 11) == 0 );


char* board325970501 = gamma_board(board);
assert( board325970501 != NULL );
assert( strcmp(board325970501, 
".25.......214.\n"
"...3........54\n"
"2....1........\n"
"1......55..2..\n"
".2...3.3...3.3\n"
"55135.134.14..\n"
"1.3.4........5\n"
"5.44.21.2..441\n"
"32125413....4.\n"
"..22..51.4..4.\n"
"5234....45.3..\n"
"33212...444..5\n") == 0);
free(board325970501);
board325970501 = NULL;
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_free_fields(board, 5) == 24 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, -1, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_golden_move(board, 4, 6, 3) == 1 );


char* board806698808 = gamma_board(board);
assert( board806698808 != NULL );
assert( strcmp(board806698808, 
".25.......214.\n"
"...3........54\n"
"2....1........\n"
"1......55..2..\n"
".2...3.3...3.3\n"
"55135.134.14..\n"
"1.3.4........5\n"
"5.44.21.2..441\n"
"32125443....4.\n"
"..22..51.4..4.\n"
"5234....45.3..\n"
"33212...444..5\n") == 0);
free(board806698808);
board806698808 = NULL;
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 4, 12, 0) == 1 );
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 12, -1) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );


char* board662324162 = gamma_board(board);
assert( board662324162 != NULL );
assert( strcmp(board662324162, 
".25.......214.\n"
"...3........54\n"
"2....1........\n"
"1......55..2..\n"
".2...3.3...3.3\n"
"55135.134.14..\n"
"1.3.4........5\n"
"5.44.21.2..441\n"
"32125443....4.\n"
"..22..51.4..4.\n"
"5234....45.3..\n"
"33212...444.45\n") == 0);
free(board662324162);
board662324162 = NULL;
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );


char* board534372823 = gamma_board(board);
assert( board534372823 != NULL );
assert( strcmp(board534372823, 
".25.......214.\n"
"...3........54\n"
"2....1........\n"
"1......55..2..\n"
".2...3.3...3.3\n"
"55135.134.14..\n"
"1.3.4........5\n"
"5.44.21.2..441\n"
"32125443....4.\n"
"..22..51.4..4.\n"
"5234....45.3..\n"
"33212...444.45\n") == 0);
free(board534372823);
board534372823 = NULL;
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board729094941 = gamma_board(board);
assert( board729094941 != NULL );
assert( strcmp(board729094941, 
".25.......214.\n"
"...3........54\n"
"2....1........\n"
"1......55..2..\n"
".2...3.3...3.3\n"
"55135.134.14..\n"
"1.3.4........5\n"
"5.44.21.2..441\n"
"32125443....4.\n"
"..22..51.4..4.\n"
"5234....45.3..\n"
"33212...444.45\n") == 0);
free(board729094941);
board729094941 = NULL;
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 13, 6) == 1 );
assert( gamma_move(board, 2, 13, -1) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 4, 14, 11) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_golden_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 5, 11, 12) == 0 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );


char* board197875172 = gamma_board(board);
assert( board197875172 != NULL );
assert( strcmp(board197875172, 
".25.......214.\n"
"...3........54\n"
"2....1........\n"
"1......55..2..\n"
".2...3.35..3.3\n"
"55135.134.14.5\n"
"1.3.4........5\n"
"5.44.21.2..441\n"
"32125443....4.\n"
"..22..51.4..4.\n"
"5234....45.3..\n"
"33212...444.45\n") == 0);
free(board197875172);
board197875172 = NULL;
assert( gamma_move(board, 4, 11, 10) == 0 );
assert( gamma_move(board, 5, 14, 7) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_golden_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 13, -1) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 5, 3, 11) == 1 );
assert( gamma_move(board, 1, 14, 3) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_golden_move(board, 5, 0, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 5, 9, -1) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_golden_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 3, 14, 2) == 0 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_move(board, 3, 12, 1) == 1 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 13, 12) == 0 );
assert( gamma_move(board, 1, 12, 10) == 0 );


gamma_delete(board);

    return 0;
}
