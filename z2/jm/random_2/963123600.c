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
uuid: 963123600
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 15, 13, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 6, 3, 11) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 11, 0) == 0 );
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 4) == 1 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 9, 6, 0) == 1 );
assert( gamma_move(board, 10, 7, 2) == 1 );
assert( gamma_move(board, 10, 4, 14) == 1 );
assert( gamma_move(board, 11, 14, 0) == 0 );
assert( gamma_busy_fields(board, 11) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 8, 6) == 0 );
assert( gamma_move(board, 12, 4, 10) == 1 );
assert( gamma_move(board, 13, 9, 1) == 0 );
assert( gamma_free_fields(board, 13) == 107 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );


char* board876689616 = gamma_board(board);
assert( board876689616 != NULL );
assert( strcmp(board876689616, 
"....10...\n"
"........\n"
"........\n"
"...6.5..\n"
"....12...\n"
"........\n"
"........\n"
".......4\n"
"..61....\n"
"........\n"
"1.7..38.\n"
"..8.....\n"
".......10\n"
"......2.\n"
"......9.\n") == 0);
free(board876689616);
board876689616 = NULL;
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_golden_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 1, 11) == 1 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 14, 3) == 0 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 7, 4, 12) == 1 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 9, 4, 6) == 1 );
assert( gamma_move(board, 9, 6, 9) == 1 );
assert( gamma_move(board, 11, 2, 6) == 0 );
assert( gamma_busy_fields(board, 11) == 0 );
assert( gamma_move(board, 12, 3, 4) == 1 );
assert( gamma_move(board, 12, 5, 7) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_free_fields(board, 2) == 96 );
assert( gamma_move(board, 3, 0, 12) == 1 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 5, 5, 14) == 1 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_free_fields(board, 8) == 91 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 10, 2, 11) == 1 );
assert( gamma_move(board, 10, 4, 1) == 1 );
assert( gamma_free_fields(board, 10) == 89 );
assert( gamma_move(board, 11, 6, 6) == 1 );
assert( gamma_move(board, 11, 2, 0) == 1 );
assert( gamma_busy_fields(board, 11) == 2 );
assert( gamma_move(board, 12, 4, 11) == 1 );
assert( gamma_move(board, 13, 5, 0) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 1, 0, 11) == 1 );
assert( gamma_golden_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 6, 13) == 1 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 7, 0, 10) == 1 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 10, 2, 11) == 0 );
assert( gamma_move(board, 11, 1, 7) == 1 );
assert( gamma_move(board, 11, 4, 11) == 0 );
assert( gamma_free_fields(board, 11) == 79 );
assert( gamma_move(board, 12, 1, 13) == 1 );
assert( gamma_move(board, 12, 5, 5) == 1 );


char* board102417601 = gamma_board(board);
assert( board102417601 != NULL );
assert( strcmp(board102417601, 
"....105..\n"
".12....4.\n"
"3...7...\n"
"13106125..\n"
"7...12...\n"
"......9.\n"
"........\n"
".11.3112.2\n"
"..619.114\n"
".....12..\n"
"1.712.31.\n"
"5.86....\n"
"......610\n"
"8...10.2.\n"
".511..29.\n") == 0);
free(board102417601);
board102417601 = NULL;
assert( gamma_move(board, 13, 2, 1) == 1 );
assert( gamma_move(board, 13, 2, 11) == 0 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_golden_move(board, 2, 12, 0) == 0 );


char* board937027286 = gamma_board(board);
assert( board937027286 != NULL );
assert( strcmp(board937027286, 
"....105..\n"
".12....4.\n"
"3...7...\n"
"13106125..\n"
"7...12...\n"
"......9.\n"
"....1...\n"
".11.3112.2\n"
"..619.114\n"
".....12..\n"
"1.712.31.\n"
"5.86....\n"
"......610\n"
"8.13.10.2.\n"
".511..29.\n") == 0);
free(board937027286);
board937027286 = NULL;
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 4, 4, 14) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 8, 13, 7) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 2, 14) == 1 );
assert( gamma_move(board, 10, 7, 2) == 0 );
assert( gamma_move(board, 11, 6, 7) == 1 );
assert( gamma_move(board, 12, 10, 1) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 2, 13) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 7, 6, 10) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 5) == 1 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 10, 0, 2) == 1 );
assert( gamma_move(board, 10, 5, 10) == 1 );
assert( gamma_free_fields(board, 10) == 65 );
assert( gamma_move(board, 11, 2, 5) == 1 );
assert( gamma_free_fields(board, 11) == 64 );
assert( gamma_move(board, 12, 2, 7) == 1 );
assert( gamma_busy_fields(board, 12) == 7 );
assert( gamma_golden_move(board, 12, 6, 4) == 1 );
assert( gamma_move(board, 13, 12, 7) == 0 );
assert( gamma_move(board, 13, 2, 9) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_free_fields(board, 4) == 62 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 2, 10) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 9, 7, 4) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 13, 3) == 0 );
assert( gamma_move(board, 11, 8, 7) == 0 );
assert( gamma_move(board, 11, 6, 6) == 0 );
assert( gamma_move(board, 12, 10, 3) == 0 );
assert( gamma_move(board, 13, 6, 14) == 1 );
assert( gamma_move(board, 13, 2, 5) == 0 );
assert( gamma_free_fields(board, 13) == 59 );
assert( gamma_move(board, 1, 5, 13) == 1 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 0, 13) == 1 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 2, 13) == 0 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_move(board, 10, 3, 7) == 0 );
assert( gamma_move(board, 10, 6, 11) == 1 );
assert( gamma_move(board, 11, 2, 2) == 1 );
assert( gamma_move(board, 12, 12, 3) == 0 );
assert( gamma_move(board, 12, 2, 5) == 0 );
assert( gamma_move(board, 13, 7, 10) == 1 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 7, 11) == 1 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 7, 2, 13) == 0 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 8, 7, 12) == 1 );
assert( gamma_move(board, 9, 9, 7) == 0 );
assert( gamma_move(board, 9, 1, 11) == 0 );
assert( gamma_move(board, 10, 10, 3) == 0 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_move(board, 11, 3, 7) == 0 );
assert( gamma_busy_fields(board, 11) == 6 );


char* board207196276 = gamma_board(board);
assert( board207196276 != NULL );
assert( strcmp(board207196276, 
"..9.10513.\n"
"41213..14.\n"
"3...7..8\n"
"13106125106\n"
"7.6.1210713\n"
"..13...9.\n"
"....1..5\n"
".11123112112\n"
"..619.114\n"
".811..12..\n"
"1.71233129\n"
"5786.4..\n"
"10.11...610\n"
"8.13.10.2.\n"
"9511..29.\n") == 0);
free(board207196276);
board207196276 = NULL;
assert( gamma_move(board, 12, 2, 0) == 0 );
assert( gamma_move(board, 13, 6, 5) == 1 );


char* board855332424 = gamma_board(board);
assert( board855332424 != NULL );
assert( strcmp(board855332424, 
"..9.10513.\n"
"41213..14.\n"
"3...7..8\n"
"13106125106\n"
"7.6.1210713\n"
"..13...9.\n"
"....1..5\n"
".11123112112\n"
"..619.114\n"
".811..1213.\n"
"1.71233129\n"
"5786.4..\n"
"10.11...610\n"
"8.13.10.2.\n"
"9511..29.\n") == 0);
free(board855332424);
board855332424 = NULL;
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_golden_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_free_fields(board, 4) == 47 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 14, 0) == 0 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 7, 1, 10) == 1 );
assert( gamma_move(board, 8, 14, 0) == 0 );
assert( gamma_move(board, 8, 7, 14) == 1 );
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_move(board, 10, 8, 2) == 0 );
assert( gamma_move(board, 11, 2, 9) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 8, 2) == 0 );
assert( gamma_move(board, 12, 3, 3) == 0 );
assert( gamma_free_fields(board, 12) == 44 );
assert( gamma_move(board, 13, 5, 3) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 1, 14) == 1 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 10, 9, 0) == 0 );
assert( gamma_move(board, 10, 6, 11) == 0 );
assert( gamma_move(board, 11, 8, 2) == 0 );
assert( gamma_move(board, 12, 2, 1) == 0 );
assert( gamma_free_fields(board, 12) == 42 );
assert( gamma_move(board, 13, 1, 3) == 0 );
assert( gamma_move(board, 13, 4, 14) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );


char* board525625816 = gamma_board(board);
assert( board525625816 != NULL );
assert( strcmp(board525625816, 
".49.105138\n"
"41213..14.\n"
"3...7..8\n"
"13106125106\n"
"776.1210713\n"
"..13.5.9.\n"
"....1..5\n"
".11123112112\n"
"..619.114\n"
".811.71213.\n"
"1.71233129\n"
"5786.4..\n"
"10.112.2610\n"
"8213.10.2.\n"
"9511..29.\n") == 0);
free(board525625816);
board525625816 = NULL;
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 0, 9) == 1 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 8, 7, 11) == 0 );
assert( gamma_move(board, 9, 14, 3) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 10, 5, 14) == 0 );
assert( gamma_move(board, 10, 4, 0) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 1, 7) == 0 );
assert( gamma_move(board, 11, 6, 13) == 0 );
assert( gamma_move(board, 12, 8, 2) == 0 );
assert( gamma_move(board, 13, 13, 4) == 0 );
assert( gamma_free_fields(board, 13) == 39 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 6, 12) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_golden_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 6, 3, 13) == 1 );


char* board151855294 = gamma_board(board);
assert( board151855294 != NULL );
assert( strcmp(board151855294, 
".49.105138\n"
"412136.14.\n"
"3...7.28\n"
"13106125106\n"
"776.1210713\n"
"7.13.5.9.\n"
"....1..5\n"
".11123112112\n"
"..619.114\n"
".811.71213.\n"
"1.71233129\n"
"5786.4..\n"
"10.112.2610\n"
"8213.10.2.\n"
"9511.1029.\n") == 0);
free(board151855294);
board151855294 = NULL;
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_free_fields(board, 7) == 37 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 10, 3, 8) == 1 );
assert( gamma_move(board, 11, 8, 6) == 0 );
assert( gamma_move(board, 12, 1, 5) == 0 );
assert( gamma_move(board, 13, 1, 3) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_free_fields(board, 1) == 36 );


char* board656578177 = gamma_board(board);
assert( board656578177 != NULL );
assert( strcmp(board656578177, 
".49.105138\n"
"412136.14.\n"
"3...7.28\n"
"13106125106\n"
"776.1210713\n"
"7.13.5.9.\n"
"...101..5\n"
".11123112112\n"
"..619.114\n"
".811.71213.\n"
"1.71233129\n"
"5786.4..\n"
"10.112.2610\n"
"8213.10.2.\n"
"9511.1029.\n") == 0);
free(board656578177);
board656578177 = NULL;
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_golden_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 9, 12, 3) == 0 );
assert( gamma_move(board, 10, 6, 5) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_golden_move(board, 10, 6, 7) == 0 );
assert( gamma_move(board, 12, 14, 3) == 0 );
assert( gamma_move(board, 12, 0, 10) == 0 );


char* board154918788 = gamma_board(board);
assert( board154918788 != NULL );
assert( strcmp(board154918788, 
".49.105138\n"
"412136.14.\n"
"3...7.28\n"
"13106125106\n"
"776.1210713\n"
"7.13.5.9.\n"
"...101..5\n"
".11123112112\n"
"..619.114\n"
".811.71213.\n"
"1.71233129\n"
"5786.4..\n"
"10.112.2610\n"
"8213.10.2.\n"
"9511.1029.\n") == 0);
free(board154918788);
board154918788 = NULL;
assert( gamma_move(board, 13, 8, 5) == 0 );
assert( gamma_free_fields(board, 13) == 36 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 5, 7, 12) == 0 );
assert( gamma_move(board, 5, 6, 14) == 0 );
assert( gamma_golden_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_move(board, 9, 8, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 6 );


char* board329350889 = gamma_board(board);
assert( board329350889 != NULL );
assert( strcmp(board329350889, 
".49.105138\n"
"412136.14.\n"
"3...7.28\n"
"13106125106\n"
"776.1210713\n"
"7.13.5.9.\n"
"...101..5\n"
".11123112112\n"
"..619.114\n"
".811.71213.\n"
"1.71233129\n"
"5786.4..\n"
"10.112.2610\n"
"8213.10.2.\n"
"9511.1029.\n") == 0);
free(board329350889);
board329350889 = NULL;
assert( gamma_move(board, 10, 1, 3) == 0 );
assert( gamma_move(board, 11, 5, 11) == 0 );
assert( gamma_busy_fields(board, 11) == 6 );
assert( gamma_move(board, 12, 6, 5) == 0 );
assert( gamma_move(board, 13, 1, 3) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_free_fields(board, 5) == 34 );
assert( gamma_golden_move(board, 6, 13, 6) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_free_fields(board, 7) == 34 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 10, 8, 2) == 0 );
assert( gamma_free_fields(board, 10) == 12 );
assert( gamma_move(board, 11, 6, 1) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 13, 7) == 0 );
assert( gamma_move(board, 12, 7, 5) == 1 );
assert( gamma_move(board, 13, 8, 5) == 0 );
assert( gamma_free_fields(board, 13) == 33 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_golden_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 7, 3, 13) == 0 );
assert( gamma_free_fields(board, 7) == 30 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 10, 12, 2) == 0 );
assert( gamma_move(board, 11, 1, 5) == 0 );
assert( gamma_free_fields(board, 11) == 30 );
assert( gamma_move(board, 12, 12, 5) == 0 );
assert( gamma_move(board, 12, 2, 0) == 0 );
assert( gamma_move(board, 13, 7, 11) == 0 );
assert( gamma_busy_fields(board, 13) == 6 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 2, 12) == 1 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_golden_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 10, 3, 9) == 1 );
assert( gamma_move(board, 11, 8, 1) == 0 );
assert( gamma_move(board, 12, 4, 9) == 0 );
assert( gamma_move(board, 13, 13, 4) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_golden_move(board, 3, 1, 0) == 1 );


char* board741546772 = gamma_board(board);
assert( board741546772 != NULL );
assert( strcmp(board741546772, 
".49.105138\n"
"412136.14.\n"
"3.7.7.28\n"
"13106125106\n"
"776.1210713\n"
"7.13105.9.\n"
"...101.65\n"
"711123112112\n"
"..619.114\n"
".811.7121312\n"
"1.71233129\n"
"5786442.\n"
"10.112.2610\n"
"8213.10.2.\n"
"931141029.\n") == 0);
free(board741546772);
board741546772 = NULL;
assert( gamma_move(board, 4, 5, 14) == 0 );


char* board801047310 = gamma_board(board);
assert( board801047310 != NULL );
assert( strcmp(board801047310, 
".49.105138\n"
"412136.14.\n"
"3.7.7.28\n"
"13106125106\n"
"776.1210713\n"
"7.13105.9.\n"
"...101.65\n"
"711123112112\n"
"..619.114\n"
".811.7121312\n"
"1.71233129\n"
"5786442.\n"
"10.112.2610\n"
"8213.10.2.\n"
"931141029.\n") == 0);
free(board801047310);
board801047310 = NULL;
assert( gamma_move(board, 5, 13, 4) == 0 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );


gamma_delete(board);

    return 0;
}
