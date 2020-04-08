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
uuid: 542504901
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 8, 13, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_free_fields(board, 4) == 74 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );


char* board633239095 = gamma_board(board);
assert( board633239095 != NULL );
assert( strcmp(board633239095, 
".2....3...\n"
"..........\n"
"..........\n"
"....4.....\n"
"4.........\n"
"3.2.......\n"
"..........\n"
"..........\n") == 0);
free(board633239095);
board633239095 = NULL;
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_move(board, 8, 7, 5) == 1 );
assert( gamma_move(board, 8, 2, 7) == 0 );


char* board127753998 = gamma_board(board);
assert( board127753998 != NULL );
assert( strcmp(board127753998, 
".27...3...\n"
"..........\n"
"...6...8..\n"
"....4.....\n"
"4.........\n"
"3.2.6.....\n"
"..........\n"
"..........\n") == 0);
free(board127753998);
board127753998 = NULL;
assert( gamma_busy_fields(board, 9) == 0 );
assert( gamma_move(board, 10, 2, 5) == 1 );
assert( gamma_move(board, 10, 3, 4) == 1 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_free_fields(board, 10) == 68 );


char* board683783536 = gamma_board(board);
assert( board683783536 != NULL );
assert( strcmp(board683783536, 
".27...3...\n"
"..........\n"
"..106...8..\n"
"...104.....\n"
"4.........\n"
"3.2.6.....\n"
"..........\n"
"..........\n") == 0);
free(board683783536);
board683783536 = NULL;
assert( gamma_move(board, 11, 1, 4) == 1 );
assert( gamma_move(board, 12, 4, 5) == 1 );
assert( gamma_move(board, 12, 6, 0) == 1 );
assert( gamma_move(board, 13, 1, 7) == 0 );
assert( gamma_move(board, 13, 6, 4) == 1 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_free_fields(board, 1) == 62 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_golden_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );


char* board378118336 = gamma_board(board);
assert( board378118336 != NULL );
assert( strcmp(board378118336, 
".27...3...\n"
".....32...\n"
"..10612..8..\n"
".11.104.13...\n"
"4.........\n"
"3.2.6.....\n"
"........1.\n"
".....112...\n") == 0);
free(board378118336);
board378118336 = NULL;
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 10, 0, 6) == 1 );
assert( gamma_move(board, 12, 5, 5) == 1 );
assert( gamma_move(board, 13, 7, 3) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 8, 9, 2) == 1 );
assert( gamma_free_fields(board, 8) == 49 );
assert( gamma_move(board, 9, 6, 3) == 1 );
assert( gamma_move(board, 10, 6, 7) == 0 );
assert( gamma_move(board, 10, 0, 6) == 0 );
assert( gamma_move(board, 11, 7, 4) == 1 );
assert( gamma_move(board, 12, 8, 7) == 1 );
assert( gamma_move(board, 12, 5, 2) == 1 );
assert( gamma_move(board, 13, 5, 4) == 1 );
assert( gamma_move(board, 13, 9, 4) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board247438763 = gamma_board(board);
assert( board247438763 != NULL );
assert( strcmp(board247438763, 
".27...3212.\n"
"10...432.4.\n"
".61061212.8..\n"
".11.104131311.13\n"
"4..3..913.4\n"
"3.256125..8\n"
"6..4....1.\n"
"...5.112..3\n") == 0);
free(board247438763);
board247438763 = NULL;
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 1) == 1 );
assert( gamma_move(board, 8, 6, 6) == 0 );
assert( gamma_move(board, 9, 2, 0) == 1 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_golden_move(board, 9, 6, 8) == 0 );
assert( gamma_move(board, 10, 7, 5) == 0 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_move(board, 11, 1, 6) == 1 );
assert( gamma_move(board, 11, 3, 3) == 0 );
assert( gamma_move(board, 12, 2, 8) == 0 );
assert( gamma_move(board, 12, 3, 6) == 1 );
assert( gamma_move(board, 13, 3, 1) == 0 );
assert( gamma_move(board, 13, 3, 0) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 10, 1, 5) == 0 );
assert( gamma_move(board, 10, 6, 5) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 1, 6) == 0 );
assert( gamma_free_fields(board, 11) == 29 );
assert( gamma_golden_move(board, 12, 2, 3) == 0 );
assert( gamma_move(board, 13, 0, 7) == 0 );
assert( gamma_free_fields(board, 13) == 29 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 9, 7) == 1 );


char* board125124688 = gamma_board(board);
assert( board125124688 != NULL );
assert( strcmp(board125124688, 
"127...32122\n"
"1011.12432.41\n"
".61061212482.\n"
".11.104131311.13\n"
"45.3.3913.4\n"
"3.256125..8\n"
"6..4....18\n"
"..95.112..3\n") == 0);
free(board125124688);
board125124688 = NULL;
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 5) == 1 );
assert( gamma_free_fields(board, 8) == 24 );
assert( gamma_free_fields(board, 9) == 24 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_free_fields(board, 10) == 24 );
assert( gamma_move(board, 11, 0, 7) == 0 );
assert( gamma_move(board, 11, 9, 6) == 0 );
assert( gamma_move(board, 12, 7, 3) == 0 );
assert( gamma_move(board, 12, 1, 1) == 1 );
assert( gamma_busy_fields(board, 12) == 7 );
assert( gamma_move(board, 13, 8, 2) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_golden_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 9, 7, 3) == 0 );
assert( gamma_move(board, 10, 7, 3) == 0 );
assert( gamma_free_fields(board, 10) == 19 );
assert( gamma_move(board, 11, 4, 5) == 0 );


char* board226422776 = gamma_board(board);
assert( board226422776 != NULL );
assert( strcmp(board226422776, 
"127...32122\n"
"1011.12432.41\n"
".610612124828\n"
"4111104131311.13\n"
"45.3.3913.4\n"
"36256125.138\n"
"612.4....18\n"
"4.95.1127.3\n") == 0);
free(board226422776);
board226422776 = NULL;
assert( gamma_move(board, 12, 5, 6) == 0 );
assert( gamma_move(board, 13, 3, 4) == 0 );
assert( gamma_move(board, 13, 4, 6) == 0 );
assert( gamma_free_fields(board, 13) == 19 );


char* board933257338 = gamma_board(board);
assert( board933257338 != NULL );
assert( strcmp(board933257338, 
"127...32122\n"
"1011.12432.41\n"
".610612124828\n"
"4111104131311.13\n"
"45.3.3913.4\n"
"36256125.138\n"
"612.4....18\n"
"4.95.1127.3\n") == 0);
free(board933257338);
board933257338 = NULL;
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board588311545 = gamma_board(board);
assert( board588311545 != NULL );
assert( strcmp(board588311545, 
"1274..32122\n"
"1011.12432.41\n"
".610612124828\n"
"4111104131311.13\n"
"4553.3913.4\n"
"36256125.138\n"
"612.4....18\n"
"4.95.1127.3\n") == 0);
free(board588311545);
board588311545 = NULL;
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 9, 7, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 10, 2, 7) == 0 );
assert( gamma_move(board, 11, 1, 3) == 0 );
assert( gamma_move(board, 12, 7, 4) == 0 );
assert( gamma_move(board, 12, 3, 1) == 0 );
assert( gamma_free_fields(board, 12) == 17 );
assert( gamma_move(board, 13, 7, 3) == 0 );
assert( gamma_move(board, 13, 5, 1) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_golden_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_golden_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 9, 2) == 0 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_free_fields(board, 10) == 15 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 0, 1) == 0 );
assert( gamma_move(board, 12, 5, 5) == 0 );
assert( gamma_move(board, 13, 7, 7) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );


char* board183057829 = gamma_board(board);
assert( board183057829 != NULL );
assert( strcmp(board183057829, 
"1274..32122\n"
"1011.12432.41\n"
".610612124828\n"
"4111104131311.13\n"
"4553.3913.4\n"
"36216125.138\n"
"612.4.13..18\n"
"4.9551127.3\n") == 0);
free(board183057829);
board183057829 = NULL;
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_golden_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_golden_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 8, 6, 6) == 0 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_move(board, 10, 1, 7) == 0 );
assert( gamma_move(board, 10, 8, 2) == 0 );
assert( gamma_move(board, 11, 7, 4) == 0 );
assert( gamma_move(board, 11, 4, 3) == 1 );
assert( gamma_move(board, 12, 1, 2) == 0 );
assert( gamma_move(board, 12, 8, 6) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 4, 8) == 0 );
assert( gamma_move(board, 13, 1, 5) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_free_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 9, 7, 2) == 1 );
assert( gamma_move(board, 9, 8, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 5, 4) == 0 );
assert( gamma_move(board, 10, 1, 7) == 0 );
assert( gamma_free_fields(board, 10) == 11 );
assert( gamma_move(board, 11, 3, 3) == 0 );
assert( gamma_move(board, 11, 2, 2) == 0 );
assert( gamma_move(board, 12, 7, 4) == 0 );
assert( gamma_move(board, 13, 6, 2) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );


char* board224758234 = gamma_board(board);
assert( board224758234 != NULL );
assert( strcmp(board224758234, 
"1274..32122\n"
"1011.12432.41\n"
".66612124828\n"
"4111104131311.13\n"
"455311391354\n"
"362161259138\n"
"612.4.13..18\n"
"4.955112753\n") == 0);
free(board224758234);
board224758234 = NULL;
assert( gamma_move(board, 10, 0, 1) == 0 );
assert( gamma_free_fields(board, 10) == 11 );
assert( gamma_move(board, 11, 7, 5) == 0 );
assert( gamma_move(board, 11, 5, 3) == 0 );
assert( gamma_move(board, 13, 6, 7) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );


gamma_delete(board);

    return 0;
}
