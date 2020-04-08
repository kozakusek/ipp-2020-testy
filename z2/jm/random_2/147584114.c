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
uuid: 147584114
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 7, 11, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_free_fields(board, 3) == 87 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 12, 2) == 1 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_move(board, 9, 3, 2) == 1 );
assert( gamma_move(board, 9, 4, 4) == 1 );
assert( gamma_move(board, 10, 6, 5) == 1 );
assert( gamma_move(board, 11, 4, 3) == 1 );
assert( gamma_free_fields(board, 11) == 78 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );


char* board180712463 = gamma_board(board);
assert( board180712463 != NULL );
assert( strcmp(board180712463, 
"........7....\n"
".....210......\n"
"....9...6....\n"
"2...115.......\n"
"...96.......7\n"
"...6.........\n"
"23.413.7.....\n") == 0);
free(board180712463);
board180712463 = NULL;
assert( gamma_move(board, 9, 6, 9) == 0 );
assert( gamma_move(board, 9, 6, 1) == 1 );
assert( gamma_move(board, 10, 6, 0) == 1 );
assert( gamma_move(board, 11, 3, 1) == 0 );
assert( gamma_golden_move(board, 11, 5, 6) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_free_fields(board, 4) == 70 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_free_fields(board, 5) == 69 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 6, 9, 2) == 1 );
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_move(board, 9, 6, 2) == 1 );
assert( gamma_move(board, 9, 11, 3) == 1 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 10, 10, 6) == 1 );
assert( gamma_move(board, 10, 12, 2) == 0 );
assert( gamma_move(board, 11, 8, 4) == 0 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_golden_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_move(board, 7, 10, 0) == 1 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 8, 9, 0) == 1 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_move(board, 9, 5, 4) == 1 );
assert( gamma_move(board, 10, 9, 0) == 0 );
assert( gamma_move(board, 10, 4, 5) == 1 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 11, 4) == 1 );
assert( gamma_move(board, 11, 11, 2) == 1 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 12, 0) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board190128691 = gamma_board(board);
assert( board190128691 != NULL );
assert( strcmp(board190128691, 
"...4....7.10..\n"
".6..10210.3....\n"
"....997.6..11.\n"
"2...115.....9.\n"
"...9659.46.117\n"
"...6..9.7....\n"
"23.413107.87.2\n") == 0);
free(board190128691);
board190128691 = NULL;
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_move(board, 9, 0, 11) == 0 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 10, 4, 4) == 0 );
assert( gamma_golden_move(board, 10, 0, 9) == 0 );
assert( gamma_move(board, 11, 4, 12) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 5, 11, 6) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 10, 4, 7) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 6, 8, 3) == 1 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 6) == 1 );
assert( gamma_move(board, 10, 6, 12) == 0 );
assert( gamma_free_fields(board, 10) == 40 );
assert( gamma_move(board, 11, 5, 11) == 0 );
assert( gamma_golden_move(board, 11, 0, 4) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_golden_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 5) == 1 );
assert( gamma_free_fields(board, 9) == 36 );
assert( gamma_move(board, 10, 8, 4) == 0 );
assert( gamma_move(board, 10, 0, 1) == 1 );
assert( gamma_move(board, 11, 3, 3) == 1 );
assert( gamma_move(board, 11, 12, 3) == 1 );
assert( gamma_golden_move(board, 11, 0, 1) == 1 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_free_fields(board, 5) == 33 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_free_fields(board, 7) == 32 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_move(board, 9, 5, 12) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_golden_move(board, 10, 1, 2) == 0 );


char* board738099774 = gamma_board(board);
assert( board738099774 != NULL );
assert( strcmp(board738099774, 
"95.4..4.7.105.\n"
".6.910210.3....\n"
"6...957363311.\n"
"2..11115.56..911\n"
"..49659346.117\n"
"11726..9.76...\n"
"236413107287.2\n") == 0);
free(board738099774);
board738099774 = NULL;
assert( gamma_free_fields(board, 11) == 32 );


char* board738490440 = gamma_board(board);
assert( board738490440 != NULL );
assert( strcmp(board738490440, 
"95.4..4.7.105.\n"
".6.910210.3....\n"
"6...957363311.\n"
"2..11115.56..911\n"
"..49659346.117\n"
"11726..9.76...\n"
"236413107287.2\n") == 0);
free(board738490440);
board738490440 = NULL;
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_golden_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_free_fields(board, 3) == 31 );


char* board240740608 = gamma_board(board);
assert( board240740608 != NULL );
assert( strcmp(board240740608, 
"9514..4.7.105.\n"
".6.910210.3....\n"
"6...957363311.\n"
"2..11115.56..911\n"
"..49659346.117\n"
"11726..9.76...\n"
"236413107287.2\n") == 0);
free(board240740608);
board240740608 = NULL;
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_free_fields(board, 7) == 30 );
assert( gamma_move(board, 8, 5, 11) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 9, 5, 11) == 0 );
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_move(board, 10, 5, 7) == 0 );
assert( gamma_move(board, 10, 5, 3) == 0 );
assert( gamma_free_fields(board, 10) == 30 );


char* board154929529 = gamma_board(board);
assert( board154929529 != NULL );
assert( strcmp(board154929529, 
"9514..4.7.105.\n"
".6.910210.3....\n"
"65..957363311.\n"
"2..11115.56..911\n"
"..49659346.117\n"
"11726..9.76...\n"
"236413107287.2\n") == 0);
free(board154929529);
board154929529 = NULL;
assert( gamma_move(board, 11, 5, 12) == 0 );
assert( gamma_move(board, 11, 12, 5) == 1 );
assert( gamma_busy_fields(board, 11) == 7 );


char* board769950587 = gamma_board(board);
assert( board769950587 != NULL );
assert( strcmp(board769950587, 
"9514..4.7.105.\n"
".6.910210.3...11\n"
"65..957363311.\n"
"2..11115.56..911\n"
"..49659346.117\n"
"11726..9.76...\n"
"236413107287.2\n") == 0);
free(board769950587);
board769950587 = NULL;
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 7, 6, 12) == 0 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 9, 0, 11) == 0 );
assert( gamma_move(board, 9, 4, 1) == 1 );
assert( gamma_move(board, 10, 1, 5) == 0 );
assert( gamma_move(board, 10, 7, 4) == 0 );
assert( gamma_move(board, 11, 3, 2) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 8, 1, 12) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 10, 4, 12) == 0 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 11, 4, 3) == 0 );
assert( gamma_move(board, 11, 6, 4) == 0 );
assert( gamma_golden_possible(board, 11) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 11, 0) == 1 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 9, 6) == 1 );


char* board102037485 = gamma_board(board);
assert( board102037485 != NULL );
assert( strcmp(board102037485, 
"9514..4.77105.\n"
".6491021063...11\n"
"657.957363311.\n"
"2..11115.56..911\n"
"..49659346.117\n"
"117269.9.76...\n"
"23641310728762\n") == 0);
free(board102037485);
board102037485 = NULL;
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 9, 9, 4) == 0 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 10, 1, 11) == 0 );
assert( gamma_move(board, 11, 5, 11) == 0 );
assert( gamma_free_fields(board, 11) == 23 );


char* board181367800 = gamma_board(board);
assert( board181367800 != NULL );
assert( strcmp(board181367800, 
"9514..4.77105.\n"
".6491021063...11\n"
"657.957363311.\n"
"2..11115.56..911\n"
"..49659346.117\n"
"117269.9.76...\n"
"23641310728762\n") == 0);
free(board181367800);
board181367800 = NULL;
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_free_fields(board, 2) == 23 );


char* board107941203 = gamma_board(board);
assert( board107941203 != NULL );
assert( strcmp(board107941203, 
"9514..4.77105.\n"
".6491021063...11\n"
"657.957363311.\n"
"2..11115.56..911\n"
"..49659346.117\n"
"117269.9.76...\n"
"23641310728762\n") == 0);
free(board107941203);
board107941203 = NULL;
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 11, 2, 1) == 0 );
assert( gamma_move(board, 11, 9, 3) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_free_fields(board, 1) == 22 );


char* board655923237 = gamma_board(board);
assert( board655923237 != NULL );
assert( strcmp(board655923237, 
"9514..4.77105.\n"
".6491021063...11\n"
"657.957363311.\n"
"2..11115.566.911\n"
"..49659346.117\n"
"117269.9.76...\n"
"23641310728762\n") == 0);
free(board655923237);
board655923237 = NULL;
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 8, 12, 5) == 0 );
assert( gamma_move(board, 9, 3, 10) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_golden_move(board, 9, 1, 10) == 0 );
assert( gamma_move(board, 10, 5, 2) == 0 );
assert( gamma_move(board, 10, 2, 4) == 0 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 11, 5, 11) == 0 );
assert( gamma_move(board, 11, 2, 5) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 9) == 0 );


char* board115016404 = gamma_board(board);
assert( board115016404 != NULL );
assert( strcmp(board115016404, 
"9514..4.77105.\n"
".6491021063...11\n"
"657.957363311.\n"
"2..11115.566.911\n"
"2.49659346.117\n"
"117269.9.76...\n"
"23641310728762\n") == 0);
free(board115016404);
board115016404 = NULL;
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 10, 2, 2) == 0 );
assert( gamma_move(board, 10, 0, 1) == 0 );
assert( gamma_move(board, 11, 1, 11) == 0 );
assert( gamma_move(board, 11, 7, 0) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


gamma_delete(board);

    return 0;
}
