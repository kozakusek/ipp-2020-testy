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
uuid: 864549428
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 11, 12, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 5, 14, 4) == 1 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 7, 12, 3) == 1 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 10, 4) == 1 );
assert( gamma_move(board, 10, 10, 10) == 1 );
assert( gamma_move(board, 11, 8, 6) == 1 );
assert( gamma_busy_fields(board, 11) == 1 );


char* board338473773 = gamma_board(board);
assert( board338473773 != NULL );
assert( strcmp(board338473773, 
"..........10....\n"
"...............\n"
".........4.....\n"
"...............\n"
"........11......\n"
"2......7.......\n"
"5...6.....9...5\n"
".3..........7..\n"
".2.............\n"
".........3.....\n"
"..8............\n") == 0);
free(board338473773);
board338473773 = NULL;
assert( gamma_move(board, 12, 0, 4) == 0 );
assert( gamma_move(board, 1, 6, 5) == 1 );


char* board487624474 = gamma_board(board);
assert( board487624474 != NULL );
assert( strcmp(board487624474, 
"..........10....\n"
"...............\n"
".........4.....\n"
"...............\n"
"........11......\n"
"2.....17.......\n"
"5...6.....9...5\n"
".3..........7..\n"
".2.............\n"
".........3.....\n"
"..8............\n") == 0);
free(board487624474);
board487624474 = NULL;
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_free_fields(board, 6) == 141 );


char* board103870523 = gamma_board(board);
assert( board103870523 != NULL );
assert( strcmp(board103870523, 
"..........10....\n"
"......3........\n"
".......6.4.....\n"
"...2...........\n"
"4.......11......\n"
"2.....17.......\n"
"5...6..2..9...5\n"
".3.......5..7..\n"
".2.............\n"
"..64.....3.....\n"
"..8....3.......\n") == 0);
free(board103870523);
board103870523 = NULL;
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 8, 1, 9) == 1 );
assert( gamma_move(board, 10, 3, 5) == 1 );


char* board551047454 = gamma_board(board);
assert( board551047454 != NULL );
assert( strcmp(board551047454, 
"..........10....\n"
".8....3........\n"
".......6.4.....\n"
"...2...........\n"
"4.......11......\n"
"2..107717.......\n"
"5...6..2..9...5\n"
".3.......5..7..\n"
".2.............\n"
"..64.....3.....\n"
"..8....3.......\n") == 0);
free(board551047454);
board551047454 = NULL;
assert( gamma_move(board, 12, 2, 11) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_golden_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 2, 12, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_free_fields(board, 5) == 135 );
assert( gamma_move(board, 6, 8, 10) == 1 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 9, 6, 4) == 1 );
assert( gamma_move(board, 10, 12, 3) == 0 );
assert( gamma_move(board, 10, 0, 5) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 14, 6) == 1 );
assert( gamma_move(board, 11, 1, 2) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 1, 14, 9) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );


char* board632022308 = gamma_board(board);
assert( board632022308 != NULL );
assert( strcmp(board632022308, 
"........6.10....\n"
".8....3.......1\n"
".......6.4.....\n"
"...2...........\n"
"4.1.....11.....11\n"
"2..107717.......\n"
"5...6.92..9...5\n"
".367.....5..7..\n"
".2..........2..\n"
"..64.....3.....\n"
".18....3.......\n") == 0);
free(board632022308);
board632022308 = NULL;
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 9, 9) == 1 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 5, 14, 0) == 1 );
assert( gamma_move(board, 6, 10, 12) == 0 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 7, 3, 14) == 0 );
assert( gamma_move(board, 7, 14, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 10, 5) == 1 );
assert( gamma_free_fields(board, 8) == 122 );
assert( gamma_move(board, 9, 10, 0) == 1 );
assert( gamma_move(board, 10, 1, 0) == 0 );
assert( gamma_move(board, 10, 6, 10) == 1 );
assert( gamma_move(board, 11, 10, 7) == 1 );
assert( gamma_move(board, 11, 13, 10) == 1 );
assert( gamma_free_fields(board, 11) == 118 );
assert( gamma_move(board, 12, 4, 2) == 1 );
assert( gamma_move(board, 12, 12, 2) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_free_fields(board, 2) == 116 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_move(board, 7, 8, 11) == 0 );
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 9, 10, 14) == 0 );
assert( gamma_move(board, 9, 0, 7) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 1, 8) == 1 );
assert( gamma_move(board, 11, 10, 3) == 1 );
assert( gamma_free_fields(board, 11) == 108 );
assert( gamma_move(board, 12, 4, 3) == 1 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 13, 8) == 1 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_move(board, 8, 13, 4) == 1 );
assert( gamma_move(board, 8, 9, 7) == 1 );
assert( gamma_move(board, 9, 7, 13) == 0 );
assert( gamma_move(board, 9, 14, 7) == 1 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 10, 9, 11) == 0 );
assert( gamma_move(board, 10, 14, 7) == 0 );
assert( gamma_move(board, 11, 4, 1) == 1 );
assert( gamma_move(board, 12, 2, 10) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 3, 10, 9) == 1 );
assert( gamma_move(board, 3, 13, 5) == 1 );
assert( gamma_golden_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, 8, 14) == 0 );
assert( gamma_free_fields(board, 5) == 96 );
assert( gamma_move(board, 6, 6, 13) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 8, 6, 6) == 0 );
assert( gamma_move(board, 8, 12, 0) == 1 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 10, 7, 13) == 0 );
assert( gamma_move(board, 11, 5, 6) == 1 );
assert( gamma_move(board, 11, 6, 2) == 1 );
assert( gamma_free_fields(board, 11) == 92 );
assert( gamma_move(board, 12, 1, 6) == 1 );
assert( gamma_move(board, 12, 5, 0) == 1 );
assert( gamma_busy_fields(board, 12) == 5 );
assert( gamma_golden_move(board, 12, 5, 6) == 1 );
assert( gamma_free_fields(board, 1) == 90 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );


char* board942840220 = gamma_board(board);
assert( board942840220 != NULL );
assert( strcmp(board942840220, 
".612...10.6.10..11.\n"
"58....3.643...1\n"
".10...5.6.4...4.\n"
"9772...4.811...9\n"
"4121..123.11.....11\n"
"2..107717.28..3.\n"
"5...6.925.9..85\n"
".36712....511.7..\n"
".2.712.11...3.2..\n"
"..6411....3....7\n"
".18..12.4..9.8.5\n") == 0);
free(board942840220);
board942840220 = NULL;
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_free_fields(board, 6) == 88 );
assert( gamma_move(board, 7, 14, 5) == 1 );
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 9, 2, 9) == 1 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 10, 10, 7) == 0 );
assert( gamma_move(board, 10, 9, 4) == 1 );
assert( gamma_free_fields(board, 10) == 84 );
assert( gamma_move(board, 11, 9, 11) == 0 );
assert( gamma_move(board, 12, 6, 10) == 0 );
assert( gamma_move(board, 12, 13, 9) == 1 );
assert( gamma_busy_fields(board, 12) == 7 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_free_fields(board, 4) == 82 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 7, 10, 1) == 1 );
assert( gamma_free_fields(board, 7) == 80 );
assert( gamma_move(board, 8, 1, 12) == 0 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 9, 9, 4) == 0 );
assert( gamma_move(board, 10, 0, 3) == 1 );
assert( gamma_move(board, 11, 0, 8) == 1 );
assert( gamma_move(board, 11, 13, 5) == 0 );
assert( gamma_move(board, 12, 1, 1) == 1 );
assert( gamma_move(board, 12, 6, 7) == 1 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_free_fields(board, 1) == 75 );
assert( gamma_golden_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_free_fields(board, 3) == 75 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 6, 10, 14) == 0 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 9, 4, 12) == 0 );
assert( gamma_move(board, 9, 11, 0) == 1 );
assert( gamma_golden_move(board, 9, 4, 6) == 0 );
assert( gamma_move(board, 10, 9, 7) == 0 );


char* board653186481 = gamma_board(board);
assert( board653186481 != NULL );
assert( strcmp(board653186481, 
".612..510.6.10..11.\n"
"589...3.643..121\n"
"1110.4.5.6.4...4.\n"
"9772..124.811...9\n"
"4121..33.11.....11\n"
"2..107717.28..37\n"
"5.1.6.925109..85\n"
"10367128...511.7..\n"
".2.7127111..3.2..\n"
".126411....37...7\n"
"618..12.4..998.5\n") == 0);
free(board653186481);
board653186481 = NULL;
assert( gamma_move(board, 11, 10, 3) == 0 );
assert( gamma_free_fields(board, 11) == 73 );
assert( gamma_move(board, 12, 3, 8) == 0 );
assert( gamma_move(board, 12, 13, 8) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_golden_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_golden_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 8, 2, 14) == 0 );
assert( gamma_move(board, 10, 8, 2) == 1 );
assert( gamma_free_fields(board, 10) == 71 );
assert( gamma_move(board, 11, 6, 10) == 0 );


char* board534125973 = gamma_board(board);
assert( board534125973 != NULL );
assert( strcmp(board534125973, 
".612..510.6.10..11.\n"
"589...3.643..121\n"
"1110.4.5.6.4...4.\n"
"9772..124.811...9\n"
"4121..33.11.....11\n"
"2..107217.28..37\n"
"5.156.925109..85\n"
"10367128...511.7..\n"
".2.712711110.3.2..\n"
".127411....37...7\n"
"618..12.4..998.5\n") == 0);
free(board534125973);
board534125973 = NULL;
assert( gamma_move(board, 12, 2, 11) == 0 );
assert( gamma_move(board, 1, 13, 4) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 6, 2, 13) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 7, 6, 10) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_free_fields(board, 7) == 69 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_move(board, 10, 7, 8) == 0 );
assert( gamma_move(board, 11, 3, 10) == 1 );
assert( gamma_move(board, 11, 5, 9) == 1 );
assert( gamma_move(board, 12, 10, 7) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 11, 9) == 1 );
assert( gamma_free_fields(board, 1) == 66 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 6, 12) == 0 );


char* board948741292 = gamma_board(board);
assert( board948741292 != NULL );
assert( strcmp(board948741292, 
".61211.510.6.10..11.\n"
"589..113.6431.121\n"
"1110.4.5.6.4...4.\n"
"9772..124.811...9\n"
"4121..33.11.....11\n"
"2..107217.28..37\n"
"5.156.925109..85\n"
"103671282.5511.7..\n"
".2.712711110.3.2..\n"
".127411....37...7\n"
"618..12.4..998.5\n") == 0);
free(board948741292);
board948741292 = NULL;
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_golden_move(board, 7, 6, 14) == 0 );
assert( gamma_move(board, 8, 10, 14) == 0 );
assert( gamma_golden_move(board, 8, 7, 7) == 1 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 10, 5, 12) == 0 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_move(board, 11, 11, 7) == 1 );
assert( gamma_move(board, 12, 7, 3) == 1 );
assert( gamma_move(board, 12, 5, 6) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_free_fields(board, 2) == 63 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 12, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 7, 8, 11) == 0 );
assert( gamma_move(board, 9, 13, 5) == 0 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_move(board, 10, 2, 2) == 1 );
assert( gamma_move(board, 11, 8, 8) == 1 );
assert( gamma_move(board, 11, 12, 9) == 1 );
assert( gamma_busy_fields(board, 12) == 9 );
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_free_fields(board, 1) == 58 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 3, 10, 14) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 5, 13, 9) == 0 );
assert( gamma_move(board, 6, 14, 4) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 13, 0) == 1 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_golden_move(board, 7, 4, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 9, 9, 9) == 0 );
assert( gamma_move(board, 10, 5, 8) == 0 );
assert( gamma_move(board, 10, 0, 8) == 0 );
assert( gamma_free_fields(board, 10) == 57 );
assert( gamma_move(board, 11, 13, 4) == 0 );
assert( gamma_move(board, 12, 9, 3) == 0 );
assert( gamma_busy_fields(board, 12) == 9 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );


char* board174231956 = gamma_board(board);
assert( board174231956 != NULL );
assert( strcmp(board174231956, 
".61211.510.6.10..11.\n"
"589..113.643111121\n"
"111064.5.6114..44.\n"
"9772..128.81111..9\n"
"4121..33.11...1.11\n"
"2..107217.28..37\n"
"5.156.925109..85\n"
"103671282125511.7..\n"
".210712711110.3.2..\n"
".127411....37...7\n"
"618..12.4..99875\n") == 0);
free(board174231956);
board174231956 = NULL;
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_free_fields(board, 6) == 56 );
assert( gamma_move(board, 7, 5, 11) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_free_fields(board, 7) == 56 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 8, 11, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 4, 11) == 0 );
assert( gamma_move(board, 10, 8, 4) == 0 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_move(board, 11, 1, 6) == 0 );
assert( gamma_move(board, 11, 12, 1) == 1 );
assert( gamma_free_fields(board, 11) == 55 );
assert( gamma_move(board, 12, 0, 7) == 0 );
assert( gamma_busy_fields(board, 12) == 9 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_golden_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 6, 12, 5) == 1 );
assert( gamma_move(board, 6, 11, 10) == 1 );


char* board823424296 = gamma_board(board);
assert( board823424296 != NULL );
assert( strcmp(board823424296, 
".61211.510.6.106.11.\n"
"589..113.643111121\n"
"111064.5.6114..44.\n"
"9772..128.81111..9\n"
"41213.33.11...1.11\n"
"2..107217.28.637\n"
"5.156.925109..85\n"
"103671282125511.7..\n"
".210712711110.3.2..\n"
".127411....37.11.7\n"
"618..12.4..99875\n") == 0);
free(board823424296);
board823424296 = NULL;
assert( gamma_move(board, 7, 1, 13) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 8, 12, 1) == 0 );
assert( gamma_move(board, 9, 14, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_move(board, 10, 1, 8) == 0 );
assert( gamma_move(board, 10, 6, 3) == 0 );
assert( gamma_move(board, 11, 8, 14) == 0 );
assert( gamma_move(board, 12, 7, 12) == 0 );
assert( gamma_golden_possible(board, 12) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 8, 8, 10) == 0 );
assert( gamma_move(board, 8, 11, 10) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 6, 11) == 0 );
assert( gamma_move(board, 9, 11, 9) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 6, 7) == 0 );
assert( gamma_move(board, 10, 6, 5) == 0 );
assert( gamma_move(board, 11, 3, 7) == 0 );
assert( gamma_move(board, 11, 1, 4) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 4, 5) == 0 );
assert( gamma_move(board, 12, 5, 10) == 0 );
assert( gamma_golden_move(board, 12, 2, 12) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_free_fields(board, 6) == 51 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_free_fields(board, 7) == 51 );
assert( gamma_move(board, 8, 3, 11) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_free_fields(board, 8) == 51 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_move(board, 9, 12, 1) == 0 );
assert( gamma_move(board, 10, 8, 10) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 8, 4) == 0 );
assert( gamma_move(board, 12, 6, 4) == 0 );
assert( gamma_move(board, 12, 7, 0) == 0 );
assert( gamma_free_fields(board, 12) == 51 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_move(board, 7, 1, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 9, 10, 4) == 0 );
assert( gamma_move(board, 9, 10, 10) == 0 );
assert( gamma_free_fields(board, 11) == 50 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 10, 8) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_free_fields(board, 4) == 49 );


char* board401329644 = gamma_board(board);
assert( board401329644 != NULL );
assert( strcmp(board401329644, 
".61211.510.6.106.11.\n"
"589..113.643111121\n"
"111064.5.611412.44.\n"
"9772..128.81111..9\n"
"41213.335116..1.11\n"
"2..107217.28.637\n"
"511156.925109..85\n"
"103671282125511.7..\n"
".210712711110.3.2..\n"
".127411....37.11.7\n"
"618..12.4..99875\n") == 0);
free(board401329644);
board401329644 = NULL;
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 8, 13, 0) == 0 );
assert( gamma_move(board, 9, 10, 0) == 0 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_move(board, 10, 4, 12) == 0 );
assert( gamma_move(board, 10, 3, 6) == 0 );
assert( gamma_move(board, 11, 8, 2) == 0 );
assert( gamma_move(board, 12, 3, 2) == 0 );
assert( gamma_free_fields(board, 12) == 48 );
assert( gamma_golden_possible(board, 12) == 0 );
assert( gamma_golden_move(board, 12, 2, 1) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_golden_move(board, 3, 9, 14) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );


char* board476891261 = gamma_board(board);
assert( board476891261 != NULL );
assert( strcmp(board476891261, 
".61211.510.6.106.11.\n"
"589..113.643111121\n"
"111064.5.611412.44.\n"
"9772..128.81111..9\n"
"41213.335116..1.11\n"
"2..107217.28.637\n"
"511156.925109..85\n"
"103671282125511.7..\n"
".210712711110.3.2..\n"
".1274113...37511.7\n"
"618..12.4..99875\n") == 0);
free(board476891261);
board476891261 = NULL;
assert( gamma_free_fields(board, 7) == 47 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 8, 13, 8) == 0 );
assert( gamma_move(board, 9, 12, 1) == 0 );
assert( gamma_move(board, 10, 1, 7) == 0 );
assert( gamma_move(board, 10, 13, 9) == 0 );
assert( gamma_move(board, 11, 10, 12) == 0 );
assert( gamma_move(board, 12, 10, 0) == 0 );
assert( gamma_move(board, 12, 3, 6) == 0 );
assert( gamma_move(board, 1, 13, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );


char* board734705328 = gamma_board(board);
assert( board734705328 != NULL );
assert( strcmp(board734705328, 
".61211.510.6.106.11.\n"
"589..113.643111121\n"
"111064.5.611412.44.\n"
"9772..128.81111..9\n"
"41213.335116..1.11\n"
"2..107217.28.637\n"
"511156.925109..85\n"
"103671282125511.7..\n"
".210712711110.3.2..\n"
".1274113...37511.7\n"
"618..1234..99875\n") == 0);
free(board734705328);
board734705328 = NULL;
assert( gamma_move(board, 4, 10, 14) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 6, 11) == 0 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 9, 5, 9) == 0 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 10, 4, 11) == 0 );
assert( gamma_move(board, 11, 6, 11) == 0 );
assert( gamma_move(board, 11, 7, 3) == 0 );
assert( gamma_move(board, 12, 7, 3) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 3, 14) == 0 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 8, 14, 7) == 0 );
assert( gamma_move(board, 9, 5, 11) == 0 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 10, 8, 11) == 0 );
assert( gamma_move(board, 10, 2, 2) == 0 );
assert( gamma_move(board, 11, 1, 0) == 0 );
assert( gamma_move(board, 11, 7, 4) == 0 );
assert( gamma_move(board, 12, 12, 9) == 0 );
assert( gamma_move(board, 12, 14, 9) == 0 );
assert( gamma_golden_possible(board, 12) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_golden_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );


char* board622090164 = gamma_board(board);
assert( board622090164 != NULL );
assert( strcmp(board622090164, 
".61211.510.6.106.11.\n"
"589..113.643111121\n"
"111064.5.611412.44.\n"
"9772..128.81111..9\n"
"41213.335116..1.11\n"
"27.107217.28.637\n"
"511156.925109..85\n"
"103671282125511.7..\n"
".210712711110.3.2..\n"
".1274113...37511.7\n"
"618..1234..99875\n") == 0);
free(board622090164);
board622090164 = NULL;
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 6, 13, 0) == 0 );
assert( gamma_move(board, 7, 13, 1) == 1 );
assert( gamma_golden_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 9, 11, 2) == 1 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 10, 9, 3) == 0 );
assert( gamma_move(board, 10, 11, 5) == 1 );
assert( gamma_move(board, 11, 3, 14) == 0 );
assert( gamma_move(board, 12, 1, 7) == 0 );
assert( gamma_golden_possible(board, 12) == 0 );
assert( gamma_golden_move(board, 12, 0, 12) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_move(board, 8, 14, 10) == 1 );
assert( gamma_move(board, 9, 9, 7) == 0 );
assert( gamma_move(board, 9, 14, 10) == 0 );
assert( gamma_free_fields(board, 9) == 39 );
assert( gamma_move(board, 10, 2, 13) == 0 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_move(board, 11, 2, 9) == 0 );
assert( gamma_move(board, 11, 12, 5) == 0 );
assert( gamma_move(board, 12, 8, 5) == 1 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_free_fields(board, 2) == 36 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 8, 13, 10) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 9, 8, 11) == 0 );
assert( gamma_move(board, 10, 4, 11) == 0 );
assert( gamma_move(board, 11, 2, 13) == 0 );
assert( gamma_golden_move(board, 11, 3, 13) == 0 );
assert( gamma_move(board, 12, 1, 7) == 0 );
assert( gamma_move(board, 12, 7, 10) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );


char* board370848315 = gamma_board(board);
assert( board370848315 != NULL );
assert( strcmp(board370848315, 
"261211.510126.106.118\n"
"589..113.643111121\n"
"111064.5.611412.44.\n"
"9772..128.81111..9\n"
"41213.335116..1.11\n"
"277107217122810637\n"
"511156.925109..85\n"
"103671282125511.7..\n"
".210712711110.392..\n"
".12741134.13751177\n"
"618.11234..99875\n") == 0);
free(board370848315);
board370848315 = NULL;
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );


gamma_delete(board);

    return 0;
}
