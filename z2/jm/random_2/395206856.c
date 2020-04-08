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
uuid: 395206856
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 6, 11, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 13, 5) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 13, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_free_fields(board, 5) == 78 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_golden_move(board, 6, 5, 13) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 9, 2) == 1 );
assert( gamma_move(board, 9, 1, 12) == 0 );
assert( gamma_move(board, 9, 3, 2) == 1 );
assert( gamma_move(board, 10, 5, 4) == 1 );
assert( gamma_move(board, 10, 10, 5) == 1 );
assert( gamma_move(board, 11, 4, 7) == 0 );
assert( gamma_move(board, 11, 4, 5) == 1 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 13, 2) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 6, 11, 1) == 1 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 12) == 0 );
assert( gamma_move(board, 9, 10, 2) == 1 );
assert( gamma_free_fields(board, 9) == 63 );
assert( gamma_golden_move(board, 9, 5, 13) == 0 );
assert( gamma_move(board, 10, 3, 6) == 0 );
assert( gamma_move(board, 11, 6, 2) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_free_fields(board, 6) == 59 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 13, 0) == 1 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 4, 5) == 0 );
assert( gamma_move(board, 11, 2, 0) == 0 );
assert( gamma_busy_fields(board, 11) == 2 );
assert( gamma_golden_move(board, 11, 4, 4) == 1 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 9, 4, 13) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 10, 3, 11) == 0 );
assert( gamma_move(board, 10, 4, 2) == 0 );
assert( gamma_move(board, 11, 1, 10) == 0 );
assert( gamma_move(board, 11, 10, 1) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 9, 2, 12) == 0 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_move(board, 11, 0, 8) == 0 );
assert( gamma_move(board, 11, 3, 0) == 0 );
assert( gamma_busy_fields(board, 11) == 4 );
assert( gamma_free_fields(board, 11) == 47 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_free_fields(board, 4) == 45 );
assert( gamma_golden_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 6, 12, 1) == 1 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 5, 12) == 0 );
assert( gamma_move(board, 9, 10, 5) == 0 );
assert( gamma_move(board, 10, 1, 6) == 0 );
assert( gamma_move(board, 10, 13, 0) == 0 );
assert( gamma_move(board, 11, 0, 6) == 0 );
assert( gamma_busy_fields(board, 11) == 4 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_golden_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );


char* board251501001 = gamma_board(board);
assert( board251501001 != NULL );
assert( strcmp(board251501001, 
"...611.633.10..1\n"
"21.5510....3...\n"
"...846..44.2..\n"
"37395611..89..2\n"
"12.756.7..11664\n"
"..84.4.8.....9\n") == 0);
free(board251501001);
board251501001 = NULL;
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 7, 12, 5) == 1 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 9, 11, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_golden_move(board, 9, 5, 13) == 0 );
assert( gamma_move(board, 10, 3, 13) == 0 );
assert( gamma_move(board, 10, 3, 4) == 0 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_free_fields(board, 10) == 39 );
assert( gamma_move(board, 11, 4, 2) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 3) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 11, 0) == 1 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 7, 11, 4) == 1 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 9, 11, 5) == 1 );
assert( gamma_move(board, 9, 10, 0) == 1 );
assert( gamma_move(board, 10, 1, 8) == 0 );
assert( gamma_move(board, 10, 8, 3) == 0 );
assert( gamma_free_fields(board, 10) == 31 );
assert( gamma_move(board, 11, 13, 2) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );


char* board331093539 = gamma_board(board);
assert( board331093539 != NULL );
assert( strcmp(board331093539, 
"...611.633.10971\n"
"2145510....37..\n"
"1..846.444.24.\n"
"37395611..89..2\n"
"12.756.7..11664\n"
"3.84.4582.96.9\n") == 0);
free(board331093539);
board331093539 = NULL;
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 7, 9, 4) == 1 );
assert( gamma_move(board, 8, 0, 12) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_move(board, 10, 11, 3) == 0 );
assert( gamma_move(board, 11, 10, 4) == 0 );
assert( gamma_golden_move(board, 11, 3, 0) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_move(board, 9, 13, 4) == 1 );
assert( gamma_move(board, 10, 13, 1) == 0 );
assert( gamma_free_fields(board, 10) == 26 );
assert( gamma_move(board, 11, 4, 6) == 0 );
assert( gamma_move(board, 11, 1, 5) == 1 );
assert( gamma_busy_fields(board, 11) == 4 );
assert( gamma_golden_move(board, 11, 4, 9) == 0 );


char* board800064224 = gamma_board(board);
assert( board800064224 != NULL );
assert( strcmp(board800064224, 
".11.611.633.10971\n"
"2145510...737.9\n"
"1..846.444.24.\n"
"37395611..89..2\n"
"12.756.7..11664\n"
"3.84.4582.96.9\n") == 0);
free(board800064224);
board800064224 = NULL;
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 10, 3, 1) == 0 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 0, 12) == 0 );
assert( gamma_move(board, 11, 3, 3) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_golden_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 2, 12) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 9, 12, 0) == 1 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_move(board, 10, 5, 5) == 0 );
assert( gamma_move(board, 11, 1, 9) == 0 );
assert( gamma_move(board, 11, 9, 1) == 1 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 6, 12, 5) == 0 );
assert( gamma_move(board, 7, 3, 13) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 9, 0, 9) == 0 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 8, 0) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_golden_move(board, 6, 1, 9) == 0 );
assert( gamma_free_fields(board, 7) == 19 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 12) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 10, 7, 5) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 5, 2) == 0 );
assert( gamma_move(board, 11, 4, 4) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );


char* board327253829 = gamma_board(board);
assert( board327253829 != NULL );
assert( strcmp(board327253829, 
".11.6112633.10971\n"
"2125510...737.9\n"
"1..846.444.24.\n"
"37395611..89..2\n"
"12.75627.1111664\n"
"328414582.9699\n") == 0);
free(board327253829);
board327253829 = NULL;
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_move(board, 9, 13, 1) == 0 );
assert( gamma_move(board, 10, 3, 6) == 0 );
assert( gamma_move(board, 10, 0, 4) == 0 );
assert( gamma_move(board, 11, 3, 1) == 0 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_golden_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );


gamma_delete(board);

    return 0;
}
