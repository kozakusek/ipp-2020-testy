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
uuid: 547748376
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 11, 6, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_free_fields(board, 4) == 63 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_golden_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_free_fields(board, 6) == 60 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );


char* board178589944 = gamma_board(board);
assert( board178589944 != NULL );
assert( strcmp(board178589944, 
"...5..\n"
"6...1.\n"
"......\n"
"......\n"
"......\n"
".3....\n"
"......\n"
"2.....\n"
"2...5.\n"
".3....\n"
".4....\n") == 0);
free(board178589944);
board178589944 = NULL;
assert( gamma_move(board, 4, 2, 5) == 1 );


char* board707732679 = gamma_board(board);
assert( board707732679 != NULL );
assert( strcmp(board707732679, 
"...5..\n"
"6...1.\n"
"......\n"
"......\n"
"......\n"
".34...\n"
"......\n"
"2.....\n"
"2...5.\n"
".3....\n"
".4....\n") == 0);
free(board707732679);
board707732679 = NULL;
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 6, 2, 4) == 1 );


char* board170094850 = gamma_board(board);
assert( board170094850 != NULL );
assert( strcmp(board170094850, 
"...5..\n"
"6...1.\n"
"......\n"
"......\n"
"......\n"
".34...\n"
"..6...\n"
"2.5..5\n"
"2...5.\n"
".3....\n"
".4....\n") == 0);
free(board170094850);
board170094850 = NULL;
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_golden_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 1, 10) == 1 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );


char* board517654659 = gamma_board(board);
assert( board517654659 != NULL );
assert( strcmp(board517654659, 
".5.5..\n"
"6...11\n"
".....6\n"
"5.....\n"
"3...2.\n"
".34.62\n"
"4.6.3.\n"
"265..5\n"
"25..5.\n"
".3...6\n"
".4....\n") == 0);
free(board517654659);
board517654659 = NULL;
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_golden_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_golden_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );


char* board454286852 = gamma_board(board);
assert( board454286852 != NULL );
assert( strcmp(board454286852, 
".5.5..\n"
"6...11\n"
".....6\n"
"53....\n"
"3...2.\n"
".34.62\n"
"4.633.\n"
"265415\n"
"252.5.\n"
".3..36\n"
".4.6..\n") == 0);
free(board454286852);
board454286852 = NULL;
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );


char* board998667542 = gamma_board(board);
assert( board998667542 != NULL );
assert( strcmp(board998667542, 
".5.5..\n"
"6..111\n"
".....6\n"
"53.6..\n"
"36..2.\n"
".34.62\n"
"4.6331\n"
"265415\n"
"25235.\n"
"53..36\n"
".4.6.4\n") == 0);
free(board998667542);
board998667542 = NULL;
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_golden_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_move(board, 6, 0, 10) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board653214808 = gamma_board(board);
assert( board653214808 != NULL );
assert( strcmp(board653214808, 
"6555..\n"
"6.2111\n"
"...6.6\n"
"5356..\n"
"36.12.\n"
".34.62\n"
"4.6331\n"
"265415\n"
"25235.\n"
"23..36\n"
"44.6.4\n") == 0);
free(board653214808);
board653214808 = NULL;
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_free_fields(board, 6) == 12 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_golden_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_free_fields(board, 3) == 7 );


char* board832405210 = gamma_board(board);
assert( board832405210 != NULL );
assert( strcmp(board832405210, 
"6555..\n"
"612111\n"
"3..6.6\n"
"535654\n"
"36312.\n"
".34.62\n"
"4.6331\n"
"265415\n"
"25235.\n"
"23..36\n"
"44.6.4\n") == 0);
free(board832405210);
board832405210 = NULL;
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_golden_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_golden_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );


gamma_delete(board);

    return 0;
}
