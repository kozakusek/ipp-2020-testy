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
uuid: 162306731
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 12, 13, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board872031359 = gamma_board(board);
assert( board872031359 != NULL );
assert( strcmp(board872031359, 
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"...2..\n"
"......\n"
"......\n"
"......\n"
"......\n"
"..1...\n") == 0);
free(board872031359);
board872031359 = NULL;
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 7, 5, 1) == 1 );


char* board475547996 = gamma_board(board);
assert( board475547996 != NULL );
assert( strcmp(board475547996, 
"......\n"
"......\n"
"......\n"
".4..4.\n"
"......\n"
"......\n"
"...2..\n"
"......\n"
"......\n"
"......\n"
"...5.7\n"
"..1...\n") == 0);
free(board475547996);
board475547996 = NULL;
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 9, 9, 5) == 0 );
assert( gamma_move(board, 10, 7, 0) == 0 );
assert( gamma_move(board, 10, 0, 8) == 1 );
assert( gamma_free_fields(board, 10) == 64 );
assert( gamma_move(board, 11, 0, 3) == 1 );
assert( gamma_move(board, 11, 0, 5) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 1, 4) == 1 );
assert( gamma_move(board, 12, 0, 3) == 0 );
assert( gamma_move(board, 13, 7, 4) == 0 );
assert( gamma_move(board, 13, 0, 7) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_free_fields(board, 3) == 58 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 4, 7) == 1 );


char* board604655966 = gamma_board(board);
assert( board604655966 != NULL );
assert( strcmp(board604655966, 
"......\n"
".....2\n"
"......\n"
"104..4.\n"
"13.4.6.\n"
"......\n"
"11..2..\n"
".12...5\n"
"11...8.\n"
"...3..\n"
"...5.7\n"
"..1...\n") == 0);
free(board604655966);
board604655966 = NULL;
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_move(board, 9, 4, 1) == 1 );
assert( gamma_move(board, 10, 11, 3) == 0 );
assert( gamma_free_fields(board, 10) == 54 );
assert( gamma_move(board, 12, 10, 0) == 0 );
assert( gamma_move(board, 12, 3, 1) == 0 );
assert( gamma_move(board, 1, 4, 11) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_free_fields(board, 3) == 50 );
assert( gamma_golden_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 3, 11) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 9, 5, 10) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 10, 2, 4) == 0 );
assert( gamma_move(board, 10, 1, 6) == 1 );
assert( gamma_move(board, 11, 7, 5) == 0 );
assert( gamma_move(board, 11, 1, 1) == 1 );
assert( gamma_move(board, 12, 4, 4) == 1 );
assert( gamma_move(board, 13, 5, 4) == 0 );
assert( gamma_free_fields(board, 13) == 44 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_move(board, 9, 5, 9) == 1 );
assert( gamma_move(board, 10, 4, 4) == 0 );
assert( gamma_free_fields(board, 10) == 38 );
assert( gamma_move(board, 11, 3, 7) == 1 );
assert( gamma_move(board, 12, 0, 5) == 0 );
assert( gamma_golden_move(board, 12, 1, 3) == 0 );
assert( gamma_move(board, 13, 0, 0) == 1 );
assert( gamma_move(board, 13, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 10) == 1 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 8, 0, 11) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 10, 11, 2) == 0 );
assert( gamma_move(board, 11, 10, 1) == 0 );
assert( gamma_move(board, 11, 5, 3) == 0 );
assert( gamma_move(board, 12, 3, 8) == 0 );
assert( gamma_move(board, 13, 4, 4) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );


char* board821330714 = gamma_board(board);
assert( board821330714 != NULL );
assert( strcmp(board821330714, 
"8..51.\n"
"6....2\n"
"....39\n"
"104.544\n"
"13.4116.\n"
".10.13.\n"
"11..2.4\n"
".124.125\n"
"11...81\n"
"19.3.4\n"
"7112537\n"
"13.1...\n") == 0);
free(board821330714);
board821330714 = NULL;
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 9, 3, 4) == 1 );
assert( gamma_golden_move(board, 9, 9, 4) == 0 );
assert( gamma_move(board, 10, 0, 7) == 0 );
assert( gamma_move(board, 10, 3, 0) == 1 );
assert( gamma_move(board, 11, 10, 3) == 0 );
assert( gamma_move(board, 11, 4, 3) == 0 );
assert( gamma_move(board, 12, 5, 5) == 0 );
assert( gamma_free_fields(board, 12) == 26 );
assert( gamma_move(board, 13, 3, 9) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_free_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_free_fields(board, 8) == 25 );
assert( gamma_move(board, 9, 10, 1) == 0 );
assert( gamma_free_fields(board, 9) == 25 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_move(board, 11, 3, 2) == 0 );
assert( gamma_move(board, 12, 0, 5) == 0 );
assert( gamma_move(board, 12, 5, 10) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 8, 2) == 0 );
assert( gamma_move(board, 13, 3, 1) == 0 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_move(board, 10, 3, 3) == 0 );
assert( gamma_move(board, 10, 2, 2) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 9, 0) == 0 );
assert( gamma_move(board, 12, 9, 2) == 0 );
assert( gamma_move(board, 12, 5, 0) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_free_fields(board, 1) == 19 );


char* board101309117 = gamma_board(board);
assert( board101309117 != NULL );
assert( strcmp(board101309117, 
"8..51.\n"
"6..1.2\n"
"...1339\n"
"104.544\n"
"1384116.\n"
".10.13.\n"
"11..214\n"
".1249125\n"
"11.7781\n"
"199374\n"
"7112537\n"
"13.110212\n") == 0);
free(board101309117);
board101309117 = NULL;
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 4, 2, 11) == 1 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 9, 2, 10) == 1 );
assert( gamma_move(board, 10, 4, 2) == 0 );
assert( gamma_free_fields(board, 10) == 17 );
assert( gamma_move(board, 11, 11, 5) == 0 );
assert( gamma_move(board, 11, 4, 11) == 0 );
assert( gamma_move(board, 12, 2, 3) == 0 );
assert( gamma_move(board, 13, 2, 11) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );


char* board535364446 = gamma_board(board);
assert( board535364446 != NULL );
assert( strcmp(board535364446, 
"8.451.\n"
"6.91.2\n"
"...1339\n"
"104.544\n"
"1384116.\n"
".10.13.\n"
"11..214\n"
".1249125\n"
"11.7781\n"
"199374\n"
"7112537\n"
"13.110212\n") == 0);
free(board535364446);
board535364446 = NULL;
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );


char* board546671682 = gamma_board(board);
assert( board546671682 != NULL );
assert( strcmp(board546671682, 
"8.451.\n"
"6.91.2\n"
"...1339\n"
"104.544\n"
"1384116.\n"
".10.13.\n"
"11..214\n"
".1249125\n"
"11.7781\n"
"199374\n"
"7112537\n"
"13.110212\n") == 0);
free(board546671682);
board546671682 = NULL;
assert( gamma_move(board, 9, 6, 0) == 0 );
assert( gamma_move(board, 9, 0, 4) == 1 );
assert( gamma_move(board, 10, 3, 5) == 0 );
assert( gamma_golden_move(board, 10, 4, 5) == 1 );
assert( gamma_move(board, 11, 11, 1) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 3, 7) == 0 );
assert( gamma_move(board, 13, 8, 2) == 0 );
assert( gamma_move(board, 13, 4, 6) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 8, 1, 10) == 1 );
assert( gamma_move(board, 10, 0, 1) == 0 );
assert( gamma_move(board, 10, 5, 6) == 1 );
assert( gamma_move(board, 11, 10, 4) == 0 );
assert( gamma_move(board, 12, 5, 2) == 0 );
assert( gamma_move(board, 12, 4, 1) == 0 );
assert( gamma_move(board, 13, 11, 5) == 0 );
assert( gamma_move(board, 13, 0, 11) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );


gamma_delete(board);

    return 0;
}
