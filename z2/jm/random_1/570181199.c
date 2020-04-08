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
uuid: 570181199
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(17, 16, 6, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_free_fields(board, 1) == 272 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 13, 1) == 1 );
assert( gamma_move(board, 5, 13, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 11, 9) == 1 );


char* board128392296 = gamma_board(board);
assert( board128392296 != NULL );
assert( strcmp(board128392296, 
".................\n"
".................\n"
".................\n"
".................\n"
".................\n"
".............5...\n"
"...........2.....\n"
".................\n"
".................\n"
".................\n"
".................\n"
"..3..............\n"
".................\n"
".................\n"
".............4...\n"
".................\n") == 0);
free(board128392296);
board128392296 = NULL;
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 15, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_move(board, 4, 10, 13) == 0 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 6, 15, 15) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 13) == 1 );
assert( gamma_move(board, 2, 11, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 15, 15) == 1 );


char* board413300202 = gamma_board(board);
assert( board413300202 != NULL );
assert( strcmp(board413300202, 
"...............2.\n"
".................\n"
".1...............\n"
".................\n"
".................\n"
".............5...\n"
"...........2.....\n"
".......5...2.....\n"
".................\n"
"...............4.\n"
".................\n"
"..3..............\n"
".................\n"
".................\n"
".............4...\n"
".................\n") == 0);
free(board413300202);
board413300202 = NULL;
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 5) == 1 );
assert( gamma_move(board, 5, 13, 11) == 1 );
assert( gamma_free_fields(board, 5) == 261 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_move(board, 1, 17, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_move(board, 5, 7, 14) == 1 );
assert( gamma_move(board, 6, 10, 15) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_free_fields(board, 2) == 256 );
assert( gamma_move(board, 4, 15, 10) == 1 );
assert( gamma_move(board, 5, 17, 5) == 0 );
assert( gamma_move(board, 6, 5, 13) == 1 );
assert( gamma_move(board, 1, 1, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_free_fields(board, 1) == 254 );
assert( gamma_move(board, 2, 16, 2) == 1 );
assert( gamma_move(board, 4, 9, 15) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, 16, 10) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 1, 9, 11) == 1 );
assert( gamma_golden_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 2, 16, 6) == 1 );
assert( gamma_move(board, 3, 4, 13) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );


char* board618745800 = gamma_board(board);
assert( board618745800 != NULL );
assert( strcmp(board618745800, 
".........46....2.\n"
".......5.........\n"
".1..36...........\n"
".................\n"
".........1...5...\n"
"...6.........5.46\n"
"...........2.....\n"
".......5...2.....\n"
".................\n"
"...............42\n"
".............4...\n"
".53..3...........\n"
".................\n"
"1...............2\n"
".............4...\n"
".................\n") == 0);
free(board618745800);
board618745800 = NULL;
assert( gamma_move(board, 4, 13, 13) == 1 );
assert( gamma_move(board, 6, 12, 0) == 1 );
assert( gamma_move(board, 2, 12, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 11, 13) == 1 );
assert( gamma_move(board, 1, 13, 15) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, -1, 14) == 0 );
assert( gamma_move(board, 4, 6, 12) == 1 );
assert( gamma_move(board, 5, 17, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 17, 12) == 0 );
assert( gamma_move(board, 1, 12, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 12) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 10, 2) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );


char* board658617999 = gamma_board(board);
assert( board658617999 != NULL );
assert( strcmp(board658617999, 
".........46..1.2.\n"
".......5.........\n"
".1..36.....5.4...\n"
"......4..2.......\n"
".........1...5...\n"
"...6.........5.46\n"
"...........2.....\n"
".......5...22....\n"
"............1....\n"
"........4......42\n"
"..2..........4...\n"
".53..3...........\n"
"......3..........\n"
"1.........6.....2\n"
".............4...\n"
"............6....\n") == 0);
free(board658617999);
board658617999 = NULL;
assert( gamma_move(board, 4, 16, 10) == 0 );
assert( gamma_move(board, 5, 14, 3) == 1 );
assert( gamma_move(board, 6, 6, 12) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_golden_move(board, 4, 13, 13) == 0 );
assert( gamma_move(board, 5, 16, 1) == 1 );
assert( gamma_move(board, 6, -1, 8) == 0 );
assert( gamma_move(board, 1, 11, 12) == 1 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_golden_move(board, 4, 13, 13) == 0 );
assert( gamma_move(board, 5, 14, 10) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_free_fields(board, 6) == 227 );
assert( gamma_move(board, 2, 16, 12) == 1 );
assert( gamma_move(board, 3, 11, 15) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 6, 7, 15) == 1 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 1, 14, 13) == 1 );
assert( gamma_move(board, 2, 17, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 5, 2, 14) == 1 );
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 16, 5) == 1 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_move(board, 1, 4, 16) == 0 );
assert( gamma_move(board, 2, 6, 11) == 1 );
assert( gamma_move(board, 3, 17, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 13) == 0 );
assert( gamma_free_fields(board, 4) == 28 );
assert( gamma_move(board, 6, 15, 4) == 1 );
assert( gamma_move(board, 1, 11, 4) == 1 );
assert( gamma_move(board, 2, 17, 11) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );


char* board418097600 = gamma_board(board);
assert( board418097600 != NULL );
assert( strcmp(board418097600, 
".......6.463.1.2.\n"
"..5....5.........\n"
".1..36.....5.41..\n"
"......4..2.1....2\n"
"......2..1...5...\n"
"...6..2......5546\n"
"...66......2.....\n"
"....4.35...22....\n"
"............1....\n"
"......6.4......42\n"
"..2..........4..3\n"
".53..3.....1...6.\n"
"......3.......5..\n"
"1.........6.....2\n"
"...3.........4..5\n"
"............6....\n") == 0);
free(board418097600);
board418097600 = NULL;
assert( gamma_free_fields(board, 4) == 28 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 16, 2) == 0 );
assert( gamma_move(board, 3, 12, 1) == 1 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 1, 17, 13) == 0 );
assert( gamma_free_fields(board, 1) == 212 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_golden_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 6, 6, -1) == 0 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 14, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 2, -1, 14) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 5, 16, 11) == 0 );
assert( gamma_move(board, 6, 13, 12) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 15, 3) == 0 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_move(board, 4, 14, 14) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 11, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_golden_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, -1, 6) == 0 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_move(board, 4, 5, 16) == 0 );
assert( gamma_move(board, 5, 16, 2) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 2, 14, 13) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 10, 14) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 15) == 1 );
assert( gamma_move(board, 1, 16, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 14, 7) == 1 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 12, 12) == 0 );
assert( gamma_move(board, 1, 15, 15) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_golden_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 1, 16, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 3, 15) == 0 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 5, 17, 13) == 0 );


char* board349191719 = gamma_board(board);
assert( board349191719 != NULL );
assert( strcmp(board349191719, 
".......66463.1.2.\n"
"..5....5.........\n"
".1..36.....5.41..\n"
"......4..2.1....2\n"
"......2..1...5...\n"
"...6..2.2....5546\n"
"...66......2.....\n"
"....4.35...22....\n"
"............1.2..\n"
"......6.41.....42\n"
"..3..........4..3\n"
"553..3.....1...6.\n"
"...5..3.......5..\n"
"1.........6.....2\n"
"...3........34..5\n"
"............6....\n") == 0);
free(board349191719);
board349191719 = NULL;
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 4, 11, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 11, 16) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_golden_move(board, 5, 6, 8) == 1 );
assert( gamma_move(board, 6, 6, 2) == 0 );


char* board707414413 = gamma_board(board);
assert( board707414413 != NULL );
assert( strcmp(board707414413, 
".......66463.1.2.\n"
"..5....5.........\n"
".1..36.....5.41..\n"
"......4..2.1....2\n"
"......2..1...5...\n"
"...6..2.2....5546\n"
"...66......2.....\n"
"....4.55...22....\n"
"............1.2..\n"
"......6.41.....42\n"
"..3..........4..3\n"
"553..3.....1...6.\n"
"...5..3.......5..\n"
"1.........6.....2\n"
"...3........34..5\n"
"............6....\n") == 0);
free(board707414413);
board707414413 = NULL;
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 15, 0) == 0 );
assert( gamma_move(board, 3, 6, 13) == 1 );
assert( gamma_golden_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 5, 12, 11) == 1 );
assert( gamma_move(board, 6, 6, 16) == 0 );
assert( gamma_move(board, 1, 11, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_free_fields(board, 5) == 36 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_free_fields(board, 1) == 29 );


char* board116717144 = gamma_board(board);
assert( board116717144 != NULL );
assert( strcmp(board116717144, 
".......66463.1.2.\n"
"..5....5.........\n"
".1..363....5.41..\n"
"......4..2.1....2\n"
"......2..1.155...\n"
"...6..2.2....5546\n"
"...66......2.....\n"
"....4.55...22....\n"
"............1.2..\n"
"......6.41.....42\n"
"..3..........4..3\n"
"553..3.....1...6.\n"
"...5..3.......5..\n"
"1.........6.....2\n"
"...3........34..5\n"
"............6....\n") == 0);
free(board116717144);
board116717144 = NULL;
assert( gamma_move(board, 2, 17, 3) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_free_fields(board, 6) == 27 );
assert( gamma_golden_move(board, 1, 15, 10) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 4, 15, 7) == 1 );


char* board574160391 = gamma_board(board);
assert( board574160391 != NULL );
assert( strcmp(board574160391, 
".......66463.1.2.\n"
"..5....5.........\n"
".1..363....5.41..\n"
"......4..2.1....2\n"
"......2..1.155...\n"
"...6..2.2....5546\n"
"...66......2.....\n"
"....4.55...22....\n"
"............1.24.\n"
"......6.41.....42\n"
"..3..........4..3\n"
"553..3.....1...6.\n"
"...5..3.......5..\n"
"1.........6.....2\n"
"...3........34..5\n"
"............6....\n") == 0);
free(board574160391);
board574160391 = NULL;
assert( gamma_move(board, 6, 10, 14) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 15, 13) == 0 );
assert( gamma_move(board, 4, 13, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 14, 11) == 1 );
assert( gamma_golden_move(board, 5, 14, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 2, 17, 13) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 1, 14) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 12, 12) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 15, 5) == 1 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 15) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 13, 16) == 0 );
assert( gamma_move(board, 4, 15, 7) == 0 );
assert( gamma_golden_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 1, 13) == 0 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_golden_move(board, 5, 15, 15) == 0 );


char* board740605941 = gamma_board(board);
assert( board740605941 != NULL );
assert( strcmp(board740605941, 
".......66463.1.2.\n"
"..5....5..6......\n"
".1..363....5.41..\n"
"......4..2.15...2\n"
"......2..1.1555..\n"
"...6..2.2....5546\n"
"...66......2.....\n"
"....4.55...22....\n"
"............1.24.\n"
"......6.41.....42\n"
"..3..........4.33\n"
"553..3.....1...6.\n"
"...5..3.......5..\n"
"1.........6..4..2\n"
"...3........34..5\n"
"............6....\n") == 0);
free(board740605941);
board740605941 = NULL;
assert( gamma_move(board, 6, 15, 10) == 0 );
assert( gamma_move(board, 1, 15, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 13, 4) == 1 );
assert( gamma_move(board, 5, -1, 7) == 0 );
assert( gamma_move(board, 6, 12, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 17, 14) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 3, 16, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, -1, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_move(board, 1, 17, 2) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_golden_move(board, 4, 11, 11) == 0 );
assert( gamma_free_fields(board, 5) == 36 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 14, 15) == 0 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 3, 14, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 2, 16, 5) == 0 );


gamma_delete(board);

    return 0;
}
