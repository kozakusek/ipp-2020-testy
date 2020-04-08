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
uuid: 293507796
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 11, 13, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 8, 6, 7) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 3) == 1 );
assert( gamma_move(board, 10, 5, 1) == 1 );
assert( gamma_move(board, 11, 2, 4) == 1 );
assert( gamma_move(board, 11, 9, 7) == 1 );
assert( gamma_move(board, 12, 1, 9) == 1 );
assert( gamma_move(board, 12, 2, 9) == 1 );
assert( gamma_move(board, 13, 7, 4) == 1 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_free_fields(board, 1) == 89 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 9, 10) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_move(board, 9, 4, 5) == 1 );


char* board400732994 = gamma_board(board);
assert( board400732994 != NULL );
assert( strcmp(board400732994, 
".1.......4\n"
"612124.7....\n"
"..1.......\n"
"......8..11\n"
"..6...3...\n"
"..1.9.....\n"
".811.5..13..\n"
"9.8..7..94\n"
"6........2\n"
"3..5310.4..\n"
".2.....8..\n") == 0);
free(board400732994);
board400732994 = NULL;
assert( gamma_move(board, 10, 9, 8) == 1 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_move(board, 11, 3, 3) == 1 );
assert( gamma_move(board, 11, 1, 7) == 1 );
assert( gamma_free_fields(board, 11) == 75 );
assert( gamma_move(board, 12, 3, 6) == 1 );
assert( gamma_move(board, 12, 2, 4) == 0 );
assert( gamma_move(board, 13, 2, 2) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_free_fields(board, 3) == 70 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_free_fields(board, 4) == 70 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_move(board, 8, 6, 4) == 1 );
assert( gamma_move(board, 10, 7, 0) == 0 );
assert( gamma_move(board, 10, 4, 8) == 1 );
assert( gamma_free_fields(board, 10) == 65 );
assert( gamma_move(board, 11, 6, 7) == 0 );
assert( gamma_move(board, 12, 10, 6) == 0 );
assert( gamma_move(board, 13, 10, 6) == 0 );
assert( gamma_move(board, 13, 6, 0) == 1 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_free_fields(board, 5) == 59 );
assert( gamma_move(board, 6, 1, 3) == 0 );


char* board332122567 = gamma_board(board);
assert( board332122567 != NULL );
assert( strcmp(board332122567, 
".1.......4\n"
"612124.7....\n"
"..1.10..3.10\n"
".11..4.82.11\n"
"..6128.37..\n"
"..1.9...4.\n"
"1811.55813..\n"
"93811.7..94\n"
"6.13......2\n"
"3..5310.4..\n"
".23..5138..\n") == 0);
free(board332122567);
board332122567 = NULL;
assert( gamma_move(board, 9, 5, 9) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );


char* board252491511 = gamma_board(board);
assert( board252491511 != NULL );
assert( strcmp(board252491511, 
".1.......4\n"
"612124.7....\n"
"..1.10..3.10\n"
".11..4.82.11\n"
"..6128.37..\n"
"..1.9...4.\n"
"1811.55813..\n"
"93811.7..94\n"
"6.13......2\n"
"3..5310.4..\n"
".23..5138..\n") == 0);
free(board252491511);
board252491511 = NULL;
assert( gamma_move(board, 10, 1, 6) == 1 );
assert( gamma_move(board, 10, 6, 0) == 0 );
assert( gamma_move(board, 11, 6, 8) == 1 );
assert( gamma_move(board, 11, 9, 6) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 0, 3) == 0 );
assert( gamma_move(board, 13, 4, 3) == 1 );
assert( gamma_move(board, 13, 2, 1) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_free_fields(board, 4) == 54 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_move(board, 8, 9, 4) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 7, 3) == 1 );
assert( gamma_move(board, 12, 4, 8) == 0 );
assert( gamma_move(board, 12, 6, 9) == 1 );
assert( gamma_move(board, 13, 9, 4) == 0 );
assert( gamma_move(board, 13, 5, 10) == 1 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_golden_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_move(board, 9, 9, 4) == 0 );
assert( gamma_move(board, 10, 7, 8) == 0 );
assert( gamma_move(board, 10, 8, 9) == 1 );
assert( gamma_move(board, 11, 3, 0) == 1 );
assert( gamma_move(board, 12, 4, 9) == 1 );
assert( gamma_move(board, 12, 4, 10) == 1 );
assert( gamma_move(board, 13, 1, 9) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_free_fields(board, 5) == 40 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board288339918 = gamma_board(board);
assert( board288339918 != NULL );
assert( strcmp(board288339918, 
".12.1213...4\n"
"61212412712.10.\n"
"7.1310.113.10\n"
".11..1.82.11\n"
".106128.37.11\n"
"..1.9.754.\n"
"1811.55813.8\n"
"93811137.1194\n"
"6.13.6..5.2\n"
"3.135310.4..\n"
".2311.5138..\n") == 0);
free(board288339918);
board288339918 = NULL;
assert( gamma_move(board, 9, 10, 6) == 0 );
assert( gamma_move(board, 10, 10, 3) == 0 );
assert( gamma_move(board, 11, 10, 3) == 0 );
assert( gamma_move(board, 11, 6, 6) == 0 );
assert( gamma_move(board, 12, 1, 4) == 0 );
assert( gamma_move(board, 13, 0, 7) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 9, 7, 7) == 0 );
assert( gamma_move(board, 10, 8, 5) == 0 );
assert( gamma_move(board, 11, 4, 10) == 0 );
assert( gamma_move(board, 11, 3, 5) == 1 );
assert( gamma_move(board, 12, 0, 0) == 1 );
assert( gamma_move(board, 12, 9, 10) == 0 );
assert( gamma_move(board, 13, 8, 0) == 1 );
assert( gamma_move(board, 13, 1, 8) == 1 );
assert( gamma_busy_fields(board, 13) == 9 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_free_fields(board, 4) == 31 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 7, 7, 9) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_move(board, 9, 5, 9) == 0 );
assert( gamma_move(board, 10, 1, 1) == 1 );
assert( gamma_move(board, 10, 3, 4) == 0 );
assert( gamma_move(board, 11, 7, 4) == 0 );
assert( gamma_move(board, 12, 7, 10) == 1 );
assert( gamma_move(board, 13, 1, 6) == 0 );
assert( gamma_move(board, 13, 4, 5) == 0 );
assert( gamma_golden_move(board, 13, 1, 1) == 1 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_move(board, 9, 6, 0) == 0 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_free_fields(board, 9) == 28 );
assert( gamma_move(board, 10, 0, 4) == 0 );


char* board289220870 = gamma_board(board);
assert( board289220870 != NULL );
assert( strcmp(board289220870, 
".12.1213.12.4\n"
"61212412712710.\n"
"7131310.113.10\n"
"1311..1.82.11\n"
".106128.37.11\n"
"8.1119.754.\n"
"1811655813.8\n"
"93811137.1194\n"
"6.13.6..5.2\n"
"31313531024..\n"
"122311.513813.\n") == 0);
free(board289220870);
board289220870 = NULL;
assert( gamma_move(board, 11, 2, 5) == 0 );
assert( gamma_move(board, 11, 9, 4) == 0 );
assert( gamma_move(board, 12, 5, 5) == 1 );
assert( gamma_free_fields(board, 12) == 27 );
assert( gamma_move(board, 13, 5, 9) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );


char* board945275487 = gamma_board(board);
assert( board945275487 != NULL );
assert( strcmp(board945275487, 
".12.1213.12.4\n"
"61212412712710.\n"
"7131310.113.10\n"
"1311..1.82.11\n"
".106128.37.11\n"
"8.111912754.\n"
"1811655813.8\n"
"93811137.1194\n"
"6.13.6..5.2\n"
"31313531024..\n"
"122311.513813.\n") == 0);
free(board945275487);
board945275487 = NULL;
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board497534020 = gamma_board(board);
assert( board497534020 != NULL );
assert( strcmp(board497534020, 
".12.1213.12.4\n"
"61212412712710.\n"
"7131310.113.10\n"
"1311..1.82.11\n"
".106128.37.11\n"
"8.111912754.\n"
"1811655813.8\n"
"93811137.1194\n"
"6.13.6..5.2\n"
"31313531024..\n"
"122311.513813.\n") == 0);
free(board497534020);
board497534020 = NULL;
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_free_fields(board, 7) == 26 );
assert( gamma_golden_move(board, 7, 1, 7) == 1 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 11, 7, 3) == 0 );
assert( gamma_move(board, 11, 0, 3) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 3, 1) == 0 );
assert( gamma_busy_fields(board, 12) == 9 );
assert( gamma_golden_move(board, 12, 0, 2) == 1 );
assert( gamma_move(board, 13, 2, 1) == 0 );
assert( gamma_move(board, 13, 1, 1) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );


char* board703844181 = gamma_board(board);
assert( board703844181 != NULL );
assert( strcmp(board703844181, 
".12.1213.12.4\n"
"61212412712710.\n"
"7131310.113.10\n"
"137..1.82.11\n"
"7106128.37.11\n"
"8.111912754.\n"
"1811655813.8\n"
"93811137.1194\n"
"12313.6..5.2\n"
"31313531024..\n"
"122311.513813.\n") == 0);
free(board703844181);
board703844181 = NULL;
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_free_fields(board, 6) == 25 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_move(board, 10, 0, 4) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 1, 9) == 0 );
assert( gamma_free_fields(board, 11) == 25 );
assert( gamma_move(board, 12, 3, 10) == 1 );
assert( gamma_move(board, 12, 7, 7) == 0 );
assert( gamma_golden_possible(board, 12) == 0 );
assert( gamma_move(board, 13, 9, 4) == 0 );
assert( gamma_move(board, 13, 7, 10) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_golden_move(board, 7, 9, 7) == 0 );
assert( gamma_move(board, 8, 4, 4) == 0 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 9, 8, 5) == 0 );
assert( gamma_move(board, 10, 1, 9) == 0 );
assert( gamma_move(board, 10, 9, 0) == 1 );
assert( gamma_move(board, 11, 7, 9) == 0 );
assert( gamma_move(board, 11, 4, 5) == 0 );
assert( gamma_move(board, 13, 1, 8) == 0 );
assert( gamma_move(board, 13, 0, 2) == 0 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 6, 9, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 9, 6, 8) == 0 );
assert( gamma_move(board, 9, 3, 10) == 0 );
assert( gamma_move(board, 11, 1, 8) == 0 );
assert( gamma_busy_fields(board, 11) == 8 );
assert( gamma_move(board, 12, 1, 9) == 0 );
assert( gamma_golden_possible(board, 12) == 0 );
assert( gamma_move(board, 13, 0, 8) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 9, 2, 10) == 0 );
assert( gamma_move(board, 10, 1, 9) == 0 );
assert( gamma_move(board, 11, 5, 9) == 0 );
assert( gamma_move(board, 11, 1, 8) == 0 );
assert( gamma_busy_fields(board, 11) == 8 );
assert( gamma_move(board, 12, 6, 5) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 10, 4, 10) == 0 );
assert( gamma_move(board, 11, 2, 0) == 0 );
assert( gamma_move(board, 12, 7, 5) == 0 );
assert( gamma_move(board, 12, 8, 1) == 1 );
assert( gamma_golden_move(board, 12, 4, 8) == 0 );
assert( gamma_move(board, 13, 2, 8) == 0 );
assert( gamma_move(board, 13, 7, 7) == 0 );
assert( gamma_busy_fields(board, 13) == 10 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 8, 8, 8) == 1 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_free_fields(board, 8) == 14 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_move(board, 9, 7, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 12, 5, 10) == 0 );
assert( gamma_busy_fields(board, 12) == 12 );


gamma_delete(board);

    return 0;
}
