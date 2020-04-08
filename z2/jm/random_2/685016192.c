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
uuid: 685016192
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 11, 15, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_free_fields(board, 4) == 83 );
assert( gamma_move(board, 5, 4, 0) == 1 );


char* board300255516 = gamma_board(board);
assert( board300255516 != NULL );
assert( strcmp(board300255516, 
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
".4......\n"
"........\n"
"........\n"
"..3...1.\n"
"..2.....\n"
"....5.4.\n") == 0);
free(board300255516);
board300255516 = NULL;
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_golden_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 10, 0, 8) == 1 );
assert( gamma_move(board, 12, 9, 1) == 0 );
assert( gamma_move(board, 12, 2, 0) == 0 );
assert( gamma_move(board, 13, 9, 0) == 0 );
assert( gamma_move(board, 14, 4, 6) == 1 );
assert( gamma_move(board, 14, 4, 1) == 1 );
assert( gamma_move(board, 15, 4, 7) == 1 );
assert( gamma_move(board, 15, 7, 6) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 7, 3, 10) == 1 );
assert( gamma_free_fields(board, 7) == 69 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 9, 2, 10) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 0, 6) == 1 );
assert( gamma_move(board, 11, 10, 7) == 0 );
assert( gamma_move(board, 11, 0, 3) == 1 );
assert( gamma_move(board, 13, 7, 0) == 1 );
assert( gamma_move(board, 13, 0, 4) == 1 );
assert( gamma_move(board, 14, 1, 1) == 1 );
assert( gamma_move(board, 15, 2, 5) == 1 );
assert( gamma_move(board, 15, 3, 7) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );


char* board127279138 = gamma_board(board);
assert( board127279138 != NULL );
assert( strcmp(board127279138, 
"..97....\n"
".6......\n"
"10.......\n"
"...1515...\n"
"10...14..15\n"
".415.....\n"
"13.1..2..\n"
"11.6.2...\n"
"..3...1.\n"
"1142.14...\n"
"5.7.5.413\n") == 0);
free(board127279138);
board127279138 = NULL;
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_golden_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 10, 7) == 0 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 9, 3, 1) == 1 );
assert( gamma_move(board, 9, 2, 7) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 7, 10) == 1 );
assert( gamma_move(board, 10, 1, 7) == 1 );
assert( gamma_move(board, 11, 7, 6) == 0 );
assert( gamma_move(board, 12, 0, 3) == 0 );
assert( gamma_move(board, 12, 5, 0) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 0, 3) == 0 );
assert( gamma_move(board, 13, 2, 10) == 0 );
assert( gamma_move(board, 14, 10, 6) == 0 );
assert( gamma_move(board, 15, 9, 3) == 0 );
assert( gamma_move(board, 15, 5, 2) == 1 );
assert( gamma_free_fields(board, 15) == 49 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 9, 5, 5) == 1 );
assert( gamma_move(board, 10, 3, 1) == 0 );
assert( gamma_move(board, 10, 4, 3) == 0 );
assert( gamma_move(board, 11, 2, 0) == 0 );
assert( gamma_move(board, 11, 6, 5) == 1 );
assert( gamma_move(board, 12, 10, 0) == 0 );
assert( gamma_busy_fields(board, 12) == 0 );
assert( gamma_move(board, 13, 1, 5) == 0 );
assert( gamma_move(board, 13, 7, 3) == 1 );
assert( gamma_move(board, 14, 6, 1) == 1 );
assert( gamma_move(board, 14, 6, 4) == 1 );
assert( gamma_move(board, 15, 2, 5) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_free_fields(board, 4) == 37 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 9, 9, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_golden_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 10, 3, 5) == 0 );
assert( gamma_golden_move(board, 10, 0, 5) == 0 );
assert( gamma_move(board, 11, 8, 4) == 0 );
assert( gamma_move(board, 11, 0, 9) == 0 );
assert( gamma_move(board, 12, 0, 4) == 0 );
assert( gamma_move(board, 13, 7, 2) == 0 );
assert( gamma_move(board, 13, 4, 4) == 0 );
assert( gamma_free_fields(board, 13) == 35 );
assert( gamma_move(board, 14, 7, 0) == 0 );
assert( gamma_move(board, 14, 0, 5) == 1 );
assert( gamma_move(board, 15, 1, 2) == 1 );
assert( gamma_move(board, 15, 6, 8) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_busy_fields(board, 10) == 4 );


char* board301093283 = gamma_board(board);
assert( board301093283 != NULL );
assert( strcmp(board301093283, 
"..97...10\n"
"66...7..\n"
"10.16..156\n"
".109151553.\n"
"1034.14.615\n"
"144157.911.\n"
"13.1.4214.\n"
"11.642..13\n"
".153..1511\n"
"1142914.14.\n"
"5.7.58413\n") == 0);
free(board301093283);
board301093283 = NULL;
assert( gamma_move(board, 11, 4, 3) == 0 );
assert( gamma_move(board, 11, 2, 4) == 0 );
assert( gamma_move(board, 12, 8, 4) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 3, 4) == 1 );
assert( gamma_move(board, 13, 7, 6) == 0 );
assert( gamma_golden_move(board, 13, 1, 3) == 0 );
assert( gamma_move(board, 14, 5, 4) == 0 );
assert( gamma_move(board, 15, 10, 1) == 0 );
assert( gamma_move(board, 15, 4, 6) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 9, 5, 7) == 0 );
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 7, 3) == 1 );
assert( gamma_move(board, 11, 9, 4) == 0 );
assert( gamma_move(board, 12, 1, 7) == 0 );
assert( gamma_move(board, 12, 3, 1) == 0 );
assert( gamma_busy_fields(board, 12) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 2, 0) == 0 );
assert( gamma_move(board, 13, 1, 6) == 0 );
assert( gamma_move(board, 14, 8, 1) == 0 );
assert( gamma_move(board, 14, 0, 9) == 0 );
assert( gamma_move(board, 15, 6, 3) == 1 );
assert( gamma_move(board, 15, 5, 8) == 1 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_golden_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_move(board, 10, 8, 1) == 0 );
assert( gamma_move(board, 10, 4, 2) == 1 );
assert( gamma_free_fields(board, 10) == 26 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 0, 3) == 0 );
assert( gamma_move(board, 12, 7, 7) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_golden_move(board, 12, 3, 0) == 1 );
assert( gamma_move(board, 13, 6, 5) == 0 );
assert( gamma_move(board, 13, 4, 0) == 0 );
assert( gamma_move(board, 14, 8, 1) == 0 );
assert( gamma_move(board, 14, 0, 5) == 0 );
assert( gamma_move(board, 15, 1, 5) == 0 );
assert( gamma_move(board, 15, 0, 2) == 1 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_free_fields(board, 5) == 22 );


char* board429213457 = gamma_board(board);
assert( board429213457 != NULL );
assert( strcmp(board429213457, 
"..975..10\n"
"66.3.7..\n"
"10.16.15156\n"
".10915155312\n"
"1034.14.615\n"
"144157.911.\n"
"13.1134214.\n"
"11.642.159\n"
"151538101511\n"
"1142914.14.\n"
"5.71258413\n") == 0);
free(board429213457);
board429213457 = NULL;
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 5, 10) == 1 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_golden_move(board, 8, 3, 0) == 1 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_move(board, 10, 9, 2) == 0 );
assert( gamma_move(board, 10, 1, 4) == 1 );
assert( gamma_move(board, 12, 7, 0) == 0 );
assert( gamma_move(board, 12, 1, 4) == 0 );
assert( gamma_busy_fields(board, 12) == 1 );
assert( gamma_move(board, 13, 5, 8) == 0 );
assert( gamma_move(board, 13, 6, 2) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 0, 1) == 0 );
assert( gamma_move(board, 15, 4, 0) == 0 );
assert( gamma_free_fields(board, 15) == 20 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_golden_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 9, 10, 1) == 0 );
assert( gamma_golden_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 10, 10, 1) == 0 );
assert( gamma_move(board, 11, 6, 6) == 0 );
assert( gamma_busy_fields(board, 11) == 2 );
assert( gamma_move(board, 12, 8, 4) == 0 );
assert( gamma_move(board, 12, 5, 3) == 1 );
assert( gamma_move(board, 13, 10, 1) == 0 );
assert( gamma_move(board, 14, 6, 5) == 0 );
assert( gamma_move(board, 14, 5, 6) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );


char* board212875915 = gamma_board(board);
assert( board212875915 != NULL );
assert( strcmp(board212875915, 
"..9757.10\n"
"66.317..\n"
"10.16.15156\n"
".10915155312\n"
"1034.1414615\n"
"144157.911.\n"
"13101132214.\n"
"11.64212159\n"
"151538101511\n"
"1142914.14.\n"
"5.7858413\n") == 0);
free(board212875915);
board212875915 = NULL;
assert( gamma_move(board, 4, 8, 4) == 0 );


char* board368800965 = gamma_board(board);
assert( board368800965 != NULL );
assert( strcmp(board368800965, 
"..9757.10\n"
"66.317..\n"
"10.16.15156\n"
".10915155312\n"
"1034.1414615\n"
"144157.911.\n"
"13101132214.\n"
"11.64212159\n"
"151538101511\n"
"1142914.14.\n"
"5.7858413\n") == 0);
free(board368800965);
board368800965 = NULL;
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_move(board, 10, 5, 1) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );


char* board520931445 = gamma_board(board);
assert( board520931445 != NULL );
assert( strcmp(board520931445, 
"..9757.10\n"
"666317..\n"
"10.16.15156\n"
".10915155312\n"
"1034.1414615\n"
"1441578911.\n"
"13101132214.\n"
"11.64212159\n"
"151538101511\n"
"11429141014.\n"
"5.7858413\n") == 0);
free(board520931445);
board520931445 = NULL;
assert( gamma_move(board, 11, 5, 7) == 0 );
assert( gamma_move(board, 11, 7, 10) == 0 );
assert( gamma_move(board, 12, 6, 3) == 0 );
assert( gamma_golden_possible(board, 12) == 0 );
assert( gamma_move(board, 13, 6, 1) == 0 );


char* board429291072 = gamma_board(board);
assert( board429291072 != NULL );
assert( strcmp(board429291072, 
"..9757.10\n"
"666317..\n"
"10.16.15156\n"
".10915155312\n"
"1034.1414615\n"
"1441578911.\n"
"13101132214.\n"
"11.64212159\n"
"151538101511\n"
"11429141014.\n"
"5.7858413\n") == 0);
free(board429291072);
board429291072 = NULL;
assert( gamma_move(board, 14, 8, 1) == 0 );
assert( gamma_move(board, 15, 6, 0) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 7, 5) == 1 );


char* board470730572 = gamma_board(board);
assert( board470730572 != NULL );
assert( strcmp(board470730572, 
"..9757.10\n"
"666317.1\n"
"10.16.15156\n"
".10915155312\n"
"1034.1414615\n"
"14415789114\n"
"13101132214.\n"
"11.64212159\n"
"151538101511\n"
"11429141014.\n"
"5.7858413\n") == 0);
free(board470730572);
board470730572 = NULL;
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 7, 1, 10) == 1 );


char* board702137572 = gamma_board(board);
assert( board702137572 != NULL );
assert( strcmp(board702137572, 
".79757.10\n"
"666317.1\n"
"10.16.15156\n"
".10915155312\n"
"1034.1414615\n"
"14415789114\n"
"13101132214.\n"
"11.64212159\n"
"151538101511\n"
"11429141014.\n"
"5.7858413\n") == 0);
free(board702137572);
board702137572 = NULL;
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 4, 8) == 1 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 10, 1, 7) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 5, 10) == 0 );
assert( gamma_move(board, 11, 5, 3) == 0 );


gamma_delete(board);

    return 0;
}
