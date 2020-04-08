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
uuid: 789400570
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 8, 15, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_golden_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 8, 11, 5) == 1 );
assert( gamma_move(board, 9, 12, 3) == 0 );
assert( gamma_free_fields(board, 9) == 92 );
assert( gamma_move(board, 10, 7, 4) == 1 );
assert( gamma_move(board, 11, 7, 8) == 0 );
assert( gamma_move(board, 12, 8, 6) == 1 );
assert( gamma_move(board, 13, 8, 5) == 1 );
assert( gamma_move(board, 14, 3, -1) == 0 );


char* board595662791 = gamma_board(board);
assert( board595662791 != NULL );
assert( strcmp(board595662791, 
"....5.......\n"
"..3.....12...\n"
"........13..8\n"
".......10....\n"
"............\n"
"...6........\n"
"............\n"
"............\n") == 0);
free(board595662791);
board595662791 = NULL;
assert( gamma_move(board, 15, 10, 5) == 1 );


char* board322462100 = gamma_board(board);
assert( board322462100 != NULL );
assert( strcmp(board322462100, 
"....5.......\n"
"..3.....12...\n"
"........13.158\n"
".......10....\n"
"............\n"
"...6........\n"
"............\n"
"............\n") == 0);
free(board322462100);
board322462100 = NULL;
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 0) == 1 );
assert( gamma_free_fields(board, 7) == 86 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 0) == 1 );
assert( gamma_move(board, 10, 2, 0) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 11, -1) == 0 );
assert( gamma_move(board, 14, 5, 8) == 0 );
assert( gamma_move(board, 15, 2, 4) == 1 );


char* board367060064 = gamma_board(board);
assert( board367060064 != NULL );
assert( strcmp(board367060064, 
"....5.......\n"
"..3.....12...\n"
"........13.158\n"
"..15....10....\n"
"...2........\n"
"...6........\n"
"............\n"
"..10....9...6\n") == 0);
free(board367060064);
board367060064 = NULL;
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_golden_move(board, 2, 5, 10) == 0 );


char* board331995105 = gamma_board(board);
assert( board331995105 != NULL );
assert( strcmp(board331995105, 
"....5.......\n"
"..3.....12...\n"
"........13.158\n"
"..15....10....\n"
"...2........\n"
"...6........\n"
"...1........\n"
"..10....9..26\n") == 0);
free(board331995105);
board331995105 = NULL;
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );


char* board271637719 = gamma_board(board);
assert( board271637719 != NULL );
assert( strcmp(board271637719, 
"....5.......\n"
"..3.....12...\n"
"......4.13.158\n"
"..15....10....\n"
"...2........\n"
"...6........\n"
"...1........\n"
"..10....9..26\n") == 0);
free(board271637719);
board271637719 = NULL;
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 8, 8, 2) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_free_fields(board, 8) == 79 );
assert( gamma_move(board, 9, 11, -1) == 0 );
assert( gamma_move(board, 10, 8, 1) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 6, 1) == 1 );
assert( gamma_move(board, 14, 11, 6) == 1 );


char* board507853569 = gamma_board(board);
assert( board507853569 != NULL );
assert( strcmp(board507853569, 
"....5.......\n"
"..3.....12..14\n"
"......4.13.158\n"
"..15....10....\n"
"...2........\n"
"...6....8...\n"
"...1..12.10...\n"
"..10....9..26\n") == 0);
free(board507853569);
board507853569 = NULL;
assert( gamma_move(board, 15, 0, 5) == 1 );
assert( gamma_free_fields(board, 15) == 75 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 11, 0) == 0 );
assert( gamma_free_fields(board, 7) == 74 );


char* board463475656 = gamma_board(board);
assert( board463475656 != NULL );
assert( strcmp(board463475656, 
"....5.......\n"
"..3.2...12..14\n"
"15.....4.13.158\n"
"..15....10....\n"
"...2........\n"
"...6....8...\n"
"...1..12.10...\n"
"..10....9..26\n") == 0);
free(board463475656);
board463475656 = NULL;
assert( gamma_move(board, 8, 9, 8) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 10, 6) == 1 );
assert( gamma_move(board, 10, 5, 3) == 1 );
assert( gamma_free_fields(board, 10) == 72 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 8, -1) == 0 );
assert( gamma_move(board, 12, 12, 0) == 0 );


char* board289177121 = gamma_board(board);
assert( board289177121 != NULL );
assert( strcmp(board289177121, 
"....5.......\n"
"..3.2...12.914\n"
"15.....4.13.158\n"
"..15....10....\n"
"...2.10......\n"
"...6....8...\n"
"...1..12.10...\n"
"..10....9..26\n") == 0);
free(board289177121);
board289177121 = NULL;
assert( gamma_move(board, 14, 12, 0) == 0 );
assert( gamma_move(board, 15, 1, 2) == 1 );


char* board243062924 = gamma_board(board);
assert( board243062924 != NULL );
assert( strcmp(board243062924, 
"....5.......\n"
"..3.2...12.914\n"
"15.....4.13.158\n"
"..15....10....\n"
"...2.10......\n"
".15.6....8...\n"
"...1..12.10...\n"
"..10....9..26\n") == 0);
free(board243062924);
board243062924 = NULL;
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board607101003 = gamma_board(board);
assert( board607101003 != NULL );
assert( strcmp(board607101003, 
"....5.......\n"
"..3.2...126914\n"
"15.....4.13.158\n"
"..15....10...2\n"
"...2.10......\n"
".15.65...8...\n"
"...1..12.10...\n"
"..10..4.9..26\n") == 0);
free(board607101003);
board607101003 = NULL;


char* board654575001 = gamma_board(board);
assert( board654575001 != NULL );
assert( strcmp(board654575001, 
"....5.......\n"
"..3.2...126914\n"
"15.....4.13.158\n"
"..15....10...2\n"
"...2.10......\n"
".15.65...8...\n"
"...1..12.10...\n"
"..10..4.9..26\n") == 0);
free(board654575001);
board654575001 = NULL;
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 10, 5, 6) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 5, 5) == 1 );
assert( gamma_move(board, 14, 6, 0) == 1 );
assert( gamma_free_fields(board, 14) == 64 );
assert( gamma_move(board, 15, 12, 0) == 0 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 2, -1) == 0 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 7, -1, -1) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 8, 10, 7) == 1 );
assert( gamma_move(board, 9, 3, 8) == 0 );
assert( gamma_move(board, 10, 12, 1) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 11, 2) == 1 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_move(board, 12, 6, 7) == 1 );
assert( gamma_move(board, 13, 5, 8) == 0 );
assert( gamma_move(board, 14, 4, 8) == 0 );
assert( gamma_move(board, 15, 2, 4) == 0 );
assert( gamma_move(board, 1, 12, 8) == 0 );


char* board104726512 = gamma_board(board);
assert( board104726512 != NULL );
assert( strcmp(board104726512, 
"....5.12...8.\n"
"..3.210..126914\n"
"15....134.13.158\n"
"..15....10...2\n"
"...2.10......\n"
".15.65...8..11\n"
"...1..12.103..\n"
"..10..41496.26\n") == 0);
free(board104726512);
board104726512 = NULL;
assert( gamma_move(board, 2, 5, -1) == 0 );


char* board185252807 = gamma_board(board);
assert( board185252807 != NULL );
assert( strcmp(board185252807, 
"....5.12...8.\n"
"..3.210..126914\n"
"15....134.13.158\n"
"..15....10...2\n"
"...2.10......\n"
".15.65...8..11\n"
"...1..12.103..\n"
"..10..41496.26\n") == 0);
free(board185252807);
board185252807 = NULL;
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_free_fields(board, 6) == 58 );


gamma_delete(board);

    return 0;
}
