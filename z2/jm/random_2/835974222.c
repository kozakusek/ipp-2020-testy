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
uuid: 835974222
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 11, 10, 9);
assert( board != NULL );


assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 10) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_move(board, 6, 7, 6) == 1 );


char* board279196439 = gamma_board(board);
assert( board279196439 != NULL );
assert( strcmp(board279196439, 
".....3....\n"
"..........\n"
".6...5....\n"
"..........\n"
"......26..\n"
"..........\n"
"..........\n"
"5.........\n"
".4........\n"
"..........\n"
"..........\n") == 0);
free(board279196439);
board279196439 = NULL;
assert( gamma_move(board, 8, 3, 9) == 1 );
assert( gamma_move(board, 8, 8, 5) == 1 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_move(board, 9, 9, 0) == 1 );
assert( gamma_move(board, 10, 0, 8) == 1 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_golden_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 2) == 1 );
assert( gamma_move(board, 9, 5, 0) == 1 );
assert( gamma_busy_fields(board, 9) == 4 );


char* board263487835 = gamma_board(board);
assert( board263487835 != NULL );
assert( strcmp(board263487835, 
".....3....\n"
"...82.....\n"
"106...5....\n"
"..........\n"
"3.....267.\n"
"........8.\n"
"..........\n"
"5.4.5.....\n"
".4......91\n"
"..........\n"
".9...9.2.9\n") == 0);
free(board263487835);
board263487835 = NULL;
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_move(board, 10, 8, 3) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_move(board, 9, 9, 8) == 1 );
assert( gamma_move(board, 10, 3, 7) == 1 );
assert( gamma_move(board, 10, 2, 2) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_golden_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board309314796 = gamma_board(board);
assert( board309314796 != NULL );
assert( strcmp(board309314796, 
".....3....\n"
"...82.....\n"
"106...5...9\n"
"...105..1..\n"
"3...7.267.\n"
"..6...3.81\n"
"..2..2....\n"
"5.4.5...10.\n"
".410.....91\n"
".8.431....\n"
".92..9.2.9\n") == 0);
free(board309314796);
board309314796 = NULL;
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_move(board, 10, 9, 1) == 1 );
assert( gamma_free_fields(board, 10) == 71 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 8, 8, 8) == 1 );
assert( gamma_move(board, 9, 8, 10) == 1 );


char* board931241187 = gamma_board(board);
assert( board931241187 != NULL );
assert( strcmp(board931241187, 
"...2.3..9.\n"
"...82.....\n"
"106...5..89\n"
"...105..1.1\n"
"31.57.267.\n"
"..6...3.81\n"
"..2..2..2.\n"
"5.4.545.10.\n"
".410....491\n"
".8.431...10\n"
".92..9.2.9\n") == 0);
free(board931241187);
board931241187 = NULL;
assert( gamma_move(board, 10, 2, 5) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 7, 8, 7) == 1 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 8, 6, 0) == 1 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_move(board, 9, 9, 3) == 1 );
assert( gamma_move(board, 10, 7, 4) == 1 );
assert( gamma_move(board, 10, 1, 8) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );


char* board926665851 = gamma_board(board);
assert( board926665851 != NULL );
assert( strcmp(board926665851, 
"...2.3..9.\n"
"...82.4...\n"
"106...5..89\n"
"...105..171\n"
"31.57.267.\n"
"..67.33.81\n"
"..2..2.102.\n"
"5.4.545.109\n"
".410....491\n"
".8.4316..10\n"
".92.8982.9\n") == 0);
free(board926665851);
board926665851 = NULL;
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_move(board, 8, 5, 9) == 1 );
assert( gamma_move(board, 9, 1, 4) == 1 );
assert( gamma_move(board, 10, 4, 4) == 1 );
assert( gamma_move(board, 10, 1, 0) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_golden_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 9, 8, 7) == 0 );
assert( gamma_move(board, 9, 1, 7) == 1 );
assert( gamma_move(board, 10, 7, 10) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 10, 9, 2) == 0 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_free_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_golden_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 9, 5, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_move(board, 10, 6, 2) == 0 );
assert( gamma_move(board, 10, 4, 8) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board823654103 = gamma_board(board);
assert( board823654103 != NULL );
assert( strcmp(board823654103, 
"...2.3.109.\n"
"...82845..\n"
"106..15..89\n"
"59.1058.171\n"
"31.57.267.\n"
"..67833281\n"
".92.102.102.\n"
"5.4.544.109\n"
"1410...4491\n"
".8.43167110\n"
".92.8982.9\n") == 0);
free(board823654103);
board823654103 = NULL;
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_free_fields(board, 4) == 35 );
assert( gamma_golden_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 9, 9) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_move(board, 10, 8, 2) == 0 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_free_fields(board, 5) == 32 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_free_fields(board, 6) == 32 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_free_fields(board, 1) == 9 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_free_fields(board, 3) == 29 );


char* board653961311 = gamma_board(board);
assert( board653961311 != NULL );
assert( strcmp(board653961311, 
"...2.3.109.\n"
"4..82845.6\n"
"106..15..89\n"
"59.1058.171\n"
"31.572267.\n"
".367833281\n"
".9241023102.\n"
"5.45544.109\n"
"1410...4491\n"
".8.43167110\n"
"792.8982.9\n") == 0);
free(board653961311);
board653961311 = NULL;
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_free_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_free_fields(board, 9) == 6 );
assert( gamma_move(board, 10, 6, 9) == 0 );
assert( gamma_move(board, 10, 9, 2) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );


char* board451521160 = gamma_board(board);
assert( board451521160 != NULL );
assert( strcmp(board451521160, 
"...2.3.109.\n"
"4..82845.6\n"
"106..15..89\n"
"59.1058.171\n"
"31.572267.\n"
".367833281\n"
".9241023102.\n"
"5745544.109\n"
"1410...4491\n"
".8.43167110\n"
"792.8982.9\n") == 0);
free(board451521160);
board451521160 = NULL;
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 7, 0) == 1 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 8, 9, 8) == 0 );
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_move(board, 10, 6, 7) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_free_fields(board, 6) == 26 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 6) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_free_fields(board, 9) == 6 );
assert( gamma_move(board, 10, 8, 6) == 0 );
assert( gamma_move(board, 10, 1, 0) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 8, 8, 10) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 8) == 0 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_move(board, 10, 7, 1) == 0 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 6, 9, 10) == 1 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 7) == 0 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_move(board, 10, 8, 2) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_free_fields(board, 9) == 5 );


char* board882572936 = gamma_board(board);
assert( board882572936 != NULL );
assert( strcmp(board882572936, 
".322.3.1096\n"
"4.382845.6\n"
"106..15..89\n"
"59.105810171\n"
"31.572267.\n"
".367833281\n"
".9241023102.\n"
"5745544.109\n"
"1410...4491\n"
"38.43167110\n"
"792.8986.9\n") == 0);
free(board882572936);
board882572936 = NULL;
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_golden_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 8, 0, 10) == 0 );
assert( gamma_move(board, 9, 8, 7) == 0 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 10, 7, 4) == 0 );
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_busy_fields(board, 10) == 9 );
assert( gamma_free_fields(board, 10) == 7 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_free_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );


char* board111374440 = gamma_board(board);
assert( board111374440 != NULL );
assert( strcmp(board111374440, 
".322.3.1096\n"
"4.382845.6\n"
"106..15.289\n"
"59.105810171\n"
"31.572267.\n"
".367833281\n"
".9241023102.\n"
"5345544.109\n"
"1410.4.4491\n"
"38.43167110\n"
"792.8986.9\n") == 0);
free(board111374440);
board111374440 = NULL;
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_free_fields(board, 7) == 20 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_free_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 10, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_golden_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 10, 6, 4) == 0 );
assert( gamma_move(board, 10, 6, 0) == 0 );


gamma_delete(board);

    return 0;
}
