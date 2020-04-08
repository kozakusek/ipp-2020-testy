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
uuid: 510163604
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(16, 18, 8, 12);
assert( board != NULL );


assert( gamma_free_fields(board, 1) == 288 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_free_fields(board, 4) == 286 );
assert( gamma_move(board, 6, 8, 18) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 7, 14, 16) == 1 );
assert( gamma_move(board, 1, 2, 16) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_golden_move(board, 4, 16, 2) == 0 );
assert( gamma_move(board, 5, 11, 14) == 1 );


char* board340545112 = gamma_board(board);
assert( board340545112 != NULL );
assert( strcmp(board340545112, 
"................\n"
"..1...........7.\n"
"................\n"
"...........5....\n"
"................\n"
"................\n"
"................\n"
".......3........\n"
"................\n"
"................\n"
"................\n"
"..2.............\n"
"........3.......\n"
"................\n"
"................\n"
".......2........\n"
"................\n"
"....4...........\n") == 0);
free(board340545112);
board340545112 = NULL;
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_golden_move(board, 6, 14, 11) == 0 );
assert( gamma_move(board, 8, 13, -1) == 0 );
assert( gamma_move(board, 1, 4, 15) == 1 );
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 15) == 1 );
assert( gamma_move(board, 4, 12, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 12) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 8, 16, 11) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 12, 18) == 0 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_move(board, 5, 13, 17) == 1 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 13, 6) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 11, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 12, 3) == 1 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 0, 11) == 1 );
assert( gamma_move(board, 7, 15, -1) == 0 );
assert( gamma_free_fields(board, 7) == 266 );


char* board327367083 = gamma_board(board);
assert( board327367083 != NULL );
assert( strcmp(board327367083, 
".............5..\n"
"..1...........7.\n"
"....1.......3...\n"
"...........5....\n"
"................\n"
".....6......4...\n"
"6...............\n"
"......33........\n"
".6...4..........\n"
"................\n"
".......6...1....\n"
"..2..........8..\n"
"........3.......\n"
"................\n"
"....1.......3...\n"
".......2........\n"
"................\n"
"....4...........\n") == 0);
free(board327367083);
board327367083 = NULL;
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 1, 14, 10) == 1 );
assert( gamma_move(board, 2, 13, 14) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 5, 7, 11) == 1 );
assert( gamma_move(board, 6, 12, 5) == 1 );
assert( gamma_free_fields(board, 6) == 260 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 18) == 0 );
assert( gamma_move(board, 1, 15, 16) == 1 );
assert( gamma_move(board, 3, 13, 6) == 0 );
assert( gamma_move(board, 4, 13, 13) == 1 );
assert( gamma_golden_move(board, 4, 14, 11) == 0 );


char* board704342416 = gamma_board(board);
assert( board704342416 != NULL );
assert( strcmp(board704342416, 
".............5..\n"
"..1...........71\n"
"....1.......3...\n"
"...........5.2..\n"
".............4..\n"
".....6......4...\n"
"6......5........\n"
"......33......1.\n"
".6...4..........\n"
"................\n"
".......6...1....\n"
"..2..........8..\n"
"........3...6...\n"
"................\n"
"..8.1.......3...\n"
"3......2........\n"
"................\n"
"....4...........\n") == 0);
free(board704342416);
board704342416 = NULL;
assert( gamma_move(board, 5, 9, 15) == 1 );
assert( gamma_move(board, 6, 9, 12) == 1 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 11, 3) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 12, 17) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 8, 9, 17) == 1 );
assert( gamma_move(board, 2, 9, 11) == 1 );
assert( gamma_move(board, 3, 14, 17) == 1 );
assert( gamma_move(board, 5, 11, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 1, 4, 13) == 1 );
assert( gamma_move(board, 2, 14, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 16, 1) == 0 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, -1) == 0 );
assert( gamma_free_fields(board, 5) == 243 );


char* board189732806 = gamma_board(board);
assert( board189732806 != NULL );
assert( strcmp(board189732806, 
".........8..253.\n"
"..1...........71\n"
"....1....5..3...\n"
"...........5.2..\n"
"....1........4..\n"
".....6...6..4...\n"
"6......5.2......\n"
"......33......1.\n"
".6...4..........\n"
"6...............\n"
".......6...1....\n"
"..2........5.8..\n"
"........3...6...\n"
"......4...3.....\n"
"..8.1......83...\n"
"3......2......2.\n"
"...1...7........\n"
"....4...........\n") == 0);
free(board189732806);
board189732806 = NULL;
assert( gamma_move(board, 7, 8, 17) == 1 );
assert( gamma_free_fields(board, 7) == 242 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 3, 11, 12) == 1 );
assert( gamma_move(board, 4, 14, 3) == 1 );
assert( gamma_move(board, 5, 6, 9) == 1 );
assert( gamma_move(board, 6, 6, 14) == 1 );
assert( gamma_golden_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 14, -1) == 0 );
assert( gamma_free_fields(board, 8) == 238 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, 0, 18) == 0 );
assert( gamma_move(board, 4, 10, -1) == 0 );
assert( gamma_move(board, 6, 6, 16) == 1 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_golden_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 1, 14, 6) == 1 );
assert( gamma_free_fields(board, 1) == 235 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_free_fields(board, 2) == 234 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_move(board, 7, -1, 1) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 16, 11) == 0 );


char* board240632596 = gamma_board(board);
assert( board240632596 != NULL );
assert( strcmp(board240632596, 
"........78..253.\n"
"..1...6.......71\n"
"....1....5..3...\n"
"......6....5.2..\n"
"....1........4..\n"
".....6...6.34...\n"
"6......5.2......\n"
".2....33......1.\n"
".6...45.........\n"
"6...4...........\n"
"....1..6...1....\n"
"..2........5.81.\n"
"......7.3...6...\n"
"......4...3.....\n"
"..8.1......83.4.\n"
"3......2......2.\n"
"...1...7........\n"
"....4...........\n") == 0);
free(board240632596);
board240632596 = NULL;
assert( gamma_move(board, 3, 3, 18) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );


char* board640342860 = gamma_board(board);
assert( board640342860 != NULL );
assert( strcmp(board640342860, 
"........78..253.\n"
"..1...6.......71\n"
"....1....5..3...\n"
"......6....5.2..\n"
"....1........4..\n"
".....6...6.34...\n"
"6......5.2......\n"
".2....33......1.\n"
".6...45.........\n"
"6...4...........\n"
"....1..6...1....\n"
"..2........5.81.\n"
"......7.3...6...\n"
"5.....4...3.....\n"
"..8.1......83.4.\n"
"3......2......2.\n"
"...1...7........\n"
"....4...........\n") == 0);
free(board640342860);
board640342860 = NULL;
assert( gamma_move(board, 6, 5, 10) == 1 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 10, 16) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 6, 11, 14) == 0 );
assert( gamma_move(board, 7, 8, 9) == 1 );
assert( gamma_move(board, 8, 5, 8) == 1 );


char* board514582183 = gamma_board(board);
assert( board514582183 != NULL );
assert( strcmp(board514582183, 
"........78..253.\n"
"..1...6...1...71\n"
"....1....5..3...\n"
"......6....5.2..\n"
"....1........4..\n"
".....6...6.34...\n"
"6......5.2......\n"
".2...633......1.\n"
".6...45.7.......\n"
"65..48..........\n"
"....1..6...1....\n"
"..2........5.81.\n"
"......7.3...6...\n"
"5.....4...3.....\n"
"..8.1......83.4.\n"
"3......2......2.\n"
"..71...7........\n"
"....4...........\n") == 0);
free(board514582183);
board514582183 = NULL;
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, -1, 14) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 11, 2) == 1 );
assert( gamma_free_fields(board, 3) == 223 );
assert( gamma_move(board, 4, 15, 14) == 1 );
assert( gamma_move(board, 7, -1, 14) == 0 );
assert( gamma_move(board, 8, 15, 4) == 1 );
assert( gamma_move(board, 1, 14, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 17) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, -1, 16) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board170375156 = gamma_board(board);
assert( board170375156 != NULL );
assert( strcmp(board170375156, 
".....2..78..253.\n"
"..1...6...1...71\n"
"....1....5..3...\n"
"......6....5.2.4\n"
"....1........4..\n"
".....6...6.34...\n"
"6......5.2......\n"
".2...633......1.\n"
".61..45.7.....1.\n"
"65..483.........\n"
"....1..6...1....\n"
"..2........5.81.\n"
"......7.3...6...\n"
"5.....4...3....8\n"
"..8.1......83.4.\n"
"3......2...3..2.\n"
"..71...7........\n"
"....4...........\n") == 0);
free(board170375156);
board170375156 = NULL;
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 1, 12) == 1 );
assert( gamma_move(board, 7, 4, 15) == 0 );
assert( gamma_move(board, 8, 10, 1) == 1 );
assert( gamma_move(board, 1, 3, 14) == 0 );
assert( gamma_move(board, 2, 1, 16) == 1 );
assert( gamma_move(board, 3, 10, 16) == 0 );
assert( gamma_golden_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_golden_move(board, 6, 17, 9) == 0 );
assert( gamma_move(board, 8, 11, 16) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, -1, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 5, 14, 14) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 8, 17) == 0 );
assert( gamma_move(board, 8, 6, 18) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 0, 18) == 0 );
assert( gamma_move(board, 3, 13, 11) == 1 );


char* board945016500 = gamma_board(board);
assert( board945016500 != NULL );
assert( strcmp(board945016500, 
".....2..78..253.\n"
".21...6...18..71\n"
"....1....5..3...\n"
"......6....5.254\n"
"....1........4..\n"
".6...6...6.34...\n"
"6......5.2...3..\n"
".2...633......1.\n"
".61..45.7.....1.\n"
"65..483.........\n"
"....1..6...1....\n"
"..2........5.81.\n"
"......7.3...6...\n"
"5.....4...3....8\n"
".28.1......83.4.\n"
"3......2...3..2.\n"
"..715..7..8.....\n"
"....4...........\n") == 0);
free(board945016500);
board945016500 = NULL;
assert( gamma_move(board, 5, 13, 16) == 1 );
assert( gamma_move(board, 6, 2, 10) == 1 );
assert( gamma_move(board, 7, -1, 7) == 0 );
assert( gamma_move(board, 8, 4, -1) == 0 );
assert( gamma_move(board, 1, 15, 18) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 5, 16, 13) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_golden_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 8, -1, 5) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 13, 5) == 1 );
assert( gamma_move(board, 5, 10, -1) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );


char* board270820383 = gamma_board(board);
assert( board270820383 != NULL );
assert( strcmp(board270820383, 
".....2..78..253.\n"
".21...6...18.571\n"
"....1....5..3...\n"
"......6....5.254\n"
"....1........4..\n"
".6...6...6.34...\n"
"6......5.2...3..\n"
".26..633......1.\n"
".61..45.7.....1.\n"
"65..483.........\n"
"....1..6...1....\n"
"..2........5.81.\n"
"......7.3...64..\n"
"5.....4...3....8\n"
".28.1......83.4.\n"
"3.3....2...3..2.\n"
"..715..7..8.....\n"
"....4...........\n") == 0);
free(board270820383);
board270820383 = NULL;
assert( gamma_free_fields(board, 7) == 206 );
assert( gamma_move(board, 8, 9, 16) == 1 );
assert( gamma_free_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 16, 15) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 10, 12) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 6, 16, 15) == 0 );
assert( gamma_move(board, 7, 14, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 13, 3) == 1 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 15, 11) == 1 );
assert( gamma_golden_move(board, 5, 15, 4) == 1 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 5, 7) == 1 );
assert( gamma_move(board, 8, 16, 3) == 0 );


char* board412684793 = gamma_board(board);
assert( board412684793 != NULL );
assert( strcmp(board412684793, 
".....2..78..253.\n"
".21...6..818.571\n"
"....1....5..3...\n"
"......6....5.254\n"
"....1........4..\n"
".6...6...6434...\n"
"6......5.2...3.5\n"
".26..633......1.\n"
".61..45.7.....1.\n"
"65..483.........\n"
"....17.6...1..7.\n"
"..2........5.81.\n"
"......7.3...64..\n"
"5.....4...3....5\n"
".28.1......8384.\n"
"3.3.5..2...3..2.\n"
"..715..7..8.....\n"
"....4...........\n") == 0);
free(board412684793);
board412684793 = NULL;
assert( gamma_move(board, 1, 16, 8) == 0 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_free_fields(board, 2) == 198 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 13, 16) == 0 );
assert( gamma_move(board, 7, 1, 17) == 1 );
assert( gamma_move(board, 8, 11, 13) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 5, 13) == 0 );
assert( gamma_move(board, 1, 2, 16) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_free_fields(board, 2) == 196 );
assert( gamma_move(board, 3, 15, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 5) == 1 );
assert( gamma_move(board, 1, 7, 15) == 0 );
assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 3, 16) == 0 );
assert( gamma_move(board, 4, 11, 13) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 6, 2, 16) == 0 );
assert( gamma_free_fields(board, 6) == 30 );
assert( gamma_move(board, 7, 10, 7) == 1 );
assert( gamma_golden_move(board, 7, 7, 14) == 0 );
assert( gamma_move(board, 8, 8, 4) == 1 );
assert( gamma_move(board, 1, 14, 13) == 0 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 10, 18) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 9, 6) == 1 );
assert( gamma_golden_move(board, 8, 17, 9) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );


char* board767598156 = gamma_board(board);
assert( board767598156 != NULL );
assert( strcmp(board767598156, 
".7...2..78..253.\n"
".21...6..818.571\n"
"....1....5..3...\n"
"......6....5.254\n"
"....1......8.4..\n"
".6...6...6434...\n"
"6......5.2...3.5\n"
".26..633......1.\n"
".61..45.7.....1.\n"
"65..483.........\n"
"....17.6..71..7.\n"
"..2......855.81.\n"
"......7.3.7.64..\n"
"5.....4.8.3....5\n"
".28.1......8384.\n"
"3.3.5..2...3..2.\n"
"..715..7..82....\n"
"....4...4.......\n") == 0);
free(board767598156);
board767598156 = NULL;
assert( gamma_move(board, 2, 12, 11) == 1 );


char* board776890748 = gamma_board(board);
assert( board776890748 != NULL );
assert( strcmp(board776890748, 
".7...2..78..253.\n"
".21...6..818.571\n"
"....1....5..3...\n"
"......6....5.254\n"
"....1......8.4..\n"
".6...6...6434...\n"
"6......5.2..23.5\n"
".26..633......1.\n"
".61..45.7.....1.\n"
"65..483.........\n"
"....17.6..71..7.\n"
"..2......855.81.\n"
"......7.3.7.64..\n"
"5.....4.8.3....5\n"
".28.1......8384.\n"
"3.3.5..2...3..2.\n"
"..715..7..82....\n"
"....4...4.......\n") == 0);
free(board776890748);
board776890748 = NULL;
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 4, 8, 16) == 1 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 7, 8, 16) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_free_fields(board, 1) == 33 );


char* board154020072 = gamma_board(board);
assert( board154020072 != NULL );
assert( strcmp(board154020072, 
".7...2..78..253.\n"
".21...6.4818.571\n"
"....1....5..3...\n"
"......6....5.254\n"
"....1......8.4..\n"
".6...6...6434...\n"
"6......5.2..23.5\n"
".26..633......1.\n"
".61..45.7.....1.\n"
"65..483.........\n"
"....17.6..71..7.\n"
"..2......855.81.\n"
"......7.3.7.64..\n"
"5.....4.8.3....5\n"
".28.1......8384.\n"
"3.3.5..2...3..2.\n"
"..715..7..82....\n"
"....4...4.......\n") == 0);
free(board154020072);
board154020072 = NULL;
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_golden_move(board, 3, 4, 1) == 0 );


char* board112400008 = gamma_board(board);
assert( board112400008 != NULL );
assert( strcmp(board112400008, 
".7...2..78..253.\n"
".21...6.4818.571\n"
"....1....5..3...\n"
"......6....5.254\n"
"....1......8.4..\n"
".6...6...6434...\n"
"6......5.2..23.5\n"
".26..633......1.\n"
".61..45.7.....1.\n"
"65..483.........\n"
"....17.6..71..7.\n"
"..2......855.81.\n"
"......7.3.7.64..\n"
"52....4.8.3....5\n"
".28.1......8384.\n"
"3.3.5..2...3..2.\n"
"..715..7..82....\n"
"....4...4.......\n") == 0);
free(board112400008);
board112400008 = NULL;
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_move(board, 5, 13, 9) == 0 );
assert( gamma_move(board, 6, -1, 17) == 0 );
assert( gamma_move(board, 8, 12, 8) == 1 );
assert( gamma_move(board, 1, 11, -1) == 0 );
assert( gamma_move(board, 2, 9, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 14 );


char* board388938030 = gamma_board(board);
assert( board388938030 != NULL );
assert( strcmp(board388938030, 
".7...2..78..253.\n"
".21...6.4818.571\n"
"....1....5..3...\n"
"......6....5.254\n"
"....1......8.4..\n"
".6...6...6434...\n"
"6......5.2..23.5\n"
".26..633.2....1.\n"
".61..45.7.....1.\n"
"65..483.....8...\n"
"....17.6..71..7.\n"
"..2......855.81.\n"
"......7.3.7.64..\n"
"52....4.8.3....5\n"
".28.1......8384.\n"
"3.3.5..2...3..2.\n"
"..715..7..82....\n"
"....4...4.......\n") == 0);
free(board388938030);
board388938030 = NULL;
assert( gamma_move(board, 3, 16, 1) == 0 );
assert( gamma_move(board, 5, 8, 15) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_golden_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 1, 14, 12) == 0 );
assert( gamma_golden_move(board, 1, 10, 14) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 7, 18) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_golden_move(board, 4, 17, 5) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_move(board, 6, 10, -1) == 0 );
assert( gamma_move(board, 7, 16, 2) == 0 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 13, -1) == 0 );
assert( gamma_move(board, 2, 13, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 15, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 10, 12) == 0 );


char* board492094092 = gamma_board(board);
assert( board492094092 != NULL );
assert( strcmp(board492094092, 
".7...2..78..253.\n"
".21...6.4818.571\n"
"....1...55..3...\n"
"......6....5.254\n"
"....1......8.4..\n"
".6...6...6434...\n"
"6......5.2..23.5\n"
".26..633.2....1.\n"
".61..45.7.....1.\n"
"65..483.....8...\n"
"....17.6..71..7.\n"
"..2......855.81.\n"
"......7.3.7.64..\n"
"52....4.8.3....5\n"
".28.1......8384.\n"
"3.3.5..2...3..2.\n"
"..715..7..82....\n"
"....4...4.......\n") == 0);
free(board492094092);
board492094092 = NULL;
assert( gamma_move(board, 6, 1, 13) == 1 );
assert( gamma_move(board, 7, 8, 17) == 0 );
assert( gamma_move(board, 8, 11, -1) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 15, 3) == 0 );
assert( gamma_move(board, 5, 6, 18) == 0 );
assert( gamma_move(board, 6, 10, 13) == 0 );


char* board393567961 = gamma_board(board);
assert( board393567961 != NULL );
assert( strcmp(board393567961, 
".7...2..78..253.\n"
".21...6.4818.571\n"
"....1...55..3...\n"
"......6....5.254\n"
".6..1......8.4..\n"
".6...6...6434...\n"
"6......5.2..23.5\n"
".26..633.2....1.\n"
".61..45.7.....1.\n"
"65..483.....8...\n"
"....17.6..71..7.\n"
"..2......855.81.\n"
"......7.3.7.64..\n"
"52....4.8.3....5\n"
".28.1......8384.\n"
"3.3.5..2...3..2.\n"
"..715..7..82....\n"
"....4...4.......\n") == 0);
free(board393567961);
board393567961 = NULL;
assert( gamma_move(board, 8, 5, 13) == 0 );
assert( gamma_move(board, 1, 9, 14) == 0 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, -1, 15) == 0 );
assert( gamma_move(board, 5, 13, 8) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 13 );
assert( gamma_move(board, 1, 14, 2) == 0 );


char* board243345634 = gamma_board(board);
assert( board243345634 != NULL );
assert( strcmp(board243345634, 
".7...2..78..253.\n"
".21...6.4818.571\n"
"....1...55..3...\n"
"......6....5.254\n"
".6..1......8.4..\n"
".6...6...6434...\n"
"6......5.2..23.5\n"
".26..633.2....1.\n"
".61..45.7.....1.\n"
"65..483.....8...\n"
"....17.6..71..7.\n"
"..2......855.81.\n"
"......7.3.7.64..\n"
"52....4.8.3....5\n"
".28.1......8384.\n"
"373.5..2...3..2.\n"
"..715..7..82....\n"
"....4...4.......\n") == 0);
free(board243345634);
board243345634 = NULL;
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 12, 10) == 0 );
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_golden_move(board, 4, 6, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 7, 12, 7) == 0 );
assert( gamma_move(board, 8, 10, 13) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 8, 13, 2) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 7, -1, 12) == 0 );
assert( gamma_move(board, 8, 5, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 10, 15) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 9, 0) == 1 );


char* board355813633 = gamma_board(board);
assert( board355813633 != NULL );
assert( strcmp(board355813633, 
".7...2..78..253.\n"
".21...6.4818.571\n"
"....1...55..3...\n"
"......6....5.254\n"
".6..1.....88.4..\n"
".6...6...6434...\n"
"6......5.2..23.5\n"
".26..633.2....1.\n"
".61..45.7.....1.\n"
"65..483.....8...\n"
"....17.6..71..7.\n"
"..2......855.81.\n"
"......7.3.7.64..\n"
"52....4.8.3....5\n"
".28.1......8384.\n"
"373.5..2...3.82.\n"
"..715..7..82....\n"
"....4...44......\n") == 0);
free(board355813633);
board355813633 = NULL;
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 12, 10) == 0 );
assert( gamma_golden_move(board, 7, 16, 12) == 0 );
assert( gamma_move(board, 1, 2, 15) == 1 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_golden_move(board, 3, 9, 2) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 2, 17) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 16) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 7, 15, 1) == 0 );
assert( gamma_free_fields(board, 7) == 25 );
assert( gamma_move(board, 8, 9, 16) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 11, 14) == 0 );
assert( gamma_move(board, 1, 6, 17) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 5, 13, 18) == 0 );
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_move(board, 6, -1, 3) == 0 );
assert( gamma_free_fields(board, 6) == 32 );
assert( gamma_move(board, 7, 13, 7) == 1 );
assert( gamma_free_fields(board, 8) == 28 );
assert( gamma_move(board, 2, -1, 16) == 0 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 11, 16) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 7, 0, 16) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 3) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 12, 16) == 0 );
assert( gamma_move(board, 7, 12, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_move(board, 8, 11, 7) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 15, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_free_fields(board, 6) == 32 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 8, 15, 14) == 0 );
assert( gamma_move(board, 1, 4, 17) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );


char* board628193631 = gamma_board(board);
assert( board628193631 != NULL );
assert( strcmp(board628193631, 
".7...2..78..253.\n"
".21...6.4818.571\n"
"..1.1...55..3...\n"
"......6....5.254\n"
".6..1.....88.4..\n"
".6...6...6434...\n"
"6......5.2..23.5\n"
".26..633.2....1.\n"
".61..45.7.....1.\n"
"65..483.....8...\n"
"....17.6..71.77.\n"
"..2......855.81.\n"
"......7.3.7.64..\n"
"52....4.8.3....5\n"
".28.1...8..8384.\n"
"373.5..2...3.82.\n"
"..715..7..82....\n"
"....4...44......\n") == 0);
free(board628193631);
board628193631 = NULL;
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, -1, 12) == 0 );
assert( gamma_move(board, 7, 6, 14) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 16 );
assert( gamma_move(board, 1, 5, 15) == 1 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_move(board, 3, 9, 16) == 0 );
assert( gamma_move(board, 4, 11, 14) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 15, 14) == 0 );
assert( gamma_free_fields(board, 6) == 32 );
assert( gamma_move(board, 7, 3, 18) == 0 );
assert( gamma_move(board, 8, 15, 2) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );


char* board282863895 = gamma_board(board);
assert( board282863895 != NULL );
assert( strcmp(board282863895, 
".7...2..78..253.\n"
".21...6.4818.571\n"
"..1.11..55..3...\n"
"......6....5.254\n"
".6..1.....88.4..\n"
".6...6...6434...\n"
"6......5.2..23.5\n"
".26..633.2....1.\n"
".61..45.7.....1.\n"
"65..483.....8...\n"
"....17.6..71.77.\n"
"..2......855.81.\n"
"......7.3.7.64..\n"
"52....4.8.3....5\n"
".28.1...8..8384.\n"
"373.5..2...3.82.\n"
"..715..7..82....\n"
"....4...44......\n") == 0);
free(board282863895);
board282863895 = NULL;
assert( gamma_move(board, 4, 14, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_golden_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_golden_move(board, 7, 12, 10) == 0 );
assert( gamma_move(board, 8, 13, 8) == 1 );
assert( gamma_busy_fields(board, 8) == 17 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 9, 16) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 8, 15, 15) == 0 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 3, 15) == 0 );
assert( gamma_move(board, 4, 0, 15) == 0 );
assert( gamma_move(board, 6, -1, 1) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_golden_move(board, 7, 16, 13) == 0 );
assert( gamma_move(board, 8, 15, 1) == 0 );
assert( gamma_free_fields(board, 8) == 31 );
assert( gamma_move(board, 1, 5, 17) == 0 );
assert( gamma_move(board, 2, 13, 16) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_golden_move(board, 4, 12, 10) == 0 );
assert( gamma_move(board, 5, 7, 12) == 1 );
assert( gamma_move(board, 6, 4, 15) == 0 );
assert( gamma_free_fields(board, 6) == 32 );
assert( gamma_busy_fields(board, 7) == 13 );


char* board580555324 = gamma_board(board);
assert( board580555324 != NULL );
assert( strcmp(board580555324, 
".7...2..78..253.\n"
".21...6.4818.571\n"
"..1.11..55..3...\n"
"......6....5.254\n"
".6..1.....88.4..\n"
".6...6.5.6434...\n"
"6......5.2..23.5\n"
".26..633.2....1.\n"
".61..45.7.....1.\n"
"65..483.....88..\n"
"....17.6..71.77.\n"
"..2......855.81.\n"
"......7.3.7.64..\n"
"52....4.8.3....5\n"
".28.1...8..8384.\n"
"373.5..2...3.82.\n"
"..715..7..82....\n"
"....4...44......\n") == 0);
free(board580555324);
board580555324 = NULL;
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_move(board, 4, 11, 10) == 0 );


char* board412375974 = gamma_board(board);
assert( board412375974 != NULL );
assert( strcmp(board412375974, 
".7...2..78..253.\n"
".21...6.4818.571\n"
"..1.11..55..3...\n"
"......6....5.254\n"
".6..1.....88.4..\n"
".6...6.5.6434...\n"
"6......5.2..23.5\n"
".26..633.2....1.\n"
".61..45.7.....1.\n"
"65..483.....88..\n"
"....17.6..71.77.\n"
"..2......855.81.\n"
"......7.3.7.64..\n"
"52....4.8.3....5\n"
".28.1...8..8384.\n"
"373.5..2...3.82.\n"
"..715..7..82....\n"
"....4...44......\n") == 0);
free(board412375974);
board412375974 = NULL;
assert( gamma_move(board, 5, 3, 1) == 0 );


char* board330601703 = gamma_board(board);
assert( board330601703 != NULL );
assert( strcmp(board330601703, 
".7...2..78..253.\n"
".21...6.4818.571\n"
"..1.11..55..3...\n"
"......6....5.254\n"
".6..1.....88.4..\n"
".6...6.5.6434...\n"
"6......5.2..23.5\n"
".26..633.2....1.\n"
".61..45.7.....1.\n"
"65..483.....88..\n"
"....17.6..71.77.\n"
"..2......855.81.\n"
"......7.3.7.64..\n"
"52....4.8.3....5\n"
".28.1...8..8384.\n"
"373.5..2...3.82.\n"
"..715..7..82....\n"
"....4...44......\n") == 0);
free(board330601703);
board330601703 = NULL;
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 17 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 3, 18) == 0 );
assert( gamma_move(board, 1, 10, 17) == 1 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 5, 13, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 13, 15) == 0 );
assert( gamma_move(board, 7, 5, 18) == 0 );
assert( gamma_move(board, 8, 2, -1) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 6, 14, -1) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 12, 9) == 0 );
assert( gamma_move(board, 8, 12, 10) == 0 );
assert( gamma_busy_fields(board, 8) == 17 );
assert( gamma_move(board, 1, 10, 18) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 8, 14, -1) == 0 );
assert( gamma_move(board, 1, 16, 6) == 0 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 8, 6, 13) == 0 );
assert( gamma_move(board, 1, 16, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_golden_move(board, 2, 6, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 15, 18) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 15, 15) == 0 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_free_fields(board, 7) == 26 );
assert( gamma_move(board, 8, 9, 11) == 0 );
assert( gamma_golden_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_move(board, 5, 14, 13) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_free_fields(board, 6) == 32 );
assert( gamma_move(board, 8, 9, 14) == 0 );
assert( gamma_busy_fields(board, 8) == 17 );
assert( gamma_move(board, 1, 4, 8) == 0 );


char* board477492024 = gamma_board(board);
assert( board477492024 != NULL );
assert( strcmp(board477492024, 
".7...2..781.253.\n"
".21...6.4818.571\n"
"..1.11..55..3...\n"
"......6....5.254\n"
".6..1.....88.4..\n"
".6...6.5.6434...\n"
"6.....35.2..23.5\n"
".26..633.2....1.\n"
".61..45.7.....1.\n"
"65..483.....88..\n"
"....17.6..71.77.\n"
"..2......855.81.\n"
".....77.3.7.64..\n"
"52....4.8.3....5\n"
".28.1...8..8384.\n"
"373.5..2...3.82.\n"
"..7155.7..82....\n"
"....4...44......\n") == 0);
free(board477492024);
board477492024 = NULL;
assert( gamma_golden_move(board, 2, 15, 9) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 4, 18) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 0, 15) == 0 );
assert( gamma_move(board, 8, 0, -1) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_golden_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_free_fields(board, 8) == 30 );
assert( gamma_move(board, 2, 16, 10) == 0 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 16, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 9, 15) == 0 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 8, -1, 13) == 0 );
assert( gamma_move(board, 1, 16, -1) == 0 );
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 4, 13, 17) == 0 );
assert( gamma_move(board, 6, 6, 17) == 1 );
assert( gamma_move(board, 7, 9, 14) == 0 );
assert( gamma_move(board, 8, 10, 16) == 0 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 2, 16, 13) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 15, 13) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 1, 11, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_free_fields(board, 1) == 36 );
assert( gamma_golden_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 16, 8) == 0 );
assert( gamma_move(board, 7, 6, 16) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_golden_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 15, 13) == 0 );
assert( gamma_move(board, 6, 15, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, -1, 0) == 0 );
assert( gamma_move(board, 8, 16, 9) == 0 );
assert( gamma_golden_move(board, 8, 3, 13) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_free_fields(board, 5) == 31 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 7, 2, 14) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, -1) == 0 );
assert( gamma_free_fields(board, 8) == 29 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 13, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 12, -1) == 0 );


char* board343408164 = gamma_board(board);
assert( board343408164 != NULL );
assert( strcmp(board343408164, 
".7...26.781.253.\n"
".21...6.4818.571\n"
"..1.11..55..3...\n"
"......6....5.254\n"
".6..1.....88.4.4\n"
".6...6.5.6434...\n"
"6.....35.2..23.5\n"
".26..633.2....1.\n"
".61..45.7.....1.\n"
"65..483.....88..\n"
"....17.6..71.77.\n"
"..2......855.81.\n"
".....77.3.7.64..\n"
"52....4.8.3....5\n"
".2811...8.38384.\n"
"373.57.2...3.82.\n"
"..3155.7..82....\n"
"....4...44......\n") == 0);
free(board343408164);
board343408164 = NULL;
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 7, 8, 13) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 6, 13) == 0 );
assert( gamma_busy_fields(board, 8) == 17 );
assert( gamma_move(board, 1, 10, 18) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_golden_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 7, 17) == 0 );


gamma_delete(board);

    return 0;
}
