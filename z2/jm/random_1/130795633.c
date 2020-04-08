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
uuid: 130795633
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(19, 18, 6, 7);
assert( board != NULL );


assert( gamma_move(board, 2, 13, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 14) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );


char* board486340591 = gamma_board(board);
assert( board486340591 != NULL );
assert( strcmp(board486340591, 
"...................\n"
"...................\n"
"...................\n"
".........3.........\n"
"...................\n"
"...................\n"
"...................\n"
"...................\n"
"...................\n"
"..25...............\n"
".............2.....\n"
"...1...............\n"
"...................\n"
"...................\n"
"...................\n"
"...................\n"
"...................\n"
"...................\n") == 0);
free(board486340591);
board486340591 = NULL;
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 13, 4) == 1 );
assert( gamma_golden_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 5, -1, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 2, 18, 15) == 1 );
assert( gamma_move(board, 3, 17, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, 18, 16) == 1 );
assert( gamma_move(board, 6, 6, 11) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_free_fields(board, 2) == 327 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_golden_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 8, 16) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 1, 13) == 1 );
assert( gamma_move(board, 1, 8, 15) == 1 );
assert( gamma_move(board, 3, 18, 5) == 1 );
assert( gamma_move(board, 4, 16, 5) == 1 );
assert( gamma_move(board, 6, 17, 10) == 1 );
assert( gamma_move(board, 1, 0, 15) == 1 );
assert( gamma_free_fields(board, 1) == 319 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_free_fields(board, 3) == 317 );
assert( gamma_move(board, 4, 17, 12) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 6, 2) == 1 );


char* board169838639 = gamma_board(board);
assert( board169838639 != NULL );
assert( strcmp(board169838639, 
"...................\n"
"........4.........5\n"
"1.......1.........2\n"
".........3.........\n"
".6.................\n"
".................4.\n"
"......6............\n"
".................6.\n"
"....3..............\n"
"..25..21...........\n"
".............2.....\n"
"...1...6...........\n"
"................433\n"
".2..3........4.....\n"
"...................\n"
"......5............\n"
".....5.............\n"
".......4...........\n") == 0);
free(board169838639);
board169838639 = NULL;
assert( gamma_move(board, 6, 15, 3) == 1 );
assert( gamma_move(board, 1, 15, 1) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_free_fields(board, 3) == 312 );
assert( gamma_move(board, 4, 12, 9) == 1 );
assert( gamma_move(board, 6, 12, 1) == 1 );
assert( gamma_free_fields(board, 6) == 310 );


char* board738127003 = gamma_board(board);
assert( board738127003 != NULL );
assert( strcmp(board738127003, 
"...................\n"
"........4.........5\n"
"1.......1.........2\n"
".........3.........\n"
".6.................\n"
".................4.\n"
"......6............\n"
".................6.\n"
"....3.......4......\n"
"..25..21...........\n"
".............2.....\n"
"...1...6...........\n"
"................433\n"
".2..3........4.....\n"
"...............6...\n"
"3.....5............\n"
".....5......6..1...\n"
".......4...........\n") == 0);
free(board738127003);
board738127003 = NULL;
assert( gamma_move(board, 1, 12, 4) == 1 );
assert( gamma_move(board, 2, 9, 14) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 11, 5) == 1 );
assert( gamma_move(board, 6, 18, 5) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 17, 18) == 0 );
assert( gamma_move(board, 3, 8, 18) == 0 );
assert( gamma_free_fields(board, 4) == 307 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 2, 3) == 1 );


char* board320271750 = gamma_board(board);
assert( board320271750 != NULL );
assert( strcmp(board320271750, 
"...................\n"
"........4.........5\n"
"1.......1.........2\n"
".........3.........\n"
".6.................\n"
".................4.\n"
"......6............\n"
".................6.\n"
"....3.......4......\n"
"..25..21...........\n"
".....1.......2.....\n"
"...1...6...........\n"
"...........5....433\n"
".2..3.......14.....\n"
"..6............6...\n"
"3.....5............\n"
".....5......6..1...\n"
".......4...........\n") == 0);
free(board320271750);
board320271750 = NULL;
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 4, 17, 0) == 1 );
assert( gamma_move(board, 5, 0, 10) == 1 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 3, 4, 11) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_golden_move(board, 4, 1, 16) == 0 );
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_golden_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 17, 17) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 4, 11, 17) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );


char* board172929277 = gamma_board(board);
assert( board172929277 != NULL );
assert( strcmp(board172929277, 
".................2.\n"
"........4.........5\n"
"1.......1.........2\n"
".........3.........\n"
".6.................\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
"....3.......4......\n"
"..25..21...........\n"
".....1.......2.....\n"
"...1...6...........\n"
"...........5....433\n"
".2..3.......14.....\n"
"..6............6...\n"
"3.....5............\n"
".....5.4....6..1...\n"
".......4.........4.\n") == 0);
free(board172929277);
board172929277 = NULL;
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_move(board, 1, 10, 14) == 0 );
assert( gamma_free_fields(board, 2) == 300 );


char* board958433348 = gamma_board(board);
assert( board958433348 != NULL );
assert( strcmp(board958433348, 
".................2.\n"
"........4.........5\n"
"1.......1.........2\n"
".........3.........\n"
".6.................\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
"....3.......4......\n"
"..25..21...........\n"
".....1.......2.....\n"
"...1...6...........\n"
"...........5....433\n"
".2..3.......14.....\n"
"..6............6...\n"
"3.....5............\n"
".....5.4....6..1...\n"
".......4.........4.\n") == 0);
free(board958433348);
board958433348 = NULL;
assert( gamma_move(board, 3, 11, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_golden_move(board, 4, 15, 18) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 6, 8, -1) == 0 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );


char* board657497013 = gamma_board(board);
assert( board657497013 != NULL );
assert( strcmp(board657497013, 
".................2.\n"
"........4.........5\n"
"1.......1.........2\n"
".........3.........\n"
".6.................\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
"....3.......4......\n"
"..25..21...........\n"
".....1.....3.2.....\n"
"...1...6...........\n"
"...........5....433\n"
".2..3.......14.....\n"
"..6............6...\n"
"3.....5............\n"
".....5.4....6..1...\n"
".......4.........4.\n") == 0);
free(board657497013);
board657497013 = NULL;
assert( gamma_move(board, 3, 2, 18) == 0 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 4, 14) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 16, 14) == 0 );
assert( gamma_move(board, 4, 18, -1) == 0 );
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 3, 19, 12) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_golden_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 18, 11) == 0 );
assert( gamma_move(board, 5, 11, 14) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 1, 19, 11) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 12, 18) == 0 );
assert( gamma_move(board, 5, 2, 17) == 0 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 14, 4) == 0 );
assert( gamma_free_fields(board, 2) == 23 );


char* board330791563 = gamma_board(board);
assert( board330791563 != NULL );
assert( strcmp(board330791563, 
".................2.\n"
"........4.........5\n"
"1.......1.........2\n"
"....2....3.........\n"
".6.................\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
"....3.......4......\n"
"..25..21...........\n"
".....1.....3.2.....\n"
"...1...6...........\n"
"...........5....433\n"
".2..3.......14.....\n"
"..6............6...\n"
"3.....5............\n"
".....5.4....6..1...\n"
".......4.........4.\n") == 0);
free(board330791563);
board330791563 = NULL;
assert( gamma_move(board, 3, 12, 15) == 0 );


char* board380153334 = gamma_board(board);
assert( board380153334 != NULL );
assert( strcmp(board380153334, 
".................2.\n"
"........4.........5\n"
"1.......1.........2\n"
"....2....3.........\n"
".6.................\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
"....3.......4......\n"
"..25..21...........\n"
".....1.....3.2.....\n"
"...1...6...........\n"
"...........5....433\n"
".2..3.......14.....\n"
"..6............6...\n"
"3.....5............\n"
".....5.4....6..1...\n"
".......4.........4.\n") == 0);
free(board380153334);
board380153334 = NULL;
assert( gamma_move(board, 4, 13, -1) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_golden_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 1, 13, -1) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 19, 3) == 0 );


char* board443272849 = gamma_board(board);
assert( board443272849 != NULL );
assert( strcmp(board443272849, 
".................2.\n"
"........4.........5\n"
"1.......1.........2\n"
"....2....3.........\n"
".6.................\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
"....3.......4......\n"
"..25..21...........\n"
".....1.....3.2.....\n"
"...1...6...........\n"
"...........5....433\n"
".2..3.......14.....\n"
"..6............6...\n"
"3.....5............\n"
".....5.4....6..1...\n"
".......4.........4.\n") == 0);
free(board443272849);
board443272849 = NULL;
assert( gamma_busy_fields(board, 6) == 7 );


char* board466688216 = gamma_board(board);
assert( board466688216 != NULL );
assert( strcmp(board466688216, 
".................2.\n"
"........4.........5\n"
"1.......1.........2\n"
"....2....3.........\n"
".6.................\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
"....3.......4......\n"
"..25..21...........\n"
".....1.....3.2.....\n"
"...1...6...........\n"
"...........5....433\n"
".2..3.......14.....\n"
"..6............6...\n"
"3.....5............\n"
".....5.4....6..1...\n"
".......4.........4.\n") == 0);
free(board466688216);
board466688216 = NULL;
assert( gamma_move(board, 2, 4, 16) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 18) == 0 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 1) == 1 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 2, 14, 7) == 1 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 17, 1) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 9, 14) == 0 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_golden_move(board, 1, 14, 9) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 9, 15) == 1 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 5, 19, 1) == 0 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 6, -1, 10) == 0 );
assert( gamma_free_fields(board, 6) == 30 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 16, 5) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_golden_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 3, 16, 16) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 5, 18) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_free_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 16, 13) == 0 );
assert( gamma_move(board, 6, 14, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 6, 4, 18) == 0 );
assert( gamma_free_fields(board, 6) == 30 );
assert( gamma_move(board, 2, 3, 16) == 0 );
assert( gamma_move(board, 3, 18, 2) == 0 );
assert( gamma_move(board, 4, 18, 13) == 0 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_move(board, 1, 19, 4) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 18, 16) == 0 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 16) == 0 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 5, 14, 12) == 0 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 13, 10) == 0 );
assert( gamma_move(board, 1, 15, 9) == 0 );
assert( gamma_move(board, 2, 18, 16) == 0 );
assert( gamma_move(board, 3, 10, 14) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 4) == 0 );


char* board875082021 = gamma_board(board);
assert( board875082021 != NULL );
assert( strcmp(board875082021, 
".................2.\n"
"........4.........5\n"
"1.......13........2\n"
"....2....33........\n"
".6.................\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
"....3.......4......\n"
"..25..211..........\n"
".....1.....3.22....\n"
"...1...6...........\n"
"...........5....433\n"
".2..3.......14.....\n"
"..6............6...\n"
"3.....5............\n"
".....5.4...66..1...\n"
".......4.........4.\n") == 0);
free(board875082021);
board875082021 = NULL;
assert( gamma_move(board, 5, 18, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 3, 18, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 19, 4) == 0 );
assert( gamma_move(board, 5, 15, 6) == 0 );
assert( gamma_move(board, 6, 16, 13) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 5, 17) == 0 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_move(board, 4, 8, 17) == 1 );
assert( gamma_golden_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_free_fields(board, 6) == 30 );
assert( gamma_move(board, 1, 13, 16) == 0 );


char* board355513691 = gamma_board(board);
assert( board355513691 != NULL );
assert( strcmp(board355513691, 
"........4........2.\n"
"........4.........5\n"
"1.......13........2\n"
"....2....33........\n"
".6.................\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
"....3.......4......\n"
"..25..211..........\n"
".....1.....3.22....\n"
"...1...6...........\n"
"...........5....433\n"
".2..3.......14.....\n"
"..6............6...\n"
"3.....5............\n"
".....5.4...66..1...\n"
".......4.........4.\n") == 0);
free(board355513691);
board355513691 = NULL;
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 3, 14, 18) == 0 );
assert( gamma_move(board, 4, 17, 0) == 0 );
assert( gamma_move(board, 5, 19, 7) == 0 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_free_fields(board, 2) == 25 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 3, 16) == 0 );
assert( gamma_move(board, 6, 4, 17) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 2, 17) == 0 );
assert( gamma_move(board, 4, 16, 8) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 1, 14, 10) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 18, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 1, 19, 5) == 0 );
assert( gamma_golden_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 3, 9, 17) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 1, 7, 18) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_golden_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_move(board, 4, 13, 13) == 0 );


char* board717907555 = gamma_board(board);
assert( board717907555 != NULL );
assert( strcmp(board717907555, 
"........4........2.\n"
"........4.........5\n"
"1.......13........2\n"
"....2....33........\n"
".6.................\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
"....3.......4......\n"
"..25..211..........\n"
".....1.....3.22....\n"
"...1...6...........\n"
"...........5....433\n"
".2..3.......14.....\n"
"..6............6...\n"
"3.....5............\n"
"3....5.4...66..1...\n"
".......4.........4.\n") == 0);
free(board717907555);
board717907555 = NULL;
assert( gamma_move(board, 5, 19, 0) == 0 );
assert( gamma_move(board, 6, 12, 13) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 18, 7) == 0 );
assert( gamma_move(board, 4, 16, 10) == 0 );
assert( gamma_move(board, 6, 12, 15) == 0 );
assert( gamma_free_fields(board, 6) == 30 );
assert( gamma_move(board, 1, 15, 5) == 0 );


char* board238879415 = gamma_board(board);
assert( board238879415 != NULL );
assert( strcmp(board238879415, 
"........4........2.\n"
"........4.........5\n"
"1.......13........2\n"
"....2....33........\n"
".6.................\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
"....3.......4......\n"
"..25..211..........\n"
".....1.....3.22....\n"
"...1...6...........\n"
"...........5....433\n"
".2..3.......14.....\n"
"..6............6...\n"
"3.....5............\n"
"3....5.4...66..1...\n"
".......4.........4.\n") == 0);
free(board238879415);
board238879415 = NULL;
assert( gamma_move(board, 2, 18, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 18, 11) == 0 );
assert( gamma_golden_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 16, 17) == 0 );
assert( gamma_move(board, 5, 19, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 13) == 0 );
assert( gamma_golden_move(board, 2, 14, 10) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 9, 14) == 0 );
assert( gamma_move(board, 6, 18, 0) == 0 );
assert( gamma_golden_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 2, 14, 10) == 0 );
assert( gamma_golden_move(board, 2, 15, 0) == 0 );


char* board545117149 = gamma_board(board);
assert( board545117149 != NULL );
assert( strcmp(board545117149, 
"........4........2.\n"
"........4.........5\n"
"1.......13........2\n"
"....2....33........\n"
".6.................\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
"....3.......4......\n"
"..25..211..........\n"
".....1.....3.22....\n"
"...1...6...........\n"
"...........5....433\n"
".2..3.......14.....\n"
"..6............6...\n"
"3.....5............\n"
"3....5.4...66..1...\n"
".......4.........4.\n") == 0);
free(board545117149);
board545117149 = NULL;
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_golden_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 3, 15, 10) == 0 );
assert( gamma_move(board, 4, 16, 15) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 18, 16) == 0 );
assert( gamma_golden_move(board, 2, 13, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 6, 10, 18) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 5, 15, 1) == 0 );
assert( gamma_free_fields(board, 6) == 30 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 3, 17) == 0 );
assert( gamma_move(board, 3, 9, 17) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 5, 1, 15) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 1, 19, -1) == 0 );


char* board908184507 = gamma_board(board);
assert( board908184507 != NULL );
assert( strcmp(board908184507, 
"........4........2.\n"
"........4.........5\n"
"1.......13........2\n"
"....2....33........\n"
".6.................\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
"....3.......4......\n"
"..25..211..........\n"
".....1.....3.22....\n"
"...1.1.6...........\n"
"...........5....433\n"
".2..3.......14.....\n"
"..6............6...\n"
"3.....5............\n"
"3....5.4...66..1...\n"
".......4.........4.\n") == 0);
free(board908184507);
board908184507 = NULL;
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 5, 18, 17) == 1 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 12, 18) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 16, 4) == 1 );
assert( gamma_free_fields(board, 4) == 29 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 13, 16) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_golden_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 2, 4, 13) == 1 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 9) == 1 );
assert( gamma_move(board, 6, -1, 15) == 0 );
assert( gamma_golden_move(board, 6, 14, 10) == 0 );
assert( gamma_move(board, 1, 16, 13) == 0 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_golden_move(board, 5, 9, 12) == 0 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 1, 18, 16) == 0 );


char* board664895065 = gamma_board(board);
assert( board664895065 != NULL );
assert( strcmp(board664895065, 
"........4........25\n"
"........4.........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
"....3......44......\n"
".225..211..........\n"
".....1.....3.22....\n"
"...1.1.6...........\n"
"...........5....433\n"
".2..3.......14..4..\n"
"..6............6...\n"
"3.....54...........\n"
"3....5.4...66..1...\n"
".......4.........4.\n") == 0);
free(board664895065);
board664895065 = NULL;
assert( gamma_move(board, 2, 6, 15) == 0 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_move(board, 4, 14, 11) == 0 );
assert( gamma_move(board, 1, 18, 4) == 0 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 13, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board458243911 = gamma_board(board);
assert( board458243911 != NULL );
assert( strcmp(board458243911, 
"........4........25\n"
"........4.........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
"....3......44......\n"
".225..211..........\n"
".....12....3.22....\n"
"...1.1.6...........\n"
"...........5....433\n"
".2..3.......14..4..\n"
"..6............6...\n"
"3.....54...........\n"
"3....5.4...66..1...\n"
".......4.........4.\n") == 0);
free(board458243911);
board458243911 = NULL;
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 1, 12, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_free_fields(board, 4) == 31 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 19, -1) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 4, -1, 16) == 0 );


char* board482269660 = gamma_board(board);
assert( board482269660 != NULL );
assert( strcmp(board482269660, 
"........4........25\n"
"........4.........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
"....3......44......\n"
".225..211..........\n"
".....12....3.22....\n"
"...1.1.6...........\n"
"...........5....433\n"
".2..3.......14..4..\n"
"..6............6...\n"
"3.....54...........\n"
"3....5.4...66..1...\n"
".......4.........4.\n") == 0);
free(board482269660);
board482269660 = NULL;
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 6, 13, 7) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 12, 13) == 0 );
assert( gamma_move(board, 6, 18, 14) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 5, 17, 4) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_move(board, 1, 5, 18) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 12, 16) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 18, 18) == 0 );
assert( gamma_move(board, 3, 10, 14) == 0 );
assert( gamma_move(board, 4, 11, 15) == 0 );
assert( gamma_move(board, 5, 6, 16) == 0 );
assert( gamma_move(board, 1, 15, 9) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 1, 15) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 19, 7) == 0 );
assert( gamma_move(board, 6, 16, 15) == 0 );
assert( gamma_move(board, 1, 18, 7) == 0 );
assert( gamma_move(board, 2, 12, 7) == 1 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 4, 17) == 0 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );


char* board691103580 = gamma_board(board);
assert( board691103580 != NULL );
assert( strcmp(board691103580, 
"........4........25\n"
"........4.........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
"....3......44......\n"
".225..211..........\n"
"...5.12....3222....\n"
"...1.1.6...........\n"
"...........5....433\n"
".2..3.......14..4..\n"
"..6............6...\n"
"3.....544..........\n"
"3....554...66..1...\n"
".......4.........4.\n") == 0);
free(board691103580);
board691103580 = NULL;
assert( gamma_move(board, 1, 5, 9) == 0 );


char* board568574309 = gamma_board(board);
assert( board568574309 != NULL );
assert( strcmp(board568574309, 
"........4........25\n"
"........4.........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
"....3......44......\n"
".225..211..........\n"
"...5.12....3222....\n"
"...1.1.6...........\n"
"...........5....433\n"
".2..3.......14..4..\n"
"..6............6...\n"
"3.....544..........\n"
"3....554...66..1...\n"
".......4.........4.\n") == 0);
free(board568574309);
board568574309 = NULL;
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 3, 17, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 19, 16) == 0 );
assert( gamma_move(board, 6, 12, 15) == 0 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 2, 15) == 0 );
assert( gamma_move(board, 3, 13, 14) == 0 );
assert( gamma_move(board, 4, 6, 16) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 17, 14) == 0 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, 19, 18) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_move(board, 5, 16, 5) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 18) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 18, 13) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 6, 13, 15) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 17, 5) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 11, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 2, 7, 15) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 1, 16, 6) == 0 );
assert( gamma_move(board, 2, 15, 12) == 0 );


char* board674974236 = gamma_board(board);
assert( board674974236 != NULL );
assert( strcmp(board674974236, 
"........4........25\n"
"........4.........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
".2..3......44......\n"
".225..211..........\n"
"...5.12....3222....\n"
"...1.1.6...........\n"
"...........5....433\n"
".2..3.......14..4..\n"
"..6....5.......6...\n"
"3.....544..........\n"
"3....554...66..1...\n"
".......4.........4.\n") == 0);
free(board674974236);
board674974236 = NULL;
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_free_fields(board, 6) == 30 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_golden_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 3, 18, 5) == 0 );
assert( gamma_move(board, 4, 9, 16) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 17, 14) == 0 );
assert( gamma_move(board, 6, 15, 10) == 0 );
assert( gamma_free_fields(board, 6) == 30 );
assert( gamma_move(board, 1, 6, 17) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_golden_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 19, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 19, 15) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 15, 16) == 0 );
assert( gamma_free_fields(board, 5) == 24 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 13, 12) == 0 );
assert( gamma_move(board, 1, 17, 4) == 0 );
assert( gamma_move(board, 2, 11, 14) == 0 );
assert( gamma_move(board, 3, 0, 15) == 0 );
assert( gamma_move(board, 5, 0, 18) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 16, 2) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 11, 14) == 0 );
assert( gamma_move(board, 3, 15, 15) == 0 );
assert( gamma_move(board, 4, 19, 16) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 16, 16) == 0 );
assert( gamma_move(board, 1, 4, 16) == 0 );


char* board845943716 = gamma_board(board);
assert( board845943716 != NULL );
assert( strcmp(board845943716, 
"........4........25\n"
"........44........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
".2..3......44......\n"
".225..211..........\n"
"...5112....3222....\n"
"...1.1.6...5.......\n"
"...........5....433\n"
".2..3.......14..4..\n"
"..6....5.......6...\n"
"3.....544..........\n"
"3....554...66..1...\n"
".......4.........4.\n") == 0);
free(board845943716);
board845943716 = NULL;
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_free_fields(board, 4) == 30 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_free_fields(board, 5) == 24 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_golden_move(board, 2, 1, 0) == 0 );


char* board826145063 = gamma_board(board);
assert( board826145063 != NULL );
assert( strcmp(board826145063, 
"........4........25\n"
"........44........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
".2..35.....44......\n"
".225..211..........\n"
"...5112....3222....\n"
"...1.1.6...5.......\n"
"...........5....433\n"
".2..3.......14..4..\n"
"..6....5.......6...\n"
"3.....544..........\n"
"3....554...66..1...\n"
".......4.........4.\n") == 0);
free(board826145063);
board826145063 = NULL;
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_golden_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 19, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 0, 15) == 0 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 17, 18) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_golden_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, -1, 8) == 0 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 13, 6) == 0 );
assert( gamma_move(board, 4, 13, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 6, 17) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 17, 16) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 1, 10, 13) == 0 );
assert( gamma_move(board, 2, 3, 15) == 0 );


char* board661358942 = gamma_board(board);
assert( board661358942 != NULL );
assert( strcmp(board661358942, 
"........4........25\n"
"........44........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
".2..35.....44......\n"
".225..211..........\n"
"...5112....3222....\n"
"...1.1.6...5.......\n"
"...........5....433\n"
".2..3.......14..4..\n"
"..6....5.......6...\n"
"3.....544..........\n"
"3....554...66..1...\n"
".......4.........4.\n") == 0);
free(board661358942);
board661358942 = NULL;
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_golden_move(board, 4, 2, 16) == 0 );
assert( gamma_move(board, 5, 10, 14) == 0 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 4, 13) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 1, 18, 18) == 0 );
assert( gamma_golden_move(board, 1, 1, 0) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );


char* board776303732 = gamma_board(board);
assert( board776303732 != NULL );
assert( strcmp(board776303732, 
"........4........25\n"
"........44........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
".2..35.....44......\n"
".225..211..........\n"
"...5112....3222....\n"
"...1.1.6...5.......\n"
"...........5....433\n"
".2..3.......14..4..\n"
"..6....5.......6...\n"
"3.....544..........\n"
"3....554...66..1...\n"
".......4.........4.\n") == 0);
free(board776303732);
board776303732 = NULL;
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 18, 14) == 0 );
assert( gamma_golden_move(board, 4, 1, 15) == 0 );
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_move(board, 6, 12, 17) == 0 );
assert( gamma_move(board, 1, 2, 18) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_free_fields(board, 2) == 31 );


char* board523911946 = gamma_board(board);
assert( board523911946 != NULL );
assert( strcmp(board523911946, 
"........4........25\n"
"........44........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
".2..35.....44......\n"
".225..211..........\n"
"...5112....3222....\n"
"...1.1.6...5.......\n"
"...........5....433\n"
".2..3.......14..4..\n"
"..6....5.......6...\n"
"3.....544..........\n"
"3....554...66..1...\n"
".......4.........4.\n") == 0);
free(board523911946);
board523911946 = NULL;
assert( gamma_move(board, 5, 14, 2) == 0 );
assert( gamma_move(board, 1, 19, -1) == 0 );


char* board948120859 = gamma_board(board);
assert( board948120859 != NULL );
assert( strcmp(board948120859, 
"........4........25\n"
"........44........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
".2..35.....44......\n"
".225..211..........\n"
"...5112....3222....\n"
"...1.1.6...5.......\n"
"...........5....433\n"
".2..3.......14..4..\n"
"..6....5.......6...\n"
"3.....544..........\n"
"3....554...66..1...\n"
".......4.........4.\n") == 0);
free(board948120859);
board948120859 = NULL;
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 15, 13) == 0 );
assert( gamma_move(board, 5, 5, 14) == 0 );
assert( gamma_move(board, 6, 9, 15) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 2, 12, 13) == 0 );
assert( gamma_move(board, 3, 6, -1) == 0 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 17, 9) == 0 );
assert( gamma_free_fields(board, 5) == 24 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 12, 6) == 1 );
assert( gamma_move(board, 3, 18, 1) == 0 );


char* board889370562 = gamma_board(board);
assert( board889370562 != NULL );
assert( strcmp(board889370562, 
"........4........25\n"
"........44........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
".2..35.....44......\n"
".225..211..........\n"
"...5112.1..3222....\n"
"...1.1.6...52......\n"
"...........5....433\n"
".2..3.......14..4..\n"
"..6....5.......6...\n"
"3.....544..........\n"
"3....554...66..1...\n"
".......4.........4.\n") == 0);
free(board889370562);
board889370562 = NULL;
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 18, 9) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_golden_move(board, 2, 10, 17) == 0 );
assert( gamma_move(board, 3, 10, 16) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 15, 17) == 0 );
assert( gamma_free_fields(board, 4) == 30 );
assert( gamma_golden_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 7, 17) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 16, 16) == 0 );
assert( gamma_move(board, 4, 17, 18) == 0 );
assert( gamma_move(board, 5, 7, -1) == 0 );
assert( gamma_move(board, 6, 9, 18) == 0 );
assert( gamma_golden_move(board, 6, 4, 13) == 0 );
assert( gamma_move(board, 1, 14, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );


char* board769794212 = gamma_board(board);
assert( board769794212 != NULL );
assert( strcmp(board769794212, 
"........4........25\n"
"........44........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
".2..35.....44......\n"
".225..211..........\n"
"...5112.1..3222....\n"
"...1.1.6...52......\n"
"...........5....433\n"
".2..3.......14..4..\n"
"..6....5.......6...\n"
"3.....544..........\n"
"3....554...66..1...\n"
".......4.........4.\n") == 0);
free(board769794212);
board769794212 = NULL;
assert( gamma_move(board, 3, 4, 16) == 0 );
assert( gamma_move(board, 4, 15, 14) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_move(board, 1, 18, 6) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 10, -1) == 0 );
assert( gamma_free_fields(board, 3) == 25 );


char* board204671287 = gamma_board(board);
assert( board204671287 != NULL );
assert( strcmp(board204671287, 
"........4........25\n"
"........44........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
".2..35.....44......\n"
".225..211..........\n"
"...5112.1..3222....\n"
"...1.1.6...52......\n"
"...........5....433\n"
".2..3.......14..4..\n"
"..6....5.......6...\n"
"3.....544..........\n"
"3....554...66..1...\n"
".......4.........4.\n") == 0);
free(board204671287);
board204671287 = NULL;
assert( gamma_move(board, 5, 16, 17) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_free_fields(board, 6) == 30 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 6, 16, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 1, 16, 17) == 0 );
assert( gamma_move(board, 2, 16, 9) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 4, 17, -1) == 0 );
assert( gamma_move(board, 5, 18, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, -1, 5) == 0 );
assert( gamma_golden_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 8, 17) == 0 );
assert( gamma_move(board, 4, 13, 18) == 0 );
assert( gamma_move(board, 5, 6, 17) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 12, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_free_fields(board, 3) == 25 );


char* board750231049 = gamma_board(board);
assert( board750231049 != NULL );
assert( strcmp(board750231049, 
"........4........25\n"
"........44........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
".2..35.....44......\n"
".225..211..........\n"
"...5112.1..3222....\n"
"...1.1.6...52......\n"
"...........5....433\n"
".2..3.......14..4..\n"
"..6....5.......6...\n"
"3.....544..........\n"
"3....554...66..1...\n"
".......4.........4.\n") == 0);
free(board750231049);
board750231049 = NULL;
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 4, 15) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 4, 3, 15) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 15, 16) == 0 );
assert( gamma_move(board, 4, 15, 14) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 17, 13) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 9 );


char* board221322126 = gamma_board(board);
assert( board221322126 != NULL );
assert( strcmp(board221322126, 
"........4........25\n"
"........44........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
".2..35.....44......\n"
".225..211..........\n"
"...5112.1..3222....\n"
"...1.1.6...52......\n"
"...........5....433\n"
".2..3.......14..4..\n"
".66....5.......6...\n"
"3.....544..........\n"
"3....554...66..1...\n"
".......4.........4.\n") == 0);
free(board221322126);
board221322126 = NULL;
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 2, 13, 15) == 0 );
assert( gamma_move(board, 3, 16, 1) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 8, 16) == 0 );
assert( gamma_move(board, 5, 17, 2) == 0 );
assert( gamma_move(board, 6, 0, 15) == 0 );
assert( gamma_move(board, 1, 17, 17) == 0 );
assert( gamma_move(board, 2, 18, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 1, -1) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );


char* board779830794 = gamma_board(board);
assert( board779830794 != NULL );
assert( strcmp(board779830794, 
"........4........25\n"
"........44........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
".2..35.....44......\n"
".225..211..........\n"
"...5112.1..3222....\n"
"...1.1.6...52......\n"
"...........5....433\n"
".2..3.......14..4..\n"
".66....5.......6...\n"
"3.....544..........\n"
"3....554...66..1...\n"
".......4.........4.\n") == 0);
free(board779830794);
board779830794 = NULL;
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 6, 5, 17) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 4, 6, 14) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board904005874 = gamma_board(board);
assert( board904005874 != NULL );
assert( strcmp(board904005874, 
"........4........25\n"
"........44........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
".2..35.....44......\n"
".225..211..........\n"
"...5112.1..3222....\n"
"...1.1.6...52......\n"
"...........5....433\n"
".2..3.......14..4..\n"
".66....5.......6...\n"
"3.....544..........\n"
"3....554...66..1...\n"
".......4.........4.\n") == 0);
free(board904005874);
board904005874 = NULL;


char* board450526845 = gamma_board(board);
assert( board450526845 != NULL );
assert( strcmp(board450526845, 
"........4........25\n"
"........44........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
".2..35.....44......\n"
".225..211..........\n"
"...5112.1..3222....\n"
"...1.1.6...52......\n"
"...........5....433\n"
".2..3.......14..4..\n"
".66....5.......6...\n"
"3.....544..........\n"
"3....554...66..1...\n"
".......4.........4.\n") == 0);
free(board450526845);
board450526845 = NULL;
assert( gamma_move(board, 2, 16, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board748296113 = gamma_board(board);
assert( board748296113 != NULL );
assert( strcmp(board748296113, 
"........4........25\n"
"........44........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
".2..35.....44......\n"
".225..211..........\n"
"...5112.1..3222....\n"
"...1.1.6...52......\n"
"...........5....433\n"
".2..3.......14..4..\n"
".66....5.......6...\n"
"3.....544..........\n"
"3....554...66..1...\n"
".......4.........4.\n") == 0);
free(board748296113);
board748296113 = NULL;
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 5, 8, 15) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 16, 12) == 0 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_golden_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 17, 3) == 0 );
assert( gamma_move(board, 6, 16, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 1, 4, 11) == 0 );


char* board882258485 = gamma_board(board);
assert( board882258485 != NULL );
assert( strcmp(board882258485, 
"........4........25\n"
"........44........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
".2..35.....44......\n"
".225..211..........\n"
"...5112.1..3222....\n"
"...1.1.6...52......\n"
"...........5....433\n"
".2..3.......14..4..\n"
".66....5.......6...\n"
"3.....544..........\n"
"3....554...66..1...\n"
".......4.........4.\n") == 0);
free(board882258485);
board882258485 = NULL;
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 16, 10) == 0 );
assert( gamma_move(board, 6, 19, 17) == 0 );
assert( gamma_golden_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 5, 14, 14) == 0 );
assert( gamma_move(board, 6, 13, 18) == 0 );
assert( gamma_move(board, 1, 3, 16) == 0 );
assert( gamma_move(board, 3, 12, 10) == 0 );
assert( gamma_move(board, 4, 15, 3) == 0 );
assert( gamma_move(board, 5, 19, 11) == 0 );
assert( gamma_golden_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 1, 13, -1) == 0 );
assert( gamma_move(board, 2, -1, 14) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_free_fields(board, 4) == 30 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 1, 3, 17) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board250320279 = gamma_board(board);
assert( board250320279 != NULL );
assert( strcmp(board250320279, 
"........4........25\n"
"........44........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
".2..35.....44......\n"
".225..211..........\n"
"...5112.1..3222....\n"
"...1.1.6...52......\n"
"...........5....433\n"
".2..3.......14..4..\n"
".66....5.......6...\n"
"3.....544..........\n"
"3....554...66..1...\n"
".......4.........4.\n") == 0);
free(board250320279);
board250320279 = NULL;
assert( gamma_move(board, 3, 15, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_free_fields(board, 4) == 30 );
assert( gamma_move(board, 5, 18, 16) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 1, 17) == 0 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_free_fields(board, 2) == 30 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, -1, 11) == 0 );
assert( gamma_move(board, 5, 15, -1) == 0 );
assert( gamma_move(board, 6, 17, 15) == 0 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );


char* board703091280 = gamma_board(board);
assert( board703091280 != NULL );
assert( strcmp(board703091280, 
"........4........25\n"
"........44........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
".................4.\n"
"....3.6............\n"
"5....5...........6.\n"
".2..35.....44......\n"
".225..211..........\n"
"...5112.1..3222....\n"
"...1.1.6...52......\n"
"...........5....433\n"
".2..3.......14..4..\n"
".66....5.......6...\n"
"3.....544..........\n"
"3....554...66..1...\n"
".......4.........4.\n") == 0);
free(board703091280);
board703091280 = NULL;
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 16, 12) == 1 );
assert( gamma_move(board, 5, 16, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board859733455 = gamma_board(board);
assert( board859733455 != NULL );
assert( strcmp(board859733455, 
"........4........25\n"
"........44........5\n"
"1.......13........2\n"
"....2....33........\n"
".6..2..............\n"
"................44.\n"
"....3.6............\n"
"5....5...........6.\n"
".2..35.....44......\n"
".225..211..........\n"
"...5112.1..3222....\n"
"...1.1.6...52......\n"
"...........5....433\n"
".2..3.......14..4..\n"
".66....5.......6...\n"
"3.....544..........\n"
"3....554...66..1...\n"
".......4.........4.\n") == 0);
free(board859733455);
board859733455 = NULL;
assert( gamma_move(board, 6, 18, 12) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 2, 6, 15) == 0 );
assert( gamma_move(board, 4, 17, 5) == 0 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 12, 2) == 1 );


gamma_delete(board);

    return 0;
}
