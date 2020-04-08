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
uuid: 818653251
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 11, 14, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_free_fields(board, 2) == 163 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 5, 7, 10) == 1 );
assert( gamma_move(board, 6, 9, 12) == 0 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_move(board, 7, 10, 3) == 1 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 8, 14, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 7) == 1 );
assert( gamma_golden_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 10, 1, 7) == 1 );
assert( gamma_move(board, 11, 3, 2) == 1 );
assert( gamma_busy_fields(board, 12) == 0 );
assert( gamma_move(board, 13, 3, 14) == 0 );
assert( gamma_move(board, 14, 2, 5) == 1 );
assert( gamma_move(board, 14, 8, 6) == 1 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 2, 12, 5) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 3, 13, 1) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_free_fields(board, 5) == 144 );
assert( gamma_move(board, 6, 10, 14) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 7, 10, 8) == 1 );
assert( gamma_free_fields(board, 7) == 143 );
assert( gamma_move(board, 9, 10, 4) == 1 );
assert( gamma_move(board, 10, 12, 5) == 0 );
assert( gamma_move(board, 11, 2, 6) == 0 );
assert( gamma_move(board, 12, 10, 5) == 1 );
assert( gamma_move(board, 12, 1, 8) == 1 );
assert( gamma_move(board, 13, 7, 0) == 1 );
assert( gamma_move(board, 14, 0, 14) == 0 );
assert( gamma_move(board, 14, 7, 2) == 1 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_free_fields(board, 1) == 137 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_golden_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 10, 10) == 1 );
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_move(board, 8, 7, 13) == 0 );
assert( gamma_move(board, 9, 7, 4) == 1 );
assert( gamma_move(board, 9, 0, 10) == 1 );
assert( gamma_move(board, 10, 1, 1) == 1 );
assert( gamma_move(board, 10, 12, 8) == 1 );
assert( gamma_move(board, 11, 6, 13) == 0 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 1, 12) == 0 );
assert( gamma_move(board, 12, 0, 6) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 6, 3) == 1 );
assert( gamma_move(board, 13, 8, 10) == 1 );
assert( gamma_move(board, 14, 1, 4) == 1 );
assert( gamma_move(board, 14, 9, 7) == 1 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 11, 3) == 1 );
assert( gamma_move(board, 6, 9, 8) == 1 );
assert( gamma_move(board, 7, 1, 10) == 1 );
assert( gamma_move(board, 7, 12, 0) == 1 );
assert( gamma_move(board, 8, 14, 5) == 1 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_move(board, 9, 11, 9) == 1 );
assert( gamma_move(board, 10, 1, 3) == 0 );
assert( gamma_golden_move(board, 11, 7, 3) == 0 );
assert( gamma_move(board, 12, 0, 11) == 0 );
assert( gamma_move(board, 12, 12, 4) == 1 );
assert( gamma_move(board, 13, 1, 4) == 0 );
assert( gamma_move(board, 14, 2, 4) == 1 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_free_fields(board, 2) == 107 );
assert( gamma_move(board, 3, 12, 10) == 1 );
assert( gamma_move(board, 3, 10, 0) == 1 );
assert( gamma_move(board, 4, 13, 10) == 1 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 7, 9, 12) == 0 );
assert( gamma_move(board, 8, 0, 11) == 0 );
assert( gamma_free_fields(board, 8) == 103 );
assert( gamma_move(board, 9, 5, 5) == 1 );
assert( gamma_move(board, 9, 6, 7) == 1 );
assert( gamma_move(board, 10, 7, 7) == 1 );
assert( gamma_move(board, 10, 12, 1) == 1 );
assert( gamma_move(board, 11, 6, 8) == 1 );
assert( gamma_move(board, 12, 0, 9) == 0 );
assert( gamma_move(board, 12, 14, 2) == 0 );
assert( gamma_busy_fields(board, 12) == 4 );
assert( gamma_move(board, 13, 9, 4) == 1 );
assert( gamma_move(board, 14, 12, 0) == 0 );
assert( gamma_busy_fields(board, 14) == 6 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );


char* board840930751 = gamma_board(board);
assert( board840930751 != NULL );
assert( strcmp(board840930751, 
"97.....513.7.34.\n"
"1..35.2.6..9...\n"
".1212..11..67.10..\n"
"910.2..910.14.....\n"
"12.1.....14.1....\n"
"..14.792.1712.2.8\n"
".1414.5..9.139.12..\n"
".5....13.1276...\n"
"..411...14.1....8\n"
".10.......2..103.\n"
"..23.64135.3.7..\n") == 0);
free(board840930751);
board840930751 = NULL;
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_free_fields(board, 2) == 95 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 6, 13, 0) == 1 );
assert( gamma_move(board, 7, 2, 10) == 1 );
assert( gamma_move(board, 7, 12, 10) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_free_fields(board, 8) == 91 );
assert( gamma_move(board, 9, 0, 11) == 0 );
assert( gamma_golden_move(board, 9, 5, 4) == 0 );
assert( gamma_move(board, 10, 0, 11) == 0 );
assert( gamma_move(board, 10, 0, 4) == 1 );
assert( gamma_move(board, 11, 2, 4) == 0 );
assert( gamma_move(board, 11, 10, 9) == 1 );
assert( gamma_move(board, 12, 10, 10) == 0 );
assert( gamma_move(board, 12, 7, 8) == 1 );
assert( gamma_move(board, 13, 13, 9) == 1 );
assert( gamma_move(board, 14, 9, 5) == 0 );
assert( gamma_move(board, 14, 6, 2) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );


char* board504842791 = gamma_board(board);
assert( board504842791 != NULL );
assert( strcmp(board504842791, 
"977....513.7.34.\n"
"1..35.2.6.119.13.\n"
".1212.51112.67.10..\n"
"910.2.4910.14.....\n"
"12.1.....14.1....\n"
"..14.792.1712.2.8\n"
"101414.5.395139.12..\n"
".5.1..13.1276...\n"
"..411..1414.1....8\n"
".102......2..103.\n"
"..23.64135.3.76.\n") == 0);
free(board504842791);
board504842791 = NULL;
assert( gamma_move(board, 9, 11, 6) == 1 );
assert( gamma_move(board, 10, 1, 11) == 0 );
assert( gamma_move(board, 10, 3, 7) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 12, 8, 8) == 1 );
assert( gamma_move(board, 12, 11, 0) == 1 );
assert( gamma_move(board, 13, 0, 4) == 0 );


char* board139376046 = gamma_board(board);
assert( board139376046 != NULL );
assert( strcmp(board139376046, 
"977....513.7.34.\n"
"1..35.2.6.119.13.\n"
".1212.511121267.10..\n"
"910.2.4910.14.....\n"
"12.1.....14.19...\n"
"..14.792.1712.2.8\n"
"101414.5.395139.12..\n"
".5.1..13.1276...\n"
"..411..1414.1....8\n"
".102......2..103.\n"
"..23.64135.31276.\n") == 0);
free(board139376046);
board139376046 = NULL;
assert( gamma_move(board, 14, 3, 7) == 0 );
assert( gamma_move(board, 14, 1, 8) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_free_fields(board, 8) == 76 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_move(board, 9, 6, 10) == 1 );
assert( gamma_move(board, 10, 3, 8) == 0 );
assert( gamma_free_fields(board, 10) == 75 );
assert( gamma_move(board, 11, 2, 10) == 0 );
assert( gamma_move(board, 12, 3, 7) == 0 );
assert( gamma_move(board, 12, 10, 6) == 0 );
assert( gamma_move(board, 13, 7, 12) == 0 );
assert( gamma_move(board, 14, 7, 4) == 0 );
assert( gamma_move(board, 14, 6, 4) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 3, 2) == 0 );


char* board231193110 = gamma_board(board);
assert( board231193110 != NULL );
assert( strcmp(board231193110, 
"977...9513.7.34.\n"
"1..35.2.6.119.13.\n"
".1212.511121267.10..\n"
"910.2.4910.14.....\n"
"12.1.....14619...\n"
"..143792.1712.2.8\n"
"101414.5.395139.12..\n"
".5.11.13.1276...\n"
"..411..1414.1....8\n"
".102.8....2..103.\n"
"..23.64135.31276.\n") == 0);
free(board231193110);
board231193110 = NULL;
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 14, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 7, 14, 7) == 1 );
assert( gamma_move(board, 8, 6, 6) == 1 );
assert( gamma_move(board, 8, 14, 0) == 1 );
assert( gamma_free_fields(board, 8) == 70 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 11, 3, 7) == 0 );
assert( gamma_move(board, 11, 6, 0) == 0 );
assert( gamma_move(board, 12, 7, 4) == 0 );
assert( gamma_move(board, 13, 9, 5) == 0 );
assert( gamma_move(board, 13, 9, 8) == 0 );
assert( gamma_move(board, 14, 13, 9) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_free_fields(board, 5) == 70 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_free_fields(board, 6) == 70 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );


char* board523178709 = gamma_board(board);
assert( board523178709 != NULL );
assert( strcmp(board523178709, 
"977...9513.7.34.\n"
"1..35.2.6.119.13.\n"
".1212.511121267.10..\n"
"910.2.4910.14....7\n"
"12.1...8314619...\n"
"..143792.1712.2.8\n"
"101414.5.395139.12..\n"
".5.11.13.1276..4\n"
"..411..1414.1....8\n"
".102.8....2..103.\n"
"..23.64135.312768\n") == 0);
free(board523178709);
board523178709 = NULL;
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 9, 2, 7) == 1 );
assert( gamma_free_fields(board, 9) == 69 );
assert( gamma_move(board, 10, 1, 3) == 0 );
assert( gamma_move(board, 10, 1, 4) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 8, 3) == 0 );
assert( gamma_free_fields(board, 11) == 69 );


char* board495721315 = gamma_board(board);
assert( board495721315 != NULL );
assert( strcmp(board495721315, 
"977...9513.7.34.\n"
"1..35.2.6.119.13.\n"
".1212.511121267.10..\n"
"91092.4910.14....7\n"
"12.1...8314619...\n"
"..143792.1712.2.8\n"
"101414.5.395139.12..\n"
".5.11.13.1276..4\n"
"..411..1414.1....8\n"
".102.8....2..103.\n"
"..23.64135.312768\n") == 0);
free(board495721315);
board495721315 = NULL;
assert( gamma_move(board, 12, 4, 14) == 0 );
assert( gamma_move(board, 12, 7, 0) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );


char* board809494016 = gamma_board(board);
assert( board809494016 != NULL );
assert( strcmp(board809494016, 
"977...9513.7.34.\n"
"1..35.2.6.119.13.\n"
".1212.511121267.10..\n"
"91092.4910.14....7\n"
"12.1...8314619...\n"
"..143792.1712.2.8\n"
"101414.5.395139.12..\n"
".5.11.13.1276..4\n"
"..411..1414.1....8\n"
".102.8....2..103.\n"
"..23.64135.312768\n") == 0);
free(board809494016);
board809494016 = NULL;
assert( gamma_move(board, 13, 7, 8) == 0 );
assert( gamma_move(board, 13, 14, 7) == 0 );
assert( gamma_move(board, 14, 10, 8) == 0 );
assert( gamma_move(board, 14, 10, 3) == 0 );
assert( gamma_free_fields(board, 14) == 69 );
assert( gamma_move(board, 1, 3, 13) == 0 );


char* board448283817 = gamma_board(board);
assert( board448283817 != NULL );
assert( strcmp(board448283817, 
"977...9513.7.34.\n"
"1..35.2.6.119.13.\n"
".1212.511121267.10..\n"
"91092.4910.14....7\n"
"12.1...8314619...\n"
"..143792.1712.2.8\n"
"101414.5.395139.12..\n"
".5.11.13.1276..4\n"
"..411..1414.1....8\n"
".102.8....2..103.\n"
"..23.64135.312768\n") == 0);
free(board448283817);
board448283817 = NULL;
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_free_fields(board, 5) == 68 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 9, 12) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 9, 0, 8) == 1 );
assert( gamma_move(board, 9, 9, 9) == 0 );
assert( gamma_move(board, 10, 11, 0) == 0 );
assert( gamma_move(board, 11, 9, 14) == 0 );
assert( gamma_move(board, 12, 9, 6) == 0 );
assert( gamma_move(board, 12, 10, 6) == 0 );
assert( gamma_move(board, 13, 1, 5) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 7, 11) == 0 );


char* board101503241 = gamma_board(board);
assert( board101503241 != NULL );
assert( strcmp(board101503241, 
"977...9513.7.34.\n"
"1..35.2.63119.13.\n"
"91212.511121267.10..\n"
"91092.4910.14....7\n"
"12.1...8314619...\n"
".13143792.1712.2.8\n"
"101414.5.395139.12..\n"
".5.11.13.1276..4\n"
"..411..1414.1....8\n"
".102.8....2..103.\n"
"..23.64135.312768\n") == 0);
free(board101503241);
board101503241 = NULL;
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 4, 14) == 0 );
assert( gamma_move(board, 7, 1, 11) == 0 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_golden_move(board, 7, 9, 4) == 1 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_free_fields(board, 8) == 63 );
assert( gamma_golden_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 9, 1, 11) == 0 );
assert( gamma_move(board, 11, 5, 7) == 0 );
assert( gamma_move(board, 11, 4, 2) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 11, 4) == 1 );
assert( gamma_golden_move(board, 12, 10, 7) == 0 );
assert( gamma_move(board, 13, 14, 10) == 1 );
assert( gamma_move(board, 14, 1, 10) == 0 );


char* board900215145 = gamma_board(board);
assert( board900215145 != NULL );
assert( strcmp(board900215145, 
"977...9513.7.3413\n"
"1..35.2.63119.13.\n"
"91212.511121267.10..\n"
"91092.4910.14....7\n"
"12.1.7.8314619...\n"
".13143792.1712.2.8\n"
"101414.5.395791212..\n"
".5.11.13.1276..4\n"
"..41111.1414.1....8\n"
"8102.8.2..2..103.\n"
"..23.64135.312768\n") == 0);
free(board900215145);
board900215145 = NULL;
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_free_fields(board, 8) == 59 );
assert( gamma_move(board, 9, 10, 11) == 0 );
assert( gamma_move(board, 9, 0, 2) == 1 );
assert( gamma_move(board, 10, 9, 10) == 1 );
assert( gamma_move(board, 10, 3, 3) == 0 );
assert( gamma_move(board, 11, 6, 8) == 0 );
assert( gamma_busy_fields(board, 11) == 4 );
assert( gamma_move(board, 12, 10, 0) == 0 );
assert( gamma_move(board, 12, 4, 3) == 0 );


char* board871294054 = gamma_board(board);
assert( board871294054 != NULL );
assert( strcmp(board871294054, 
"977...9513107.3413\n"
"1..35.2.63119.13.\n"
"91212.511121267.10..\n"
"91092.4910.14....7\n"
"12.1.7.8314619...\n"
".13143792.1712.2.8\n"
"101414.5.395791212..\n"
".5.11.13.1276..4\n"
"9.41111.1414.1....8\n"
"8102.8.2..25.103.\n"
"..23.64135.312768\n") == 0);
free(board871294054);
board871294054 = NULL;
assert( gamma_move(board, 13, 7, 12) == 0 );
assert( gamma_move(board, 13, 1, 0) == 1 );
assert( gamma_busy_fields(board, 13) == 7 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_free_fields(board, 1) == 55 );
assert( gamma_move(board, 2, 14, 4) == 1 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 6, 4, 13) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_golden_move(board, 6, 9, 2) == 1 );
assert( gamma_move(board, 7, 12, 10) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 9, 2, 10) == 0 );
assert( gamma_move(board, 9, 4, 10) == 1 );
assert( gamma_move(board, 10, 1, 14) == 0 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_move(board, 11, 2, 8) == 0 );
assert( gamma_busy_fields(board, 12) == 8 );
assert( gamma_move(board, 13, 5, 7) == 0 );
assert( gamma_move(board, 13, 0, 9) == 0 );
assert( gamma_move(board, 14, 3, 4) == 1 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 11, 5) == 1 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 9, 7, 8) == 0 );
assert( gamma_move(board, 9, 12, 1) == 0 );
assert( gamma_move(board, 10, 2, 5) == 0 );
assert( gamma_move(board, 10, 13, 2) == 1 );
assert( gamma_move(board, 11, 1, 7) == 0 );
assert( gamma_move(board, 11, 8, 5) == 0 );
assert( gamma_free_fields(board, 11) == 48 );
assert( gamma_move(board, 12, 1, 7) == 0 );
assert( gamma_move(board, 13, 8, 13) == 0 );
assert( gamma_move(board, 13, 6, 9) == 0 );
assert( gamma_move(board, 14, 11, 5) == 0 );
assert( gamma_move(board, 14, 6, 1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 13, 8) == 1 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 1, 14) == 0 );
assert( gamma_move(board, 8, 6, 12) == 0 );
assert( gamma_move(board, 9, 14, 6) == 1 );
assert( gamma_move(board, 10, 11, 4) == 0 );
assert( gamma_move(board, 10, 11, 0) == 0 );
assert( gamma_busy_fields(board, 10) == 8 );
assert( gamma_free_fields(board, 10) == 45 );
assert( gamma_move(board, 11, 7, 8) == 0 );
assert( gamma_move(board, 11, 10, 8) == 0 );
assert( gamma_move(board, 12, 10, 1) == 0 );
assert( gamma_free_fields(board, 12) == 45 );
assert( gamma_move(board, 13, 8, 14) == 0 );
assert( gamma_move(board, 13, 3, 1) == 1 );
assert( gamma_golden_move(board, 13, 8, 13) == 0 );
assert( gamma_move(board, 14, 10, 5) == 0 );
assert( gamma_move(board, 14, 3, 7) == 0 );
assert( gamma_free_fields(board, 14) == 44 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 6, 6, 13) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 7, 9, 14) == 0 );
assert( gamma_free_fields(board, 7) == 44 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 8, 11, 5) == 0 );
assert( gamma_move(board, 9, 1, 11) == 0 );
assert( gamma_move(board, 10, 7, 12) == 0 );
assert( gamma_move(board, 10, 13, 2) == 0 );
assert( gamma_free_fields(board, 10) == 44 );
assert( gamma_move(board, 11, 9, 7) == 0 );
assert( gamma_move(board, 11, 4, 5) == 0 );
assert( gamma_move(board, 12, 9, 5) == 0 );
assert( gamma_move(board, 12, 13, 3) == 1 );
assert( gamma_busy_fields(board, 12) == 9 );
assert( gamma_move(board, 13, 6, 12) == 0 );
assert( gamma_move(board, 13, 10, 8) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );


char* board823718385 = gamma_board(board);
assert( board823718385 != NULL );
assert( strcmp(board823718385, 
"977.9.9513107.3413\n"
"1.135.2.63119.13.\n"
"91212.511121267.104.\n"
"91092.4910.14....7\n"
"12.1.7.8314619..9\n"
".13143792.171282.8\n"
"1014141452395791212.2\n"
".5.11613.1276.124\n"
"9.41111.1414.6...108\n"
"8102138.2..25.103.\n"
"11323.64135.312768\n") == 0);
free(board823718385);
board823718385 = NULL;
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 9, 14) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_move(board, 5, 13, 1) == 0 );
assert( gamma_golden_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_free_fields(board, 7) == 43 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 8, 5, 6) == 1 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 9, 14) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 9, 3) == 0 );
assert( gamma_move(board, 10, 12, 5) == 0 );
assert( gamma_free_fields(board, 10) == 42 );
assert( gamma_move(board, 11, 6, 8) == 0 );
assert( gamma_move(board, 11, 6, 1) == 0 );
assert( gamma_free_fields(board, 11) == 42 );
assert( gamma_move(board, 12, 10, 11) == 0 );
assert( gamma_move(board, 13, 1, 11) == 0 );
assert( gamma_move(board, 14, 10, 5) == 0 );
assert( gamma_move(board, 14, 5, 7) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_free_fields(board, 3) == 42 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );


char* board838793504 = gamma_board(board);
assert( board838793504 != NULL );
assert( strcmp(board838793504, 
"977.9.9513107.3413\n"
"1.135.2.63119.13.\n"
"91212.511121267.104.\n"
"91052.4910.14....7\n"
"12.1.788314619..9\n"
".13143792.171282.8\n"
"1014141452395791212.2\n"
".5.11613.1276.124\n"
"9.4111141414.6...108\n"
"8102138.2..25.103.\n"
"11323.64135.312768\n") == 0);
free(board838793504);
board838793504 = NULL;
assert( gamma_move(board, 7, 5, 13) == 0 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 8, 9, 9) == 0 );
assert( gamma_move(board, 9, 9, 1) == 0 );
assert( gamma_move(board, 9, 5, 9) == 1 );
assert( gamma_move(board, 10, 10, 11) == 0 );
assert( gamma_move(board, 10, 2, 6) == 0 );
assert( gamma_golden_move(board, 10, 2, 14) == 0 );
assert( gamma_move(board, 11, 5, 13) == 0 );
assert( gamma_move(board, 12, 1, 9) == 1 );
assert( gamma_move(board, 13, 1, 7) == 0 );
assert( gamma_move(board, 13, 5, 9) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 6, 5) == 0 );
assert( gamma_move(board, 14, 4, 3) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 7, 13) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 10, 4, 13) == 0 );
assert( gamma_move(board, 10, 5, 3) == 0 );
assert( gamma_move(board, 11, 1, 11) == 0 );
assert( gamma_move(board, 12, 7, 8) == 0 );
assert( gamma_move(board, 12, 14, 0) == 0 );
assert( gamma_busy_fields(board, 12) == 10 );
assert( gamma_move(board, 13, 2, 0) == 0 );
assert( gamma_golden_move(board, 13, 2, 13) == 0 );
assert( gamma_move(board, 14, 6, 1) == 0 );
assert( gamma_move(board, 14, 9, 6) == 0 );
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_free_fields(board, 1) == 38 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 4, 14, 1) == 1 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_move(board, 6, 6, 13) == 0 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 7, 9, 8) == 0 );


char* board720817759 = gamma_board(board);
assert( board720817759 != NULL );
assert( strcmp(board720817759, 
"977.9.9513107.3413\n"
"11213592.63119.13.\n"
"91212.511121267.104.\n"
"91052.4910.14....7\n"
"12.1.788314619..9\n"
".13143792.171282.8\n"
"1014141452395791212.2\n"
".5.11613.1276.124\n"
"9.4111141414.6...108\n"
"8102138.26.25.1034\n"
"11323.64135.312768\n") == 0);
free(board720817759);
board720817759 = NULL;
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 10, 5, 5) == 0 );
assert( gamma_move(board, 10, 6, 8) == 0 );
assert( gamma_free_fields(board, 11) == 37 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 3, 10) == 1 );
assert( gamma_move(board, 12, 5, 6) == 0 );
assert( gamma_busy_fields(board, 12) == 11 );
assert( gamma_free_fields(board, 12) == 36 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 7, 8) == 0 );
assert( gamma_move(board, 14, 4, 13) == 0 );
assert( gamma_busy_fields(board, 14) == 8 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 5, 13) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board600911600 = gamma_board(board);
assert( board600911600 != NULL );
assert( strcmp(board600911600, 
"977129.9513107.3413\n"
"11213592.63119.13.\n"
"91212.511121267.104.\n"
"91052.4910.14....7\n"
"12.1.788314619..9\n"
".13143792.171282.8\n"
"1014141452395791212.2\n"
".5.11613.1276.124\n"
"9.4111141414.6...108\n"
"8102138126.25.1034\n"
"11323.64135.312768\n") == 0);
free(board600911600);
board600911600 = NULL;
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_move(board, 10, 12, 6) == 1 );
assert( gamma_move(board, 10, 5, 7) == 0 );
assert( gamma_golden_move(board, 10, 7, 12) == 0 );
assert( gamma_move(board, 11, 1, 11) == 0 );
assert( gamma_move(board, 11, 8, 7) == 1 );
assert( gamma_move(board, 12, 5, 10) == 1 );
assert( gamma_move(board, 13, 8, 11) == 0 );
assert( gamma_move(board, 13, 1, 4) == 0 );
assert( gamma_free_fields(board, 13) == 31 );
assert( gamma_move(board, 14, 3, 2) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 7, 5, 13) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_free_fields(board, 7) == 30 );
assert( gamma_move(board, 8, 9, 14) == 0 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 9, 12, 0) == 0 );
assert( gamma_move(board, 10, 3, 1) == 0 );
assert( gamma_move(board, 10, 7, 0) == 0 );
assert( gamma_move(board, 11, 10, 8) == 0 );
assert( gamma_move(board, 12, 7, 4) == 0 );
assert( gamma_move(board, 12, 7, 2) == 0 );
assert( gamma_busy_fields(board, 12) == 12 );
assert( gamma_move(board, 13, 10, 3) == 0 );
assert( gamma_move(board, 14, 7, 4) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 4, 11, 2) == 1 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );


gamma_delete(board);

    return 0;
}
