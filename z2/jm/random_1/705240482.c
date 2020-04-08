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
uuid: 705240482
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 9, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 8, 8, 3) == 1 );
assert( gamma_move(board, 9, 1, 3) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_free_fields(board, 9) == 64 );


char* board366636741 = gamma_board(board);
assert( board366636741 != NULL );
assert( strcmp(board366636741, 
"..1.......\n"
"..........\n"
"2.........\n"
".9.3....8.\n"
"......4...\n"
"..........\n"
"..........\n") == 0);
free(board366636741);
board366636741 = NULL;
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_golden_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, -1, 7) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, 6, -1) == 0 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 9, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_golden_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_golden_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_golden_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 8, 8, -1) == 0 );
assert( gamma_move(board, 9, 8, 4) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_free_fields(board, 4) == 52 );
assert( gamma_move(board, 5, 3, 3) == 0 );


char* board133788497 = gamma_board(board);
assert( board133788497 != NULL );
assert( strcmp(board133788497, 
"..1..1....\n"
"..3.......\n"
"5.......9.\n"
"89.3....89\n"
"....4.4...\n"
".......352\n"
"8...6....4\n") == 0);
free(board133788497);
board133788497 = NULL;
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 8, 9, 2) == 1 );
assert( gamma_move(board, 9, 7, 5) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_golden_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 6, 6) == 1 );
assert( gamma_free_fields(board, 8) == 47 );
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_golden_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 6, 5, -1) == 0 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 8, 9, 5) == 1 );
assert( gamma_move(board, 9, 7, 2) == 1 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_golden_move(board, 6, 0, 2) == 0 );
assert( gamma_free_fields(board, 7) == 40 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_free_fields(board, 3) == 39 );


char* board523028911 = gamma_board(board);
assert( board523028911 != NULL );
assert( strcmp(board523028911, 
"..1.118..6\n"
"..3.7..7.8\n"
"5...1...9.\n"
"89.385..89\n"
"...34.49.8\n"
".......352\n"
"8.2.6....4\n") == 0);
free(board523028911);
board523028911 = NULL;
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 7, 6, -1) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_golden_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 9, 6, 5) == 1 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 7, -1, 7) == 0 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_golden_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 3) == 0 );


char* board369615917 = gamma_board(board);
assert( board369615917 != NULL );
assert( strcmp(board369615917, 
"..1.118..6\n"
"..3.7.9728\n"
"5...1...9.\n"
"89.385.389\n"
".9.34.49.8\n"
".......352\n"
"8.2.6....4\n") == 0);
free(board369615917);
board369615917 = NULL;
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_free_fields(board, 6) == 35 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_free_fields(board, 8) == 35 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );


char* board918992075 = gamma_board(board);
assert( board918992075 != NULL );
assert( strcmp(board918992075, 
".51.118..6\n"
"..3.7.9728\n"
"5...1...9.\n"
"89.385.389\n"
".9.34.49.8\n"
"......2352\n"
"8.2.6....4\n") == 0);
free(board918992075);
board918992075 = NULL;
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 7, 5) == 0 );


char* board733939136 = gamma_board(board);
assert( board733939136 != NULL );
assert( strcmp(board733939136, 
".51.118..6\n"
"..3.7.9728\n"
"5...1...9.\n"
"89.385.389\n"
".9.34.49.8\n"
"......2352\n"
"8.2.6....4\n") == 0);
free(board733939136);
board733939136 = NULL;
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 9, 3, 7) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 8, -1, 4) == 0 );
assert( gamma_move(board, 9, 3, 0) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 1, 3) == 0 );


char* board804147777 = gamma_board(board);
assert( board804147777 != NULL );
assert( strcmp(board804147777, 
".51.118..6\n"
"..3.7.9728\n"
"5...1...9.\n"
"89.385.389\n"
".9.34.49.8\n"
"...5..2352\n"
"8.296....4\n") == 0);
free(board804147777);
board804147777 = NULL;
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );


gamma_delete(board);

    return 0;
}
