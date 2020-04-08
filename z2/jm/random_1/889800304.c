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
uuid: 889800304
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 6, 14, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_golden_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_free_fields(board, 5) == 74 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );


char* board454016586 = gamma_board(board);
assert( board454016586 != NULL );
assert( strcmp(board454016586, 
".4...........\n"
"...5.........\n"
".6.........3.\n"
".............\n"
"........7....\n"
".1...........\n") == 0);
free(board454016586);
board454016586 = NULL;
assert( gamma_move(board, 10, 8, 0) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 9, -1) == 0 );
assert( gamma_move(board, 12, 0, 6) == 0 );
assert( gamma_free_fields(board, 12) == 71 );
assert( gamma_move(board, 13, 12, -1) == 0 );
assert( gamma_move(board, 14, -1, 3) == 0 );
assert( gamma_move(board, 2, 7, -1) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 8, 12, 6) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_golden_move(board, 10, 0, 8) == 0 );
assert( gamma_move(board, 11, 9, 2) == 1 );
assert( gamma_move(board, 12, 8, 1) == 0 );
assert( gamma_busy_fields(board, 13) == 0 );
assert( gamma_free_fields(board, 13) == 69 );
assert( gamma_move(board, 14, 3, 5) == 1 );
assert( gamma_busy_fields(board, 14) == 1 );
assert( gamma_golden_move(board, 14, 2, 9) == 0 );
assert( gamma_move(board, 2, 10, -1) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_golden_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_golden_move(board, 5, 0, 1) == 0 );


char* board169171867 = gamma_board(board);
assert( board169171867 != NULL );
assert( strcmp(board169171867, 
".4.14....3....\n"
"..35.........\n"
".6.........3.\n"
".........11...\n"
"........7.4..\n"
".1......10....\n") == 0);
free(board169171867);
board169171867 = NULL;
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, 5) == 1 );
assert( gamma_move(board, 9, 5, -1) == 0 );
assert( gamma_move(board, 10, 4, 3) == 1 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_free_fields(board, 11) == 64 );
assert( gamma_move(board, 12, 6, 5) == 1 );
assert( gamma_move(board, 13, 9, -1) == 0 );
assert( gamma_free_fields(board, 13) == 63 );
assert( gamma_move(board, 14, 9, 0) == 1 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 3, 11, 2) == 1 );
assert( gamma_free_fields(board, 3) == 61 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 5, 13, -1) == 0 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_free_fields(board, 6) == 60 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 3, 1) == 1 );
assert( gamma_move(board, 11, 2, 4) == 0 );
assert( gamma_move(board, 12, 5, 2) == 1 );
assert( gamma_golden_move(board, 12, 3, 1) == 1 );


char* board793726813 = gamma_board(board);
assert( board793726813 != NULL );
assert( strcmp(board793726813, 
".4.14..12.3..8.\n"
"..35.........\n"
".6..10......3.\n"
".....12..611.3.\n"
"...12....7.4..\n"
".1......1014...\n") == 0);
free(board793726813);
board793726813 = NULL;
assert( gamma_move(board, 13, 7, 2) == 1 );
assert( gamma_free_fields(board, 13) == 57 );
assert( gamma_move(board, 14, 0, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );


char* board814562813 = gamma_board(board);
assert( board814562813 != NULL );
assert( strcmp(board814562813, 
".4.14..12.3..8.\n"
"14.35.........\n"
".6..10......3.\n"
".....12.13611.3.\n"
"...12....7.4..\n"
".1......1014...\n") == 0);
free(board814562813);
board814562813 = NULL;
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 2) == 0 );


char* board179659715 = gamma_board(board);
assert( board179659715 != NULL );
assert( strcmp(board179659715, 
".4.14..12.3..8.\n"
"14.35.........\n"
".6..10......3.\n"
".....12.13611.3.\n"
"...12....7.4..\n"
".1......1014..3\n") == 0);
free(board179659715);
board179659715 = NULL;
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_move(board, 7, 11, 0) == 1 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 11, 12, 3) == 1 );
assert( gamma_move(board, 13, 2, 4) == 0 );
assert( gamma_free_fields(board, 13) == 51 );
assert( gamma_golden_move(board, 13, 3, 1) == 1 );
assert( gamma_free_fields(board, 14) == 51 );
assert( gamma_golden_move(board, 14, 1, 9) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_golden_move(board, 3, 1, 10) == 0 );


char* board161879239 = gamma_board(board);
assert( board161879239 != NULL );
assert( strcmp(board161879239, 
".4.14..12.3..8.\n"
"14.35.........\n"
"26..10......311\n"
".....12.13611.3.\n"
"...13.5..764..\n"
".1......1014.73\n") == 0);
free(board161879239);
board161879239 = NULL;
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 7, 6, 1) == 1 );
assert( gamma_free_fields(board, 7) == 48 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 9, 1, 4) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 4, 5) == 1 );
assert( gamma_move(board, 11, 5, 2) == 0 );
assert( gamma_golden_possible(board, 12) == 0 );
assert( gamma_move(board, 13, 3, 3) == 1 );
assert( gamma_free_fields(board, 13) == 44 );
assert( gamma_move(board, 14, 11, -1) == 0 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_move(board, 9, 9, -1) == 0 );
assert( gamma_move(board, 10, 0, 5) == 1 );
assert( gamma_move(board, 11, 5, 3) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 13, 1, 4) == 0 );
assert( gamma_busy_fields(board, 13) == 3 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, -1, 6) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_free_fields(board, 10) == 39 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 5, 5) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 10, 0) == 1 );
assert( gamma_move(board, 13, 7, 2) == 0 );
assert( gamma_move(board, 14, 2, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_free_fields(board, 7) == 33 );
assert( gamma_golden_move(board, 8, 3, 12) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 11, 7, 4) == 1 );
assert( gamma_move(board, 12, 5, -1) == 0 );
assert( gamma_move(board, 13, 0, 0) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );


char* board811471802 = gamma_board(board);
assert( board811471802 != NULL );
assert( strcmp(board811471802, 
"104141410812.3..8.\n"
"14935.1.11.....\n"
"26.131011.37..311\n"
".8..512.13611.3.\n"
".6.13.572764..\n"
"1313.5...10141273\n") == 0);
free(board811471802);
board811471802 = NULL;
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );


char* board735637905 = gamma_board(board);
assert( board735637905 != NULL );
assert( strcmp(board735637905, 
"104141410812.3..8.\n"
"14935.1.11.....\n"
"264131011.37..311\n"
".8..512.13611.3.\n"
".6.13.572764..\n"
"1313.5...10141273\n") == 0);
free(board735637905);
board735637905 = NULL;
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_free_fields(board, 9) == 29 );
assert( gamma_golden_move(board, 9, 3, 7) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 12, 2, 6) == 0 );
assert( gamma_move(board, 13, 8, 6) == 0 );
assert( gamma_move(board, 14, -1, 6) == 0 );
assert( gamma_move(board, 1, 13, -1) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 10, 4, 6) == 0 );
assert( gamma_move(board, 11, 13, 1) == 0 );
assert( gamma_move(board, 13, -1, 3) == 0 );
assert( gamma_golden_possible(board, 13) == 0 );
assert( gamma_golden_move(board, 13, 0, 4) == 0 );
assert( gamma_move(board, 14, 1, 0) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );


gamma_delete(board);

    return 0;
}
