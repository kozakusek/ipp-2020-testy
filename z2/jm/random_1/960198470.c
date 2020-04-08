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
uuid: 960198470
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(19, 11, 6, 11);
assert( board != NULL );


assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_move(board, 6, 19, 6) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_move(board, 3, 12, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board177367084 = gamma_board(board);
assert( board177367084 != NULL );
assert( strcmp(board177367084, 
"..2................\n"
"...................\n"
"....5..............\n"
"...................\n"
"...................\n"
"............3......\n"
"...................\n"
"...................\n"
"..1................\n"
"...................\n"
"...................\n") == 0);
free(board177367084);
board177367084 = NULL;
assert( gamma_free_fields(board, 5) == 205 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 2, 19, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 10) == 1 );


char* board566339995 = gamma_board(board);
assert( board566339995 != NULL );
assert( strcmp(board566339995, 
"..2.16.............\n"
"...................\n"
"....56.............\n"
"...................\n"
"...................\n"
"............3......\n"
"...........3.......\n"
"...................\n"
"..1................\n"
".......4...........\n"
"...................\n") == 0);
free(board566339995);
board566339995 = NULL;
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 11, 10) == 1 );
assert( gamma_move(board, 5, 13, 7) == 1 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_move(board, 3, 12, 7) == 1 );
assert( gamma_golden_move(board, 3, 4, 11) == 0 );


char* board606266948 = gamma_board(board);
assert( board606266948 != NULL );
assert( strcmp(board606266948, 
".22616.....3.......\n"
"...................\n"
"....56.............\n"
"............35.....\n"
"...................\n"
"............3......\n"
"...........3.......\n"
"...................\n"
"..1....1...........\n"
".......4...........\n"
"...................\n") == 0);
free(board606266948);
board606266948 = NULL;
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 11, 11) == 0 );
assert( gamma_free_fields(board, 5) == 193 );


char* board964863898 = gamma_board(board);
assert( board964863898 != NULL );
assert( strcmp(board964863898, 
".22616.....3.......\n"
"...................\n"
"....56.............\n"
"............35.....\n"
"...................\n"
"............3......\n"
"...........3.......\n"
".....4.............\n"
"..1....1...........\n"
".......4...........\n"
"...................\n") == 0);
free(board964863898);
board964863898 = NULL;
assert( gamma_move(board, 1, 16, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 19, 7) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );


char* board458408473 = gamma_board(board);
assert( board458408473 != NULL );
assert( strcmp(board458408473, 
".22616.....3.......\n"
"...................\n"
"....56.............\n"
"............35..1..\n"
"...................\n"
"............3......\n"
"...........3.......\n"
"....34.............\n"
"..1....1...........\n"
".......4...........\n"
"...................\n") == 0);
free(board458408473);
board458408473 = NULL;
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_golden_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 17, 6) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 1, 19, -1) == 0 );
assert( gamma_free_fields(board, 1) == 189 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 3, 13, 2) == 1 );
assert( gamma_golden_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 15, 5) == 1 );
assert( gamma_free_fields(board, 4) == 187 );
assert( gamma_move(board, 5, 19, 10) == 0 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_move(board, 2, 14, 5) == 1 );
assert( gamma_move(board, 3, 15, 3) == 1 );
assert( gamma_move(board, 4, 14, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_free_fields(board, 5) == 182 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_free_fields(board, 5) == 182 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 4, 13, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 19, 2) == 0 );
assert( gamma_move(board, 6, 18, 2) == 1 );
assert( gamma_move(board, 1, 16, 8) == 1 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_move(board, 6, 13, 0) == 1 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_free_fields(board, 3) == 173 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 6, 18, 0) == 1 );


char* board510238743 = gamma_board(board);
assert( board510238743 != NULL );
assert( strcmp(board510238743, 
".22616.....3.......\n"
"...................\n"
"....56..........1..\n"
"3...........35..1..\n"
"...6.............5.\n"
".........1..3424...\n"
".......6...3.......\n"
"....34.2.......3...\n"
"..1....1.....3....6\n"
".......4...15.4....\n"
"..........2..6....6\n") == 0);
free(board510238743);
board510238743 = NULL;
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_free_fields(board, 1) == 172 );
assert( gamma_move(board, 3, 17, 2) == 1 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 6, 16, 8) == 0 );
assert( gamma_move(board, 1, 13, 4) == 1 );
assert( gamma_free_fields(board, 3) == 169 );
assert( gamma_move(board, 5, 12, 10) == 1 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 1, 13, -1) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 3) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 6, -1, 7) == 0 );
assert( gamma_move(board, 1, 9, 9) == 1 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 1, 14, 3) == 0 );
assert( gamma_free_fields(board, 2) == 161 );
assert( gamma_move(board, 4, 15, 0) == 1 );
assert( gamma_move(board, 5, 10, -1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 15, 2) == 1 );
assert( gamma_move(board, 2, 14, 1) == 0 );
assert( gamma_free_fields(board, 2) == 159 );
assert( gamma_move(board, 3, 19, 6) == 0 );
assert( gamma_move(board, 4, 11, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 5) == 158 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_free_fields(board, 1) == 157 );
assert( gamma_move(board, 2, 19, 10) == 0 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_golden_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 4, -1, 10) == 0 );
assert( gamma_move(board, 6, 18, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 1, 12) == 0 );
assert( gamma_move(board, 1, 13, -1) == 0 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_move(board, 4, 15, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 19, 2) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 14, 0) == 1 );
assert( gamma_move(board, 3, 13, 1) == 1 );
assert( gamma_free_fields(board, 5) == 146 );
assert( gamma_free_fields(board, 6) == 25 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 4, 11) == 0 );


char* board201448749 = gamma_board(board);
assert( board201448749 != NULL );
assert( strcmp(board201448749, 
".22616.....35......\n"
"...4.....1.........\n"
".2.6566.........1..\n"
"3...........35..1..\n"
"...66....1.......5.\n"
".5.......1..3424...\n"
"..2....6...3.1.....\n"
"5...34.2.4....33...\n"
"1.1.64.1...4.3.1.36\n"
"..6....4...1534....\n"
"3.........23.624..6\n") == 0);
free(board201448749);
board201448749 = NULL;
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_move(board, 6, 17, 6) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 18, 0) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 8) == 1 );
assert( gamma_golden_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 16, 2) == 1 );
assert( gamma_free_fields(board, 5) == 139 );
assert( gamma_move(board, 6, 17, 8) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_free_fields(board, 3) == 138 );
assert( gamma_move(board, 5, 10, -1) == 0 );
assert( gamma_golden_move(board, 5, 0, 15) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 4, 17, 11) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 4, 17, 8) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_golden_move(board, 2, 4, 16) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 19, 2) == 0 );
assert( gamma_move(board, 6, 11, 11) == 0 );
assert( gamma_move(board, 1, 12, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 18, 6) == 1 );


char* board517459244 = gamma_board(board);
assert( board517459244 != NULL );
assert( strcmp(board517459244, 
".22616.....35......\n"
"...4...5.1.........\n"
".2.6566....2....1..\n"
"3....1...1..35..1..\n"
"...66.2..1.......55\n"
".5.....4.1..3424...\n"
"..25...6...311.....\n"
"5..424.2.4....33...\n"
"1.1.64.1...4.3.1536\n"
"..6...24...1534....\n"
"3.6.....3.23.624..6\n") == 0);
free(board517459244);
board517459244 = NULL;
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 18, 3) == 1 );


char* board553665929 = gamma_board(board);
assert( board553665929 != NULL );
assert( strcmp(board553665929, 
".22616.....35......\n"
"...4...5.1.........\n"
".2.6566....2....1..\n"
"3....1...1..35..1..\n"
"...66.2..1.......55\n"
".5.....4.1..3424...\n"
"..25...6...311.....\n"
"5..424.2.4....33..5\n"
"1.1.64.1...4.3.1536\n"
"..6...24...1534....\n"
"3.6.....3.23.624..6\n") == 0);
free(board553665929);
board553665929 = NULL;
assert( gamma_move(board, 6, -1, 3) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 16, 4) == 0 );
assert( gamma_move(board, 3, 19, 11) == 0 );
assert( gamma_move(board, 4, 14, -1) == 0 );
assert( gamma_move(board, 5, -1, 10) == 0 );
assert( gamma_move(board, 6, 5, -1) == 0 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 12, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 14, 3) == 0 );
assert( gamma_move(board, 6, 15, 8) == 0 );
assert( gamma_move(board, 1, 16, 4) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_golden_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 16, 5) == 0 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_free_fields(board, 5) == 27 );
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 16, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 9, 10) == 0 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_move(board, 2, 16, 5) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_golden_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board558826478 = gamma_board(board);
assert( board558826478 != NULL );
assert( strcmp(board558826478, 
".22616.....35......\n"
"...4...511.........\n"
".2.65666...2....1..\n"
"3....1...1..35..1..\n"
"...66.2..1.......55\n"
".52....4.1..3424...\n"
"..25...6...311.....\n"
"5..424.2.4....33..5\n"
"1.1.6441...443.1536\n"
"..6...24...1534....\n"
"3.6.....3.23.624..6\n") == 0);
free(board558826478);
board558826478 = NULL;
assert( gamma_golden_move(board, 1, 1, 7) == 0 );


char* board464668314 = gamma_board(board);
assert( board464668314 != NULL );
assert( strcmp(board464668314, 
".22616.....35......\n"
"...4...511.........\n"
".2.65666...2....1..\n"
"3....1...1..35..1..\n"
"...66.2..1.......55\n"
".52....4.1..3424...\n"
"..25...6...311.....\n"
"5..424.2.4....33..5\n"
"1.1.6441...443.1536\n"
"..6...24...1534....\n"
"3.6.....3.23.624..6\n") == 0);
free(board464668314);
board464668314 = NULL;
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 4, 11, -1) == 0 );


char* board102974827 = gamma_board(board);
assert( board102974827 != NULL );
assert( strcmp(board102974827, 
".22616.....35......\n"
"...4...511.........\n"
".2.65666...2....1..\n"
"3....1...1..35..1..\n"
"...66.2..1.......55\n"
".52....4.1..3424...\n"
"..25...6...311.....\n"
"5..424.2.4....33..5\n"
"1.1.6441...443.1536\n"
"..6...24...1534....\n"
"3.6.....3.23.624..6\n") == 0);
free(board102974827);
board102974827 = NULL;
assert( gamma_move(board, 5, 13, 8) == 1 );
assert( gamma_move(board, 6, 19, 10) == 0 );
assert( gamma_move(board, 2, 10, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_free_fields(board, 5) == 28 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 16, 7) == 0 );


char* board779827745 = gamma_board(board);
assert( board779827745 != NULL );
assert( strcmp(board779827745, 
".22616.....35......\n"
"...4...511.........\n"
".2.65666...2.5..1..\n"
"3....1...1..35..1..\n"
"...66.2..1.......55\n"
".52....4.1..3424...\n"
"..25...6...311.....\n"
"5..424.2.4....33..5\n"
"1.1.6441...443.1536\n"
"..6...24...1534....\n"
"3.6.....3.23.624..6\n") == 0);
free(board779827745);
board779827745 = NULL;
assert( gamma_move(board, 1, 13, 5) == 0 );
assert( gamma_move(board, 2, 17, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 6, -1) == 0 );


char* board880922180 = gamma_board(board);
assert( board880922180 != NULL );
assert( strcmp(board880922180, 
".22616.....35......\n"
"...4...511.........\n"
".2.65666...2.5..1..\n"
"3....1...1..35..1..\n"
"...66.2..1.......55\n"
".52....4.1..3424...\n"
"..25...6...311.....\n"
"5..424.2.4....33..5\n"
"1.1.6441...443.1536\n"
"..6...24...1534....\n"
"3.6.....3.23.624..6\n") == 0);
free(board880922180);
board880922180 = NULL;
assert( gamma_move(board, 5, 16, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_golden_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 1, 19, 5) == 0 );
assert( gamma_move(board, 2, 16, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_free_fields(board, 5) == 27 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 16, 7) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_move(board, 5, 19, -1) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 14, 1) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_move(board, 3, 5, 15) == 0 );
assert( gamma_move(board, 5, 16, -1) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );


char* board714522347 = gamma_board(board);
assert( board714522347 != NULL );
assert( strcmp(board714522347, 
".22616.....35......\n"
"...4...511.........\n"
".2.65666...2.5..1..\n"
"3....1...1..35..1..\n"
"...66.2..1.......55\n"
".52....4.1..3424...\n"
".525...6...311.....\n"
"5..424.2.4....33..5\n"
"1.1.6441...443.1536\n"
"..6...24...1534....\n"
"3.66....3.23.624..6\n") == 0);
free(board714522347);
board714522347 = NULL;
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 4, 18, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 12, 9) == 1 );


char* board766850302 = gamma_board(board);
assert( board766850302 != NULL );
assert( strcmp(board766850302, 
".22616.....35......\n"
"...4...511..5......\n"
".2.65666...2.5..1..\n"
"3....1...1..35..1..\n"
"...66.2..1.......55\n"
".52....4.1..3424...\n"
".525...6...311.....\n"
"5..424.2.4....33..5\n"
"1.1.6441...443.1536\n"
"1.6...24...1534....\n"
"3.66....3.23.624..6\n") == 0);
free(board766850302);
board766850302 = NULL;
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 6, 16, 9) == 0 );
assert( gamma_move(board, 1, 13, 5) == 0 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 6, 6, -1) == 0 );
assert( gamma_busy_fields(board, 6) == 16 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 6, 14, 7) == 0 );
assert( gamma_golden_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 17, 3) == 1 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_free_fields(board, 1) == 33 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 6, 14, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 17 );
assert( gamma_move(board, 1, 19, 6) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );


char* board746834548 = gamma_board(board);
assert( board746834548 != NULL );
assert( strcmp(board746834548, 
".22616.....35......\n"
"...44..511..5......\n"
".2.65666...2.5..1..\n"
"3....1...1..35..1..\n"
"...66.2..1.......55\n"
".52....6.1..3424...\n"
".525...6...311.....\n"
"5..424.2.4....33.35\n"
"1.1.6441...443.1536\n"
"1.6...24...1534....\n"
"3.66...33.23.624..6\n") == 0);
free(board746834548);
board746834548 = NULL;
assert( gamma_busy_fields(board, 6) == 17 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 14, 1) == 0 );
assert( gamma_move(board, 5, 18, -1) == 0 );
assert( gamma_move(board, 6, 14, 7) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 11, 7) == 1 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board659549804 = gamma_board(board);
assert( board659549804 != NULL );
assert( strcmp(board659549804, 
".22616.....35......\n"
"...44..511..5......\n"
".2.65666...2.5..1..\n"
"3....1...1.435..1..\n"
"...66.2..1.......55\n"
".52....6.1..3424...\n"
".525...6...311.....\n"
"5..424.2.4....33.35\n"
"1.1.6441...443.1536\n"
"1.6...24...1534....\n"
"3.66...33.23.624..6\n") == 0);
free(board659549804);
board659549804 = NULL;
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 15, 6) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 5, 17, 6) == 0 );
assert( gamma_move(board, 6, 5, 9) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 17, -1) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 17, -1) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 19, 5) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 19, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_golden_move(board, 4, 2, 16) == 0 );
assert( gamma_free_fields(board, 5) == 25 );
assert( gamma_move(board, 6, 15, 3) == 0 );
assert( gamma_move(board, 1, 17, 1) == 0 );
assert( gamma_golden_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 14, 11) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_free_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 10, 7) == 1 );
assert( gamma_move(board, 1, 13, 5) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );


char* board229769594 = gamma_board(board);
assert( board229769594 != NULL );
assert( strcmp(board229769594, 
".22616.....35......\n"
"...446.511..5......\n"
".2.65666...2.5..1..\n"
"3....1...16435..1..\n"
"...66.2..1.......55\n"
".52....6.1..3424...\n"
".525...6...311.....\n"
"5..424.2.4....33.35\n"
"1.1.6441...443.1536\n"
"1.6...24...1534....\n"
"3.666..33.23.624..6\n") == 0);
free(board229769594);
board229769594 = NULL;
assert( gamma_move(board, 3, 17, 11) == 0 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_free_fields(board, 5) == 25 );
assert( gamma_move(board, 6, 3, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 15, 5) == 0 );
assert( gamma_move(board, 3, 18, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 18, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 20 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 19, 11) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );


char* board473171970 = gamma_board(board);
assert( board473171970 != NULL );
assert( strcmp(board473171970, 
".22616.....35......\n"
"...446.511..5......\n"
".2.65666...2.5..1..\n"
"3....1...16435..1..\n"
"...6622..1.......55\n"
".52....6.1..3424...\n"
".525...6...311.....\n"
"5..424.2.4....33.35\n"
"1.1.6441...443.1536\n"
"1.6...24...1534....\n"
"3.666..33.23.624..6\n") == 0);
free(board473171970);
board473171970 = NULL;
assert( gamma_move(board, 4, 17, 1) == 0 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board405438275 = gamma_board(board);
assert( board405438275 != NULL );
assert( strcmp(board405438275, 
".22616.....35......\n"
"...446.511..5......\n"
".2.65666...2.5..1..\n"
"3....1...16435..1..\n"
"...6622..1.......55\n"
".52....6.1..3424...\n"
".525...6...311.....\n"
"5..424.2.4....33.35\n"
"1.1.6441...443.1536\n"
"1.6...24...1534....\n"
"3.666..33.23.624..6\n") == 0);
free(board405438275);
board405438275 = NULL;
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 16, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 10, -1) == 0 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_free_fields(board, 6) == 27 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_busy_fields(board, 6) == 21 );


char* board722158318 = gamma_board(board);
assert( board722158318 != NULL );
assert( strcmp(board722158318, 
".22616.....35......\n"
"...446.511..5......\n"
".2.65666...2.5..1..\n"
"3....1...16435..1..\n"
"...66226.1.......55\n"
".52....6.1..3424...\n"
".525...6...311.....\n"
"5..424.2.4....33.35\n"
"1.1.6441...443.1536\n"
"1.6...24...1534....\n"
"3.666..33.23.624..6\n") == 0);
free(board722158318);
board722158318 = NULL;
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 15, -1) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_golden_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


gamma_delete(board);

    return 0;
}
