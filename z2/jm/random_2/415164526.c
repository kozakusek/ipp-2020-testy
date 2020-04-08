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
uuid: 415164526
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 12, 9, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_free_fields(board, 4) == 72 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 7, 3, 7) == 1 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 9, 4, 7) == 1 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 5, 1, 8) == 1 );


char* board942691096 = gamma_board(board);
assert( board942691096 != NULL );
assert( strcmp(board942691096, 
".......\n"
".......\n"
".3.4...\n"
".5.1...\n"
"...79.2\n"
"..7.1..\n"
"....2.3\n"
".4.28..\n"
"..78..1\n"
"....6..\n"
"8.7...4\n"
".3....2\n") == 0);
free(board942691096);
board942691096 = NULL;
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 6, 1, 11) == 1 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_free_fields(board, 7) == 59 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_free_fields(board, 9) == 59 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_golden_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 5, 3, 11) == 1 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 9, 5) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_free_fields(board, 8) == 55 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );


char* board831285102 = gamma_board(board);
assert( board831285102 != NULL );
assert( strcmp(board831285102, 
".6.5...\n"
".......\n"
".3.4...\n"
".5.1..4\n"
"...79.2\n"
"7.7.1..\n"
"....2.3\n"
"24.28..\n"
"..78..1\n"
"....6..\n"
"837..74\n"
"93....2\n") == 0);
free(board831285102);
board831285102 = NULL;
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 9, 6, 6) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_free_fields(board, 6) == 48 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_move(board, 9, 0, 5) == 1 );
assert( gamma_move(board, 9, 5, 8) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_move(board, 9, 2, 8) == 1 );
assert( gamma_move(board, 9, 0, 11) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_free_fields(board, 3) == 38 );


char* board899307632 = gamma_board(board);
assert( board899307632 != NULL );
assert( strcmp(board899307632, 
"96.5...\n"
".......\n"
".3.4...\n"
".591.94\n"
"...7982\n"
"7.7.119\n"
"9.212.3\n"
"24.28..\n"
"6.78..1\n"
"173.66.\n"
"8377.74\n"
"93....2\n") == 0);
free(board899307632);
board899307632 = NULL;
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 9, 6, 2) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 5, 11) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_golden_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_free_fields(board, 5) == 33 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 8, 6, 10) == 1 );
assert( gamma_free_fields(board, 8) == 31 );
assert( gamma_move(board, 9, 5, 10) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 8, 4, 10) == 1 );
assert( gamma_golden_move(board, 9, 6, 0) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );


char* board439969761 = gamma_board(board);
assert( board439969761 != NULL );
assert( strcmp(board439969761, 
"96.5.1.\n"
"1.5.8.8\n"
".3.4...\n"
".591.94\n"
".4.7982\n"
"7.75119\n"
"9621253\n"
"24528..\n"
"6678.81\n"
"173.669\n"
"8377.74\n"
"93.7..2\n") == 0);
free(board439969761);
board439969761 = NULL;
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 6, 9) == 1 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );


char* board112956511 = gamma_board(board);
assert( board112956511 != NULL );
assert( strcmp(board112956511, 
"96.5.1.\n"
"1.5.8.8\n"
".3.4..5\n"
".591.94\n"
".4.7982\n"
"7.75119\n"
"9621253\n"
"24528..\n"
"6678.81\n"
"173.669\n"
"8377.74\n"
"93.7..2\n") == 0);
free(board112956511);
board112956511 = NULL;
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_free_fields(board, 8) == 23 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 11, 6) == 0 );
assert( gamma_free_fields(board, 9) == 4 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 11, 6) == 0 );
assert( gamma_move(board, 9, 6, 11) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 4, 11) == 1 );
assert( gamma_free_fields(board, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 9, 11, 6) == 0 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 8, 2, 9) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_free_fields(board, 9) == 2 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_free_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_free_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );


char* board248871806 = gamma_board(board);
assert( board248871806 != NULL );
assert( strcmp(board248871806, 
"96.521.\n"
"1.5.8.8\n"
".384..5\n"
".591494\n"
".4.7982\n"
"7.75119\n"
"9621253\n"
"245285.\n"
"6678.81\n"
"1732669\n"
"8377.74\n"
"93.7..2\n") == 0);
free(board248871806);
board248871806 = NULL;
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_free_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 6, 6, 11) == 1 );


gamma_delete(board);

    return 0;
}
