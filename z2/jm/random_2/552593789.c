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
uuid: 552593789
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 14, 9, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_free_fields(board, 2) == 68 );
assert( gamma_move(board, 3, 1, 13) == 1 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_free_fields(board, 6) == 65 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 7, 0, 12) == 1 );
assert( gamma_move(board, 8, 1, 6) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );


char* board581836879 = gamma_board(board);
assert( board581836879 != NULL );
assert( strcmp(board581836879, 
".3...\n"
"7....\n"
".....\n"
".3...\n"
".....\n"
"6....\n"
".2...\n"
".82.3\n"
".2...\n"
".....\n"
".....\n"
".....\n"
".....\n"
"..2..\n") == 0);
free(board581836879);
board581836879 = NULL;


char* board408907500 = gamma_board(board);
assert( board408907500 != NULL );
assert( strcmp(board408907500, 
".3...\n"
"7....\n"
".....\n"
".3...\n"
".....\n"
"6....\n"
".2...\n"
".82.3\n"
".2...\n"
".....\n"
".....\n"
".....\n"
".....\n"
"..2..\n") == 0);
free(board408907500);
board408907500 = NULL;
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_free_fields(board, 5) == 59 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 6, 4, 10) == 1 );
assert( gamma_free_fields(board, 6) == 58 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 9, 2, 3) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_golden_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 13, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_move(board, 9, 3, 1) == 0 );


char* board270689627 = gamma_board(board);
assert( board270689627 != NULL );
assert( strcmp(board270689627, 
".3...\n"
"7....\n"
".....\n"
".3..6\n"
".....\n"
"6....\n"
".2...\n"
".8253\n"
".2...\n"
"..33.\n"
"..9..\n"
".7...\n"
".5.8.\n"
"9.286\n") == 0);
free(board270689627);
board270689627 = NULL;
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_free_fields(board, 3) == 48 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 3, 13) == 1 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 8, 3, 13) == 0 );
assert( gamma_move(board, 9, 12, 2) == 0 );
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );


char* board759950816 = gamma_board(board);
assert( board759950816 != NULL );
assert( strcmp(board759950816, 
".3.6.\n"
"7....\n"
".....\n"
".3..6\n"
".....\n"
"634..\n"
".2...\n"
".8253\n"
"12...\n"
"..33.\n"
"..98.\n"
".7...\n"
".5.8.\n"
"9.286\n") == 0);
free(board759950816);
board759950816 = NULL;
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board859051170 = gamma_board(board);
assert( board859051170 != NULL );
assert( strcmp(board859051170, 
".3.6.\n"
"7....\n"
".....\n"
".3..6\n"
".....\n"
"634..\n"
".2...\n"
".8253\n"
"12...\n"
"..33.\n"
"..98.\n"
".7...\n"
".5.8.\n"
"9.286\n") == 0);
free(board859051170);
board859051170 = NULL;
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 0, 11) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 3, 12) == 1 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_free_fields(board, 8) == 40 );
assert( gamma_move(board, 9, 11, 2) == 0 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 2, 12) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_free_fields(board, 6) == 37 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 8, 3, 9) == 1 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_free_fields(board, 9) == 35 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_move(board, 7, 13, 4) == 0 );


char* board267689588 = gamma_board(board);
assert( board267689588 != NULL );
assert( strcmp(board267689588, 
".3.6.\n"
"7.56.\n"
"4....\n"
".3..6\n"
"...8.\n"
"634..\n"
".2...\n"
".8253\n"
"125.3\n"
"..33.\n"
".198.\n"
".78..\n"
"25.8.\n"
"99286\n") == 0);
free(board267689588);
board267689588 = NULL;
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 3, 10) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 8, 2, 7) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_move(board, 9, 3, 12) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_golden_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 6, 13, 2) == 0 );
assert( gamma_golden_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 8, 0, 2) == 1 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 5, 1, 11) == 1 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 8, 3, 8) == 1 );
assert( gamma_golden_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 9, 4, 4) == 1 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 0, 13) == 1 );
assert( gamma_move(board, 5, 4, 11) == 1 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 7, 13, 2) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_move(board, 5, 4, 13) == 1 );


char* board134706014 = gamma_board(board);
assert( board134706014 != NULL );
assert( strcmp(board134706014, 
"53.65\n"
"7.56.\n"
"45.45\n"
".3436\n"
".418.\n"
"63482\n"
".28..\n"
".8253\n"
"12563\n"
".3339\n"
".198.\n"
"878.7\n"
"25.8.\n"
"99286\n") == 0);
free(board134706014);
board134706014 = NULL;
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_free_fields(board, 6) == 17 );


char* board680360475 = gamma_board(board);
assert( board680360475 != NULL );
assert( strcmp(board680360475, 
"53.65\n"
"7.56.\n"
"45.45\n"
".3436\n"
".418.\n"
"63482\n"
".28..\n"
".8253\n"
"12563\n"
".3339\n"
".198.\n"
"878.7\n"
"25.8.\n"
"99286\n") == 0);
free(board680360475);
board680360475 = NULL;
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 2, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 9, 3, 12) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 2, 11) == 1 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_golden_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 8, 4, 7) == 1 );
assert( gamma_move(board, 9, 13, 2) == 0 );
assert( gamma_move(board, 9, 4, 1) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 2, 13) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );


char* board230701952 = gamma_board(board);
assert( board230701952 != NULL );
assert( strcmp(board230701952, 
"53265\n"
"7.56.\n"
"45545\n"
".3436\n"
".418.\n"
"63482\n"
".28.8\n"
".8253\n"
"12563\n"
"43339\n"
"1198.\n"
"878.7\n"
"25.89\n"
"99286\n") == 0);
free(board230701952);
board230701952 = NULL;
assert( gamma_move(board, 8, 2, 11) == 0 );
assert( gamma_busy_fields(board, 8) == 10 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_golden_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_free_fields(board, 5) == 11 );


gamma_delete(board);

    return 0;
}
