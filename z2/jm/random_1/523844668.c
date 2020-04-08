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
uuid: 523844668
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(16, 14, 9, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 12, 13) == 1 );
assert( gamma_move(board, 2, 11, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 16, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_free_fields(board, 5) == 220 );
assert( gamma_move(board, 7, 16, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_free_fields(board, 7) == 220 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 14) == 0 );
assert( gamma_move(board, 9, 2, 0) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 16, 9) == 0 );
assert( gamma_move(board, 3, 9, 11) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_free_fields(board, 4) == 216 );
assert( gamma_golden_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );


char* board189240068 = gamma_board(board);
assert( board189240068 != NULL );
assert( strcmp(board189240068, 
"............1...\n"
"................\n"
".........3......\n"
"................\n"
"....4...........\n"
"....4...5.......\n"
"................\n"
"..5........2....\n"
"................\n"
"..1..6..........\n"
"................\n"
"................\n"
"................\n"
"..9.............\n") == 0);
free(board189240068);
board189240068 = NULL;
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_golden_move(board, 7, 6, 11) == 0 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 9, 13, 11) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 6, 9, 8) == 1 );
assert( gamma_move(board, 7, 5, 10) == 1 );
assert( gamma_move(board, 8, 8, 13) == 1 );
assert( gamma_move(board, 9, 15, 13) == 1 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 1, 8, 13) == 0 );


char* board183292820 = gamma_board(board);
assert( board183292820 != NULL );
assert( strcmp(board183292820, 
"........8...1..9\n"
"................\n"
".........3...9..\n"
"2....7..........\n"
"....4...........\n"
"....4...56......\n"
"................\n"
"..5........2....\n"
"8...1...........\n"
"..1..6..........\n"
"................\n"
"7..4............\n"
"................\n"
"..9.............\n") == 0);
free(board183292820);
board183292820 = NULL;
assert( gamma_move(board, 4, 13, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 14, 10) == 1 );
assert( gamma_move(board, 6, 12, 2) == 1 );
assert( gamma_golden_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 7, 16, 0) == 0 );


char* board153743702 = gamma_board(board);
assert( board153743702 != NULL );
assert( strcmp(board153743702, 
"........8...1..9\n"
"................\n"
".........3...9..\n"
"2....7........5.\n"
"....4...........\n"
"....4...56......\n"
"................\n"
"..5........2....\n"
"8...1...........\n"
"..1..6..........\n"
"................\n"
"7..4........64..\n"
"................\n"
"..9.............\n") == 0);
free(board153743702);
board153743702 = NULL;
assert( gamma_move(board, 8, 15, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 13, 5) == 1 );
assert( gamma_free_fields(board, 3) == 200 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 10) == 1 );
assert( gamma_golden_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 12, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 16, 0) == 0 );


char* board741081771 = gamma_board(board);
assert( board741081771 != NULL );
assert( strcmp(board741081771, 
"........8...1..9\n"
"................\n"
".........3...9..\n"
"2....7.....4..5.\n"
"....4...........\n"
"....4...56..6...\n"
"................\n"
"..5........2....\n"
"8...1........3..\n"
"..1..6..........\n"
"................\n"
"7..4........64..\n"
"................\n"
"..9.............\n") == 0);
free(board741081771);
board741081771 = NULL;
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_golden_move(board, 8, 5, 13) == 0 );
assert( gamma_move(board, 9, 3, 10) == 1 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board271237326 = gamma_board(board);
assert( board271237326 != NULL );
assert( strcmp(board271237326, 
"........8...1..9\n"
"................\n"
".........3...9..\n"
"2..9.7.....4..5.\n"
"....4...........\n"
"....4...56..6...\n"
"................\n"
"..5........2....\n"
"8...1........3..\n"
"..1..6..........\n"
"8...............\n"
"7..4........64..\n"
"................\n"
"..9.............\n") == 0);
free(board271237326);
board271237326 = NULL;
assert( gamma_move(board, 6, 2, 11) == 1 );
assert( gamma_move(board, 7, 9, 9) == 1 );
assert( gamma_move(board, 8, 12, 0) == 1 );
assert( gamma_move(board, 9, 6, 12) == 1 );
assert( gamma_move(board, 1, 13, 0) == 1 );
assert( gamma_move(board, 2, 15, 11) == 1 );


char* board252525538 = gamma_board(board);
assert( board252525538 != NULL );
assert( strcmp(board252525538, 
"........8...1..9\n"
"......9.........\n"
"..6......3...9.2\n"
"2..9.7.....4..5.\n"
"....4....7......\n"
"....4...56..6...\n"
"................\n"
"..5........2....\n"
"8...1........3..\n"
"..1..6..........\n"
"8...............\n"
"7..4........64..\n"
"................\n"
"..9.........81..\n") == 0);
free(board252525538);
board252525538 = NULL;
assert( gamma_move(board, 3, 14, 8) == 1 );
assert( gamma_move(board, 4, 7, 13) == 1 );
assert( gamma_move(board, 5, 7, 12) == 1 );
assert( gamma_move(board, 6, 14, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_free_fields(board, 7) == 186 );
assert( gamma_move(board, 8, 0, 7) == 1 );
assert( gamma_free_fields(board, 8) == 185 );
assert( gamma_move(board, 9, 5, 11) == 1 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_golden_move(board, 9, 12, 7) == 0 );
assert( gamma_move(board, 1, 16, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 9) == 1 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 5, 2, -1) == 0 );
assert( gamma_free_fields(board, 5) == 183 );


char* board625787815 = gamma_board(board);
assert( board625787815 != NULL );
assert( strcmp(board625787815, 
".......48...1..9\n"
"......95........\n"
"..6..9...3...9.2\n"
"2..9.7.....4..5.\n"
"....4....7..2...\n"
"....4...56..6.3.\n"
"87..............\n"
"..5........2....\n"
"8...1........3..\n"
"..1..6..........\n"
"8...............\n"
"7..4........64..\n"
"................\n"
"..9.........81..\n") == 0);
free(board625787815);
board625787815 = NULL;
assert( gamma_move(board, 7, 9, 1) == 1 );
assert( gamma_move(board, 8, 4, 12) == 1 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 11, -1) == 0 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_free_fields(board, 9) == 181 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 3, -1, 13) == 0 );
assert( gamma_free_fields(board, 3) == 180 );
assert( gamma_move(board, 6, -1, 8) == 0 );
assert( gamma_move(board, 8, 15, 4) == 1 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 2, 10, 9) == 1 );
assert( gamma_move(board, 3, 10, -1) == 0 );
assert( gamma_golden_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_free_fields(board, 6) == 176 );
assert( gamma_move(board, 7, 12, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_move(board, 9, 9, 0) == 1 );
assert( gamma_move(board, 1, 5, 14) == 0 );
assert( gamma_move(board, 2, 10, 5) == 1 );
assert( gamma_move(board, 3, 16, 10) == 0 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 5, 5, 6) == 1 );


char* board833243520 = gamma_board(board);
assert( board833243520 != NULL );
assert( strcmp(board833243520, 
".......48...1..9\n"
"....8.95........\n"
"..64.9...3...9.2\n"
"2..9.7.....4..5.\n"
"....4....72.2...\n"
"....4...56..6.3.\n"
"87..............\n"
".15..5.4...2....\n"
"8...1.....2..3..\n"
"..1..6......7..8\n"
"8.........5.....\n"
"7..4........64..\n"
".........7......\n"
".89......9..81..\n") == 0);
free(board833243520);
board833243520 = NULL;
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 7, -1, -1) == 0 );
assert( gamma_golden_move(board, 8, 10, 10) == 0 );
assert( gamma_move(board, 9, 4, 7) == 1 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_free_fields(board, 1) == 169 );
assert( gamma_move(board, 2, 16, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board796853234 = gamma_board(board);
assert( board796853234 != NULL );
assert( strcmp(board796853234, 
".......48...1..9\n"
"....8.95........\n"
"..64.9...3...9.2\n"
"2..9.7.....4..5.\n"
"....4....72.2...\n"
"....4...56..6.3.\n"
"87..9...........\n"
".15..5.4...2....\n"
"8...1.....2..3..\n"
"..1..6......7..8\n"
"8.........5.....\n"
"7..4........64..\n"
".........7......\n"
".89......9..81..\n") == 0);
free(board796853234);
board796853234 = NULL;
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_golden_move(board, 7, 11, 9) == 0 );
assert( gamma_move(board, 1, 3, 12) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, -1, 10) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_free_fields(board, 3) == 164 );
assert( gamma_move(board, 6, 3, 13) == 1 );
assert( gamma_move(board, 7, 5, 12) == 1 );
assert( gamma_golden_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 16, 13) == 0 );
assert( gamma_move(board, 9, 3, -1) == 0 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 11) == 1 );
assert( gamma_move(board, 6, 11, 7) == 1 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_golden_move(board, 8, 6, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_golden_move(board, 9, 7, 1) == 0 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 3, -1, 3) == 0 );


char* board402481625 = gamma_board(board);
assert( board402481625 != NULL );
assert( strcmp(board402481625, 
"...6...48...1..9\n"
"...18795........\n"
"..64.9...35..9.2\n"
"2..9.7.....4..5.\n"
"....4....72.2...\n"
"8...4...56..6.3.\n"
"87.59......6....\n"
".15..5.4...2....\n"
"8...1....22..3..\n"
"..1..6....2.7..8\n"
"8..5......5.....\n"
"7..4........64..\n"
".........7......\n"
".89......9..81..\n") == 0);
free(board402481625);
board402481625 = NULL;
assert( gamma_move(board, 5, 10, 2) == 1 );
assert( gamma_golden_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 2, 10) == 1 );
assert( gamma_move(board, 7, 11, 3) == 1 );
assert( gamma_move(board, 8, 4, 10) == 1 );
assert( gamma_move(board, 9, 13, 0) == 0 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, -1, 9) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 8, -1) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 15, 10) == 1 );
assert( gamma_move(board, 8, 7, 8) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 9, 3) == 1 );
assert( gamma_free_fields(board, 1) == 151 );


char* board195586607 = gamma_board(board);
assert( board195586607 != NULL );
assert( strcmp(board195586607, 
"...6...48...1..9\n"
"...18795........\n"
"..64.9...35..9.2\n"
"2.6987.....4..57\n"
"....4....72.2...\n"
"8...4..856..6.3.\n"
"87.59......6....\n"
".15..5.4...2....\n"
"8...1..1.22..3..\n"
"..1..6....2.7..8\n"
"8..5.....957....\n"
"7..4......5.64..\n"
".........7......\n"
".89......9..81..\n") == 0);
free(board195586607);
board195586607 = NULL;
assert( gamma_move(board, 5, 16, 3) == 0 );


char* board923871244 = gamma_board(board);
assert( board923871244 != NULL );
assert( strcmp(board923871244, 
"...6...48...1..9\n"
"...18795........\n"
"..64.9...35..9.2\n"
"2.6987.....4..57\n"
"....4....72.2...\n"
"8...4..856..6.3.\n"
"87.59......6....\n"
".15..5.4...2....\n"
"8...1..1.22..3..\n"
"..1..6....2.7..8\n"
"8..5.....957....\n"
"7..4......5.64..\n"
".........7......\n"
".89......9..81..\n") == 0);
free(board923871244);
board923871244 = NULL;
assert( gamma_move(board, 7, 14, 7) == 1 );
assert( gamma_move(board, 8, 7, 13) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 16, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board600958462 = gamma_board(board);
assert( board600958462 != NULL );
assert( strcmp(board600958462, 
"...6...48...1..9\n"
"...18795........\n"
"..64.9...35..9.2\n"
"2.6987.....4..57\n"
"....4....72.2...\n"
"8...4.2856..6.3.\n"
"87.59......6..7.\n"
".15..5.4...2....\n"
"8...1..1.22..3..\n"
"..1..6....2.7..8\n"
"8..5.....957....\n"
"7..4......5.64..\n"
".........7......\n"
".89......9..81..\n") == 0);
free(board600958462);
board600958462 = NULL;
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 12) == 1 );
assert( gamma_move(board, 6, 16, -1) == 0 );
assert( gamma_move(board, 7, 13, 3) == 1 );
assert( gamma_free_fields(board, 7) == 147 );
assert( gamma_move(board, 8, 14, 7) == 0 );
assert( gamma_move(board, 1, 14, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 6, 13) == 1 );
assert( gamma_move(board, 3, -1, 10) == 0 );
assert( gamma_free_fields(board, 3) == 145 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 14, 4) == 1 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 10) == 0 );


char* board867575395 = gamma_board(board);
assert( board867575395 != NULL );
assert( strcmp(board867575395, 
"...6..248...1..9\n"
"...18795.5......\n"
"..64.9...35..9.2\n"
"2.6987.....4..57\n"
".4..4....72.2...\n"
"8...4.2856..6.3.\n"
"87.59......6..7.\n"
".15..5.4...2..1.\n"
"8...1..1.22..3..\n"
"..1..6....2.7.58\n"
"8..5.....957.7..\n"
"7..4....6.5.64..\n"
".........7......\n"
".89......9..81..\n") == 0);
free(board867575395);
board867575395 = NULL;
assert( gamma_move(board, 8, 7, 10) == 1 );
assert( gamma_move(board, 9, 14, -1) == 0 );
assert( gamma_move(board, 1, 9, 10) == 1 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_free_fields(board, 2) == 139 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 9, 15, 1) == 1 );
assert( gamma_free_fields(board, 9) == 137 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 3, 16, 3) == 0 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 6, 13, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 13 );
assert( gamma_move(board, 9, 1, 0) == 0 );


char* board813947030 = gamma_board(board);
assert( board813947030 != NULL );
assert( strcmp(board813947030, 
"...6..248...1..9\n"
"...18795.5......\n"
"..64.9...35..9.2\n"
"2.6987.821.4..57\n"
"54..4....72.2...\n"
"8...4.2856..6.3.\n"
"87.59......6..7.\n"
".151.5.4...2..1.\n"
"8...1..1.22..3..\n"
"..18.6....2.7.58\n"
"8..5.....957.7..\n"
"7..4....6.5.64..\n"
".........77....9\n"
".89......9..81..\n") == 0);
free(board813947030);
board813947030 = NULL;
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 14, 0) == 1 );
assert( gamma_golden_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_move(board, 9, 13, 8) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_free_fields(board, 3) == 130 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 12, 1) == 1 );
assert( gamma_move(board, 7, 16, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 9, 6, 9) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 14, 13) == 1 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_move(board, 5, 12, 10) == 1 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_free_fields(board, 5) == 125 );
assert( gamma_move(board, 7, 9, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 8, -1, 8) == 0 );
assert( gamma_move(board, 9, -1, 1) == 0 );
assert( gamma_golden_move(board, 9, 7, 11) == 0 );
assert( gamma_move(board, 1, 16, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 3, 15, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_golden_move(board, 4, 11, 13) == 0 );
assert( gamma_move(board, 5, 15, 5) == 1 );
assert( gamma_move(board, 6, 13, 7) == 1 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_golden_move(board, 8, 2, 13) == 0 );
assert( gamma_move(board, 9, 16, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 12 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 4, 11, 8) == 1 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 16, 10) == 0 );
assert( gamma_golden_move(board, 6, 1, 15) == 0 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, -1, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 0, 13) == 1 );
assert( gamma_free_fields(board, 6) == 118 );


char* board180983064 = gamma_board(board);
assert( board180983064 != NULL );
assert( strcmp(board180983064, 
"6..6..248...1.29\n"
"...18795.5......\n"
"..64.9...35..9.2\n"
"2.6987.821.45.57\n"
"54..4.9..72.2...\n"
"8...4.2856.4693.\n"
"87.59......6.673\n"
".151.5.47..2..1.\n"
"8...1..1.22..3.5\n"
"..18.6....2.7.58\n"
"8..5.....957.7..\n"
"7..4....6.5.64..\n"
"........37746..9\n"
".89.8..8.9..815.\n") == 0);
free(board180983064);
board180983064 = NULL;
assert( gamma_move(board, 9, 11, 9) == 1 );
assert( gamma_free_fields(board, 9) == 117 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 7, 13, 9) == 1 );
assert( gamma_move(board, 8, 15, -1) == 0 );
assert( gamma_busy_fields(board, 8) == 15 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 1, 7, 14) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );


char* board166969922 = gamma_board(board);
assert( board166969922 != NULL );
assert( strcmp(board166969922, 
"6..6..248...1.29\n"
"...18795.5......\n"
"..64.9...35..9.2\n"
"2.6987.821.45.57\n"
"54..4.9..72927..\n"
"8...4.2856.4693.\n"
"87.59..5...6.673\n"
".151.5.47..2..1.\n"
"8...1..1.22..3.5\n"
"..18.6....2.7.58\n"
"8..5.....957.7..\n"
"7..4.2..6.5.64..\n"
"........37746..9\n"
".89.8..8.92.815.\n") == 0);
free(board166969922);
board166969922 = NULL;
assert( gamma_move(board, 3, 9, 13) == 1 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 7, 10, 11) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 9, 5, 7) == 1 );
assert( gamma_move(board, 1, -1, 12) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 3, 10, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 14, 2) == 1 );
assert( gamma_move(board, 6, 1, 5) == 1 );


char* board149431300 = gamma_board(board);
assert( board149431300 != NULL );
assert( strcmp(board149431300, 
"6..6..2483..1.29\n"
"...18795.5......\n"
"..64.9...35..9.2\n"
"2.6987.821.45.57\n"
"54..4.9..72927..\n"
"8...4.2856.4693.\n"
"87.599.5...6.673\n"
".151.5.47..2..1.\n"
"866.1..1.22..3.5\n"
"..18.6....2.7.58\n"
"8..5.....957.7..\n"
"7..4.2..6.5.645.\n"
"........37746..9\n"
".89.8..8.92.815.\n") == 0);
free(board149431300);
board149431300 = NULL;
assert( gamma_move(board, 7, 14, 0) == 0 );
assert( gamma_move(board, 8, 13, 10) == 1 );
assert( gamma_busy_fields(board, 8) == 16 );
assert( gamma_free_fields(board, 8) == 107 );
assert( gamma_move(board, 9, 4, 11) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 2, 16, 6) == 0 );
assert( gamma_free_fields(board, 2) == 106 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_move(board, 5, 10, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_move(board, 6, 15, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 10, 5) == 1 );


char* board577551427 = gamma_board(board);
assert( board577551427 != NULL );
assert( strcmp(board577551427, 
"6..6..2483..1.29\n"
"...18795.5......\n"
"..6499...35..9.2\n"
"2.6987.821.45857\n"
"54..4.9..72927..\n"
"8...4.2856.46936\n"
"87.599.5..56.673\n"
".151.5.47..2..1.\n"
"866.1..1.26..3.5\n"
"..18.6....2.7.58\n"
"8..5.....957.7..\n"
"7..4.2..6.5.645.\n"
"........37746..9\n"
".89.8..8.92.815.\n") == 0);
free(board577551427);
board577551427 = NULL;
assert( gamma_move(board, 7, 15, 4) == 0 );
assert( gamma_move(board, 8, -1, 8) == 0 );
assert( gamma_move(board, 9, 12, 1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 4, 10, 10) == 1 );
assert( gamma_move(board, 5, 10, 9) == 0 );


char* board564142021 = gamma_board(board);
assert( board564142021 != NULL );
assert( strcmp(board564142021, 
"6..6..2483..1.29\n"
"...18795.5......\n"
"..6499...35..9.2\n"
"2.6987.821445857\n"
"54..4.9..72927..\n"
"8...4.2856.46936\n"
"87.599.5..56.673\n"
".151.5.47..2..1.\n"
"866.1..1.26..3.5\n"
"..18.6....2.7.58\n"
"8..5.....957.7..\n"
"7..4.2..6.5.645.\n"
"........37746..9\n"
"289.8..8.92.815.\n") == 0);
free(board564142021);
board564142021 = NULL;
assert( gamma_move(board, 6, 13, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 12, 7) == 1 );
assert( gamma_move(board, 8, 7, 1) == 1 );
assert( gamma_move(board, 9, -1, 0) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 7, -1) == 0 );


char* board558693602 = gamma_board(board);
assert( board558693602 != NULL );
assert( strcmp(board558693602, 
"6..6..2483..1.29\n"
"...18795.5......\n"
"..6499...35..9.2\n"
"2.6987.821445857\n"
"54..4.9..72927..\n"
"8...4.2856.46936\n"
"87.599.5..567673\n"
".151.5.47..2..1.\n"
"866.1..1.26..3.5\n"
"..18.6....2.7.58\n"
"8..5.....957.7..\n"
"7..4.2..6.5.645.\n"
".......837746..9\n"
"289.8..8.92.815.\n") == 0);
free(board558693602);
board558693602 = NULL;
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 7, 6, 11) == 1 );
assert( gamma_golden_move(board, 8, 11, 13) == 0 );
assert( gamma_move(board, 9, 12, 0) == 0 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_golden_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 1, 11) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_free_fields(board, 4) == 98 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 6, 16, 14) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 12, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 10, 12) == 1 );
assert( gamma_move(board, 2, 7, 11) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 15, 12) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 15, 13) == 0 );


char* board101392833 = gamma_board(board);
assert( board101392833 != NULL );
assert( strcmp(board101392833, 
"6..6..2483..1.29\n"
"...18795.59....4\n"
".3649972.35..9.2\n"
"2.6987.821445857\n"
"54..4.9..72927..\n"
"8...4.2856.46936\n"
"87.599.5..567673\n"
".151.5.47..2..1.\n"
"866.1..1.26..3.5\n"
"..18.6....2.7.58\n"
"8..5.....957.7..\n"
"7..4.2..6.5.645.\n"
".......831746..9\n"
"289.8..8.92.815.\n") == 0);
free(board101392833);
board101392833 = NULL;
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_free_fields(board, 2) == 95 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 8, 12, 5) == 1 );
assert( gamma_move(board, 9, 16, 14) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_free_fields(board, 1) == 93 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_move(board, 4, 0, 12) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 11, 14) == 0 );
assert( gamma_move(board, 8, 11, 0) == 1 );
assert( gamma_move(board, 9, 9, 4) == 1 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_free_fields(board, 4) == 88 );
assert( gamma_move(board, 5, 11, 13) == 0 );
assert( gamma_move(board, 6, 11, 11) == 1 );
assert( gamma_busy_fields(board, 6) == 17 );
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_move(board, 8, 5, 12) == 0 );
assert( gamma_move(board, 9, -1, 6) == 0 );
assert( gamma_move(board, 1, 10, 14) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_free_fields(board, 4) == 86 );
assert( gamma_move(board, 6, 12, 13) == 0 );
assert( gamma_move(board, 7, -1, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_move(board, 8, 10, 7) == 0 );
assert( gamma_free_fields(board, 8) == 86 );
assert( gamma_move(board, 9, -1, 9) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_free_fields(board, 1) == 86 );
assert( gamma_golden_move(board, 1, 9, 13) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 5, 15, 0) == 1 );
assert( gamma_free_fields(board, 5) == 24 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 4, 14) == 0 );
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_move(board, 8, 13, 11) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_free_fields(board, 1) == 84 );
assert( gamma_free_fields(board, 2) == 84 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, -1, 11) == 0 );
assert( gamma_move(board, 6, 16, 3) == 0 );
assert( gamma_free_fields(board, 6) == 83 );
assert( gamma_golden_move(board, 6, 13, 7) == 0 );
assert( gamma_move(board, 7, -1, 1) == 0 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_busy_fields(board, 8) == 19 );
assert( gamma_free_fields(board, 8) == 83 );
assert( gamma_move(board, 1, 8, 12) == 1 );
assert( gamma_free_fields(board, 2) == 82 );
assert( gamma_move(board, 3, 16, -1) == 0 );
assert( gamma_move(board, 4, 12, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_golden_move(board, 5, 2, 3) == 0 );


char* board335366970 = gamma_board(board);
assert( board335366970 != NULL );
assert( strcmp(board335366970, 
"6..6..2483..1.29\n"
"4..18795159....4\n"
".3649972.356.9.2\n"
"2.6987.821445857\n"
"54..439..72927..\n"
"8...4.2856.46936\n"
"87.599.5.3567673\n"
".151.5.47..2..1.\n"
"866.1..1.26.83.5\n"
"1.18.6...92.7.58\n"
"83.5.1...957.7..\n"
"7..4.2..6.5.645.\n"
".3.....831746..9\n"
"289.8..8.9288155\n") == 0);
free(board335366970);
board335366970 = NULL;
assert( gamma_busy_fields(board, 7) == 15 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 13, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 0, 1) == 1 );


char* board470965806 = gamma_board(board);
assert( board470965806 != NULL );
assert( strcmp(board470965806, 
"6..6..2483..1.29\n"
"4..18795159....4\n"
".3649972.356.9.2\n"
"2.6987.821445857\n"
"54..439..72927..\n"
"8...4.2856.46936\n"
"87.599.5.3567673\n"
".151.5.47..2..1.\n"
"866.1..1.26.83.5\n"
"1.18.6...92.7.58\n"
"83.5.1...957.7..\n"
"7..4.2..6.5.645.\n"
"23.....831746..9\n"
"289.8..8.9288155\n") == 0);
free(board470965806);
board470965806 = NULL;
assert( gamma_move(board, 4, 10, 8) == 1 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 9, 9, 9) == 0 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_golden_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_move(board, 6, 8, 14) == 0 );
assert( gamma_free_fields(board, 6) == 78 );
assert( gamma_move(board, 8, 11, 5) == 1 );
assert( gamma_free_fields(board, 9) == 77 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_free_fields(board, 6) == 77 );
assert( gamma_move(board, 7, 12, 8) == 0 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_golden_move(board, 8, 13, 7) == 1 );
assert( gamma_move(board, 9, 4, 14) == 0 );
assert( gamma_free_fields(board, 9) == 76 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 10, 13) == 1 );
assert( gamma_move(board, 4, 14, 14) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_free_fields(board, 6) == 73 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_free_fields(board, 7) == 73 );
assert( gamma_move(board, 8, 9, 12) == 0 );
assert( gamma_golden_move(board, 9, 12, 10) == 1 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 20 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 16, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 18 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 20 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 15, 1) == 0 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 9, 10, 10) == 0 );
assert( gamma_move(board, 2, 10, 14) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_free_fields(board, 3) == 71 );
assert( gamma_golden_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 15, 12) == 0 );
assert( gamma_move(board, 7, 12, 10) == 0 );


gamma_delete(board);

    return 0;
}
