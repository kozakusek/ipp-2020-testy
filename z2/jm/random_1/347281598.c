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
uuid: 347281598
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(17, 17, 10, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 12, 15) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 15, 5) == 1 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 6, 17, 2) == 0 );


char* board422161355 = gamma_board(board);
assert( board422161355 != NULL );
assert( strcmp(board422161355, 
".................\n"
"............2....\n"
".................\n"
".................\n"
".................\n"
".................\n"
".................\n"
".................\n"
".................\n"
".................\n"
".................\n"
"...............3.\n"
".................\n"
".................\n"
"...........1.....\n"
".................\n"
"......5..........\n") == 0);
free(board422161355);
board422161355 = NULL;
assert( gamma_move(board, 7, 16, 17) == 0 );
assert( gamma_move(board, 8, 2, 5) == 1 );
assert( gamma_move(board, 9, 17, 4) == 0 );
assert( gamma_move(board, 10, 10, 4) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 14, 3) == 1 );


char* board795236444 = gamma_board(board);
assert( board795236444 != NULL );
assert( strcmp(board795236444, 
".................\n"
"............2....\n"
".................\n"
".................\n"
".................\n"
".................\n"
".................\n"
".................\n"
".................\n"
".................\n"
".................\n"
"..8............3.\n"
"..........10......\n"
"..............1..\n"
"...........1.....\n"
".................\n"
"......5..........\n") == 0);
free(board795236444);
board795236444 = NULL;
assert( gamma_move(board, 2, 14, 10) == 1 );
assert( gamma_golden_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 2, 15) == 1 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_free_fields(board, 6) == 279 );
assert( gamma_free_fields(board, 7) == 279 );
assert( gamma_move(board, 8, 0, 12) == 1 );
assert( gamma_move(board, 9, 17, 12) == 0 );
assert( gamma_move(board, 10, 17, 9) == 0 );
assert( gamma_move(board, 1, 13, -1) == 0 );
assert( gamma_free_fields(board, 1) == 278 );
assert( gamma_move(board, 2, 15, 2) == 1 );
assert( gamma_free_fields(board, 2) == 277 );
assert( gamma_move(board, 3, 8, 14) == 1 );
assert( gamma_move(board, 4, 14, 12) == 1 );
assert( gamma_move(board, 5, 12, 10) == 1 );
assert( gamma_move(board, 6, 16, -1) == 0 );
assert( gamma_move(board, 7, 14, 12) == 0 );
assert( gamma_move(board, 8, 7, 17) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, -1, 13) == 0 );
assert( gamma_move(board, 10, 7, 4) == 1 );
assert( gamma_move(board, 1, -1, 17) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 3) == 1 );
assert( gamma_move(board, 6, -1, 5) == 0 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 8, 7, 10) == 1 );
assert( gamma_move(board, 9, 12, 7) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_free_fields(board, 9) == 268 );
assert( gamma_move(board, 10, 13, -1) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 2, 6, 11) == 1 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_golden_move(board, 4, 12, 14) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_move(board, 8, 6, 17) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 10, 11, 6) == 1 );
assert( gamma_move(board, 1, 14, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 5, 17) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_move(board, 5, 7, -1) == 0 );
assert( gamma_move(board, 6, 16, 10) == 1 );
assert( gamma_move(board, 7, 3, 13) == 1 );
assert( gamma_move(board, 9, 2, 13) == 1 );
assert( gamma_move(board, 10, 15, 17) == 0 );
assert( gamma_move(board, 2, 13, 12) == 1 );
assert( gamma_move(board, 3, 3, 17) == 0 );
assert( gamma_free_fields(board, 3) == 257 );
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_move(board, 5, 16, 17) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 6, 10, 1) == 1 );
assert( gamma_golden_move(board, 6, 14, 8) == 0 );
assert( gamma_move(board, 7, 8, 0) == 1 );
assert( gamma_move(board, 9, 12, 10) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 14, 16) == 1 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_move(board, 6, -1, 15) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 7, 11, 16) == 1 );
assert( gamma_free_fields(board, 7) == 252 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 9, 16, 15) == 1 );
assert( gamma_move(board, 1, 17, 10) == 0 );
assert( gamma_move(board, 3, 17, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 14) == 1 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_free_fields(board, 6) == 249 );
assert( gamma_move(board, 7, 10, 7) == 1 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board858186374 = gamma_board(board);
assert( board858186374 != NULL );
assert( strcmp(board858186374, 
"...........7..4..\n"
"..3.........2...9\n"
".4......3........\n"
"..97.............\n"
"8............24..\n"
"......2..........\n"
"4......8....5.2.6\n"
"........6........\n"
".4...............\n"
"..........7.9....\n"
"...........10.....\n"
"..8............3.\n"
".......10..10......\n"
"5.....3....5..1..\n"
".96.7..35..1...2.\n"
"..........64.....\n"
"......5.7........\n") == 0);
free(board858186374);
board858186374 = NULL;


char* board662311048 = gamma_board(board);
assert( board662311048 != NULL );
assert( strcmp(board662311048, 
"...........7..4..\n"
"..3.........2...9\n"
".4......3........\n"
"..97.............\n"
"8............24..\n"
"......2..........\n"
"4......8....5.2.6\n"
"........6........\n"
".4...............\n"
"..........7.9....\n"
"...........10.....\n"
"..8............3.\n"
".......10..10......\n"
"5.....3....5..1..\n"
".96.7..35..1...2.\n"
"..........64.....\n"
"......5.7........\n") == 0);
free(board662311048);
board662311048 = NULL;
assert( gamma_move(board, 1, 13, 11) == 1 );
assert( gamma_move(board, 3, -1, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, -1) == 0 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 7, -1, 14) == 0 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 9, 17, 17) == 0 );
assert( gamma_move(board, 10, 4, 14) == 1 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_move(board, 2, 3, 14) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 16) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_free_fields(board, 4) == 240 );
assert( gamma_move(board, 5, 6, 15) == 1 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_free_fields(board, 7) == 238 );
assert( gamma_move(board, 8, 10, 8) == 1 );
assert( gamma_move(board, 10, 1, 9) == 1 );


char* board397461536 = gamma_board(board);
assert( board397461536 != NULL );
assert( strcmp(board397461536, 
".......3...7..4..\n"
"..3...5.....2...9\n"
".4.210...3........\n"
"..97.............\n"
"8............24..\n"
".1....2......1...\n"
"4......8....5.2.6\n"
".10......6........\n"
".4........8......\n"
".......6..7.9....\n"
"...........10.....\n"
"..8....4.......3.\n"
"...6...10..10......\n"
"5.....3....5..1..\n"
".96.7..35..1...2.\n"
"..........64.....\n"
"......5.7........\n") == 0);
free(board397461536);
board397461536 = NULL;
assert( gamma_move(board, 1, 15, 14) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 16, 13) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 16, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 8) == 1 );


char* board529734007 = gamma_board(board);
assert( board529734007 != NULL );
assert( strcmp(board529734007, 
".......3...7..4..\n"
"..3...5.....2...9\n"
".4.210...3......1.\n"
"..97............3\n"
"8............24..\n"
".1....2......1...\n"
"4......8....5.2.6\n"
".10......6........\n"
".45.......8......\n"
".......6..7.9....\n"
"...........10.....\n"
"..8....4.......3.\n"
"...6...10..10.....4\n"
"5.....3....5..1..\n"
".96.7..35..1...2.\n"
"..........64.....\n"
"......5.7........\n") == 0);
free(board529734007);
board529734007 = NULL;
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_golden_move(board, 8, 12, 2) == 0 );
assert( gamma_move(board, 9, 10, 13) == 1 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 10, 4, 4) == 1 );
assert( gamma_free_fields(board, 10) == 229 );
assert( gamma_move(board, 1, 6, 14) == 1 );
assert( gamma_free_fields(board, 1) == 228 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_free_fields(board, 6) == 228 );
assert( gamma_free_fields(board, 7) == 228 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 12, 17) == 0 );


char* board101013601 = gamma_board(board);
assert( board101013601 != NULL );
assert( strcmp(board101013601, 
".......3...7..4..\n"
"..3...5.....2...9\n"
".4.210.1.3......1.\n"
"..97......9.....3\n"
"8............24..\n"
".1....2......1...\n"
"4......8....5.2.6\n"
".10......6........\n"
".45.......8......\n"
".......6..7.9....\n"
"...........10.....\n"
"..8....4.......3.\n"
"...610..10..10.....4\n"
"5....83....5..1..\n"
".96.7..35..1...2.\n"
"..........64.....\n"
"......5.7........\n") == 0);
free(board101013601);
board101013601 = NULL;
assert( gamma_move(board, 2, 8, 15) == 1 );
assert( gamma_move(board, 3, 11, 17) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 10, 17) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 9, 16, -1) == 0 );
assert( gamma_move(board, 10, 10, 17) == 0 );


char* board131999406 = gamma_board(board);
assert( board131999406 != NULL );
assert( strcmp(board131999406, 
".......3...7..4..\n"
"..3...5.2...2...9\n"
".4.210.1.3......1.\n"
"..97......9.....3\n"
"8............24..\n"
".1....2......1...\n"
"4......8....5.2.6\n"
".10......6........\n"
".45.......8......\n"
"..4....6..7.9....\n"
"...........10.....\n"
"..8....4.......3.\n"
"...610..10..10.....4\n"
"5....83....5..1..\n"
".96.7..35..1...2.\n"
"..........64.....\n"
"......5.7........\n") == 0);
free(board131999406);
board131999406 = NULL;
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_free_fields(board, 3) == 226 );
assert( gamma_move(board, 4, 13, 13) == 1 );
assert( gamma_free_fields(board, 4) == 225 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 8, 5, 1) == 1 );
assert( gamma_move(board, 9, 8, 12) == 1 );
assert( gamma_move(board, 10, 12, 12) == 1 );


char* board124538599 = gamma_board(board);
assert( board124538599 != NULL );
assert( strcmp(board124538599, 
".......3...7..4..\n"
"..3...5.2...2...9\n"
".4.210.1.3......1.\n"
"..97......9..4..3\n"
"8.......9...1024..\n"
".1....2......1...\n"
"4..6...8....5.2.6\n"
".10......6........\n"
".45.......8......\n"
"..4....6..7.9....\n"
"...........10.....\n"
"..8....4.......3.\n"
"...610..10..10.....4\n"
"5....83....5..1..\n"
".96.7..35..1...2.\n"
".....8..5.64.....\n"
"......5.7........\n") == 0);
free(board124538599);
board124538599 = NULL;
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, -1, 17) == 0 );
assert( gamma_move(board, 4, 5, 11) == 1 );
assert( gamma_move(board, 5, 1, 16) == 1 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 8, -1, 17) == 0 );
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_move(board, 10, 6, 0) == 0 );
assert( gamma_golden_move(board, 10, 0, 6) == 0 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_move(board, 2, 11, 12) == 1 );
assert( gamma_move(board, 3, 10, 16) == 1 );
assert( gamma_move(board, 4, 13, 17) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 6, 10) == 1 );
assert( gamma_move(board, 1, 9, 17) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_free_fields(board, 2) == 213 );


char* board787152987 = gamma_board(board);
assert( board787152987 != NULL );
assert( strcmp(board787152987, 
".5.....3..37..4..\n"
"..3...5.2...2...9\n"
".4.210.1.3......1.\n"
"..97......9..4..3\n"
"8.......9..21024..\n"
".1...42......1...\n"
"4..6..98....5.2.6\n"
".10......6........\n"
".45.......8......\n"
"..4....6..7.9....\n"
"....7......10.....\n"
"..8....4.......3.\n"
"...610..10..10.....4\n"
"5....83....5..1..\n"
".96.7..35..11..2.\n"
".....8..5.64.....\n"
"......5.7........\n") == 0);
free(board787152987);
board787152987 = NULL;
assert( gamma_free_fields(board, 3) == 213 );
assert( gamma_move(board, 4, 17, 15) == 0 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_free_fields(board, 5) == 212 );
assert( gamma_move(board, 6, 9, 5) == 1 );
assert( gamma_move(board, 8, 5, 11) == 0 );
assert( gamma_move(board, 10, 16, 4) == 0 );
assert( gamma_free_fields(board, 10) == 211 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 4, 14, 1) == 1 );
assert( gamma_move(board, 5, 17, 5) == 0 );
assert( gamma_golden_move(board, 7, 13, 16) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 14, 13) == 1 );
assert( gamma_free_fields(board, 9) == 208 );
assert( gamma_move(board, 10, 6, 13) == 1 );
assert( gamma_free_fields(board, 3) == 207 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 15, 0) == 1 );
assert( gamma_golden_move(board, 6, 12, 15) == 1 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 9, 1) == 1 );
assert( gamma_busy_fields(board, 10) == 8 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );


char* board731148562 = gamma_board(board);
assert( board731148562 != NULL );
assert( strcmp(board731148562, 
".5.....3..37..4..\n"
"..3...5.2...6...9\n"
".4.210.1.3......1.\n"
"..97..10...9..49.3\n"
"8.1.....9..21024..\n"
".1...42......1...\n"
"4..6..98....5.2.6\n"
".10......6........\n"
".45.......8......\n"
"..4....6..7.9....\n"
"....7......10.....\n"
"..8....4.6.....3.\n"
"...610..10..10.....4\n"
"5...5831..55..1..\n"
".96.7..35..11..2.\n"
".....8..5864..4..\n"
"......5.7......6.\n") == 0);
free(board731148562);
board731148562 = NULL;
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_golden_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_golden_move(board, 8, 11, 13) == 0 );


char* board960413131 = gamma_board(board);
assert( board960413131 != NULL );
assert( strcmp(board960413131, 
".5.....3..37..4..\n"
"..3...5.2...6...9\n"
".4.210.1.3......1.\n"
"..97..10...9..49.3\n"
"8.1.....9..21024..\n"
".1...42......1...\n"
"4..6..98....5.2.6\n"
".10......6........\n"
".45.....3.8......\n"
"..4....6..7.9....\n"
"....7......10.....\n"
"..8....4.6.....3.\n"
"...610..10..10.....4\n"
"5...5831..55..1..\n"
".96.7..35..11..2.\n"
".....8..5864..4..\n"
"......5.7......6.\n") == 0);
free(board960413131);
board960413131 = NULL;
assert( gamma_move(board, 9, 5, 2) == 1 );
assert( gamma_move(board, 10, 5, 2) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 2, 16, 1) == 1 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 4, -1, 16) == 0 );
assert( gamma_free_fields(board, 5) == 200 );
assert( gamma_move(board, 6, 7, -1) == 0 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_golden_move(board, 8, 2, 8) == 1 );
assert( gamma_move(board, 9, 1, -1) == 0 );
assert( gamma_move(board, 10, 4, 1) == 1 );


char* board972860825 = gamma_board(board);
assert( board972860825 != NULL );
assert( strcmp(board972860825, 
".5.....3..37..4..\n"
"..3...5.2...6...9\n"
".4.210.1.3......1.\n"
"..97..10...9..49.3\n"
"8.1.....9..21024..\n"
".1...42......1...\n"
"4..6..98....5.2.6\n"
".10......6........\n"
".48.....3.8......\n"
"..4....6..7.9....\n"
"....7......10.....\n"
"..8....4.6.....3.\n"
"...610..10..10.....4\n"
"5...5831..55..1..\n"
".96.79.35..11..2.\n"
"....108..5864..4.2\n"
"....8.5.7......6.\n") == 0);
free(board972860825);
board972860825 = NULL;
assert( gamma_move(board, 2, 1, 15) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 17, 2) == 0 );
assert( gamma_move(board, 7, 9, 11) == 1 );
assert( gamma_free_fields(board, 7) == 195 );


char* board744661878 = gamma_board(board);
assert( board744661878 != NULL );
assert( strcmp(board744661878, 
".5.....3..37..4..\n"
".23...5.2...6...9\n"
".4.210.1.3......1.\n"
"..97..10...9..49.3\n"
"8.1.....9..21024..\n"
".1...42..7...1...\n"
"4..6..98....5.2.6\n"
".10......6........\n"
".48.....3.8......\n"
"..4....6..7.9....\n"
"....7......10.....\n"
"..8..5.4.6.....3.\n"
"...610..10..10.....4\n"
"5...5831..55..1..\n"
".96.79.35..11..2.\n"
"....108..5864..4.2\n"
"....8.5.7......6.\n") == 0);
free(board744661878);
board744661878 = NULL;
assert( gamma_move(board, 8, 3, 10) == 0 );
assert( gamma_free_fields(board, 9) == 195 );
assert( gamma_move(board, 10, 16, 8) == 1 );
assert( gamma_golden_move(board, 10, 11, 9) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 194 );
assert( gamma_golden_move(board, 1, 15, 8) == 0 );
assert( gamma_free_fields(board, 2) == 194 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 4, 16, 10) == 0 );
assert( gamma_move(board, 6, 0, 16) == 1 );
assert( gamma_move(board, 8, 12, 17) == 0 );
assert( gamma_move(board, 9, 6, 8) == 1 );


char* board630284813 = gamma_board(board);
assert( board630284813 != NULL );
assert( strcmp(board630284813, 
"65.....3..37..4..\n"
".23...5.2...6...9\n"
".4.210.1.3......1.\n"
"..97..10...9..49.3\n"
"8.1.....9..21024..\n"
".1...42..7...1...\n"
"4..6..98....5.2.6\n"
".10......6........\n"
".48...9.3.8.....10\n"
"..4....6..7.9....\n"
"....7......10.....\n"
"..8..5.4.6.....3.\n"
"...610..10..10.....4\n"
"5...5831..55..1..\n"
".96.79.35..11..2.\n"
"....108..5864..4.2\n"
"....8.5.7......6.\n") == 0);
free(board630284813);
board630284813 = NULL;
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 4, 7, 11) == 1 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_golden_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 8, 11, 15) == 1 );
assert( gamma_move(board, 9, 9, 9) == 1 );
assert( gamma_move(board, 10, 17, 15) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 3, 15, 14) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 8) == 1 );


char* board418592136 = gamma_board(board);
assert( board418592136 != NULL );
assert( strcmp(board418592136, 
"65.....3..37..4..\n"
".23...5.2..86...9\n"
".4.210.1.3......1.\n"
"..97..10...9..49.3\n"
"8.1.....9..21024..\n"
".1...424.7...1...\n"
"4..6..98....5.2.6\n"
".10.....169.......\n"
".484..9.3.8.....10\n"
"..4....6..7.9....\n"
"....7......10.....\n"
"..8..5.4.6.....3.\n"
".1.610..10..10.....4\n"
"5...5831..55..1..\n"
".96.79.35..11..2.\n"
"....108..5864..4.2\n"
"....8.5.7......6.\n") == 0);
free(board418592136);
board418592136 = NULL;
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 8, 11, 0) == 1 );
assert( gamma_move(board, 9, 4, 8) == 1 );
assert( gamma_move(board, 1, 7, 12) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_move(board, 4, 4, 15) == 1 );
assert( gamma_move(board, 5, 17, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 8, 13, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 7, 11) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 17, 5) == 0 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_free_fields(board, 5) == 177 );
assert( gamma_move(board, 6, 17, 1) == 0 );
assert( gamma_move(board, 7, 12, -1) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, -1, 16) == 0 );
assert( gamma_move(board, 9, 3, 12) == 1 );


char* board715468688 = gamma_board(board);
assert( board715468688 != NULL );
assert( strcmp(board715468688, 
"65.....3..37..4..\n"
".23.4.5.2..86...9\n"
".4.210.1.3......1.\n"
"..97..10...9..49.3\n"
"8.192..19..21024..\n"
".1...424.7...1...\n"
"4..6..98....5.2.6\n"
".10.5...169.......\n"
".4849.9.3.8.....10\n"
"..4....6..7.9....\n"
"....7....1.10.....\n"
"..8..5.4.6.....3.\n"
".1.610..10..10.....4\n"
"5...5831..55..1..\n"
".96.79.35..11..2.\n"
"....1086.5864.84.2\n"
"....8.5.7..8...6.\n") == 0);
free(board715468688);
board715468688 = NULL;
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 2, 11, 11) == 1 );
assert( gamma_golden_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 4, 16, 0) == 1 );
assert( gamma_move(board, 5, 9, 13) == 1 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, -1, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 10, 12) == 1 );
assert( gamma_move(board, 9, 16, 9) == 1 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 4, 17) == 0 );
assert( gamma_free_fields(board, 3) == 170 );
assert( gamma_move(board, 6, 12, 11) == 1 );
assert( gamma_free_fields(board, 6) == 169 );
assert( gamma_move(board, 7, 15, 3) == 1 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 9, 5, 13) == 1 );
assert( gamma_move(board, 10, 3, 16) == 1 );
assert( gamma_move(board, 3, 15, 9) == 1 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_free_fields(board, 4) == 34 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 8, 11, 11) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 16, 9) == 0 );
assert( gamma_move(board, 5, 13, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 8, 7, 1) == 1 );
assert( gamma_move(board, 9, 14, 0) == 1 );
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 17, 15) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, -1, 9) == 0 );
assert( gamma_move(board, 6, -1, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, -1, 6) == 0 );


char* board662245166 = gamma_board(board);
assert( board662245166 != NULL );
assert( strcmp(board662245166, 
"65.10...3..37..4..\n"
".23.4.5.2..86...9\n"
".4.210.1.3......1.\n"
"..97.910..59..49.3\n"
"8.192..19.821024..\n"
".1...424.7.261...\n"
"4..6..98....5.2.6\n"
".2.52..169.....39\n"
".4849.9.3.8.....10\n"
"..4....6..7.9....\n"
"....7....1.101....\n"
"..8..5.4.6.....3.\n"
".1.6102.10..10.....4\n"
"5...5831..55..17.\n"
".96.79.35..11..2.\n"
"....108685864.84.2\n"
"....8.5.7..8..964\n") == 0);
free(board662245166);
board662245166 = NULL;
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 15, 16) == 0 );
assert( gamma_move(board, 10, 14, 9) == 1 );
assert( gamma_busy_fields(board, 10) == 11 );
assert( gamma_free_fields(board, 10) == 160 );
assert( gamma_move(board, 1, 11, 13) == 1 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_free_fields(board, 2) == 159 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 4, 17, 2) == 0 );
assert( gamma_move(board, 6, 10, 15) == 1 );
assert( gamma_move(board, 7, 17, 2) == 0 );
assert( gamma_move(board, 9, 15, 11) == 0 );
assert( gamma_move(board, 10, 8, 16) == 1 );
assert( gamma_free_fields(board, 10) == 157 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 9, 12) == 1 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_move(board, 8, 2, -1) == 0 );
assert( gamma_busy_fields(board, 8) == 14 );
assert( gamma_free_fields(board, 8) == 154 );
assert( gamma_move(board, 9, 10, 17) == 0 );
assert( gamma_move(board, 10, 7, 2) == 0 );
assert( gamma_move(board, 1, 17, 14) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 3, 16, 12) == 1 );
assert( gamma_move(board, 4, 17, 11) == 0 );
assert( gamma_move(board, 7, 11, 16) == 0 );
assert( gamma_golden_move(board, 9, 0, 16) == 0 );


char* board575761771 = gamma_board(board);
assert( board575761771 != NULL );
assert( strcmp(board575761771, 
"65.10...310.37..4..\n"
".23.4.5.2.686...9\n"
".4.210.1.3......1.\n"
"..97.910..591.49.3\n"
"8.192..193821024.3\n"
".1...424.7.261...\n"
"4..6..98....5.2.6\n"
".2.52..169....1039\n"
".4849.9.3.8.....10\n"
"..4....6..7.9....\n"
"....72...1.101....\n"
"..8..5.4.6.....3.\n"
".1.6102.10..10.....4\n"
"5...5831..55..17.\n"
".96.79.355.11..2.\n"
"....108685864.84.2\n"
"....8.5.7..8..964\n") == 0);
free(board575761771);
board575761771 = NULL;
assert( gamma_move(board, 10, 13, 5) == 1 );
assert( gamma_free_fields(board, 1) == 152 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_free_fields(board, 4) == 33 );


char* board465800203 = gamma_board(board);
assert( board465800203 != NULL );
assert( strcmp(board465800203, 
"65.10...310.37..4..\n"
".23.4.5.2.686...9\n"
".4.210.1.3......1.\n"
"..97.910..591.49.3\n"
"8.192..193821024.3\n"
".1...424.7.261...\n"
"4..6..98....5.2.6\n"
".2.52..169....1039\n"
".4849.9.3.8.....10\n"
"..4....6..7.9....\n"
"....72...1.101....\n"
"..8..5.4.6...10.3.\n"
".1.6102.10..10.....4\n"
"5...5831..55..17.\n"
".96.79.355.11..2.\n"
"....108685864.84.2\n"
"....8.5.7..8..964\n") == 0);
free(board465800203);
board465800203 = NULL;
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 6, 15, 1) == 1 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 9, 14, -1) == 0 );


char* board641457585 = gamma_board(board);
assert( board641457585 != NULL );
assert( strcmp(board641457585, 
"65.10...310.37..4..\n"
".23.4.5.2.686...9\n"
".4.210.1.3......1.\n"
"..97.910..591.49.3\n"
"8.192..193821024.3\n"
".1...424.7.261...\n"
"4..6..98....5.2.6\n"
".2.52..169....1039\n"
".4849.9.3.8.....10\n"
"..4....6..7.9....\n"
"....72...1.101....\n"
"..8..5.4.6...10.3.\n"
".1.6102.10..10.....4\n"
"5...5831..55..17.\n"
".96.79.355.11..2.\n"
"....108685864.8462\n"
"....8.5.7..8..964\n") == 0);
free(board641457585);
board641457585 = NULL;
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_free_fields(board, 3) == 150 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 13, 14) == 1 );
assert( gamma_move(board, 8, 16, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 14 );
assert( gamma_move(board, 9, 5, 17) == 0 );
assert( gamma_move(board, 10, 12, 16) == 1 );
assert( gamma_move(board, 1, 8, 17) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_free_fields(board, 4) == 31 );


char* board510665780 = gamma_board(board);
assert( board510665780 != NULL );
assert( strcmp(board510665780, 
"65.10...310.3710.4..\n"
".23.4.5.2.686...9\n"
".4.210.1.3....7.1.\n"
"..97.910..591.49.3\n"
"8.192..193821024.3\n"
".1...424.7.261...\n"
"4..6..98....5.2.6\n"
".2.52..169....1039\n"
".4849.9.3.8.....10\n"
"..4....6..7.9....\n"
"....72...1.101....\n"
"..81.5.4.6...10.3.\n"
".1.6102.10..10.....4\n"
"5...5831..55..17.\n"
".96.79.355.11..2.\n"
"....108685864.8462\n"
"...58.5.7..8..964\n") == 0);
free(board510665780);
board510665780 = NULL;
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 6, 11, 5) == 1 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 8, -1, 17) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 11, 17) == 0 );
assert( gamma_move(board, 10, 13, -1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 5, 2, 16) == 1 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_golden_move(board, 8, 13, 3) == 0 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_free_fields(board, 10) == 143 );
assert( gamma_free_fields(board, 1) == 38 );
assert( gamma_move(board, 2, 14, 10) == 0 );
assert( gamma_move(board, 3, 11, 11) == 0 );
assert( gamma_free_fields(board, 3) == 143 );
assert( gamma_move(board, 4, 10, 15) == 0 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_move(board, 6, -1, 16) == 0 );
assert( gamma_move(board, 7, 0, 15) == 1 );
assert( gamma_move(board, 8, 0, 15) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 16, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 13, 10) == 1 );
assert( gamma_move(board, 3, 16, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 15, 7) == 0 );
assert( gamma_move(board, 5, 11, 11) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_free_fields(board, 7) == 140 );
assert( gamma_move(board, 8, 12, 2) == 0 );
assert( gamma_free_fields(board, 8) == 140 );
assert( gamma_move(board, 9, 14, 3) == 0 );
assert( gamma_move(board, 10, 1, 0) == 1 );
assert( gamma_busy_fields(board, 10) == 15 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_free_fields(board, 2) == 137 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 4, 15, 12) == 1 );
assert( gamma_move(board, 6, 10, 14) == 1 );
assert( gamma_move(board, 7, 7, 13) == 1 );
assert( gamma_move(board, 8, 6, 4) == 1 );
assert( gamma_move(board, 9, -1, -1) == 0 );
assert( gamma_move(board, 10, 2, 3) == 1 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 2, 10, 11) == 1 );
assert( gamma_move(board, 3, 10, 13) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_busy_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 7, 3, 15) == 1 );
assert( gamma_move(board, 8, 1, 3) == 0 );


char* board980865171 = gamma_board(board);
assert( board980865171 != NULL );
assert( strcmp(board980865171, 
"65510...310.3710.4..\n"
"72374.5.2.686...9\n"
".4.210.1.3.6..7.1.\n"
"..97.9107.591.49.3\n"
"8.192..19382102443\n"
".1...424.72261...\n"
"4..6..98....522.6\n"
"52.52..169....1039\n"
".4849.9.3.8.....10\n"
"..4....6..7.9....\n"
"....72..612101....\n"
"..81.5.4.6.6.10.3.\n"
".1.6102810..10.....4\n"
"5110.5831..55..17.\n"
".96.79.355.11..23\n"
"....108685864.8462\n"
"110.58.5.7..8..964\n") == 0);
free(board980865171);
board980865171 = NULL;
assert( gamma_move(board, 9, 9, 10) == 1 );
assert( gamma_move(board, 10, 15, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 15, 8) == 1 );
assert( gamma_free_fields(board, 3) == 127 );
assert( gamma_move(board, 6, 12, 15) == 0 );
assert( gamma_free_fields(board, 6) == 27 );
assert( gamma_golden_move(board, 6, 15, 11) == 0 );
assert( gamma_move(board, 7, 15, 1) == 0 );


char* board655042921 = gamma_board(board);
assert( board655042921 != NULL );
assert( strcmp(board655042921, 
"65510...310.3710.4..\n"
"72374.5.2.686...9\n"
".4.210.1.3.6..7.1.\n"
"..97.9107.591.49.3\n"
"8.192..19382102443\n"
".1...424.72261...\n"
"4..6..98.9..522.6\n"
"52.52..169....1039\n"
".4849.9.3.8....310\n"
"..4....6..7.9....\n"
"....72..612101....\n"
"..81.5.4.6.6.10.3.\n"
".1.6102810..10.....4\n"
"5110.5831..55..17.\n"
".96.79.355.11..23\n"
"....108685864.8462\n"
"110.58.5.7..8..964\n") == 0);
free(board655042921);
board655042921 = NULL;
assert( gamma_move(board, 9, 5, 17) == 0 );
assert( gamma_free_fields(board, 9) == 30 );
assert( gamma_move(board, 10, 1, -1) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 2, 11) == 1 );
assert( gamma_golden_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );


char* board870269471 = gamma_board(board);
assert( board870269471 != NULL );
assert( strcmp(board870269471, 
"65510...310.3710.4..\n"
"72374.5.2.686...9\n"
".4.210.1.3.6..7.1.\n"
"..97.9107.591.49.3\n"
"8.192..19382102443\n"
".13..424.72261...\n"
"4..6..98.9..522.6\n"
"52.52..169....1039\n"
".4849.9.3.8....310\n"
"..4....6..7.9....\n"
"....72..612101....\n"
"..81.5.4.6.6.10.3.\n"
".1.6102810..10.....4\n"
"5110.5831..55..17.\n"
".96.79.355.11..23\n"
".5..108685864.8462\n"
"110258.5.7..8..964\n") == 0);
free(board870269471);
board870269471 = NULL;
assert( gamma_move(board, 6, 7, 15) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_free_fields(board, 7) == 124 );
assert( gamma_move(board, 1, 17, 11) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 15, 5) == 0 );
assert( gamma_move(board, 4, 15, 2) == 0 );
assert( gamma_move(board, 6, 16, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 17, 14) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 9, 9, 9) == 0 );
assert( gamma_move(board, 10, 1, -1) == 0 );
assert( gamma_free_fields(board, 10) == 23 );
assert( gamma_golden_possible(board, 10) == 1 );


char* board628402796 = gamma_board(board);
assert( board628402796 != NULL );
assert( strcmp(board628402796, 
"65510...310.3710.4..\n"
"72374.5.2.686...9\n"
".4.210.1.3.6..7.1.\n"
"..97.9107.591.49.3\n"
"8.192..19382102443\n"
".13..424.72261...\n"
"4..6..98.9..522.6\n"
"52.52..169....1039\n"
".4849.9.3.8....310\n"
"..4....6..7.9....\n"
"....72..612101....\n"
"..81.5.4.6.6.10.3.\n"
".1.6102810..10.....4\n"
"5110.5831..55..17.\n"
".96.79.355.11..23\n"
".5..108685864.8462\n"
"110258.5.7..8..964\n") == 0);
free(board628402796);
board628402796 = NULL;
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_golden_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_free_fields(board, 3) == 123 );
assert( gamma_move(board, 4, 16, 1) == 0 );
assert( gamma_move(board, 5, 14, 8) == 1 );


char* board260395248 = gamma_board(board);
assert( board260395248 != NULL );
assert( strcmp(board260395248, 
"65510...310.3710.4..\n"
"72374.5.2.686...9\n"
".4.210.1.3.6..7.1.\n"
"..97.9107.591.49.3\n"
"8.192..19382102443\n"
".13..424.72261...\n"
"4..6..98.9..522.6\n"
"52.52..169....1039\n"
".4849.9.338...5310\n"
"..4....6..7.9....\n"
"....72..612101....\n"
"..81.5.4.6.6.10.3.\n"
".1.6102810..10.....4\n"
"1110.5831..55..17.\n"
".96.79.355.11..23\n"
".5..108685864.8462\n"
"110258.5.7..8..964\n") == 0);
free(board260395248);
board260395248 = NULL;
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 9, 0, 12) == 0 );
assert( gamma_move(board, 10, 13, 16) == 1 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_move(board, 3, 12, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 15, 2) == 0 );
assert( gamma_free_fields(board, 6) == 26 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 17) == 0 );
assert( gamma_busy_fields(board, 8) == 15 );
assert( gamma_move(board, 9, 15, 7) == 0 );
assert( gamma_move(board, 10, 3, 13) == 0 );
assert( gamma_move(board, 1, 11, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 17, 2) == 0 );
assert( gamma_move(board, 5, 16, 0) == 0 );
assert( gamma_move(board, 6, 14, 13) == 0 );
assert( gamma_move(board, 7, 1, -1) == 0 );
assert( gamma_move(board, 8, 4, 14) == 0 );
assert( gamma_busy_fields(board, 8) == 15 );
assert( gamma_move(board, 9, 16, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 17 );
assert( gamma_move(board, 10, 8, 1) == 0 );
assert( gamma_free_fields(board, 1) == 32 );


char* board457888727 = gamma_board(board);
assert( board457888727 != NULL );
assert( strcmp(board457888727, 
"65510...310.3710104..\n"
"72374.5.2.686...9\n"
".4.210.1.3.6..7.1.\n"
"..97.9107.591.49.3\n"
"8.192..19382102443\n"
".13..424.72261...\n"
"4..6..98.9..522.6\n"
"52.52..169....1039\n"
".4849.9.338...5310\n"
"..4....6..7.9....\n"
"....72..612101....\n"
"..81.5.4.6.6.10.3.\n"
".176102810..10.....4\n"
"1110.5831..55..17.\n"
".96.79.355.11..23\n"
".5..108685864.8462\n"
"110258.5.7..8..964\n") == 0);
free(board457888727);
board457888727 = NULL;


char* board672651614 = gamma_board(board);
assert( board672651614 != NULL );
assert( strcmp(board672651614, 
"65510...310.3710104..\n"
"72374.5.2.686...9\n"
".4.210.1.3.6..7.1.\n"
"..97.9107.591.49.3\n"
"8.192..19382102443\n"
".13..424.72261...\n"
"4..6..98.9..522.6\n"
"52.52..169....1039\n"
".4849.9.338...5310\n"
"..4....6..7.9....\n"
"....72..612101....\n"
"..81.5.4.6.6.10.3.\n"
".176102810..10.....4\n"
"1110.5831..55..17.\n"
".96.79.355.11..23\n"
".5..108685864.8462\n"
"110258.5.7..8..964\n") == 0);
free(board672651614);
board672651614 = NULL;
assert( gamma_move(board, 4, 1, 15) == 0 );
assert( gamma_move(board, 5, -1, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 8, 13, 15) == 1 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 10, 4, 3) == 0 );
assert( gamma_free_fields(board, 10) == 20 );
assert( gamma_move(board, 1, 15, 11) == 0 );
assert( gamma_move(board, 2, 7, 15) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 15, 6) == 0 );
assert( gamma_free_fields(board, 4) == 29 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_free_fields(board, 6) == 25 );
assert( gamma_move(board, 7, 13, 8) == 1 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 9, 15, 1) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 13, 15) == 0 );
assert( gamma_free_fields(board, 3) == 117 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 15, 3) == 1 );
assert( gamma_move(board, 4, 15, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 13) == 1 );
assert( gamma_busy_fields(board, 5) == 19 );


char* board974825492 = gamma_board(board);
assert( board974825492 != NULL );
assert( strcmp(board974825492, 
"65510...310.3710104..\n"
"72374.522.6868..9\n"
".4.210.1.3.6..7.1.\n"
"..97.9107.591549.3\n"
"8.192..19382102443\n"
".13..424.72261...\n"
"4..6..98.9..522.6\n"
"52.52..169....1039\n"
".4849.9.338..75310\n"
"..4....6..7.9....\n"
"....72..612101....\n"
"..81.5.4.6.6.10.3.\n"
".176102810..10.....4\n"
"1110.5831..55..13.\n"
".96.79.355.11..23\n"
".5..108685864.8462\n"
"110258.5.7..8..964\n") == 0);
free(board974825492);
board974825492 = NULL;
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 9, 12, 14) == 0 );
assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 1, 17) == 0 );
assert( gamma_golden_move(board, 4, 2, 2) == 0 );
assert( gamma_free_fields(board, 5) == 116 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_free_fields(board, 9) == 28 );
assert( gamma_move(board, 10, 17, 1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 0, 15) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 16, 5) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 9, 17, 12) == 0 );
assert( gamma_move(board, 10, 1, 9) == 0 );
assert( gamma_move(board, 1, -1, 14) == 0 );
assert( gamma_move(board, 2, 13, 17) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 16, 13) == 0 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 16, 16) == 1 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_busy_fields(board, 9) == 17 );
assert( gamma_move(board, 10, 4, 14) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_move(board, 2, 17, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 8, 11, 13) == 0 );
assert( gamma_move(board, 9, 11, 5) == 0 );
assert( gamma_move(board, 10, 10, 17) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );


char* board671399572 = gamma_board(board);
assert( board671399572 != NULL );
assert( strcmp(board671399572, 
"65510...310.3710104.7\n"
"72374.522.6868..9\n"
".4.210.1.3.6..7.1.\n"
"..97.9107.591549.3\n"
"8.192..19382102443\n"
".13..424.72261...\n"
"4..6..98.9..522.6\n"
"52.52..169....1039\n"
".4849.9.338..75310\n"
"..4....6..7.9....\n"
"....72..612101....\n"
".381.5.4.6.6.10.3.\n"
".176102810..10.....4\n"
"1110.5831.355..13.\n"
".96.79.355.11..23\n"
".5..108685864.8462\n"
"110258.5.7..8..964\n") == 0);
free(board671399572);
board671399572 = NULL;
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_golden_move(board, 5, 16, 1) == 1 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_free_fields(board, 6) == 25 );
assert( gamma_move(board, 7, 9, -1) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_free_fields(board, 7) == 113 );
assert( gamma_move(board, 8, 11, 10) == 0 );


gamma_delete(board);

    return 0;
}
