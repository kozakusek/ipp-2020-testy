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
uuid: 986986634
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 8, 7, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );


char* board687646088 = gamma_board(board);
assert( board687646088 != NULL );
assert( strcmp(board687646088, 
"......\n"
"......\n"
"......\n"
"..1...\n"
"......\n"
"......\n"
"1.....\n"
"......\n") == 0);
free(board687646088);
board687646088 = NULL;
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 7, 5, 7) == 1 );


char* board514447013 = gamma_board(board);
assert( board514447013 != NULL );
assert( strcmp(board514447013, 
".....7\n"
"......\n"
"..5..6\n"
"..17..\n"
"......\n"
"..5...\n"
"1.....\n"
"....3.\n") == 0);
free(board514447013);
board514447013 = NULL;
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_free_fields(board, 6) == 35 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 7, 4, 7) == 1 );


char* board934608514 = gamma_board(board);
assert( board934608514 != NULL );
assert( strcmp(board934608514, 
"....77\n"
"......\n"
"..5..6\n"
"..17..\n"
"......\n"
"7.5...\n"
"1..342\n"
"5...34\n") == 0);
free(board934608514);
board934608514 = NULL;
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );


char* board651824401 = gamma_board(board);
assert( board651824401 != NULL );
assert( strcmp(board651824401, 
"....77\n"
"......\n"
"..5..6\n"
"..171.\n"
"2.....\n"
"7.5...\n"
"1..342\n"
"5..234\n") == 0);
free(board651824401);
board651824401 = NULL;
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 3, 7) == 1 );


char* board637106429 = gamma_board(board);
assert( board637106429 != NULL );
assert( strcmp(board637106429, 
"...477\n"
"......\n"
"..5..6\n"
"..171.\n"
"2.....\n"
"7.5...\n"
"1..342\n"
"5..234\n") == 0);
free(board637106429);
board637106429 = NULL;
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_golden_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );


char* board596830987 = gamma_board(board);
assert( board596830987 != NULL );
assert( strcmp(board596830987, 
"..3477\n"
"1...1.\n"
"..55.6\n"
"..171.\n"
"2.7.2.\n"
"7.5...\n"
"1..342\n"
"5..234\n") == 0);
free(board596830987);
board596830987 = NULL;
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_golden_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_free_fields(board, 6) == 17 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_free_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_free_fields(board, 7) == 13 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_golden_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );


char* board885970399 = gamma_board(board);
assert( board885970399 != NULL );
assert( strcmp(board885970399, 
"4.3477\n"
"1...1.\n"
"2251.6\n"
"611713\n"
"267122\n"
"745..7\n"
"1..342\n"
"5..234\n") == 0);
free(board885970399);
board885970399 = NULL;
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board945388781 = gamma_board(board);
assert( board945388781 != NULL );
assert( strcmp(board945388781, 
"4.3477\n"
"14..1.\n"
"2251.6\n"
"611713\n"
"267122\n"
"745.37\n"
"1..342\n"
"5..234\n") == 0);
free(board945388781);
board945388781 = NULL;
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );


char* board472224777 = gamma_board(board);
assert( board472224777 != NULL );
assert( strcmp(board472224777, 
"4.3477\n"
"14..1.\n"
"2251.6\n"
"611713\n"
"267122\n"
"745.37\n"
"1..342\n"
"5..234\n") == 0);
free(board472224777);
board472224777 = NULL;
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_golden_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );


char* board574694939 = gamma_board(board);
assert( board574694939 != NULL );
assert( strcmp(board574694939, 
"4.3477\n"
"14..13\n"
"2251.6\n"
"611713\n"
"267124\n"
"745.37\n"
"17.342\n"
"55.224\n") == 0);
free(board574694939);
board574694939 = NULL;


gamma_delete(board);

    return 0;
}
