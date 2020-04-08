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
uuid: 924307468
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(17, 17, 4, 13);
assert( board != NULL );


assert( gamma_move(board, 2, -1, 11) == 0 );
assert( gamma_move(board, 3, 17, 3) == 0 );
assert( gamma_move(board, 4, 13, 12) == 1 );
assert( gamma_move(board, 1, 17, 7) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_free_fields(board, 2) == 287 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_golden_move(board, 3, 1, 16) == 0 );
assert( gamma_move(board, 4, 2, 17) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 12, 13) == 0 );
assert( gamma_move(board, 1, 17, 3) == 0 );
assert( gamma_move(board, 2, 2, 16) == 1 );


char* board449139307 = gamma_board(board);
assert( board449139307 != NULL );
assert( strcmp(board449139307, 
"..2..............\n"
".................\n"
".................\n"
".................\n"
".............4...\n"
".................\n"
".................\n"
".................\n"
".................\n"
".................\n"
"2................\n"
".................\n"
".................\n"
".................\n"
".................\n"
".................\n"
".................\n") == 0);
free(board449139307);
board449139307 = NULL;
assert( gamma_move(board, 3, 14, 8) == 1 );


char* board592648317 = gamma_board(board);
assert( board592648317 != NULL );
assert( strcmp(board592648317, 
"..2..............\n"
".................\n"
".................\n"
".................\n"
".............4...\n"
".................\n"
".................\n"
".................\n"
"..............3..\n"
".................\n"
"2................\n"
".................\n"
".................\n"
".................\n"
".................\n"
".................\n"
".................\n") == 0);
free(board592648317);
board592648317 = NULL;
assert( gamma_move(board, 4, 6, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );


char* board568470456 = gamma_board(board);
assert( board568470456 != NULL );
assert( strcmp(board568470456, 
"..2..............\n"
".................\n"
".................\n"
".................\n"
".............4...\n"
".................\n"
"......4..........\n"
".................\n"
"..............3..\n"
".................\n"
"2................\n"
".................\n"
".................\n"
".................\n"
".................\n"
".................\n"
".................\n") == 0);
free(board568470456);
board568470456 = NULL;
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 2, 15) == 1 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_move(board, 2, -1, 13) == 0 );
assert( gamma_move(board, 3, 14, 7) == 1 );
assert( gamma_move(board, 4, 11, 7) == 1 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 15, 6) == 1 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_golden_move(board, 4, 12, 13) == 0 );
assert( gamma_move(board, 3, 13, 16) == 1 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_golden_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 8, 15) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 1, 8, 9) == 1 );


char* board676932980 = gamma_board(board);
assert( board676932980 != NULL );
assert( strcmp(board676932980, 
"..2..........3...\n"
"..2.....3........\n"
".................\n"
".................\n"
".............4...\n"
".1...............\n"
"......4..........\n"
"........1........\n"
"..4...........3..\n"
"...........4..3..\n"
"24.............2.\n"
".4...............\n"
"..........3......\n"
".................\n"
".2...............\n"
".......1.1.4.....\n"
".................\n") == 0);
free(board676932980);
board676932980 = NULL;
assert( gamma_move(board, 2, 11, 11) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 1, 7, 16) == 1 );
assert( gamma_move(board, 2, 14, 3) == 1 );
assert( gamma_move(board, 3, 4, 14) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 3, 10, 16) == 1 );
assert( gamma_move(board, 4, 2, 16) == 0 );
assert( gamma_move(board, 1, 8, 13) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 3, 16) == 1 );


char* board221942635 = gamma_board(board);
assert( board221942635 != NULL );
assert( strcmp(board221942635, 
"..23...1..3..3...\n"
"..2.....3........\n"
"....3............\n"
"........1........\n"
".............4...\n"
".1.........2.....\n"
"......4..........\n"
"........1........\n"
"..4...........3..\n"
"...........4..3..\n"
"24.............2.\n"
".4...............\n"
"..........3......\n"
"..............2..\n"
".2...............\n"
".......1.1.4.....\n"
"........2........\n") == 0);
free(board221942635);
board221942635 = NULL;
assert( gamma_move(board, 4, 0, 16) == 1 );
assert( gamma_move(board, 1, 1, 16) == 1 );
assert( gamma_move(board, 2, 16, 10) == 1 );
assert( gamma_move(board, 3, 17, 5) == 0 );
assert( gamma_move(board, 4, -1, 9) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 7, 11) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 4, 11) == 1 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 16, 8) == 1 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 2, 14, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 4, 12) == 1 );
assert( gamma_golden_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_free_fields(board, 3) == 246 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_free_fields(board, 3) == 244 );
assert( gamma_move(board, 4, 15, 7) == 1 );
assert( gamma_move(board, 1, 1, 13) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_free_fields(board, 2) == 241 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 14, 17) == 0 );
assert( gamma_move(board, 2, 16, 6) == 1 );
assert( gamma_move(board, 3, 16, 1) == 1 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, 10, 12) == 1 );
assert( gamma_move(board, 4, 10, 9) == 0 );


char* board257339879 = gamma_board(board);
assert( board257339879 != NULL );
assert( strcmp(board257339879, 
"4123...1..3..3...\n"
"..2.....3........\n"
"....3............\n"
".1......1........\n"
"....4.....3..4...\n"
".1..2..4...2.....\n"
"......4.........2\n"
"...3....1........\n"
"..42..2.......3.1\n"
"...........4..34.\n"
"24.......4.....22\n"
".42.....4........\n"
".........33......\n"
"....2.........2..\n"
".2....3..1.......\n"
".......1.1.4....3\n"
"....4...2...33...\n") == 0);
free(board257339879);
board257339879 = NULL;
assert( gamma_move(board, 1, 12, 4) == 1 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_move(board, 3, 7, 17) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 1, 8, 11) == 1 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_free_fields(board, 3) == 232 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 7, 17) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_free_fields(board, 4) == 231 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, -1, 15) == 0 );


char* board323856285 = gamma_board(board);
assert( board323856285 != NULL );
assert( strcmp(board323856285, 
"4123...1..3..3...\n"
"..2.....3........\n"
"....3............\n"
".1......1........\n"
"....4.....3..4...\n"
".1..2..41..2.....\n"
"......4.........2\n"
"...3....1........\n"
"..42..2.......3.1\n"
".1.........4..34.\n"
"244.....44.....22\n"
".42.....4........\n"
".........33.1....\n"
"....2.........2..\n"
".2....3..1.......\n"
".......1.1.4....3\n"
"....4...2...33...\n") == 0);
free(board323856285);
board323856285 = NULL;
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 1, 2, 13) == 1 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 8, 15) == 0 );
assert( gamma_move(board, 1, 16, 7) == 1 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_free_fields(board, 1) == 224 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 16) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 15, 3) == 0 );
assert( gamma_move(board, 1, 8, 15) == 0 );


char* board501561184 = gamma_board(board);
assert( board501561184 != NULL );
assert( strcmp(board501561184, 
"4123...1..3..3...\n"
"..2.....3........\n"
"....3............\n"
".11.....1........\n"
"....4.....3..4...\n"
".1.22..41..2.4...\n"
"......4.........2\n"
"...3....1........\n"
"4342..2.......3.1\n"
".1.........4..341\n"
"244.....44.....22\n"
".42.....4........\n"
".........33.1....\n"
"....2.........2..\n"
".2....3..1.......\n"
".......1.1.4....3\n"
"....4...2...33...\n") == 0);
free(board501561184);
board501561184 = NULL;
assert( gamma_move(board, 2, 12, 12) == 0 );
assert( gamma_move(board, 1, 15, 9) == 1 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 16, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 16, 5) == 1 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_move(board, 1, -1, 13) == 0 );
assert( gamma_move(board, 2, 17, 14) == 0 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_move(board, 4, 8, 17) == 0 );


char* board874634234 = gamma_board(board);
assert( board874634234 != NULL );
assert( strcmp(board874634234, 
"4123...1..3..3...\n"
"..2.....3........\n"
"....3............\n"
".11.....1........\n"
"....4.....3..4...\n"
".1.22..41..2.4...\n"
"......4.........2\n"
"...3....1......1.\n"
"4342..2.......3.1\n"
".1.........4..341\n"
"244.....44.....22\n"
".42.....4.......2\n"
".........33.1....\n"
"....2.........2..\n"
".2....3..1.......\n"
".......1.1.4....3\n"
"....4...2...33...\n") == 0);
free(board874634234);
board874634234 = NULL;
assert( gamma_move(board, 1, 5, 17) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 17) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 1, 17, 16) == 0 );
assert( gamma_move(board, 2, 12, 10) == 0 );


char* board659836856 = gamma_board(board);
assert( board659836856 != NULL );
assert( strcmp(board659836856, 
"4123...1..3..3...\n"
"..2.....3........\n"
"....3............\n"
".11.....1........\n"
"....4.....3..4...\n"
".1.22..41..2.4...\n"
"......4.........2\n"
"...3....1......1.\n"
"4342..2.......3.1\n"
".1.........4..341\n"
"244.....44.....22\n"
".42.....4.......2\n"
".........33.1....\n"
".2..2.........2..\n"
".2....3..1.......\n"
".......1.1.4....3\n"
"....4...2...33...\n") == 0);
free(board659836856);
board659836856 = NULL;
assert( gamma_free_fields(board, 3) == 46 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 2) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 4, 16, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 1, 16, 13) == 0 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_free_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 0, 16) == 0 );
assert( gamma_free_fields(board, 3) == 46 );
assert( gamma_move(board, 1, 13, 11) == 0 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_move(board, 3, 1, 16) == 0 );
assert( gamma_move(board, 4, 17, -1) == 0 );
assert( gamma_move(board, 1, 15, 8) == 1 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 15, 6) == 0 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_free_fields(board, 1) == 220 );
assert( gamma_golden_move(board, 1, 7, 15) == 0 );
assert( gamma_move(board, 3, 13, 10) == 0 );
assert( gamma_golden_move(board, 4, 7, 15) == 0 );
assert( gamma_move(board, 1, 8, 15) == 0 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 8, 0) == 0 );


char* board886529513 = gamma_board(board);
assert( board886529513 != NULL );
assert( strcmp(board886529513, 
"4123...1..3..3...\n"
"..2.....3........\n"
"....3............\n"
".11.....1........\n"
"....4.....3..4...\n"
".1.22..41..2.4...\n"
"......4.........2\n"
"...3....1......1.\n"
"4342..2.......311\n"
".1.........4..341\n"
"244.....44.....22\n"
".42.....4.......2\n"
".........33.1....\n"
".2..2.........2..\n"
".2....3..1.......\n"
".......1.1.4....3\n"
"....4...2...33...\n") == 0);
free(board886529513);
board886529513 = NULL;
assert( gamma_move(board, 1, 12, 17) == 0 );
assert( gamma_move(board, 3, 13, 17) == 0 );
assert( gamma_move(board, 4, -1, 14) == 0 );
assert( gamma_move(board, 1, 0, 15) == 1 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 17, 7) == 0 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_golden_move(board, 3, 5, 16) == 0 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_golden_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_move(board, 1, 13, 5) == 0 );
assert( gamma_move(board, 2, 14, 13) == 0 );
assert( gamma_move(board, 3, 11, -1) == 0 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 14, 9) == 0 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_move(board, 3, 6, 17) == 0 );
assert( gamma_move(board, 4, 10, 15) == 0 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 16, 16) == 0 );
assert( gamma_move(board, 1, 13, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 13, 8) == 0 );
assert( gamma_move(board, 2, -1, 14) == 0 );
assert( gamma_move(board, 3, 11, 17) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 4, -1, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 1, 16, 15) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 10, 15) == 1 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 3, 17) == 0 );
assert( gamma_golden_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 16, 5) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 15, 3) == 0 );
assert( gamma_move(board, 1, 12, 3) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );


char* board183379163 = gamma_board(board);
assert( board183379163 != NULL );
assert( strcmp(board183379163, 
"4123...1..3..3...\n"
"1.2.....3.3......\n"
"....3............\n"
".11.....1........\n"
"....4.....3..4...\n"
".1.22..41..2.4...\n"
"......4.........2\n"
"...3....1......1.\n"
"4342..2.......311\n"
".1.........4..341\n"
"244.....44.....22\n"
".42.....4.......2\n"
".........33.11...\n"
".2..2.......1.2..\n"
".2....3..1.......\n"
".......1.1.4....3\n"
"....4...2...33...\n") == 0);
free(board183379163);
board183379163 = NULL;


char* board564648792 = gamma_board(board);
assert( board564648792 != NULL );
assert( strcmp(board564648792, 
"4123...1..3..3...\n"
"1.2.....3.3......\n"
"....3............\n"
".11.....1........\n"
"....4.....3..4...\n"
".1.22..41..2.4...\n"
"......4.........2\n"
"...3....1......1.\n"
"4342..2.......311\n"
".1.........4..341\n"
"244.....44.....22\n"
".42.....4.......2\n"
".........33.11...\n"
".2..2.......1.2..\n"
".2....3..1.......\n"
".......1.1.4....3\n"
"....4...2...33...\n") == 0);
free(board564648792);
board564648792 = NULL;
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_free_fields(board, 4) == 39 );


char* board954404482 = gamma_board(board);
assert( board954404482 != NULL );
assert( strcmp(board954404482, 
"4123...1..3..3...\n"
"1.2.....3.3......\n"
"....3............\n"
".11.....1........\n"
"....4.....3..4...\n"
".1.22..41..2.4...\n"
"......4.........2\n"
"...3....1......1.\n"
"4342..2.......311\n"
".1.........4..341\n"
"244.....44.....22\n"
".42.....4.......2\n"
".........33.11...\n"
".2..2.......1.2..\n"
".2....3..1.......\n"
".......1.1.4....3\n"
"....4...2...33...\n") == 0);
free(board954404482);
board954404482 = NULL;
assert( gamma_move(board, 1, 15, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 12, 13) == 0 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_move(board, 3, 16, 9) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 3, -1, 16) == 0 );
assert( gamma_move(board, 4, -1, 16) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 1, 5, 16) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 3, 17, 16) == 0 );
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_move(board, 1, -1, 17) == 0 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 15, 2) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );


char* board151624937 = gamma_board(board);
assert( board151624937 != NULL );
assert( strcmp(board151624937, 
"4123...1..3..3...\n"
"1.2.....3.3......\n"
"....3............\n"
".11.....1........\n"
"....4.....3..4...\n"
".1.22..41..2.4...\n"
"......4.........2\n"
"...3....1......1.\n"
"4342..2.......311\n"
".1.........4..341\n"
"244.....44.....22\n"
".42.....4.......2\n"
".........33.11...\n"
".2..2.......1.2..\n"
".2....3..1.......\n"
".......1.1.4....3\n"
"....4...2...33...\n") == 0);
free(board151624937);
board151624937 = NULL;
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 1, 16, 13) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 4, 12, 10) == 0 );
assert( gamma_move(board, 2, 16, 16) == 0 );
assert( gamma_move(board, 3, 13, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 16, 1) == 0 );
assert( gamma_move(board, 3, 9, 15) == 1 );


char* board665571857 = gamma_board(board);
assert( board665571857 != NULL );
assert( strcmp(board665571857, 
"4123...1..3..3...\n"
"1.2.....333......\n"
"....3............\n"
".11.....1........\n"
"....4.....3..4...\n"
".1.22..41..2.4...\n"
"......4.........2\n"
"...3....1......1.\n"
"4342..2.......311\n"
".1.........4..341\n"
"244.....44.....22\n"
".42.....4.......2\n"
".........33.11...\n"
".2..2.......1.2..\n"
".2....3..1.......\n"
".......1.1.4....3\n"
"....44..2...33...\n") == 0);
free(board665571857);
board665571857 = NULL;
assert( gamma_move(board, 4, -1, 13) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, 7, -1) == 0 );


char* board626560501 = gamma_board(board);
assert( board626560501 != NULL );
assert( strcmp(board626560501, 
"4123...1..3..3...\n"
"1.2.....333......\n"
"....3............\n"
".11.....1........\n"
"....4.....3..4...\n"
".1.22..41..2.4...\n"
"......4.........2\n"
"...3....1......1.\n"
"4342..2.......311\n"
".1.........4..341\n"
"244.....44.....22\n"
".42.....4.......2\n"
".........33.11...\n"
".2..2.......1.2..\n"
".2....3..1.......\n"
".......1.1.4....3\n"
"....44..2...33...\n") == 0);
free(board626560501);
board626560501 = NULL;
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_golden_move(board, 2, 10, 16) == 0 );
assert( gamma_move(board, 3, 14, 7) == 0 );


char* board502808655 = gamma_board(board);
assert( board502808655 != NULL );
assert( strcmp(board502808655, 
"4123...1..3..3...\n"
"1.2.....333......\n"
"....3............\n"
".11.....1........\n"
"....4.....3..4...\n"
".1.22..41..2.4...\n"
"......4.........2\n"
"...3....1......1.\n"
"4342..2.......311\n"
".1.........4..341\n"
"244.....44.....22\n"
".42.....4.......2\n"
".........33.11...\n"
".2..2.......1.2..\n"
".2....3..1.......\n"
".......1.1.4....3\n"
"....44..2...33...\n") == 0);
free(board502808655);
board502808655 = NULL;
assert( gamma_move(board, 4, 14, 13) == 0 );
assert( gamma_free_fields(board, 4) == 40 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 3, 11, 16) == 1 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 1, 10, 15) == 0 );
assert( gamma_move(board, 2, 0, 17) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_move(board, 3, 11, 10) == 1 );
assert( gamma_golden_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_golden_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 2, 0, 17) == 0 );
assert( gamma_free_fields(board, 2) == 44 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 16, 5) == 0 );
assert( gamma_move(board, 1, 5, 14) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 1, 4, 17) == 0 );


char* board188548787 = gamma_board(board);
assert( board188548787 != NULL );
assert( strcmp(board188548787, 
"4123...1..33.3...\n"
"1.2.....333......\n"
"....3............\n"
".11.....1........\n"
"....4.....3..4...\n"
".1.22..41..2.4...\n"
"......4....3....2\n"
"...3....1......1.\n"
"4342..2.......311\n"
".1.........4..341\n"
"244.....44.....22\n"
".42.....4.......2\n"
".........33.11...\n"
".2..2.......1.2..\n"
".2....3..1.......\n"
".......1.1.4....3\n"
"....44..2...33...\n") == 0);
free(board188548787);
board188548787 = NULL;
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 12, 14) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_free_fields(board, 4) == 40 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 17, 14) == 0 );
assert( gamma_move(board, 4, 13, 10) == 1 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 1, 10, 15) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_free_fields(board, 2) == 44 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, -1, 11) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 2, -1, 17) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 16, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 22 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 3, 16, 2) == 1 );
assert( gamma_golden_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 1, 12, 15) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 3, 17, 12) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_free_fields(board, 1) == 206 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_golden_move(board, 2, 7, 14) == 0 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 1, -1, 17) == 0 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_golden_move(board, 1, 16, 11) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 9, 14) == 1 );
assert( gamma_free_fields(board, 3) == 47 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, -1, 0) == 0 );


char* board968143855 = gamma_board(board);
assert( board968143855 != NULL );
assert( strcmp(board968143855, 
"4123...1..33.3...\n"
"1.2.....333......\n"
"....3....3.......\n"
".11.....1........\n"
"....4.....3..4...\n"
".1.22..41..2.4...\n"
"......4....3.4..2\n"
"..43....1......1.\n"
"4342..2.......311\n"
".1......4..4..341\n"
"244.....44.....22\n"
".42.....4.......2\n"
"........433.11...\n"
".2..2.......1.2..\n"
".2....31.1......3\n"
"......1111.4....3\n"
"....444.2...33...\n") == 0);
free(board968143855);
board968143855 = NULL;
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 11) == 1 );
assert( gamma_free_fields(board, 2) == 44 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 1, 2, 17) == 0 );
assert( gamma_move(board, 2, 3, 16) == 0 );
assert( gamma_move(board, 4, 6, 15) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board125183748 = gamma_board(board);
assert( board125183748 != NULL );
assert( strcmp(board125183748, 
"4123...1..33.3...\n"
"1.2.....333......\n"
"....3....3.......\n"
".11.....1........\n"
"....4.....3..4...\n"
".1.222.41..2.4...\n"
"......4....3.4..2\n"
".343....1......1.\n"
"4342..2.......311\n"
".1......4..4..341\n"
"244.....44.....22\n"
".42.....4.......2\n"
"........433.11...\n"
".2..2.......1.2..\n"
".2....31.1......3\n"
"......1111.4....3\n"
"....44442...33...\n") == 0);
free(board125183748);
board125183748 = NULL;
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 25 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_golden_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 16, 0) == 0 );
assert( gamma_free_fields(board, 2) == 44 );
assert( gamma_move(board, 3, 16, 15) == 0 );
assert( gamma_move(board, 4, 14, 13) == 0 );
assert( gamma_move(board, 1, 16, 3) == 1 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_golden_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 10, 10) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 1, 11, 14) == 0 );
assert( gamma_free_fields(board, 2) == 44 );
assert( gamma_golden_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 9, 13) == 1 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 25 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_golden_move(board, 1, 11, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 10, 13) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 24 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 17, 3) == 0 );
assert( gamma_move(board, 3, 16, 2) == 0 );
assert( gamma_move(board, 4, 16, 9) == 0 );
assert( gamma_golden_move(board, 4, 14, 0) == 0 );
assert( gamma_move(board, 1, 11, 17) == 0 );
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_move(board, 3, 14, 6) == 1 );
assert( gamma_move(board, 4, 10, 17) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, -1) == 0 );


char* board575345639 = gamma_board(board);
assert( board575345639 != NULL );
assert( strcmp(board575345639, 
"4123...1..33.3...\n"
"1.2.....333......\n"
"....3....3.......\n"
".11.....13.......\n"
"....4.....3..4...\n"
".1.222.41..2.4...\n"
"......4...33.4..2\n"
".343....1......1.\n"
"4342..2.......311\n"
".1......4..4..341\n"
"244.....44....322\n"
".42.....4.......2\n"
"........433.11...\n"
".2..2.......1.2.1\n"
".2....31.1......3\n"
"......1111.4....3\n"
"....44442...33...\n") == 0);
free(board575345639);
board575345639 = NULL;
assert( gamma_move(board, 2, 6, 3) == 0 );


char* board650579856 = gamma_board(board);
assert( board650579856 != NULL );
assert( strcmp(board650579856, 
"4123...1..33.3...\n"
"1.2.....333......\n"
"....3....3.......\n"
".11.....13.......\n"
"....4.....3..4...\n"
".1.222.41..2.4...\n"
"......4...33.4..2\n"
".343....1......1.\n"
"4342..2.......311\n"
".1......4..4..341\n"
"244.....44....322\n"
".42.....4.......2\n"
"........433.11...\n"
".2..2.......1.2.1\n"
".2....31.1......3\n"
"......1111.4....3\n"
"....44442...33...\n") == 0);
free(board650579856);
board650579856 = NULL;
assert( gamma_move(board, 4, 12, 12) == 1 );
assert( gamma_free_fields(board, 1) == 43 );
assert( gamma_move(board, 2, 11, 16) == 0 );
assert( gamma_busy_fields(board, 2) == 19 );


char* board294153587 = gamma_board(board);
assert( board294153587 != NULL );
assert( strcmp(board294153587, 
"4123...1..33.3...\n"
"1.2.....333......\n"
"....3....3.......\n"
".11.....13.......\n"
"....4.....3.44...\n"
".1.222.41..2.4...\n"
"......4...33.4..2\n"
".343....1......1.\n"
"4342..2.......311\n"
".1......4..4..341\n"
"244.....44....322\n"
".42.....4.......2\n"
"........433.11...\n"
".2..2.......1.2.1\n"
".2....31.1......3\n"
"......1111.4....3\n"
"....44442...33...\n") == 0);
free(board294153587);
board294153587 = NULL;
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 1, 15, 12) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, 15, 16) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 0, 17) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_golden_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_free_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 6, 14) == 0 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_move(board, 2, 1, 17) == 0 );
assert( gamma_move(board, 3, 6, 15) == 0 );
assert( gamma_move(board, 4, 15, 4) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 17, 17) == 0 );
assert( gamma_move(board, 1, 13, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_move(board, 3, 17, 9) == 0 );
assert( gamma_move(board, 4, 17, 14) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 3, 17) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_golden_move(board, 3, 8, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 27 );
assert( gamma_move(board, 1, -1, 16) == 0 );
assert( gamma_move(board, 3, 0, 16) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 27 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 24 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 1, 15, 6) == 0 );


char* board987346255 = gamma_board(board);
assert( board987346255 != NULL );
assert( strcmp(board987346255, 
"4123...1..33.3...\n"
"1.2.....333......\n"
"....3....3.......\n"
".11.....13.......\n"
"....4.....3.44...\n"
".1.222.41..2.4...\n"
"......4...33.4..2\n"
".343....1......1.\n"
"4342..2.......311\n"
".1......4.44..341\n"
"244.....44....322\n"
".42.....4.......2\n"
"........433.11...\n"
".2..2.......1.2.1\n"
".2....31.1......3\n"
"......1111.4....3\n"
"....44442...33...\n") == 0);
free(board987346255);
board987346255 = NULL;
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_move(board, 1, 15, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );


char* board637442397 = gamma_board(board);
assert( board637442397 != NULL );
assert( strcmp(board637442397, 
"4123...1..33.3...\n"
"1.2.....333......\n"
"....3....3.......\n"
".11.....13.......\n"
"....4.....3.44...\n"
".1.222.41..2.4...\n"
"......4...33.4..2\n"
".343....1......1.\n"
"4342..2.......311\n"
".1......4.44..341\n"
"244.....44....322\n"
".42.....4.......2\n"
"........433.11...\n"
".2..2.......1.2.1\n"
".2....31.1......3\n"
"......1111.4....3\n"
"....44442...33...\n") == 0);
free(board637442397);
board637442397 = NULL;
assert( gamma_busy_fields(board, 4) == 27 );


char* board903163135 = gamma_board(board);
assert( board903163135 != NULL );
assert( strcmp(board903163135, 
"4123...1..33.3...\n"
"1.2.....333......\n"
"....3....3.......\n"
".11.....13.......\n"
"....4.....3.44...\n"
".1.222.41..2.4...\n"
"......4...33.4..2\n"
".343....1......1.\n"
"4342..2.......311\n"
".1......4.44..341\n"
"244.....44....322\n"
".42.....4.......2\n"
"........433.11...\n"
".2..2.......1.2.1\n"
".2....31.1......3\n"
"......1111.4....3\n"
"....44442...33...\n") == 0);
free(board903163135);
board903163135 = NULL;
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_golden_move(board, 2, 12, 10) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 4, 10, 15) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );


char* board262074413 = gamma_board(board);
assert( board262074413 != NULL );
assert( strcmp(board262074413, 
"4123...1..33.3...\n"
"1.2.....333......\n"
"....3....3.......\n"
".11.....13.......\n"
"....4.....3.44...\n"
".1.222.41..2.4...\n"
"......4...33.4..2\n"
".343....1......1.\n"
"4342..2.......311\n"
".1......4.44..341\n"
"244.....44....322\n"
".42.....4.......2\n"
"........433.11...\n"
".2..2.......1.2.1\n"
".2....31.1......3\n"
"......1111.4....3\n"
"....44442...33...\n") == 0);
free(board262074413);
board262074413 = NULL;
assert( gamma_move(board, 3, 15, 15) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 1, -1, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 25 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 1, -1, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 0, 17) == 0 );


char* board922359776 = gamma_board(board);
assert( board922359776 != NULL );
assert( strcmp(board922359776, 
"4123...1..33.3...\n"
"1.2.....333......\n"
"....3....3.......\n"
".11.....13.......\n"
"....4.....3.44...\n"
".1.222.41..2.4...\n"
"......4...33.4..2\n"
".343....1......1.\n"
"4342..2.......311\n"
".1......4.44..341\n"
"244.....44....322\n"
".42.....4.......2\n"
"........433.11...\n"
".2..2.......1.2.1\n"
".2....31.1......3\n"
"......1111.4....3\n"
"....444421..33...\n") == 0);
free(board922359776);
board922359776 = NULL;
assert( gamma_move(board, 3, 13, 14) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 15) == 1 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 3, 15, 15) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_move(board, 1, 13, 10) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_free_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 15, 1) == 0 );
assert( gamma_move(board, 1, 1, 12) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 3, 7, 16) == 0 );


char* board929167839 = gamma_board(board);
assert( board929167839 != NULL );
assert( strcmp(board929167839, 
"4123...1..33.3...\n"
"122.....333......\n"
"....3....3.......\n"
".11.....13.......\n"
".1..4.....3.44...\n"
".1.222.41..2.4...\n"
"......4...33.4..2\n"
".343....1......1.\n"
"4342..2.......311\n"
".1......4.44..341\n"
"244.....44....322\n"
".42.....4.......2\n"
"........433.11...\n"
".2..2.......1.2.1\n"
".2....31.1......3\n"
"......1111.4....3\n"
"....444421..33...\n") == 0);
free(board929167839);
board929167839 = NULL;
assert( gamma_move(board, 4, 17, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 1, 5, 17) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );


char* board303000943 = gamma_board(board);
assert( board303000943 != NULL );
assert( strcmp(board303000943, 
"4123...1..33.3...\n"
"122.....333......\n"
"....3....3.......\n"
".11.....13.......\n"
".1..4.....3.44...\n"
".1.222.41..2.4...\n"
"......4...33.4..2\n"
".343....1......1.\n"
"4342..2.......311\n"
".1......4.44..341\n"
"244.....44....322\n"
".42.....4.......2\n"
"........433.11...\n"
".2..2.......1.2.1\n"
".2....31.1......3\n"
"......1111.4....3\n"
"....444421..33...\n") == 0);
free(board303000943);
board303000943 = NULL;
assert( gamma_move(board, 4, 16, 11) == 0 );
assert( gamma_move(board, 1, -1, 17) == 0 );
assert( gamma_move(board, 2, 16, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 16) == 0 );
assert( gamma_move(board, 1, 8, 14) == 1 );


char* board388129816 = gamma_board(board);
assert( board388129816 != NULL );
assert( strcmp(board388129816, 
"4123...1..33.3...\n"
"122.....333......\n"
"....3...13.......\n"
".11.....13.......\n"
".1..4.....3.44...\n"
".1.222.41..2.4...\n"
"......4...33.4..2\n"
".343....1......1.\n"
"4342..2.......311\n"
".1......4.44..341\n"
"244.....44....322\n"
".42.....4.......2\n"
"........433.11...\n"
".2..2.......1.2.1\n"
".2....31.1......3\n"
"......1111.4....3\n"
"....444421..33...\n") == 0);
free(board388129816);
board388129816 = NULL;
assert( gamma_move(board, 2, 13, 14) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 1, 15, 7) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 5, 16) == 0 );
assert( gamma_free_fields(board, 4) == 44 );


char* board460556897 = gamma_board(board);
assert( board460556897 != NULL );
assert( strcmp(board460556897, 
"4123...1..33.3...\n"
"122.....333......\n"
"....3...13.......\n"
".11.....13.......\n"
".1..4.....3.44...\n"
".1.222.41..2.4...\n"
"......4...33.4..2\n"
".343....1......1.\n"
"4342..2.......311\n"
".1......4.44..341\n"
"244.....44....322\n"
".42.....4.......2\n"
"........433.11...\n"
".2..2.......1.2.1\n"
".2....31.1......3\n"
"......1111.4....3\n"
"....444421..33...\n") == 0);
free(board460556897);
board460556897 = NULL;
assert( gamma_move(board, 2, 16, 6) == 0 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_golden_move(board, 2, 11, 14) == 0 );
assert( gamma_golden_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 11, 2) == 1 );
assert( gamma_free_fields(board, 4) == 46 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 4, 14, 1) == 0 );
assert( gamma_move(board, 1, -1, 11) == 0 );
assert( gamma_move(board, 2, 4, 17) == 0 );


gamma_delete(board);

    return 0;
}
