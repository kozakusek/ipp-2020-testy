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
uuid: 969314371
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 7, 14, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 13, 2) == 1 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 6, 13, 0) == 1 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 13, 1) == 1 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 9, 0, 4) == 1 );
assert( gamma_move(board, 9, 5, 6) == 1 );
assert( gamma_move(board, 10, 4, 9) == 0 );
assert( gamma_free_fields(board, 10) == 94 );
assert( gamma_move(board, 11, 8, 5) == 1 );
assert( gamma_move(board, 11, 8, 4) == 1 );


char* board370527423 = gamma_board(board);
assert( board370527423 != NULL );
assert( strcmp(board370527423, 
"4....9.........\n"
".....6..11.3....\n"
"9....7..11......\n"
"...............\n"
".............1.\n"
"......5......8.\n"
".....8.......6.\n") == 0);
free(board370527423);
board370527423 = NULL;
assert( gamma_move(board, 12, 3, 3) == 1 );
assert( gamma_move(board, 13, 10, 3) == 1 );
assert( gamma_move(board, 14, 4, 3) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_free_fields(board, 2) == 86 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_golden_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 7, 10, 1) == 1 );
assert( gamma_move(board, 7, 10, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_golden_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 9, 1, 6) == 1 );
assert( gamma_free_fields(board, 9) == 81 );
assert( gamma_move(board, 10, 5, 5) == 0 );
assert( gamma_move(board, 11, 3, 9) == 0 );
assert( gamma_busy_fields(board, 11) == 2 );
assert( gamma_move(board, 12, 2, 14) == 0 );
assert( gamma_move(board, 12, 0, 3) == 1 );
assert( gamma_move(board, 13, 2, 0) == 1 );
assert( gamma_free_fields(board, 13) == 79 );
assert( gamma_move(board, 14, 2, 11) == 0 );
assert( gamma_move(board, 14, 1, 3) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );


char* board462982261 = gamma_board(board);
assert( board462982261 != NULL );
assert( strcmp(board462982261, 
"49.1.9.........\n"
".....61211.3....\n"
"9....7..11......\n"
"1214.1214.....13....\n"
".13..........1.\n"
"5.....5...7..8.\n"
"..13..8.1..7..6.\n") == 0);
free(board462982261);
board462982261 = NULL;
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 2, 12, 5) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_golden_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_free_fields(board, 5) == 73 );
assert( gamma_golden_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 11) == 0 );
assert( gamma_move(board, 9, 4, 1) == 1 );
assert( gamma_golden_move(board, 9, 4, 8) == 0 );
assert( gamma_move(board, 10, 2, 14) == 0 );
assert( gamma_move(board, 10, 12, 5) == 0 );
assert( gamma_golden_move(board, 10, 4, 5) == 0 );
assert( gamma_move(board, 12, 8, 2) == 1 );
assert( gamma_move(board, 13, 6, 10) == 0 );
assert( gamma_move(board, 14, 3, 5) == 1 );
assert( gamma_move(board, 1, 13, 3) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_golden_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_free_fields(board, 2) == 66 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_free_fields(board, 3) == 65 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 13, 6) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_free_fields(board, 5) == 64 );
assert( gamma_golden_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 8, 6, 4) == 1 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_move(board, 9, 0, 9) == 0 );
assert( gamma_move(board, 10, 2, 10) == 0 );
assert( gamma_move(board, 10, 3, 1) == 1 );
assert( gamma_golden_move(board, 11, 6, 2) == 0 );
assert( gamma_move(board, 12, 5, 14) == 0 );
assert( gamma_move(board, 13, 0, 3) == 0 );
assert( gamma_move(board, 14, 4, 9) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 4, 11, 4) == 1 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 6, 9, 4) == 1 );
assert( gamma_move(board, 6, 10, 2) == 1 );
assert( gamma_golden_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_golden_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 8, 6, 14) == 0 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_move(board, 10, 0, 9) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );


char* board170840546 = gamma_board(board);
assert( board170840546 != NULL );
assert( strcmp(board170840546, 
"4981.9.......4.\n"
"...14251211.3.2..\n"
"9...178.116.4...\n"
"1214.1214.....13..1.\n"
"51323.8.12.6..1.\n"
"5..109257..7..8.\n"
"..13.18.1..7..6.\n") == 0);
free(board170840546);
board170840546 = NULL;
assert( gamma_move(board, 11, 2, 3) == 1 );
assert( gamma_busy_fields(board, 11) == 3 );
assert( gamma_move(board, 12, 3, 2) == 0 );
assert( gamma_busy_fields(board, 12) == 3 );
assert( gamma_move(board, 13, 14, 0) == 1 );


char* board667933449 = gamma_board(board);
assert( board667933449 != NULL );
assert( strcmp(board667933449, 
"4981.9.......4.\n"
"...14251211.3.2..\n"
"9...178.116.4...\n"
"1214111214.....13..1.\n"
"51323.8.12.6..1.\n"
"5..109257..7..8.\n"
"..13.18.1..7..613\n") == 0);
free(board667933449);
board667933449 = NULL;
assert( gamma_move(board, 14, 1, 0) == 1 );
assert( gamma_move(board, 14, 9, 0) == 1 );
assert( gamma_free_fields(board, 14) == 51 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_free_fields(board, 1) == 51 );
assert( gamma_move(board, 2, 13, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board814040002 = gamma_board(board);
assert( board814040002 != NULL );
assert( strcmp(board814040002, 
"4981.9.......4.\n"
"...14251211.3.22.\n"
"9...178.116.4...\n"
"1214111214.....13..1.\n"
"51323.8.12.6..1.\n"
"5..109257..7..8.\n"
".1413.18.1.147..613\n") == 0);
free(board814040002);
board814040002 = NULL;
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 4, 12, 1) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 8, 7, 2) == 1 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 10, 3, 14) == 0 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_move(board, 11, 0, 2) == 0 );
assert( gamma_busy_fields(board, 11) == 3 );
assert( gamma_free_fields(board, 11) == 46 );
assert( gamma_move(board, 13, 3, 6) == 0 );
assert( gamma_move(board, 14, 4, 7) == 0 );
assert( gamma_move(board, 14, 10, 6) == 1 );
assert( gamma_golden_move(board, 14, 3, 2) == 1 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_free_fields(board, 2) == 44 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 6, 0, 8) == 0 );


char* board370400008 = gamma_board(board);
assert( board370400008 != NULL );
assert( strcmp(board370400008, 
"4981.9....14..4.\n"
"...14251211.3.22.\n"
"91..178.116.4...\n"
"1214111214.....13..1.\n"
"513143.8812.6..1.\n"
"574109257..7.48.\n"
"51413.1851.147..613\n") == 0);
free(board370400008);
board370400008 = NULL;
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 2, 12) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_move(board, 10, 8, 4) == 0 );
assert( gamma_move(board, 11, 6, 1) == 0 );
assert( gamma_move(board, 11, 11, 6) == 1 );
assert( gamma_move(board, 12, 6, 7) == 0 );
assert( gamma_move(board, 12, 6, 1) == 0 );
assert( gamma_move(board, 14, 3, 5) == 0 );
assert( gamma_busy_fields(board, 14) == 7 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 14) == 0 );
assert( gamma_move(board, 7, 14, 3) == 1 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 9, 1, 14) == 0 );
assert( gamma_move(board, 10, 2, 14) == 0 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_move(board, 11, 14, 4) == 1 );
assert( gamma_move(board, 12, 3, 9) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 4, 1) == 0 );
assert( gamma_move(board, 13, 5, 1) == 0 );
assert( gamma_move(board, 14, 11, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_golden_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_free_fields(board, 4) == 38 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_free_fields(board, 6) == 38 );
assert( gamma_move(board, 7, 5, 11) == 0 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 9, 5, 5) == 0 );
assert( gamma_move(board, 10, 0, 1) == 0 );
assert( gamma_move(board, 11, 5, 1) == 0 );
assert( gamma_move(board, 11, 8, 3) == 1 );


char* board171951476 = gamma_board(board);
assert( board171951476 != NULL );
assert( strcmp(board171951476, 
"4981.9....1411.4.\n"
"...14251211.3.22.\n"
"91..178.116.4..11\n"
"122111214...11.13..17\n"
"513143.8812.614.1.\n"
"574109257..7.48.\n"
"51413.1851.147..613\n") == 0);
free(board171951476);
board171951476 = NULL;
assert( gamma_move(board, 12, 1, 8) == 0 );
assert( gamma_move(board, 12, 7, 0) == 0 );
assert( gamma_move(board, 13, 6, 9) == 0 );
assert( gamma_free_fields(board, 13) == 37 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_free_fields(board, 5) == 35 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_free_fields(board, 6) == 35 );
assert( gamma_move(board, 7, 6, 14) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_move(board, 10, 2, 1) == 0 );
assert( gamma_move(board, 11, 6, 14) == 0 );
assert( gamma_move(board, 11, 14, 0) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 6, 7) == 0 );
assert( gamma_move(board, 12, 12, 5) == 0 );
assert( gamma_free_fields(board, 12) == 35 );
assert( gamma_move(board, 13, 6, 4) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 6, 6) == 1 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 7, 14, 3) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 10, 6, 8) == 0 );
assert( gamma_move(board, 10, 13, 0) == 0 );
assert( gamma_move(board, 11, 6, 8) == 0 );
assert( gamma_move(board, 12, 6, 7) == 0 );
assert( gamma_move(board, 13, 1, 6) == 0 );
assert( gamma_move(board, 14, 4, 3) == 0 );
assert( gamma_move(board, 14, 3, 5) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 1, 14) == 0 );
assert( gamma_free_fields(board, 5) == 32 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 6, 12, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 9, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 3, 11) == 0 );
assert( gamma_move(board, 10, 8, 6) == 1 );
assert( gamma_move(board, 11, 2, 14) == 0 );
assert( gamma_move(board, 11, 3, 1) == 0 );
assert( gamma_move(board, 12, 12, 5) == 0 );
assert( gamma_move(board, 12, 6, 6) == 0 );
assert( gamma_move(board, 13, 5, 2) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 5, 2) == 0 );
assert( gamma_move(board, 14, 9, 0) == 0 );
assert( gamma_golden_possible(board, 14) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board795279265 = gamma_board(board);
assert( board795279265 != NULL );
assert( strcmp(board795279265, 
"4981.914.103141164.\n"
"...14251211.3.22.\n"
"91..178.116.4..11\n"
"122111214.1.11.13..17\n"
"513143288127614.1.\n"
"574109257..7.48.\n"
"5141371851.147..613\n") == 0);
free(board795279265);
board795279265 = NULL;
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_free_fields(board, 6) == 29 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 9, 2, 12) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 14, 2) == 1 );
assert( gamma_move(board, 11, 10, 6) == 0 );
assert( gamma_move(board, 12, 5, 9) == 0 );
assert( gamma_move(board, 12, 1, 4) == 0 );
assert( gamma_move(board, 13, 5, 0) == 0 );
assert( gamma_move(board, 13, 4, 6) == 1 );
assert( gamma_move(board, 14, 8, 1) == 1 );
assert( gamma_move(board, 14, 6, 5) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 3, 14, 1) == 1 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 7, 14, 2) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 9, 6, 14) == 0 );
assert( gamma_move(board, 9, 10, 5) == 0 );
assert( gamma_move(board, 10, 4, 13) == 0 );
assert( gamma_move(board, 11, 0, 2) == 0 );
assert( gamma_move(board, 11, 12, 5) == 0 );
assert( gamma_move(board, 12, 1, 3) == 0 );
assert( gamma_move(board, 12, 2, 1) == 0 );
assert( gamma_busy_fields(board, 12) == 3 );
assert( gamma_move(board, 13, 4, 12) == 0 );
assert( gamma_move(board, 14, 3, 5) == 0 );
assert( gamma_move(board, 14, 2, 0) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 14) == 0 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 14, 2) == 0 );
assert( gamma_move(board, 5, 14, 1) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 14, 6) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );


char* board615671970 = gamma_board(board);
assert( board615671970 != NULL );
assert( strcmp(board615671970, 
"498113914.1031411646\n"
"...14251211.3.22.\n"
"91..178.116.4..11\n"
"122111214.1.11.13..17\n"
"513143288127614.110\n"
"57410925714.7.483\n"
"5141371851.147..613\n") == 0);
free(board615671970);
board615671970 = NULL;
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 10, 2, 2) == 0 );
assert( gamma_free_fields(board, 10) == 24 );
assert( gamma_move(board, 11, 10, 3) == 0 );
assert( gamma_free_fields(board, 11) == 24 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 5, 0) == 0 );
assert( gamma_move(board, 12, 1, 2) == 0 );
assert( gamma_move(board, 13, 4, 2) == 0 );
assert( gamma_move(board, 13, 10, 5) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 14, 5) == 1 );


gamma_delete(board);

    return 0;
}
