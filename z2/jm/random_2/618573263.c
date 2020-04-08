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
uuid: 618573263
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 6, 9, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 4, 14, 4) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_move(board, 7, 11, 4) == 1 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_move(board, 9, 12, 3) == 1 );
assert( gamma_move(board, 9, 2, 5) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board240326140 = gamma_board(board);
assert( board240326140 != NULL );
assert( strcmp(board240326140, 
".39............\n"
"....8......7..4\n"
"1...........9..\n"
"...6....6......\n"
".....4.5.......\n"
"12.............\n") == 0);
free(board240326140);
board240326140 = NULL;
assert( gamma_move(board, 3, 7, 1) == 0 );


char* board726618440 = gamma_board(board);
assert( board726618440 != NULL );
assert( strcmp(board726618440, 
".39............\n"
"....8......7..4\n"
"1...........9..\n"
"...6....6......\n"
".....4.5.......\n"
"12.............\n") == 0);
free(board726618440);
board726618440 = NULL;
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_move(board, 6, 13, 1) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 8, 2, 4) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 12, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_free_fields(board, 5) == 67 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_move(board, 7, 2, 14) == 0 );
assert( gamma_move(board, 7, 9, 2) == 1 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 9, 1, 4) == 1 );
assert( gamma_move(board, 9, 10, 1) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 4, 13) == 0 );
assert( gamma_move(board, 9, 3, 10) == 0 );
assert( gamma_move(board, 9, 9, 3) == 1 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 7, 13, 2) == 1 );
assert( gamma_move(board, 8, 3, 10) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_move(board, 9, 10, 2) == 1 );
assert( gamma_free_fields(board, 9) == 54 );
assert( gamma_golden_move(board, 9, 3, 0) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );


char* board917967235 = gamma_board(board);
assert( board917967235 != NULL );
assert( strcmp(board917967235, 
"639............\n"
"49888..1...7..4\n"
"15.4...1.9..9..\n"
"5.56..67679..7.\n"
"..6.14.5.52.36.\n"
"12......3......\n") == 0);
free(board917967235);
board917967235 = NULL;
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 6, 13, 0) == 1 );


char* board629485253 = gamma_board(board);
assert( board629485253 != NULL );
assert( strcmp(board629485253, 
"639............\n"
"49888..1...7..4\n"
"15.4...1.9..9..\n"
"5356..67679..7.\n"
".66.14.5.52536.\n"
"12......3....6.\n") == 0);
free(board629485253);
board629485253 = NULL;
assert( gamma_move(board, 7, 5, 14) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 9, 3, 0) == 1 );
assert( gamma_golden_move(board, 9, 2, 13) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 6, 13, 3) == 1 );


char* board953519972 = gamma_board(board);
assert( board953519972 != NULL );
assert( strcmp(board953519972, 
"639............\n"
"49888..1.4.7..4\n"
"15.4.8.1.9..96.\n"
"5356..67679..7.\n"
"166.14.5.52536.\n"
"12.9..2.3....6.\n") == 0);
free(board953519972);
board953519972 = NULL;
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 8, 12, 4) == 1 );
assert( gamma_move(board, 8, 12, 2) == 1 );


char* board698781170 = gamma_board(board);
assert( board698781170 != NULL );
assert( strcmp(board698781170, 
"639............\n"
"49888..1.4.78.4\n"
"15.4.8.1.9..96.\n"
"5356..67679.87.\n"
"166.14.5.52536.\n"
"12.9..2.3....6.\n") == 0);
free(board698781170);
board698781170 = NULL;
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 14, 5) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 14, 2) == 1 );
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 8, 6, 3) == 1 );


char* board503860747 = gamma_board(board);
assert( board503860747 != NULL );
assert( strcmp(board503860747, 
"639......7....3\n"
"498884.1.4.78.4\n"
"15.4.881.9..96.\n"
"5356.467679.877\n"
"166.14.5.52536.\n"
"12.9..2.3....6.\n") == 0);
free(board503860747);
board503860747 = NULL;
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 5, 13, 4) == 1 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 13, 4) == 0 );
assert( gamma_move(board, 7, 13, 5) == 1 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 3, 14, 0) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_golden_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 9, 10, 1) == 0 );
assert( gamma_free_fields(board, 9) == 29 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 9, 10, 3) == 1 );
assert( gamma_move(board, 9, 13, 1) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 2, 11, 5) == 1 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 8, 14, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_free_fields(board, 8) == 27 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 1, 12, 0) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 9, 0, 11) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 14, 3) == 1 );
assert( gamma_move(board, 3, 14, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 5, 14, 5) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_golden_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 7, 13, 1) == 0 );
assert( gamma_move(board, 8, 3, 11) == 0 );
assert( gamma_free_fields(board, 9) == 22 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );


char* board743973856 = gamma_board(board);
assert( board743973856 != NULL );
assert( strcmp(board743973856, 
"639..5..67.2.73\n"
"498864.1.4.7854\n"
"1564.881.99.962\n"
"53563467679.877\n"
"166.1425.525363\n"
"12.9432.3...163\n") == 0);
free(board743973856);
board743973856 = NULL;
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 9, 13, 2) == 0 );
assert( gamma_free_fields(board, 9) == 19 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );


char* board346198604 = gamma_board(board);
assert( board346198604 != NULL );
assert( strcmp(board346198604, 
"639..5.667.2.73\n"
"498864.1.4.7854\n"
"1564.881.99.962\n"
"53563467679.877\n"
"166.1425.525363\n"
"12.9432.3...163\n") == 0);
free(board346198604);
board346198604 = NULL;
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 7, 11, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_free_fields(board, 7) == 18 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 9, 0, 9) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 10, 5) == 1 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_golden_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 8, 5, 12) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 8, 3, 11) == 0 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );


char* board793129144 = gamma_board(board);
assert( board793129144 != NULL );
assert( strcmp(board793129144, 
"639..5.66712.73\n"
"498864.1.4.7854\n"
"1564.881.99.962\n"
"53563467679.877\n"
"166.1425.525363\n"
"1249432.3..7163\n") == 0);
free(board793129144);
board793129144 = NULL;
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_free_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 8) == 0 );


gamma_delete(board);

    return 0;
}
