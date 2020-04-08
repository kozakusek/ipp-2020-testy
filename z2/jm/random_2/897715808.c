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
uuid: 897715808
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 5, 10, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 11, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_free_fields(board, 2) == 69 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_free_fields(board, 4) == 68 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_free_fields(board, 5) == 67 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 7, 11, 0) == 1 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 9, 2, 13) == 0 );
assert( gamma_move(board, 10, 4, 12) == 0 );
assert( gamma_move(board, 10, 9, 0) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_free_fields(board, 5) == 59 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 8, 10, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 10, 1, 11) == 0 );
assert( gamma_move(board, 10, 4, 0) == 1 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 12, 4) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 8, 10, 1) == 1 );
assert( gamma_golden_move(board, 8, 2, 9) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 10, 0, 1) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_free_fields(board, 6) == 44 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 8, 0, 13) == 0 );
assert( gamma_move(board, 10, 10, 0) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 13) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_free_fields(board, 8) == 38 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 10, 4, 13) == 0 );
assert( gamma_move(board, 10, 6, 0) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_free_fields(board, 3) == 36 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_golden_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 13, 4) == 1 );
assert( gamma_move(board, 10, 13, 4) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );


char* board895340110 = gamma_board(board);
assert( board895340110 != NULL );
assert( strcmp(board895340110, 
"7.5.7.4....138\n"
"...32...5.82..\n"
"663661.435..1.\n"
"10.4.4..41.8...\n"
"8.124.10..101073.\n") == 0);
free(board895340110);
board895340110 = NULL;
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 7, 0, 13) == 0 );
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 0) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 10, 1, 3) == 1 );
assert( gamma_move(board, 10, 8, 4) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_free_fields(board, 2) == 28 );


char* board749962489 = gamma_board(board);
assert( board749962489 != NULL );
assert( strcmp(board749962489, 
"7.517.4.10..138\n"
".10.32...5.82..\n"
"663661.435..1.\n"
"10.4.4..41.8...\n"
"8.124610.9101073.\n") == 0);
free(board749962489);
board749962489 = NULL;
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_golden_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 8, 2, 11) == 0 );
assert( gamma_move(board, 9, 1, 1) == 1 );
assert( gamma_move(board, 9, 11, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 10, 3, 12) == 0 );
assert( gamma_free_fields(board, 10) == 26 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_move(board, 7, 13, 3) == 1 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 9, 2, 13) == 0 );
assert( gamma_move(board, 9, 11, 3) == 0 );
assert( gamma_move(board, 10, 4, 4) == 0 );
assert( gamma_move(board, 10, 9, 0) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );


char* board250492415 = gamma_board(board);
assert( board250492415 != NULL );
assert( strcmp(board250492415, 
"75517.4.10..138\n"
"210232...5.82.7\n"
"663661.435..1.\n"
"1094.4..41.8...\n"
"85124610.9101073.\n") == 0);
free(board250492415);
board250492415 = NULL;
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 13, 1) == 1 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 8, 5, 1) == 1 );
assert( gamma_move(board, 9, 8, 4) == 0 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 10, 3, 9) == 0 );
assert( gamma_move(board, 10, 8, 0) == 0 );


char* board430081669 = gamma_board(board);
assert( board430081669 != NULL );
assert( strcmp(board430081669, 
"75517.4.10..138\n"
"210232...5.82.7\n"
"663661.435..1.\n"
"1094.48.41.8..7\n"
"85124610.9101073.\n") == 0);
free(board430081669);
board430081669 = NULL;
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 10, 4, 5) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );


char* board472583324 = gamma_board(board);
assert( board472583324 != NULL );
assert( strcmp(board472583324, 
"75517.4.101.138\n"
"2102327..5.8227\n"
"663661.435..1.\n"
"1094.48.41.84.7\n"
"85124610.9101073.\n") == 0);
free(board472583324);
board472583324 = NULL;
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 7, 9, 1) == 1 );


char* board340672052 = gamma_board(board);
assert( board340672052 != NULL );
assert( strcmp(board340672052, 
"75517.4.101.138\n"
"2102327..5.8227\n"
"663661.435..1.\n"
"1094.48.41784.7\n"
"85124610.9101073.\n") == 0);
free(board340672052);
board340672052 = NULL;
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 8, 7, 3) == 1 );
assert( gamma_move(board, 9, 12, 3) == 0 );
assert( gamma_move(board, 9, 11, 2) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 7, 1) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 0, 13) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_golden_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 10, 4, 2) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_golden_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_free_fields(board, 9) == 12 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 3, 6) == 0 );


gamma_delete(board);

    return 0;
}
