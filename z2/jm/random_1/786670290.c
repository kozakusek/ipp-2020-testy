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
uuid: 786670290
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 9, 9, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_free_fields(board, 1) == 98 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_free_fields(board, 4) == 96 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 8, 10, 8) == 1 );
assert( gamma_move(board, 9, 2, 1) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_golden_move(board, 5, 0, 1) == 0 );
assert( gamma_free_fields(board, 6) == 90 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 8, 11, 9) == 0 );
assert( gamma_move(board, 9, 5, 5) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_free_fields(board, 2) == 87 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_free_fields(board, 8) == 86 );
assert( gamma_move(board, 9, 0, 7) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_move(board, 6, 11, 9) == 0 );
assert( gamma_move(board, 7, -1, 5) == 0 );
assert( gamma_move(board, 8, 1, 5) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 10, 7) == 1 );
assert( gamma_free_fields(board, 1) == 80 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_free_fields(board, 8) == 78 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_free_fields(board, 5) == 75 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_golden_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 7, -1, 3) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_free_fields(board, 4) == 70 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 6, 11, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 9, 10, 5) == 0 );
assert( gamma_free_fields(board, 9) == 70 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_golden_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_free_fields(board, 6) == 69 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_free_fields(board, 8) == 69 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 9) == 0 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 4, 1) == 1 );


char* board705148391 = gamma_board(board);
assert( board705148391 != NULL );
assert( strcmp(board705148391, 
"...2......8\n"
"942......49\n"
".....7....1\n"
"4812.962..5\n"
".3.634..3..\n"
"4.6......1.\n"
"...........\n"
"539.85..7..\n"
".5417....1.\n") == 0);
free(board705148391);
board705148391 = NULL;
assert( gamma_move(board, 9, 10, 3) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 2) == 62 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_move(board, 7, 9, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 0) == 1 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 3, 11, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, -1) == 0 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 7, 11, 2) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_free_fields(board, 8) == 57 );
assert( gamma_move(board, 9, 4, 6) == 1 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_free_fields(board, 3) == 55 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 3, -1) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 10, 1) == 1 );
assert( gamma_move(board, 9, 11, 4) == 0 );


char* board709520023 = gamma_board(board);
assert( board709520023 != NULL );
assert( strcmp(board709520023, 
"...2.....38\n"
"9424.....49\n"
"....97...71\n"
"4812.962.25\n"
".35634..3..\n"
"4.6....6.19\n"
"4..........\n"
"539.85..7.8\n"
".5417...81.\n") == 0);
free(board709520023);
board709520023 = NULL;
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 9, 6, 9) == 0 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );


char* board133517985 = gamma_board(board);
assert( board133517985 != NULL );
assert( strcmp(board133517985, 
"...2.....38\n"
"9424.....49\n"
"....97...71\n"
"4812.962.25\n"
".35634..3..\n"
"4.6....6.19\n"
"4..........\n"
"539.85..7.8\n"
".5417..781.\n") == 0);
free(board133517985);
board133517985 = NULL;
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_free_fields(board, 8) == 50 );
assert( gamma_move(board, 9, 5, 3) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 6, 10, 4) == 1 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 8, 4, -1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_free_fields(board, 5) == 45 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_free_fields(board, 8) == 44 );
assert( gamma_move(board, 9, 5, 2) == 1 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_free_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 7, -1) == 0 );
assert( gamma_free_fields(board, 5) == 41 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 9, -1, 0) == 0 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, -1, 7) == 0 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 8, -1, 7) == 0 );
assert( gamma_golden_move(board, 8, 1, 10) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_golden_move(board, 1, 4, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_free_fields(board, 5) == 38 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 7, 0, -1) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );


char* board574828179 = gamma_board(board);
assert( board574828179 != NULL );
assert( strcmp(board574828179, 
"...2..4.238\n"
"9424...1.49\n"
"....975..71\n"
"4812.962.25\n"
".35614.63.6\n"
"4.6..956.19\n"
"4.74.954...\n"
"539.85..7.8\n"
".5417..781.\n") == 0);
free(board574828179);
board574828179 = NULL;
assert( gamma_move(board, 9, 4, 8) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 8, 9, -1) == 0 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 9, 7, 9) == 0 );


char* board542596141 = gamma_board(board);
assert( board542596141 != NULL );
assert( strcmp(board542596141, 
"...29.4.238\n"
"9424...1.49\n"
"..7.975..71\n"
"4812.962325\n"
".35614.63.6\n"
"4.6..956519\n"
"4.74.954.2.\n"
"539.85..7.8\n"
".54173.781.\n") == 0);
free(board542596141);
board542596141 = NULL;


gamma_delete(board);

    return 0;
}
