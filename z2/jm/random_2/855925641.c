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
uuid: 855925641
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 10, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 7, 8, 1) == 1 );


char* board416665875 = gamma_board(board);
assert( board416665875 != NULL );
assert( strcmp(board416665875, 
"...1......\n"
"......3...\n"
"..4.......\n"
"..........\n"
"...6...7..\n"
".5.1....7.\n"
"..........\n") == 0);
free(board416665875);
board416665875 = NULL;
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 8, 4, 0) == 1 );


char* board390146508 = gamma_board(board);
assert( board390146508 != NULL );
assert( strcmp(board390146508, 
"...1......\n"
"......3...\n"
"..4.......\n"
"..........\n"
"...6...7..\n"
".581....7.\n"
"....8.....\n") == 0);
free(board390146508);
board390146508 = NULL;
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_move(board, 10, 4, 9) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 8, 6, 0) == 1 );
assert( gamma_move(board, 9, 4, 5) == 1 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_golden_move(board, 9, 1, 1) == 1 );
assert( gamma_move(board, 10, 1, 6) == 1 );
assert( gamma_move(board, 10, 9, 1) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_free_fields(board, 4) == 46 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 10, 6, 0) == 0 );
assert( gamma_move(board, 10, 2, 3) == 1 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_move(board, 10, 5, 6) == 1 );
assert( gamma_move(board, 10, 3, 4) == 0 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );


char* board914037324 = gamma_board(board);
assert( board914037324 != NULL );
assert( strcmp(board914037324, 
".1071.10..3.\n"
"8753913.47\n"
"4.446.....\n"
"9.103...2..\n"
"..86..876.\n"
".981.1..710\n"
"11..838...\n") == 0);
free(board914037324);
board914037324 = NULL;
assert( gamma_move(board, 10, 0, 7) == 0 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_free_fields(board, 8) == 29 );
assert( gamma_move(board, 9, 0, 8) == 0 );
assert( gamma_move(board, 9, 5, 2) == 1 );
assert( gamma_move(board, 10, 0, 3) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 0) == 1 );
assert( gamma_free_fields(board, 9) == 26 );
assert( gamma_golden_move(board, 9, 6, 4) == 0 );
assert( gamma_move(board, 10, 4, 8) == 0 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );


char* board231311893 = gamma_board(board);
assert( board231311893 != NULL );
assert( strcmp(board231311893, 
"21071510273.\n"
"8753913.47\n"
"43446.....\n"
"9.103...2..\n"
"..86.9876.\n"
".9814136710\n"
"119.83882.\n") == 0);
free(board231311893);
board231311893 = NULL;
assert( gamma_move(board, 10, 4, 7) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_free_fields(board, 3) == 19 );


char* board693889031 = gamma_board(board);
assert( board693889031 != NULL );
assert( strcmp(board693889031, 
"210715102733\n"
"8753913.47\n"
"43446.....\n"
"9.103...2..\n"
"..86.9876.\n"
".9814136710\n"
"119.83882.\n") == 0);
free(board693889031);
board693889031 = NULL;
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_free_fields(board, 6) == 19 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_free_fields(board, 7) == 19 );
assert( gamma_golden_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_free_fields(board, 8) == 19 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 9, 8, 6) == 0 );
assert( gamma_move(board, 10, 1, 0) == 0 );
assert( gamma_move(board, 10, 0, 0) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_golden_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );


char* board712490934 = gamma_board(board);
assert( board712490934 != NULL );
assert( strcmp(board712490934, 
"210775102733\n"
"8753913.47\n"
"43446.....\n"
"9.103.5.2..\n"
"7.86.9876.\n"
"19814136710\n"
"119.83882.\n") == 0);
free(board712490934);
board712490934 = NULL;
assert( gamma_move(board, 10, 3, 8) == 0 );
assert( gamma_golden_move(board, 10, 5, 1) == 1 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 5, 4) == 1 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_move(board, 10, 4, 8) == 0 );
assert( gamma_move(board, 10, 1, 0) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );


char* board975037365 = gamma_board(board);
assert( board975037365 != NULL );
assert( strcmp(board975037365, 
"210775102733\n"
"8753913.47\n"
"434468....\n"
"9.103.5.2..\n"
"7.86.9876.\n"
"198141036710\n"
"119.83882.\n") == 0);
free(board975037365);
board975037365 = NULL;
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );


char* board195847751 = gamma_board(board);
assert( board195847751 != NULL );
assert( strcmp(board195847751, 
"210775102733\n"
"8753913.47\n"
"434468....\n"
"9.103.5.2..\n"
"7.86.9876.\n"
"198141036710\n"
"119.83882.\n") == 0);
free(board195847751);
board195847751 = NULL;
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_move(board, 10, 4, 8) == 0 );


gamma_delete(board);

    return 0;
}
