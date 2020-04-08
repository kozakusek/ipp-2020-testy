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
uuid: 278056098
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 4, 13, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 11, 0) == 1 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 8, 0, 3) == 1 );
assert( gamma_move(board, 9, 2, 1) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 10, 9, 0) == 1 );
assert( gamma_move(board, 11, 0, 6) == 0 );
assert( gamma_move(board, 11, 10, 0) == 1 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 12, 1) == 1 );
assert( gamma_busy_fields(board, 12) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 1, 11) == 0 );
assert( gamma_move(board, 13, 8, 2) == 1 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_free_fields(board, 3) == 51 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 14, 2) == 1 );
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_free_fields(board, 8) == 48 );
assert( gamma_move(board, 9, 1, 14) == 0 );
assert( gamma_move(board, 9, 12, 0) == 1 );
assert( gamma_golden_move(board, 9, 1, 2) == 0 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_move(board, 11, 1, 13) == 0 );
assert( gamma_move(board, 11, 7, 1) == 1 );
assert( gamma_move(board, 12, 2, 3) == 0 );
assert( gamma_move(board, 12, 8, 3) == 1 );
assert( gamma_move(board, 13, 3, 9) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 7, 11, 2) == 1 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 9, 3, 1) == 0 );
assert( gamma_move(board, 9, 10, 2) == 1 );


char* board850568298 = gamma_board(board);
assert( board850568298 != NULL );
assert( strcmp(board850568298, 
"8.724...12.5....\n"
"7...2...13.97..5\n"
".491...11....12..\n"
"7...6....101119..\n") == 0);
free(board850568298);
board850568298 = NULL;
assert( gamma_move(board, 10, 1, 4) == 0 );
assert( gamma_move(board, 10, 5, 0) == 1 );
assert( gamma_move(board, 11, 7, 3) == 1 );
assert( gamma_move(board, 12, 2, 12) == 0 );
assert( gamma_move(board, 12, 13, 3) == 1 );
assert( gamma_move(board, 13, 0, 14) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 13, 1) == 1 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board687886643 = gamma_board(board);
assert( board687886643 != NULL );
assert( strcmp(board687886643, 
"8.724..1112.5..12.\n"
"7...2...13.97..5\n"
".4913..11....121.\n"
"75..610...101119..\n") == 0);
free(board687886643);
board687886643 = NULL;
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_move(board, 7, 12, 2) == 1 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_free_fields(board, 8) == 29 );
assert( gamma_move(board, 9, 9, 3) == 1 );
assert( gamma_move(board, 10, 3, 3) == 0 );
assert( gamma_move(board, 10, 2, 3) == 0 );
assert( gamma_move(board, 11, 1, 8) == 0 );
assert( gamma_busy_fields(board, 11) == 3 );
assert( gamma_move(board, 12, 3, 5) == 0 );
assert( gamma_move(board, 12, 3, 0) == 1 );
assert( gamma_move(board, 13, 8, 0) == 1 );
assert( gamma_move(board, 13, 14, 2) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 3) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 9, 2) == 1 );
assert( gamma_move(board, 9, 5, 3) == 1 );
assert( gamma_golden_move(board, 9, 0, 10) == 0 );
assert( gamma_move(board, 10, 1, 0) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 0, 14) == 0 );
assert( gamma_move(board, 11, 1, 2) == 1 );
assert( gamma_move(board, 12, 2, 6) == 0 );
assert( gamma_move(board, 13, 0, 2) == 0 );
assert( gamma_move(board, 13, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 13, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 8, 3, 11) == 0 );


char* board369428153 = gamma_board(board);
assert( board369428153 != NULL );
assert( strcmp(board369428153, 
"8.7249.111295..124\n"
"711772...13897755\n"
".4913..113...121.\n"
"75.126107.13101119..\n") == 0);
free(board369428153);
board369428153 = NULL;
assert( gamma_move(board, 9, 10, 1) == 1 );
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_move(board, 11, 1, 9) == 0 );
assert( gamma_move(board, 12, 2, 6) == 0 );
assert( gamma_golden_move(board, 13, 0, 5) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 5, 1, 14) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 7, 9, 1) == 1 );


char* board959680961 = gamma_board(board);
assert( board959680961 != NULL );
assert( strcmp(board959680961, 
"8.7249.111295..124\n"
"711772...13897755\n"
".4913..11379.121.\n"
"75.126107.13101119..\n") == 0);
free(board959680961);
board959680961 = NULL;
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 8, 14, 1) == 1 );
assert( gamma_move(board, 9, 0, 1) == 1 );
assert( gamma_move(board, 9, 11, 1) == 1 );
assert( gamma_move(board, 10, 2, 7) == 0 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_free_fields(board, 10) == 13 );
assert( gamma_move(board, 11, 12, 2) == 0 );
assert( gamma_move(board, 11, 11, 1) == 0 );
assert( gamma_move(board, 12, 2, 7) == 0 );
assert( gamma_move(board, 12, 7, 0) == 1 );
assert( gamma_move(board, 13, 11, 1) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_golden_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_free_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 8, 14, 2) == 0 );
assert( gamma_free_fields(board, 8) == 11 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 10, 3, 12) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 3, 1) == 0 );
assert( gamma_move(board, 11, 2, 1) == 0 );
assert( gamma_free_fields(board, 11) == 11 );
assert( gamma_golden_move(board, 11, 2, 8) == 0 );
assert( gamma_move(board, 12, 2, 6) == 0 );
assert( gamma_move(board, 12, 12, 2) == 0 );
assert( gamma_move(board, 13, 3, 12) == 0 );
assert( gamma_move(board, 13, 1, 0) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );


char* board680902745 = gamma_board(board);
assert( board680902745 != NULL );
assert( strcmp(board680902745, 
"8.7249.111295..124\n"
"711772...13897755\n"
"94913..1137991218\n"
"7571261071213101119..\n") == 0);
free(board680902745);
board680902745 = NULL;
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 9, 14, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 11, 4, 2) == 0 );
assert( gamma_move(board, 12, 2, 5) == 0 );
assert( gamma_move(board, 12, 0, 1) == 0 );
assert( gamma_move(board, 13, 2, 6) == 0 );


char* board496425121 = gamma_board(board);
assert( board496425121 != NULL );
assert( strcmp(board496425121, 
"8.72495111295..124\n"
"711772...13897755\n"
"94913..1137991218\n"
"7571261071213101119..\n") == 0);
free(board496425121);
board496425121 = NULL;
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_free_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );


char* board133361188 = gamma_board(board);
assert( board133361188 != NULL );
assert( strcmp(board133361188, 
"8.72495111295..124\n"
"711772.2.13897755\n"
"94913..1137991218\n"
"7571261071213101119..\n") == 0);
free(board133361188);
board133361188 = NULL;


gamma_delete(board);

    return 0;
}
