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
uuid: 571896372
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 9, 15, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 1, 12, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 4, 11, 5) == 1 );
assert( gamma_golden_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 12, 7) == 1 );
assert( gamma_move(board, 6, 10, 5) == 1 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 7, 11, 2) == 1 );
assert( gamma_move(board, 8, 8, 7) == 1 );
assert( gamma_move(board, 9, 2, 6) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 10, 2, 7) == 1 );
assert( gamma_move(board, 10, 7, 2) == 1 );


char* board623588942 = gamma_board(board);
assert( board623588942 != NULL );
assert( strcmp(board623588942, 
"...............\n"
"..10.....8...5..\n"
".39...3........\n"
"...2......64...\n"
".7.............\n"
"...............\n"
".2.....10...7...\n"
"......41....1..\n"
"...............\n") == 0);
free(board623588942);
board623588942 = NULL;
assert( gamma_move(board, 11, 3, 8) == 1 );
assert( gamma_move(board, 11, 9, 8) == 1 );
assert( gamma_move(board, 12, 7, 1) == 0 );
assert( gamma_move(board, 12, 5, 0) == 1 );
assert( gamma_free_fields(board, 12) == 116 );
assert( gamma_move(board, 13, 0, 11) == 0 );
assert( gamma_move(board, 13, 4, 2) == 1 );
assert( gamma_move(board, 14, 8, 7) == 0 );
assert( gamma_free_fields(board, 14) == 115 );
assert( gamma_move(board, 15, 5, 4) == 1 );
assert( gamma_move(board, 15, 14, 7) == 1 );
assert( gamma_busy_fields(board, 15) == 2 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_golden_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 3, 11, 6) == 1 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_free_fields(board, 6) == 109 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_move(board, 8, 14, 2) == 1 );
assert( gamma_move(board, 9, 9, 4) == 1 );
assert( gamma_free_fields(board, 10) == 105 );


char* board637563832 = gamma_board(board);
assert( board637563832 != NULL );
assert( strcmp(board637563832, 
"...11.....11.....\n"
"..10.....8.2.5.15\n"
".39...3....3...\n"
"...2......64...\n"
".7...15...9.....\n"
".6....7.3......\n"
".2..13..10...7..8\n"
"......41....1..\n"
".7...12.........\n") == 0);
free(board637563832);
board637563832 = NULL;
assert( gamma_move(board, 11, 7, 7) == 1 );


char* board466991522 = gamma_board(board);
assert( board466991522 != NULL );
assert( strcmp(board466991522, 
"...11.....11.....\n"
"..10....118.2.5.15\n"
".39...3....3...\n"
"...2......64...\n"
".7...15...9.....\n"
".6....7.3......\n"
".2..13..10...7..8\n"
"......41....1..\n"
".7...12.........\n") == 0);
free(board466991522);
board466991522 = NULL;
assert( gamma_move(board, 12, 7, 4) == 1 );
assert( gamma_move(board, 12, 14, 7) == 0 );
assert( gamma_move(board, 13, 2, 7) == 0 );
assert( gamma_busy_fields(board, 13) == 1 );
assert( gamma_move(board, 14, 10, 0) == 1 );
assert( gamma_move(board, 14, 4, 5) == 1 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 11) == 0 );
assert( gamma_move(board, 9, 0, 13) == 0 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 7, 5) == 1 );
assert( gamma_move(board, 10, 14, 0) == 1 );
assert( gamma_move(board, 12, 3, 3) == 1 );
assert( gamma_move(board, 12, 0, 8) == 1 );
assert( gamma_move(board, 13, 5, 0) == 0 );
assert( gamma_move(board, 14, 3, 12) == 0 );
assert( gamma_move(board, 15, 7, 11) == 0 );
assert( gamma_free_fields(board, 15) == 91 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_free_fields(board, 1) == 90 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_move(board, 6, 10, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_free_fields(board, 7) == 86 );
assert( gamma_move(board, 8, 8, 8) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 10, 4, 10) == 0 );
assert( gamma_move(board, 10, 8, 0) == 1 );
assert( gamma_move(board, 11, 9, 8) == 0 );
assert( gamma_move(board, 12, 3, 2) == 1 );
assert( gamma_move(board, 13, 0, 8) == 0 );
assert( gamma_move(board, 14, 0, 11) == 0 );
assert( gamma_move(board, 15, 9, 6) == 1 );
assert( gamma_free_fields(board, 15) == 83 );
assert( gamma_golden_move(board, 15, 5, 4) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 5, 14, 4) == 1 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 6, 10, 2) == 1 );
assert( gamma_free_fields(board, 6) == 78 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 14, 2) == 0 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 8, 7, 8) == 1 );
assert( gamma_free_fields(board, 8) == 77 );
assert( gamma_move(board, 9, 5, 6) == 1 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 10, 5, 5) == 1 );
assert( gamma_move(board, 11, 13, 4) == 1 );
assert( gamma_move(board, 12, 3, 4) == 1 );
assert( gamma_move(board, 12, 0, 7) == 0 );
assert( gamma_move(board, 13, 3, 7) == 1 );
assert( gamma_move(board, 13, 14, 5) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 15, 0, 13) == 0 );
assert( gamma_move(board, 15, 7, 5) == 0 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_free_fields(board, 5) == 70 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_free_fields(board, 6) == 70 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 10, 8) == 0 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_move(board, 10, 9, 4) == 0 );
assert( gamma_free_fields(board, 10) == 69 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 6, 4) == 1 );
assert( gamma_free_fields(board, 11) == 68 );
assert( gamma_move(board, 12, 1, 5) == 1 );
assert( gamma_move(board, 12, 13, 4) == 0 );
assert( gamma_move(board, 13, 3, 0) == 0 );


char* board270080904 = gamma_board(board);
assert( board270080904 != NULL );
assert( strcmp(board270080904, 
"12..11...81116....\n"
"6.1013.1.118.2.5.15\n"
".392.93..15.3...\n"
"812.21410.10..64..13\n"
"37.12.15111229...115\n"
".6.12..7.3.1....\n"
".2112133.10..67..8\n"
"5.....41....1..\n"
"9732712..10.14...10\n") == 0);
free(board270080904);
board270080904 = NULL;
assert( gamma_move(board, 14, 4, 10) == 0 );
assert( gamma_free_fields(board, 15) == 67 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 2, 12, 4) == 1 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 10, 1) == 1 );
assert( gamma_free_fields(board, 6) == 64 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 8, 14) == 0 );
assert( gamma_move(board, 8, 11, 1) == 1 );
assert( gamma_move(board, 9, 6, 14) == 0 );
assert( gamma_move(board, 9, 9, 8) == 0 );
assert( gamma_move(board, 10, 4, 4) == 1 );


char* board342351747 = gamma_board(board);
assert( board342351747 != NULL );
assert( strcmp(board342351747, 
"12..11..581116....\n"
"6.1013.1.118.2.5.15\n"
".392.93..15.3...\n"
"812.21410.10..64..13\n"
"37.121015111229..2115\n"
".6.12..7.3.1....\n"
".2112133.10..67..8\n"
"5.....41..681..\n"
"9732712..10.14...10\n") == 0);
free(board342351747);
board342351747 = NULL;
assert( gamma_move(board, 11, 11, 1) == 0 );
assert( gamma_move(board, 11, 3, 2) == 0 );
assert( gamma_busy_fields(board, 11) == 5 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 1, 14) == 0 );
assert( gamma_move(board, 12, 3, 3) == 0 );
assert( gamma_move(board, 13, 14, 1) == 1 );
assert( gamma_move(board, 14, 2, 0) == 0 );
assert( gamma_move(board, 14, 1, 2) == 0 );
assert( gamma_move(board, 15, 14, 7) == 0 );
assert( gamma_move(board, 15, 2, 1) == 1 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 14, 6) == 1 );
assert( gamma_free_fields(board, 5) == 59 );
assert( gamma_golden_move(board, 5, 4, 0) == 1 );
assert( gamma_golden_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 7, 13, 3) == 1 );
assert( gamma_move(board, 8, 3, 12) == 0 );
assert( gamma_move(board, 9, 10, 6) == 1 );
assert( gamma_move(board, 9, 9, 2) == 1 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 1, 1) == 1 );
assert( gamma_move(board, 10, 7, 6) == 1 );
assert( gamma_move(board, 11, 0, 11) == 0 );
assert( gamma_move(board, 11, 7, 0) == 1 );
assert( gamma_free_fields(board, 11) == 53 );
assert( gamma_move(board, 12, 3, 9) == 0 );
assert( gamma_move(board, 13, 8, 14) == 0 );
assert( gamma_move(board, 14, 7, 6) == 0 );
assert( gamma_golden_move(board, 14, 1, 6) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_move(board, 9, 5, 13) == 0 );
assert( gamma_move(board, 9, 7, 8) == 0 );
assert( gamma_move(board, 10, 8, 4) == 0 );
assert( gamma_move(board, 10, 12, 6) == 1 );
assert( gamma_move(board, 11, 2, 8) == 1 );
assert( gamma_move(board, 12, 5, 4) == 0 );
assert( gamma_move(board, 13, 5, 5) == 0 );
assert( gamma_move(board, 14, 8, 4) == 0 );
assert( gamma_move(board, 14, 2, 7) == 0 );
assert( gamma_golden_possible(board, 14) == 0 );
assert( gamma_move(board, 15, 12, 7) == 0 );
assert( gamma_move(board, 15, 1, 7) == 1 );
assert( gamma_busy_fields(board, 15) == 5 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_golden_move(board, 6, 6, 11) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_golden_move(board, 7, 6, 12) == 0 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_free_fields(board, 8) == 46 );
assert( gamma_move(board, 9, 10, 0) == 0 );
assert( gamma_move(board, 9, 7, 2) == 0 );


char* board974687997 = gamma_board(board);
assert( board974687997 != NULL );
assert( strcmp(board974687997, 
"12.1111..581116....\n"
"6151013.1.118.2.5.15\n"
"21492.9310.159310.3\n"
"812.21410.10..64..13\n"
"37.121015111229..2115\n"
".6.12..7.3.1..7.\n"
".2112133.10.967..8\n"
"51015.5.417.681.13\n"
"9632512.1110314...10\n") == 0);
free(board974687997);
board974687997 = NULL;
assert( gamma_move(board, 10, 3, 8) == 0 );
assert( gamma_move(board, 11, 13, 8) == 1 );
assert( gamma_move(board, 11, 4, 7) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 6, 4) == 0 );


char* board528404546 = gamma_board(board);
assert( board528404546 != NULL );
assert( strcmp(board528404546, 
"12.1111..581116..11.\n"
"6151013111.118.2.5.15\n"
"21492.9310.159310.3\n"
"812.21410.10..64..13\n"
"37.121015111229..2115\n"
".6.12..7.3.1..7.\n"
".2112133.10.967..8\n"
"51015.5.417.681.13\n"
"9632512.1110314...10\n") == 0);
free(board528404546);
board528404546 = NULL;
assert( gamma_move(board, 13, 10, 6) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 15, 6, 8) == 0 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 14, 2) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 2, 13) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_move(board, 8, 11, 0) == 1 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_move(board, 11, 5, 8) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );


char* board704343246 = gamma_board(board);
assert( board704343246 != NULL );
assert( strcmp(board704343246, 
"12.1111.11581116..11.\n"
"6151013111.11812.5.15\n"
"21492.9310.159310.3\n"
"812.21410.10..64..13\n"
"37.121015111229..2115\n"
".6.12..7.3.1..7.\n"
".2112133.10.967..8\n"
"51015.5.417.681.13\n"
"9632512.11103148..10\n") == 0);
free(board704343246);
board704343246 = NULL;
assert( gamma_move(board, 12, 10, 2) == 0 );
assert( gamma_move(board, 12, 14, 0) == 0 );
assert( gamma_move(board, 13, 7, 0) == 0 );
assert( gamma_move(board, 14, 4, 10) == 0 );
assert( gamma_move(board, 14, 2, 6) == 0 );
assert( gamma_move(board, 15, 2, 0) == 0 );
assert( gamma_move(board, 15, 2, 0) == 0 );
assert( gamma_golden_move(board, 15, 4, 8) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_move(board, 7, 9, 1) == 1 );
assert( gamma_move(board, 8, 6, 13) == 0 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_move(board, 9, 11, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 10, 2, 12) == 0 );
assert( gamma_move(board, 10, 13, 4) == 0 );
assert( gamma_move(board, 11, 1, 13) == 0 );
assert( gamma_move(board, 11, 0, 0) == 0 );
assert( gamma_busy_fields(board, 11) == 10 );
assert( gamma_move(board, 12, 9, 4) == 0 );
assert( gamma_move(board, 13, 7, 11) == 0 );
assert( gamma_free_fields(board, 13) == 39 );
assert( gamma_move(board, 14, 8, 1) == 0 );
assert( gamma_busy_fields(board, 14) == 3 );
assert( gamma_move(board, 15, 11, 7) == 1 );
assert( gamma_move(board, 15, 2, 5) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 6, 14, 3) == 1 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_golden_move(board, 7, 3, 14) == 0 );
assert( gamma_move(board, 8, 6, 13) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 13) == 0 );
assert( gamma_move(board, 10, 5, 3) == 1 );
assert( gamma_move(board, 11, 8, 1) == 0 );
assert( gamma_free_fields(board, 11) == 35 );
assert( gamma_move(board, 12, 1, 13) == 0 );
assert( gamma_move(board, 12, 0, 0) == 0 );
assert( gamma_golden_move(board, 12, 5, 14) == 0 );
assert( gamma_move(board, 13, 0, 8) == 0 );
assert( gamma_move(board, 13, 8, 2) == 1 );
assert( gamma_free_fields(board, 14) == 34 );
assert( gamma_golden_possible(board, 14) == 0 );
assert( gamma_move(board, 15, 8, 8) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );


char* board628472922 = gamma_board(board);
assert( board628472922 != NULL );
assert( strcmp(board628472922, 
"12.1111.11581116..11.\n"
"6151013111.11812155.15\n"
"21492.9310.159310.3\n"
"8121521410.10..64..13\n"
"37.121015111229..2115\n"
".6.123107.3.1..76\n"
".2112133.1013967..8\n"
"51015.5.4177681.13\n"
"9632512.11103148..10\n") == 0);
free(board628472922);
board628472922 = NULL;
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );


char* board156497188 = gamma_board(board);
assert( board156497188 != NULL );
assert( strcmp(board156497188, 
"12.1111.11581116..11.\n"
"6151013111.11812155.15\n"
"21492.9310.159310.3\n"
"8121521410.102.64.513\n"
"37.121015111229..2115\n"
".6.123107.3.1..76\n"
".2112133.1013967..8\n"
"51015.5.4177681.13\n"
"9632512.11103148..10\n") == 0);
free(board156497188);
board156497188 = NULL;
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 10, 8, 1) == 0 );
assert( gamma_move(board, 10, 7, 2) == 0 );
assert( gamma_move(board, 11, 2, 13) == 0 );
assert( gamma_free_fields(board, 11) == 32 );
assert( gamma_move(board, 12, 11, 2) == 0 );
assert( gamma_move(board, 13, 7, 13) == 0 );
assert( gamma_move(board, 14, 9, 3) == 1 );
assert( gamma_move(board, 14, 3, 2) == 0 );
assert( gamma_move(board, 15, 0, 7) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 13, 7) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 7, 12, 3) == 1 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 8, 14, 1) == 0 );
assert( gamma_free_fields(board, 8) == 28 );
assert( gamma_move(board, 9, 6, 13) == 0 );
assert( gamma_move(board, 9, 12, 0) == 1 );
assert( gamma_golden_move(board, 9, 6, 0) == 0 );
assert( gamma_move(board, 10, 0, 3) == 1 );
assert( gamma_move(board, 10, 8, 0) == 0 );
assert( gamma_move(board, 11, 6, 8) == 0 );
assert( gamma_move(board, 11, 8, 2) == 0 );
assert( gamma_move(board, 12, 12, 1) == 0 );
assert( gamma_golden_move(board, 12, 1, 1) == 1 );
assert( gamma_move(board, 13, 9, 4) == 0 );
assert( gamma_move(board, 14, 6, 8) == 0 );
assert( gamma_move(board, 14, 12, 2) == 1 );
assert( gamma_move(board, 15, 0, 13) == 0 );
assert( gamma_move(board, 15, 11, 4) == 1 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 6, 13, 0) == 1 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 9, 12, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 2, 6) == 0 );
assert( gamma_move(board, 11, 12, 2) == 0 );
assert( gamma_move(board, 11, 13, 8) == 0 );
assert( gamma_free_fields(board, 11) == 23 );
assert( gamma_golden_move(board, 11, 5, 8) == 0 );
assert( gamma_move(board, 12, 9, 1) == 0 );
assert( gamma_free_fields(board, 12) == 23 );
assert( gamma_move(board, 13, 6, 1) == 0 );
assert( gamma_move(board, 14, 10, 6) == 0 );
assert( gamma_move(board, 15, 13, 7) == 0 );
assert( gamma_move(board, 15, 9, 4) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );


char* board572893317 = gamma_board(board);
assert( board572893317 != NULL );
assert( strcmp(board572893317, 
"12.1111211581116..11.\n"
"6151013111.11812155315\n"
"2149269310.159310.3\n"
"8121521410.102.64.513\n"
"37.121015111229.152115\n"
"106.123107.3141.776\n"
".2112133.101396714.8\n"
"51215.5.4177681.13\n"
"9632512.111031489610\n") == 0);
free(board572893317);
board572893317 = NULL;
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_move(board, 8, 8, 8) == 0 );


char* board859484057 = gamma_board(board);
assert( board859484057 != NULL );
assert( strcmp(board859484057, 
"12.1111211581116..11.\n"
"6151013111.11812155315\n"
"2149269310.159310.3\n"
"8121521410.102.64.513\n"
"37.121015111229.152115\n"
"106.123107.3141.776\n"
".2112133.101396714.8\n"
"51215.5.4177681.13\n"
"9632512.111031489610\n") == 0);
free(board859484057);
board859484057 = NULL;
assert( gamma_move(board, 9, 3, 7) == 0 );
assert( gamma_move(board, 9, 2, 4) == 1 );
assert( gamma_move(board, 10, 5, 6) == 0 );
assert( gamma_move(board, 10, 14, 2) == 0 );
assert( gamma_free_fields(board, 10) == 21 );
assert( gamma_move(board, 11, 3, 7) == 0 );
assert( gamma_move(board, 12, 5, 9) == 0 );
assert( gamma_move(board, 12, 14, 7) == 0 );
assert( gamma_move(board, 13, 5, 12) == 0 );
assert( gamma_move(board, 13, 8, 6) == 1 );
assert( gamma_move(board, 14, 5, 12) == 0 );
assert( gamma_move(board, 15, 1, 13) == 0 );
assert( gamma_move(board, 15, 9, 1) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 14, 8) == 1 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_golden_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 9, 8, 12) == 0 );
assert( gamma_move(board, 9, 6, 7) == 1 );
assert( gamma_move(board, 10, 8, 11) == 0 );
assert( gamma_free_fields(board, 10) == 17 );
assert( gamma_golden_move(board, 10, 1, 0) == 1 );
assert( gamma_move(board, 11, 7, 4) == 0 );
assert( gamma_move(board, 11, 1, 4) == 0 );
assert( gamma_move(board, 13, 3, 11) == 0 );
assert( gamma_move(board, 13, 10, 6) == 0 );
assert( gamma_move(board, 14, 2, 6) == 0 );
assert( gamma_move(board, 14, 1, 8) == 1 );
assert( gamma_busy_fields(board, 14) == 6 );
assert( gamma_move(board, 15, 2, 0) == 0 );


char* board632318851 = gamma_board(board);
assert( board632318851 != NULL );
assert( strcmp(board632318851, 
"12141111211581116..113\n"
"6151013111911812155315\n"
"214926931013159310.3\n"
"8121521410.102.64.513\n"
"379121015111229.152115\n"
"106.123107.3141.776\n"
".2112133.101396714.8\n"
"51215.564177681.13\n"
"91032512.111031489610\n") == 0);
free(board632318851);
board632318851 = NULL;


gamma_delete(board);

    return 0;
}
