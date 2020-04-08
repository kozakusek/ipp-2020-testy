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
uuid: 627612601
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(16, 14, 12, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 16, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 10) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 14, 13) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 7) == 1 );
assert( gamma_move(board, 8, 9, 13) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 11, 9, 7) == 0 );
assert( gamma_free_fields(board, 11) == 218 );
assert( gamma_free_fields(board, 12) == 218 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 3, 10, 11) == 1 );
assert( gamma_move(board, 4, 2, 13) == 1 );
assert( gamma_move(board, 6, 6, 13) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 8, 6, -1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 14) == 0 );
assert( gamma_move(board, 10, 10, 10) == 1 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_free_fields(board, 10) == 214 );
assert( gamma_move(board, 11, 5, 14) == 0 );


char* board717678233 = gamma_board(board);
assert( board717678233 != NULL );
assert( strcmp(board717678233, 
"..4...6..8....6.\n"
"................\n"
"..........3.....\n"
".......5..10.....\n"
"................\n"
"................\n"
"......3..7......\n"
"................\n"
"................\n"
"................\n"
".1..............\n"
"................\n"
"................\n"
"................\n") == 0);
free(board717678233);
board717678233 = NULL;
assert( gamma_move(board, 1, 16, 13) == 0 );
assert( gamma_free_fields(board, 1) == 214 );
assert( gamma_move(board, 2, 2, 14) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 6, 9, 5) == 1 );
assert( gamma_move(board, 7, 4, 13) == 1 );
assert( gamma_move(board, 9, 11, 14) == 0 );
assert( gamma_move(board, 11, 8, 0) == 1 );
assert( gamma_free_fields(board, 12) == 209 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 8, 9, 1) == 1 );
assert( gamma_move(board, 9, 16, 6) == 0 );
assert( gamma_move(board, 10, -1, 2) == 0 );
assert( gamma_move(board, 11, 2, 8) == 1 );
assert( gamma_move(board, 12, 3, 12) == 1 );
assert( gamma_move(board, 1, 8, 12) == 1 );
assert( gamma_free_fields(board, 1) == 204 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_free_fields(board, 2) == 203 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 12) == 1 );
assert( gamma_free_fields(board, 4) == 202 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_golden_move(board, 6, 10, 10) == 1 );
assert( gamma_move(board, 7, 14, 5) == 1 );
assert( gamma_move(board, 8, 6, 10) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 3, 1) == 1 );
assert( gamma_move(board, 11, 7, 13) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 6, 1) == 1 );
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 16, 1) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_free_fields(board, 4) == 196 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_move(board, 6, 12, 14) == 0 );
assert( gamma_move(board, 8, 8, 3) == 1 );
assert( gamma_move(board, 9, 9, 4) == 1 );
assert( gamma_move(board, 10, 3, 14) == 0 );
assert( gamma_move(board, 11, 6, 7) == 0 );
assert( gamma_move(board, 12, 2, 12) == 1 );
assert( gamma_free_fields(board, 1) == 193 );


char* board131384763 = gamma_board(board);
assert( board131384763 != NULL );
assert( strcmp(board131384763, 
"..4.7.611.8....6.\n"
"..1212..3.1.......\n"
"..........3.....\n"
"......85..6.....\n"
".....2..........\n"
"..11.............\n"
"2.....3..7......\n"
"................\n"
".........6....7.\n"
"......4..9......\n"
"41......8.......\n"
".......5........\n"
"...10..12..8......\n"
"........11.......\n") == 0);
free(board131384763);
board131384763 = NULL;
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_move(board, 6, 5, 14) == 0 );
assert( gamma_move(board, 7, 11, 8) == 1 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_free_fields(board, 9) == 190 );
assert( gamma_move(board, 10, 14, 11) == 1 );
assert( gamma_move(board, 11, 4, 8) == 1 );
assert( gamma_move(board, 12, 0, 3) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 1, 13) == 1 );


char* board159622388 = gamma_board(board);
assert( board159622388 != NULL );
assert( strcmp(board159622388, 
".34.7.611.8....6.\n"
"..1212..3.1.......\n"
"..........3...10.\n"
"......85..6.....\n"
"..2..2..........\n"
"..11.11......7....\n"
"2.....3..7......\n"
"........2.......\n"
".........6....7.\n"
"......4..9......\n"
"41......8.......\n"
".......5........\n"
"...10..12..8......\n"
".3......11.......\n") == 0);
free(board159622388);
board159622388 = NULL;
assert( gamma_move(board, 5, 0, 10) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 10, 11, 14) == 0 );
assert( gamma_move(board, 11, 13, 1) == 1 );
assert( gamma_move(board, 12, 10, 8) == 1 );
assert( gamma_move(board, 1, 5, 12) == 1 );
assert( gamma_free_fields(board, 1) == 180 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 11) == 0 );
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, -1, 10) == 0 );


char* board637950548 = gamma_board(board);
assert( board637950548 != NULL );
assert( strcmp(board637950548, 
".34.7.611.8....6.\n"
"..1212.13.1.......\n"
"..........3...10.\n"
"5.....85..6.....\n"
"..2..2..........\n"
"..11.11.....127....\n"
"2.....3..7......\n"
"........2.......\n"
"6....8...6....7.\n"
"...3..4..9......\n"
"41......8.......\n"
".......5........\n"
"...10..12..8...11..\n"
".3......11.......\n") == 0);
free(board637950548);
board637950548 = NULL;
assert( gamma_move(board, 8, 13, 7) == 1 );
assert( gamma_move(board, 10, 7, 7) == 1 );
assert( gamma_free_fields(board, 10) == 177 );
assert( gamma_move(board, 11, 12, 5) == 1 );
assert( gamma_move(board, 12, 10, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 13) == 0 );
assert( gamma_move(board, 3, 12, 14) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 12, 14) == 0 );
assert( gamma_golden_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 8, 6, 9) == 1 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 3, 7) == 1 );
assert( gamma_move(board, 10, 2, -1) == 0 );
assert( gamma_move(board, 11, 9, 10) == 1 );
assert( gamma_move(board, 12, 1, 3) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 2, 15, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_free_fields(board, 3) == 171 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_golden_move(board, 8, 11, 10) == 0 );
assert( gamma_move(board, 9, 3, 9) == 1 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_move(board, 11, 11, 4) == 1 );


char* board205637037 = gamma_board(board);
assert( board205637037 != NULL );
assert( strcmp(board205637037, 
".34.7.611.8....6.\n"
"..1212.13.1.......\n"
"..........3...10.\n"
"5.....85.116.....\n"
"..29.28.........\n"
"..11.11.....127...2\n"
"2..9..310.7...8..\n"
"........2.......\n"
"6....8...612.11.7.\n"
"...3..4..9.11....\n"
"41......8.......\n"
"...6...5........\n"
"...10..12..8.5.11..\n"
".3......11.......\n") == 0);
free(board205637037);
board205637037 = NULL;
assert( gamma_move(board, 12, 13, 3) == 1 );
assert( gamma_move(board, 1, 15, 3) == 1 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_move(board, 3, 5, 13) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_free_fields(board, 4) == 162 );
assert( gamma_move(board, 5, 2, -1) == 0 );
assert( gamma_move(board, 6, 14, 10) == 1 );
assert( gamma_move(board, 7, -1, 10) == 0 );
assert( gamma_move(board, 8, 5, 4) == 1 );
assert( gamma_move(board, 9, 13, 7) == 0 );
assert( gamma_move(board, 10, 1, -1) == 0 );
assert( gamma_move(board, 11, 7, 5) == 1 );
assert( gamma_move(board, 12, 6, 0) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 14, 6) == 1 );
assert( gamma_move(board, 5, 13, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 15, 11) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 9, 8, 4) == 1 );
assert( gamma_free_fields(board, 10) == 152 );
assert( gamma_free_fields(board, 11) == 152 );
assert( gamma_move(board, 12, 0, 6) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_free_fields(board, 1) == 151 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 13, 13) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 7, 2, 12) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 14, 2) == 1 );
assert( gamma_golden_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 10, 10, 14) == 0 );
assert( gamma_move(board, 1, 16, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_move(board, 4, 16, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 13, 5) == 1 );
assert( gamma_move(board, 6, 5, 10) == 1 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_golden_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 8, 8, 11) == 1 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 10, 9, 8) == 1 );
assert( gamma_free_fields(board, 10) == 144 );


char* board336381794 = gamma_board(board);
assert( board336381794 != NULL );
assert( strcmp(board336381794, 
".34.73611.8...36.\n"
"..1212213.1.......\n"
"........8.3...106\n"
"5....685.116...6.\n"
"..29.28..3......\n"
"..11.11....10127.5.2\n"
"2..9..310.7...8..\n"
"12.......2.....4.\n"
"6...38.11.612.1157.\n"
"4..3.84.99.11....\n"
"41......8....12.1\n"
"...6...5......9.\n"
".2.10..12..8.5.11..\n"
".3....12.11.......\n") == 0);
free(board336381794);
board336381794 = NULL;
assert( gamma_move(board, 11, 15, 14) == 0 );


char* board331511365 = gamma_board(board);
assert( board331511365 != NULL );
assert( strcmp(board331511365, 
".34.73611.8...36.\n"
"..1212213.1.......\n"
"........8.3...106\n"
"5....685.116...6.\n"
"..29.28..3......\n"
"..11.11....10127.5.2\n"
"2..9..310.7...8..\n"
"12.......2.....4.\n"
"6...38.11.612.1157.\n"
"4..3.84.99.11....\n"
"41......8....12.1\n"
"...6...5......9.\n"
".2.10..12..8.5.11..\n"
".3....12.11.......\n") == 0);
free(board331511365);
board331511365 = NULL;
assert( gamma_move(board, 12, 16, 3) == 0 );
assert( gamma_free_fields(board, 1) == 144 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 4, 0, 12) == 1 );
assert( gamma_move(board, 5, 16, 11) == 0 );
assert( gamma_move(board, 6, 16, 8) == 0 );


char* board384917734 = gamma_board(board);
assert( board384917734 != NULL );
assert( strcmp(board384917734, 
".34.73611.8...36.\n"
"4.1212213.1.......\n"
"........8.3...106\n"
"5....685.116...6.\n"
"..29.28..3......\n"
"..11.11....10127.5.2\n"
"2..9..310.7...8..\n"
"12.......2.....4.\n"
"6...38.11.612.1157.\n"
"4..3.84.99.11....\n"
"41......8....12.1\n"
"...6...5......9.\n"
".2.10..12..8.5.11..\n"
".3....12.11.......\n") == 0);
free(board384917734);
board384917734 = NULL;
assert( gamma_move(board, 7, 1, 8) == 1 );
assert( gamma_free_fields(board, 7) == 142 );


char* board276203173 = gamma_board(board);
assert( board276203173 != NULL );
assert( strcmp(board276203173, 
".34.73611.8...36.\n"
"4.1212213.1.......\n"
"........8.3...106\n"
"5....685.116...6.\n"
"..29.28..3......\n"
".711.11....10127.5.2\n"
"2..9..310.7...8..\n"
"12.......2.....4.\n"
"6...38.11.612.1157.\n"
"4..3.84.99.11....\n"
"41......8....12.1\n"
"...6...5......9.\n"
".2.10..12..8.5.11..\n"
".3....12.11.......\n") == 0);
free(board276203173);
board276203173 = NULL;
assert( gamma_move(board, 8, 1, 13) == 0 );
assert( gamma_move(board, 9, 5, 10) == 0 );
assert( gamma_move(board, 10, 12, 7) == 1 );
assert( gamma_move(board, 11, 0, 2) == 1 );
assert( gamma_move(board, 12, 9, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 9) == 1 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_free_fields(board, 3) == 139 );
assert( gamma_move(board, 5, 16, -1) == 0 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 8, 14, 14) == 0 );
assert( gamma_free_fields(board, 8) == 139 );
assert( gamma_move(board, 9, 15, 13) == 1 );


char* board878261452 = gamma_board(board);
assert( board878261452 != NULL );
assert( strcmp(board878261452, 
".34.73611.8...369\n"
"4.1212213.1.......\n"
"........8.3...106\n"
"5....685.116...6.\n"
"..29.28..3....2.\n"
".711.11....10127.5.2\n"
"2..9..310.7..108..\n"
"12.......2.....4.\n"
"6...38.11.612.1157.\n"
"4..3.84.99.11....\n"
"41......8....12.1\n"
"11..6...5......9.\n"
".2.10..12..8.5.11..\n"
".3....12.11.......\n") == 0);
free(board878261452);
board878261452 = NULL;
assert( gamma_move(board, 10, 3, 14) == 0 );
assert( gamma_golden_move(board, 10, 13, 2) == 0 );
assert( gamma_move(board, 11, 16, 10) == 0 );
assert( gamma_move(board, 12, 3, 9) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 6, 8, 10) == 1 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 14, 8) == 1 );
assert( gamma_golden_move(board, 9, 6, 6) == 0 );


char* board322694221 = gamma_board(board);
assert( board322694221 != NULL );
assert( strcmp(board322694221, 
".34.73611.8...369\n"
"4.1212213.1.......\n"
"........8.3...106\n"
"5....6856116...6.\n"
"..29.28..3....2.\n"
".711.11....10127.592\n"
"2..9..310.7..108..\n"
"12.......2.....4.\n"
"6...38511.612.1157.\n"
"4..3.84.99.11....\n"
"41......8....12.1\n"
"11..6...5......9.\n"
".2.10..12..8.5.11..\n"
".3....12.11.......\n") == 0);
free(board322694221);
board322694221 = NULL;
assert( gamma_move(board, 10, 16, 6) == 0 );
assert( gamma_move(board, 11, 12, -1) == 0 );
assert( gamma_move(board, 12, 3, 5) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_free_fields(board, 1) == 134 );
assert( gamma_move(board, 2, -1, 9) == 0 );


char* board445863484 = gamma_board(board);
assert( board445863484 != NULL );
assert( strcmp(board445863484, 
".34.73611.8...369\n"
"4.1212213.1.......\n"
"........8.3...106\n"
"5....6856116...6.\n"
"..29.28..3....2.\n"
".711.11....10127.592\n"
"2..9..310.7..108..\n"
"12.......2.....4.\n"
"6..1238511.612.1157.\n"
"4..3.84.99.11....\n"
"41......8....12.1\n"
"11..6...5......9.\n"
".2.10..12..8.5.11..\n"
".3....12.11.......\n") == 0);
free(board445863484);
board445863484 = NULL;
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_free_fields(board, 4) == 133 );
assert( gamma_move(board, 6, 11, 2) == 1 );


char* board745964882 = gamma_board(board);
assert( board745964882 != NULL );
assert( strcmp(board745964882, 
".34.73611.8...369\n"
"4.1212213.1.......\n"
"........8.3...106\n"
"5....6856116...6.\n"
"..29.28..3....2.\n"
".711.11...410127.592\n"
"2..9..310.7..108..\n"
"12.......2.....4.\n"
"6..1238511.612.1157.\n"
"4..3.84.99.11....\n"
"41......8....12.1\n"
"11..6...5...6..9.\n"
".2.10..12..8.5.11..\n"
".3....12.11.......\n") == 0);
free(board745964882);
board745964882 = NULL;
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 10, 14, 4) == 1 );
assert( gamma_move(board, 11, 11, 7) == 1 );
assert( gamma_move(board, 12, 13, 0) == 1 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 16, 9) == 0 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 9) == 1 );
assert( gamma_move(board, 8, 13, 1) == 0 );
assert( gamma_move(board, 9, 1, 11) == 1 );
assert( gamma_move(board, 10, 6, 7) == 0 );
assert( gamma_free_fields(board, 10) == 124 );
assert( gamma_move(board, 11, 9, 7) == 0 );
assert( gamma_move(board, 12, 4, 4) == 1 );
assert( gamma_move(board, 1, 13, 8) == 0 );
assert( gamma_free_fields(board, 1) == 123 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_free_fields(board, 2) == 123 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 13, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );


char* board894865857 = gamma_board(board);
assert( board894865857 != NULL );
assert( strcmp(board894865857, 
".34.73611.8...369\n"
"4.1212213.1.......\n"
".9......8.3...106\n"
"5....6856116...6.\n"
"..29.28..36...2.\n"
".711.115..410127.592\n"
"2..9..310.7.11108..\n"
"12....5..2.....4.\n"
"6..1238511.612.1157.\n"
"4..31284.99.11..10.\n"
"41......8....12.1\n"
"11..6...5...6..9.\n"
".2.10..12..8.5.11..\n"
"93.3..12.11....12..\n") == 0);
free(board894865857);
board894865857 = NULL;
assert( gamma_move(board, 7, 11, 2) == 0 );
assert( gamma_free_fields(board, 7) == 122 );
assert( gamma_move(board, 8, 14, 10) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 10, 10, 10) == 0 );
assert( gamma_move(board, 11, 7, 9) == 0 );
assert( gamma_move(board, 12, 1, 3) == 0 );
assert( gamma_move(board, 1, 16, 6) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 16, 0) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );


char* board721441711 = gamma_board(board);
assert( board721441711 != NULL );
assert( strcmp(board721441711, 
".34.73611.8...369\n"
"4.1212213.1.......\n"
".9......8.3...106\n"
"5....6856116...6.\n"
"..29.28..36...2.\n"
".711.115..410127.592\n"
"2..9..310.7.11108..\n"
"12....5..2.....4.\n"
"6..1238511.612.1157.\n"
"4..31284.99.11..10.\n"
"41......8....12.1\n"
"11..6...5...6..9.\n"
".2.102.12..8.5.11..\n"
"93.3..12.11....12..\n") == 0);
free(board721441711);
board721441711 = NULL;
assert( gamma_move(board, 9, 11, 0) == 1 );
assert( gamma_move(board, 11, 8, 6) == 0 );
assert( gamma_free_fields(board, 12) == 120 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 15, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 6, 10, 2) == 1 );
assert( gamma_move(board, 8, 13, 6) == 1 );
assert( gamma_free_fields(board, 8) == 117 );
assert( gamma_move(board, 9, 12, 1) == 1 );
assert( gamma_move(board, 10, 0, 12) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 7, 1) == 1 );
assert( gamma_golden_move(board, 12, 8, 1) == 0 );
assert( gamma_move(board, 1, 12, 12) == 1 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 4, 0, 11) == 1 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_golden_move(board, 7, 12, 0) == 0 );
assert( gamma_move(board, 9, 7, 0) == 1 );
assert( gamma_golden_move(board, 9, 5, 5) == 0 );
assert( gamma_move(board, 11, 5, 3) == 0 );
assert( gamma_free_fields(board, 11) == 23 );


char* board802812659 = gamma_board(board);
assert( board802812659 != NULL );
assert( strcmp(board802812659, 
".34.73611.8...369\n"
"4.1212213.1...1...\n"
"49......8.3...106\n"
"5....6856116...6.\n"
"..29.28..36...2.\n"
".711.115..410127.592\n"
"2..9..310.7.11108..\n"
"12....5..2....841\n"
"6..1238511.612.1157.\n"
"4..31284.99.11..10.\n"
"41......8....12.1\n"
"11..6...5..66..9.\n"
".2.102.1212.8.5911..\n"
"93.3..12911..9.12..\n") == 0);
free(board802812659);
board802812659 = NULL;
assert( gamma_move(board, 12, 13, 2) == 1 );
assert( gamma_move(board, 1, 14, 11) == 0 );
assert( gamma_free_fields(board, 1) == 111 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_free_fields(board, 2) == 111 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 6, -1, 6) == 0 );
assert( gamma_move(board, 8, 8, 5) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 7, 0) == 0 );
assert( gamma_move(board, 12, 12, 3) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 14, 4) == 0 );
assert( gamma_move(board, 4, 11, 9) == 1 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_free_fields(board, 5) == 107 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 13, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 14, 9) == 0 );
assert( gamma_free_fields(board, 8) == 106 );
assert( gamma_move(board, 10, 15, 11) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 1, 11) == 0 );
assert( gamma_move(board, 12, -1, 5) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 10, 4) == 1 );
assert( gamma_move(board, 9, 6, 8) == 0 );
assert( gamma_move(board, 10, 7, 11) == 1 );
assert( gamma_move(board, 11, 11, 11) == 0 );
assert( gamma_move(board, 12, 4, 11) == 1 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_free_fields(board, 2) == 101 );


char* board815319081 = gamma_board(board);
assert( board815319081 != NULL );
assert( strcmp(board815319081, 
".34.73611.8...369\n"
"4.1212213.1...1...\n"
"49..12..108.3...106\n"
"5....6856116...6.\n"
".129.28..364..2.\n"
".711.115..410127.592\n"
"2..9..310.7.11108..\n"
"12....5..21...841\n"
"6..12385118612.1157.\n"
"4..31284.99811.710.\n"
"41......8...1212.1\n"
"11..6.2.5..66.129.\n"
".2.102.1212.8.5911..\n"
"93.3..12911..9.12..\n") == 0);
free(board815319081);
board815319081 = NULL;
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 6, 14, 12) == 1 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board698207142 = gamma_board(board);
assert( board698207142 != NULL );
assert( strcmp(board698207142, 
".34.73611.8...369\n"
"4.1212213.1...1.6.\n"
"49..12..108.3...106\n"
"5....6856116...6.\n"
".129.28..364..2.\n"
".711.115..410127.592\n"
"2..9..310.7.11108..\n"
"12....5..21...841\n"
"6..12385118612.1157.\n"
"4..31284.99811.710.\n"
"41......8...1212.1\n"
"11..6.2.5..66.129.\n"
".2.102.1212.8.5911..\n"
"93.3..12911..9.12..\n") == 0);
free(board698207142);
board698207142 = NULL;
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_free_fields(board, 8) == 100 );


char* board423934604 = gamma_board(board);
assert( board423934604 != NULL );
assert( strcmp(board423934604, 
".34.73611.8...369\n"
"4.1212213.1...1.6.\n"
"49..12..108.3...106\n"
"5....6856116...6.\n"
".129.28..364..2.\n"
".711.115..410127.592\n"
"2..9..310.7.11108..\n"
"12....5..21...841\n"
"6..12385118612.1157.\n"
"4..31284.99811.710.\n"
"41......8...1212.1\n"
"11..6.2.5..66.129.\n"
".2.102.1212.8.5911..\n"
"93.3..12911..9.12..\n") == 0);
free(board423934604);
board423934604 = NULL;
assert( gamma_move(board, 9, 10, 3) == 0 );
assert( gamma_move(board, 10, 14, 6) == 0 );
assert( gamma_move(board, 11, 9, 2) == 0 );
assert( gamma_busy_fields(board, 11) == 11 );
assert( gamma_golden_move(board, 11, 8, 15) == 0 );
assert( gamma_move(board, 12, 12, 6) == 1 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 4, 12, 2) == 1 );
assert( gamma_free_fields(board, 4) == 98 );
assert( gamma_move(board, 5, 16, -1) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 6, 11) == 1 );
assert( gamma_move(board, 10, -1, 12) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_golden_move(board, 10, 4, 14) == 0 );
assert( gamma_busy_fields(board, 11) == 11 );
assert( gamma_move(board, 12, 6, 14) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 16, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 6, 9, 10) == 0 );


char* board451634210 = gamma_board(board);
assert( board451634210 != NULL );
assert( strcmp(board451634210, 
".34.73611.8...369\n"
"4.1212213.1...1.6.\n"
"49..12.8108.3...106\n"
"5....6856116...6.\n"
".129.28..364..2.\n"
".711.115..410127.592\n"
"2..9..310.7.11108..\n"
"12....5..21..12841\n"
"6..12385118612.1157.\n"
"4..31284.99811.710.\n"
"41......8...1212.1\n"
"117.6.2.5..664129.\n"
".2.102.1212.8.5911..\n"
"93.3..12911..9.12..\n") == 0);
free(board451634210);
board451634210 = NULL;
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 9, 15, 7) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 16, 13) == 0 );
assert( gamma_busy_fields(board, 11) == 11 );
assert( gamma_move(board, 12, 5, -1) == 0 );


char* board577830501 = gamma_board(board);
assert( board577830501 != NULL );
assert( strcmp(board577830501, 
".34.73611.8...369\n"
"4.1212213.1...1.6.\n"
"49..12.8108.3...106\n"
"5....6856116...6.\n"
".129.28..364..2.\n"
".711.115..410127.592\n"
"2..9..310.7.11108..\n"
"12....5.721..12841\n"
"6..12385118612.1157.\n"
"4..31284.99811.710.\n"
"41......8...1212.1\n"
"117.6.2.5..664129.\n"
"82.102.1212.8.5911..\n"
"93.3..12911..9.12..\n") == 0);
free(board577830501);
board577830501 = NULL;
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, -1, 12) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_free_fields(board, 6) == 16 );
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_move(board, 10, -1, 9) == 0 );
assert( gamma_free_fields(board, 10) == 94 );
assert( gamma_move(board, 12, 13, 5) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );


char* board894832806 = gamma_board(board);
assert( board894832806 != NULL );
assert( strcmp(board894832806, 
".34.73611.8...369\n"
"4.1212213.1...1.6.\n"
"49..12.8108.3...106\n"
"5....6856116...6.\n"
".129.28..364..2.\n"
".711.115..410127.592\n"
"2..9..310.7.11108..\n"
"12....5.721..12841\n"
"6..12385118612.1157.\n"
"4..31284.99811.710.\n"
"41......8...1212.1\n"
"117.6.2.5..664129.\n"
"82.102.1212.8.5911..\n"
"93.3..12911..9.12..\n") == 0);
free(board894832806);
board894832806 = NULL;
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 14, 9) == 0 );
assert( gamma_free_fields(board, 7) == 94 );
assert( gamma_move(board, 8, -1, 2) == 0 );
assert( gamma_free_fields(board, 9) == 18 );
assert( gamma_move(board, 10, 8, 8) == 0 );
assert( gamma_move(board, 11, 10, 3) == 0 );
assert( gamma_move(board, 12, 12, 6) == 0 );
assert( gamma_golden_move(board, 12, 7, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 11, 5) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 7, 12, 4) == 1 );


char* board368624979 = gamma_board(board);
assert( board368624979 != NULL );
assert( strcmp(board368624979, 
".34.73611.8...369\n"
"4.1212213.1...1.6.\n"
"49..12.8108.3...106\n"
"5....6856116...6.\n"
".129.28..364..2.\n"
".711.115..410127.592\n"
"2..9..310.7.11108..\n"
"12....5.721..12841\n"
"6..1238511861241157.\n"
"4..31284.998117710.\n"
"41......8...1212.1\n"
"117.6.2.5..664129.\n"
"82.102.1212.8.5911..\n"
"9353..12911..9.12..\n") == 0);
free(board368624979);
board368624979 = NULL;
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 14 );
assert( gamma_move(board, 9, 7, -1) == 0 );
assert( gamma_free_fields(board, 9) == 18 );
assert( gamma_move(board, 10, 2, 9) == 0 );
assert( gamma_move(board, 11, -1, -1) == 0 );


char* board158024770 = gamma_board(board);
assert( board158024770 != NULL );
assert( strcmp(board158024770, 
".34.73611.8...369\n"
"4.1212213.1...1.6.\n"
"49..12.8108.3...106\n"
"5....6856116...6.\n"
".129.28..364..2.\n"
".711.115..410127.592\n"
"2..9..310.7.11108..\n"
"12....5.721..12841\n"
"6..1238511861241157.\n"
"4..31284.998117710.\n"
"41......8...1212.1\n"
"117.6.2.5..664129.\n"
"82.102.1212.8.5911..\n"
"9353..12911..9.12..\n") == 0);
free(board158024770);
board158024770 = NULL;
assert( gamma_move(board, 12, 14, 3) == 1 );
assert( gamma_busy_fields(board, 12) == 17 );
assert( gamma_free_fields(board, 12) == 20 );
assert( gamma_free_fields(board, 1) == 90 );
assert( gamma_move(board, 2, 16, 8) == 0 );


char* board345781307 = gamma_board(board);
assert( board345781307 != NULL );
assert( strcmp(board345781307, 
".34.73611.8...369\n"
"4.1212213.1...1.6.\n"
"49..12.8108.3...106\n"
"5....6856116...6.\n"
".129.28..364..2.\n"
".711.115..410127.592\n"
"2..9..310.7.11108..\n"
"12....5.721..12841\n"
"6..1238511861241157.\n"
"4..31284.998117710.\n"
"41......8...1212121\n"
"117.6.2.5..664129.\n"
"82.102.1212.8.5911..\n"
"9353..12911..9.12..\n") == 0);
free(board345781307);
board345781307 = NULL;
assert( gamma_move(board, 3, 15, 2) == 0 );
assert( gamma_golden_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 16, 14) == 0 );
assert( gamma_move(board, 5, -1, 3) == 0 );
assert( gamma_free_fields(board, 5) == 90 );


char* board486887432 = gamma_board(board);
assert( board486887432 != NULL );
assert( strcmp(board486887432, 
".34.73611.8...369\n"
"4.1212213.1...1.6.\n"
"49..12.8108.3...106\n"
"5....6856116...6.\n"
".129.28..364..2.\n"
".711.115..410127.592\n"
"2..9..310.7.11108..\n"
"12....5.721..12841\n"
"6..1238511861241157.\n"
"4..31284.998117710.\n"
"41......8...1212121\n"
"117.6.2.5..664129.\n"
"82.102.1212.8.5911..\n"
"9353..12911..9.12..\n") == 0);
free(board486887432);
board486887432 = NULL;
assert( gamma_move(board, 6, 1, 14) == 0 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_free_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 10) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_free_fields(board, 9) == 17 );
assert( gamma_move(board, 10, 16, 5) == 0 );
assert( gamma_busy_fields(board, 12) == 17 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 14, 4) == 0 );
assert( gamma_move(board, 3, -1, 11) == 0 );
assert( gamma_move(board, 4, 15, 5) == 1 );
assert( gamma_free_fields(board, 4) == 87 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 12, 9, -1) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 15, 12) == 1 );
assert( gamma_golden_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 4, 15, 3) == 0 );
assert( gamma_free_fields(board, 4) == 86 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 15 );
assert( gamma_free_fields(board, 8) == 20 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 10, 10, 4) == 0 );
assert( gamma_move(board, 11, 6, 14) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 3, 14, 4) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 13, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 10, 13) == 1 );
assert( gamma_golden_move(board, 7, 7, 12) == 0 );
assert( gamma_move(board, 8, 3, 11) == 0 );
assert( gamma_busy_fields(board, 8) == 15 );
assert( gamma_free_fields(board, 8) == 18 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 12, 11) == 0 );
assert( gamma_move(board, 10, 5, 3) == 1 );
assert( gamma_free_fields(board, 10) == 83 );
assert( gamma_golden_possible(board, 10) == 1 );


char* board371388652 = gamma_board(board);
assert( board371388652 != NULL );
assert( strcmp(board371388652, 
".34.73611.87..369\n"
"4.1212213.1...1.61\n"
"49..12.8108.3...106\n"
"5.8..6856116...6.\n"
".129.282.364..2.\n"
".711.115..410127.592\n"
"2..9..310.7.11108..\n"
"12....5.721..12841\n"
"6..12385118612411574\n"
"4..31284.998117710.\n"
"41...10..8...1212121\n"
"11776.2.5..664129.\n"
"82.102.1212.8.5911..\n"
"9353..12911..9.12..\n") == 0);
free(board371388652);
board371388652 = NULL;
assert( gamma_busy_fields(board, 11) == 11 );
assert( gamma_move(board, 12, 2, 0) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 3, 12, 13) == 1 );
assert( gamma_move(board, 4, 3, 9) == 0 );


gamma_delete(board);

    return 0;
}
