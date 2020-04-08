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
uuid: 303778549
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 17, 10, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 15, 7) == 0 );
assert( gamma_free_fields(board, 1) == 255 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_golden_move(board, 3, 2, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 14, 16) == 1 );


char* board467011909 = gamma_board(board);
assert( board467011909 != NULL );
assert( strcmp(board467011909, 
"..............5\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"........3......\n"
"...............\n"
"...............\n") == 0);
free(board467011909);
board467011909 = NULL;
assert( gamma_move(board, 6, 7, 14) == 1 );
assert( gamma_move(board, 8, 7, -1) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_move(board, 10, 15, 9) == 0 );
assert( gamma_golden_move(board, 10, 2, 10) == 0 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 5, 7, 15) == 1 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 7, -1, 13) == 0 );
assert( gamma_move(board, 8, 2, 17) == 0 );
assert( gamma_move(board, 9, 3, 11) == 1 );
assert( gamma_free_fields(board, 9) == 247 );
assert( gamma_move(board, 10, 2, 5) == 1 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_golden_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_free_fields(board, 2) == 246 );
assert( gamma_move(board, 3, 4, 13) == 1 );
assert( gamma_free_fields(board, 3) == 245 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 10, 4) == 1 );
assert( gamma_move(board, 7, 13, 9) == 1 );
assert( gamma_move(board, 8, 14, 6) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 9) == 1 );
assert( gamma_move(board, 10, 6, 5) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 5, 15) == 1 );
assert( gamma_move(board, 6, 5, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 14, 9) == 1 );


char* board294123266 = gamma_board(board);
assert( board294123266 != NULL );
assert( strcmp(board294123266, 
"..............5\n"
".....4.5.......\n"
".......6.......\n"
"....3..........\n"
"...............\n"
"...9...........\n"
".......3.......\n"
"...9.6.......78\n"
"...............\n"
"...............\n"
"..1...........8\n"
"..10...10.2......\n"
"..........6....\n"
".6......2......\n"
"........3..1...\n"
"...............\n"
".......5.......\n") == 0);
free(board294123266);
board294123266 = NULL;
assert( gamma_move(board, 9, 9, 11) == 1 );
assert( gamma_move(board, 10, 0, 17) == 0 );
assert( gamma_move(board, 1, 2, 15) == 1 );
assert( gamma_move(board, 2, 0, 17) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 9, 13, 11) == 1 );
assert( gamma_free_fields(board, 9) == 229 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_move(board, 3, 1, 13) == 1 );
assert( gamma_golden_move(board, 3, 15, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 6) == 1 );


char* board208498226 = gamma_board(board);
assert( board208498226 != NULL );
assert( strcmp(board208498226, 
"..............5\n"
"..1..4.5.......\n"
".......6.......\n"
".3..3..........\n"
"...............\n"
"...9.....9...9.\n"
".......3.......\n"
"...9.6.......78\n"
"...............\n"
"...............\n"
"..1.........5.8\n"
"..10...10.2......\n"
"..........6....\n"
".6...4..2......\n"
"........3..1...\n"
"...............\n"
".......5.......\n") == 0);
free(board208498226);
board208498226 = NULL;
assert( gamma_move(board, 6, 6, 0) == 1 );


char* board575846217 = gamma_board(board);
assert( board575846217 != NULL );
assert( strcmp(board575846217, 
"..............5\n"
"..1..4.5.......\n"
".......6.......\n"
".3..3..........\n"
"...............\n"
"...9.....9...9.\n"
".......3.......\n"
"...9.6.......78\n"
"...............\n"
"...............\n"
"..1.........5.8\n"
"..10...10.2......\n"
"..........6....\n"
".6...4..2......\n"
"........3..1...\n"
"...............\n"
"......65.......\n") == 0);
free(board575846217);
board575846217 = NULL;
assert( gamma_move(board, 7, 12, 14) == 1 );
assert( gamma_move(board, 8, -1, 14) == 0 );
assert( gamma_free_fields(board, 9) == 225 );
assert( gamma_move(board, 10, 12, 15) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 3, 15, 9) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 13, 3) == 1 );
assert( gamma_free_fields(board, 6) == 223 );
assert( gamma_move(board, 7, 1, 8) == 1 );
assert( gamma_move(board, 8, 11, 15) == 1 );
assert( gamma_move(board, 9, 4, 17) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 7, 0) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 11, 17) == 0 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 10, 1, 11) == 1 );
assert( gamma_move(board, 1, 12, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 8, 13) == 1 );
assert( gamma_move(board, 3, 10, 12) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 7, 16) == 1 );
assert( gamma_move(board, 7, 15, -1) == 0 );
assert( gamma_move(board, 8, 6, 17) == 0 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 9, 11, 17) == 0 );
assert( gamma_free_fields(board, 9) == 214 );
assert( gamma_move(board, 10, 3, 7) == 1 );
assert( gamma_free_fields(board, 10) == 213 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, -1, 14) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 1) == 1 );
assert( gamma_move(board, 4, 6, 13) == 1 );
assert( gamma_free_fields(board, 5) == 211 );
assert( gamma_move(board, 6, 8, -1) == 0 );
assert( gamma_free_fields(board, 6) == 211 );
assert( gamma_move(board, 7, 4, 12) == 1 );
assert( gamma_free_fields(board, 9) == 210 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 1, 8, 17) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_free_fields(board, 3) == 209 );
assert( gamma_move(board, 4, 11, 10) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 5) == 1 );
assert( gamma_free_fields(board, 9) == 207 );
assert( gamma_move(board, 10, 6, 6) == 1 );
assert( gamma_free_fields(board, 1) == 206 );
assert( gamma_move(board, 2, 0, 17) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_golden_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 6, 3, 14) == 1 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 6, 13) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 14, 12) == 1 );
assert( gamma_golden_move(board, 10, 15, 5) == 0 );
assert( gamma_move(board, 3, 11, 14) == 1 );
assert( gamma_free_fields(board, 3) == 202 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 13, 8) == 1 );
assert( gamma_move(board, 6, 14, 17) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 12, 16) == 1 );
assert( gamma_free_fields(board, 7) == 200 );
assert( gamma_move(board, 8, 14, 13) == 1 );
assert( gamma_move(board, 9, 9, 14) == 1 );
assert( gamma_move(board, 10, 7, 10) == 0 );
assert( gamma_move(board, 1, 11, 3) == 1 );
assert( gamma_free_fields(board, 3) == 197 );


char* board602240758 = gamma_board(board);
assert( board602240758 != NULL );
assert( strcmp(board602240758, 
".......6....7.5\n"
"..1..4.5...810..\n"
"...6...6.9.37..\n"
".3..3.4.2.....8\n"
"....7.....3...9\n"
".10.9.....9...9.\n"
".......3...4...\n"
"...9.6.......78\n"
".7...........5.\n"
"...10.....3.....\n"
"..1...10.....5.8\n"
"..109..10.2......\n"
".........36....\n"
".6...4..2..1.6.\n"
"........3..1...\n"
".......44.....3\n"
"......65....1..\n") == 0);
free(board602240758);
board602240758 = NULL;
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_move(board, 7, 15, 8) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 9, 9, 13) == 1 );
assert( gamma_free_fields(board, 1) == 194 );
assert( gamma_move(board, 2, 9, 17) == 0 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_free_fields(board, 5) == 194 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 7, 10, 9) == 1 );
assert( gamma_free_fields(board, 7) == 193 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 5, 8) == 0 );
assert( gamma_move(board, 9, 5, 12) == 1 );
assert( gamma_golden_move(board, 9, 13, 8) == 1 );
assert( gamma_move(board, 10, 8, 16) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 16, 14) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 14, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_move(board, 6, 12, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 10, 6) == 1 );
assert( gamma_move(board, 8, 11, 0) == 1 );
assert( gamma_move(board, 9, 0, 17) == 0 );
assert( gamma_move(board, 10, 7, -1) == 0 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 15, 9) == 0 );
assert( gamma_move(board, 4, 8, 12) == 1 );
assert( gamma_move(board, 5, 1, 16) == 1 );
assert( gamma_move(board, 6, 15, 0) == 0 );
assert( gamma_move(board, 9, 5, 6) == 1 );
assert( gamma_move(board, 10, 8, 5) == 0 );
assert( gamma_move(board, 1, -1, 10) == 0 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_free_fields(board, 3) == 180 );
assert( gamma_move(board, 5, 2, -1) == 0 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_move(board, 7, 12, 12) == 1 );
assert( gamma_move(board, 8, 1, 17) == 0 );
assert( gamma_move(board, 9, 8, 9) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 9, 15) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 5, 15, 12) == 0 );
assert( gamma_move(board, 6, 11, 10) == 0 );
assert( gamma_free_fields(board, 7) == 173 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 9, 1, 13) == 0 );


char* board954076386 = gamma_board(board);
assert( board954076386 != NULL );
assert( strcmp(board954076386, 
".5.....610...7.5\n"
"..1..4.5.1.810..\n"
"...6...6.9.37..\n"
".3..3.4.29....8\n"
"....79..4.3.7.9\n"
".10.9.....9...9.\n"
".......3...4...\n"
"6..9.6..9.7..78\n"
"27...........9.\n"
"...10.4...3.....\n"
"..1..910...7.5.8\n"
"..109..1052.3.6..\n"
".1.....2.36....\n"
".6...4..2.51.63\n"
"28......3..1...\n"
".......44.....3\n"
"......65.6.81..\n") == 0);
free(board954076386);
board954076386 = NULL;
assert( gamma_move(board, 10, 1, 9) == 1 );
assert( gamma_move(board, 1, 8, 9) == 0 );


char* board652115952 = gamma_board(board);
assert( board652115952 != NULL );
assert( strcmp(board652115952, 
".5.....610...7.5\n"
"..1..4.5.1.810..\n"
"...6...6.9.37..\n"
".3..3.4.29....8\n"
"....79..4.3.7.9\n"
".10.9.....9...9.\n"
".......3...4...\n"
"610.9.6..9.7..78\n"
"27...........9.\n"
"...10.4...3.....\n"
"..1..910...7.5.8\n"
"..109..1052.3.6..\n"
".1.....2.36....\n"
".6...4..2.51.63\n"
"28......3..1...\n"
".......44.....3\n"
"......65.6.81..\n") == 0);
free(board652115952);
board652115952 = NULL;
assert( gamma_move(board, 3, 14, 16) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_move(board, 5, 14, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 7, 0, 12) == 1 );
assert( gamma_move(board, 9, 8, 17) == 0 );
assert( gamma_move(board, 10, 10, 0) == 1 );
assert( gamma_free_fields(board, 10) == 168 );
assert( gamma_golden_move(board, 10, 5, 3) == 1 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_move(board, 4, 4, -1) == 0 );
assert( gamma_move(board, 6, 12, 11) == 1 );
assert( gamma_move(board, 7, 12, 12) == 0 );


char* board308526552 = gamma_board(board);
assert( board308526552 != NULL );
assert( strcmp(board308526552, 
".5.....610...7.5\n"
"..1..4.5.1.810..\n"
"...6...6.9.37..\n"
".3..3.4.29....8\n"
"7...79..4.3.7.9\n"
".10.9.....9..69.\n"
".......3...4...\n"
"610.9.6..937..78\n"
"27...........9.\n"
"...10.4...3.....\n"
"..1..910...7.5.8\n"
"..109..1052.3.6..\n"
".1.....2.36....\n"
".6...10..2.51.63\n"
"28......3..1..5\n"
".......44.....3\n"
"......65.61081..\n") == 0);
free(board308526552);
board308526552 = NULL;
assert( gamma_move(board, 8, 14, 11) == 1 );
assert( gamma_move(board, 9, 0, 6) == 1 );
assert( gamma_move(board, 10, 3, 15) == 1 );
assert( gamma_free_fields(board, 10) == 163 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 9, 15) == 0 );
assert( gamma_golden_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 8, 1, 5) == 1 );
assert( gamma_move(board, 9, -1, 1) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_golden_move(board, 1, 13, 4) == 0 );
assert( gamma_move(board, 2, 15, 14) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board942727415 = gamma_board(board);
assert( board942727415 != NULL );
assert( strcmp(board942727415, 
".5.....610...7.5\n"
"..110.4.5.1.810..\n"
"...6...6.9.37..\n"
".3..3.4.29....8\n"
"7...79..4.3.7.9\n"
".10.9.5...9..698\n"
".......3...4...\n"
"610.9.6..937..78\n"
"27...........9.\n"
"...10.2...3.....\n"
"9.1..910...7.5.8\n"
".8109..1052.3.6..\n"
".1.....2.36....\n"
"36..110..2.51.63\n"
"28......3..1..5\n"
".......44.....3\n"
"......65.61081..\n") == 0);
free(board942727415);
board942727415 = NULL;
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_free_fields(board, 3) == 158 );
assert( gamma_free_fields(board, 4) == 158 );


char* board210408912 = gamma_board(board);
assert( board210408912 != NULL );
assert( strcmp(board210408912, 
".5.....610...7.5\n"
"..110.4.5.1.810..\n"
"...6...6.9.37..\n"
".3..3.4.29....8\n"
"7...79..4.3.7.9\n"
".10.9.5...9..698\n"
".......3...4...\n"
"610.9.6..937..78\n"
"27...........9.\n"
"...10.2...3.....\n"
"9.1..910...7.5.8\n"
".8109..1052.3.6..\n"
".1.....2.36....\n"
"36..110..2.51.63\n"
"28......3..1..5\n"
"..3....44.....3\n"
"......65.61081..\n") == 0);
free(board210408912);
board210408912 = NULL;
assert( gamma_move(board, 5, 6, 15) == 1 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_free_fields(board, 7) == 157 );
assert( gamma_move(board, 8, 0, 11) == 1 );
assert( gamma_move(board, 9, 13, 8) == 0 );
assert( gamma_move(board, 10, 9, 17) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 13, 15) == 1 );
assert( gamma_free_fields(board, 4) == 154 );
assert( gamma_move(board, 5, 9, 17) == 0 );
assert( gamma_move(board, 8, 11, -1) == 0 );
assert( gamma_move(board, 10, 4, 7) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 4, -1, 15) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 15, 2) == 0 );


char* board841202735 = gamma_board(board);
assert( board841202735 != NULL );
assert( strcmp(board841202735, 
".5.....610...7.5\n"
"..110.455.1.8104.\n"
"...6...6.9.37..\n"
".3..3.4.29....8\n"
"7...79..4.3.7.9\n"
"810.9.5.3.9..698\n"
".......3...4...\n"
"610.9.6..937..78\n"
"27...........9.\n"
".3.10102...3.....\n"
"9.1..910...7.5.8\n"
"18109..1052.3.6..\n"
".1.....2.36....\n"
"36..110..2.51.63\n"
"28......3..1..5\n"
"..3....44.....3\n"
"......65.61081..\n") == 0);
free(board841202735);
board841202735 = NULL;
assert( gamma_move(board, 6, 12, 17) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );


char* board427818041 = gamma_board(board);
assert( board427818041 != NULL );
assert( strcmp(board427818041, 
".5.....610...7.5\n"
"..110.455.1.8104.\n"
"...6...6.9.37..\n"
".3..3.4.29....8\n"
"7...79..4.3.7.9\n"
"810.9.5.3.9..698\n"
".......3...4...\n"
"610.9.6..937..78\n"
"27...........9.\n"
".3.10102...3.....\n"
"9.1..910...7.5.8\n"
"18109..1052.3.6..\n"
".1.....2.36....\n"
"36..110..2.51.63\n"
"28......3..1..5\n"
"..3....44.....3\n"
"......65.61081..\n") == 0);
free(board427818041);
board427818041 = NULL;
assert( gamma_move(board, 7, 11, 0) == 0 );


char* board796420494 = gamma_board(board);
assert( board796420494 != NULL );
assert( strcmp(board796420494, 
".5.....610...7.5\n"
"..110.455.1.8104.\n"
"...6...6.9.37..\n"
".3..3.4.29....8\n"
"7...79..4.3.7.9\n"
"810.9.5.3.9..698\n"
".......3...4...\n"
"610.9.6..937..78\n"
"27...........9.\n"
".3.10102...3.....\n"
"9.1..910...7.5.8\n"
"18109..1052.3.6..\n"
".1.....2.36....\n"
"36..110..2.51.63\n"
"28......3..1..5\n"
"..3....44.....3\n"
"......65.61081..\n") == 0);
free(board796420494);
board796420494 = NULL;
assert( gamma_move(board, 9, 7, 13) == 1 );
assert( gamma_move(board, 10, 7, 0) == 0 );
assert( gamma_move(board, 2, 15, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 5, 4, 2) == 1 );


gamma_delete(board);

    return 0;
}
