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
uuid: 942786570
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 4, 10, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 11, 2) == 1 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_free_fields(board, 8) == 46 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 9, 12, 0) == 1 );
assert( gamma_move(board, 10, 2, 2) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 9, 1, 12) == 0 );
assert( gamma_golden_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 10, 10, 1) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_golden_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 9, 3, 11) == 0 );
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_move(board, 10, 1, 12) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 3, 12, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_golden_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 9, 3) == 1 );
assert( gamma_move(board, 7, 11, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 9, 12, 2) == 0 );
assert( gamma_move(board, 10, 4, 3) == 1 );
assert( gamma_move(board, 10, 10, 1) == 0 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 1, 11, 3) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_golden_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_free_fields(board, 5) == 24 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 10) == 0 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 9, 9, 1) == 1 );
assert( gamma_move(board, 10, 7, 0) == 0 );
assert( gamma_move(board, 10, 7, 1) == 1 );


char* board849394847 = gamma_board(board);
assert( board849394847 != NULL );
assert( strcmp(board849394847, 
"9.2410....7.12\n"
"..10.21..6.163\n"
".31515.10.910..\n"
"1371...7.2.79\n") == 0);
free(board849394847);
board849394847 = NULL;
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_move(board, 10, 1, 11) == 0 );
assert( gamma_move(board, 10, 5, 3) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 0, 3) == 1 );


char* board408683444 = gamma_board(board);
assert( board408683444 != NULL );
assert( strcmp(board408683444, 
"3.241010.5.7.12\n"
"..10.21..6.163\n"
".31515.10.910..\n"
"13712..7.2.79\n") == 0);
free(board408683444);
board408683444 = NULL;
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 9, 5, 0) == 1 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_move(board, 10, 9, 1) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_golden_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_golden_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 11, 2) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 9, 7, 2) == 1 );
assert( gamma_move(board, 10, 1, 0) == 0 );
assert( gamma_move(board, 10, 4, 0) == 0 );
assert( gamma_free_fields(board, 10) == 13 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_golden_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 7, 1, 11) == 0 );
assert( gamma_free_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 9, 12, 1) == 1 );
assert( gamma_free_fields(board, 9) == 10 );
assert( gamma_move(board, 10, 0, 1) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board103682924 = gamma_board(board);
assert( board103682924 != NULL );
assert( strcmp(board103682924, 
"34241010.5.7.12\n"
".510221596.163\n"
"1031515110.910.9\n"
"137129.732.79\n") == 0);
free(board103682924);
board103682924 = NULL;
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_free_fields(board, 6) == 9 );
assert( gamma_move(board, 8, 11, 0) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_free_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 9, 0, 2) == 1 );
assert( gamma_move(board, 10, 6, 0) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );


gamma_delete(board);

    return 0;
}
