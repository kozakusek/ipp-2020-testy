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
uuid: 315855830
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 14, 10, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_free_fields(board, 3) == 82 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_free_fields(board, 5) == 79 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 2, 12) == 1 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_move(board, 9, 12, 5) == 0 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_move(board, 10, 8, 5) == 0 );
assert( gamma_move(board, 10, 1, 4) == 1 );
assert( gamma_golden_move(board, 10, 12, 4) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 9, 5, 13) == 1 );
assert( gamma_move(board, 10, 2, 8) == 0 );
assert( gamma_free_fields(board, 10) == 62 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 4, 5, 10) == 1 );


char* board934196282 = gamma_board(board);
assert( board934196282 != NULL );
assert( strcmp(board934196282, 
".....9\n"
"..4.2.\n"
"......\n"
"..1..4\n"
".3....\n"
"8.4.1.\n"
"6.....\n"
"......\n"
"11.6.8\n"
"310....\n"
"66....\n"
"...3.5\n"
"5...5.\n"
"86...2\n") == 0);
free(board934196282);
board934196282 = NULL;
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 1, 12) == 1 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 9, 3, 7) == 1 );
assert( gamma_move(board, 9, 3, 6) == 1 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 5, 4) == 1 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 4, 11) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 9, 13, 1) == 0 );
assert( gamma_move(board, 10, 8, 5) == 0 );
assert( gamma_free_fields(board, 10) == 49 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );


char* board978382600 = gamma_board(board);
assert( board978382600 != NULL );
assert( strcmp(board978382600, 
".....9\n"
".54.2.\n"
"....25\n"
"211..4\n"
"23....\n"
"8.411.\n"
"6..9..\n"
"4..9..\n"
"11.6.8\n"
"310..510\n"
"66....\n"
"..53.5\n"
"5.3.5.\n"
"86..72\n") == 0);
free(board978382600);
board978382600 = NULL;
assert( gamma_move(board, 6, 13, 4) == 0 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 8, 5, 8) == 1 );
assert( gamma_move(board, 9, 4, 5) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_move(board, 9, 1, 13) == 1 );
assert( gamma_move(board, 10, 13, 0) == 0 );
assert( gamma_move(board, 10, 0, 7) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 7, 2, 11) == 1 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 8, 0, 2) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_golden_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 11, 0) == 0 );
assert( gamma_move(board, 8, 1, 13) == 0 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 10, 3, 4) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_golden_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_golden_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 9, 11, 3) == 0 );
assert( gamma_move(board, 10, 0, 4) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_free_fields(board, 7) == 32 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 8, 4, 13) == 1 );
assert( gamma_move(board, 9, 4, 9) == 0 );
assert( gamma_free_fields(board, 9) == 31 );
assert( gamma_move(board, 10, 1, 8) == 1 );
assert( gamma_move(board, 10, 1, 8) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 5, 2, 9) == 1 );


char* board185244043 = gamma_board(board);
assert( board185244043 != NULL );
assert( strcmp(board185244043, 
".9..89\n"
".54.2.\n"
"..7225\n"
"211..4\n"
"235.42\n"
"8104118\n"
"6..9..\n"
"4.493.\n"
"113658\n"
"31026510\n"
"661...\n"
"8.53.5\n"
"5.3.5.\n"
"86..72\n") == 0);
free(board185244043);
board185244043 = NULL;
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 8, 1, 12) == 0 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 10, 11, 0) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 5, 3, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_golden_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 7, 13, 3) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 10, 3) == 0 );
assert( gamma_move(board, 10, 12, 0) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_free_fields(board, 4) == 25 );


char* board557004600 = gamma_board(board);
assert( board557004600 != NULL );
assert( strcmp(board557004600, 
".9..89\n"
".5452.\n"
"..7225\n"
"211..4\n"
"235.42\n"
"8104118\n"
"6..9..\n"
"4.493.\n"
"113658\n"
"31026510\n"
"6615..\n"
"8.53.5\n"
"5.3.5.\n"
"86..72\n") == 0);
free(board557004600);
board557004600 = NULL;
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_free_fields(board, 5) == 25 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 7, 3, 10) == 1 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_move(board, 10, 0, 7) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 12, 5) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );


char* board705942768 = gamma_board(board);
assert( board705942768 != NULL );
assert( strcmp(board705942768, 
".9..89\n"
".5452.\n"
"..7225\n"
"2117.4\n"
"235.42\n"
"8104118\n"
"6..9..\n"
"4.493.\n"
"113658\n"
"31026510\n"
"6615..\n"
"8353.5\n"
"5.3.56\n"
"86..72\n") == 0);
free(board705942768);
board705942768 = NULL;
assert( gamma_move(board, 9, 9, 3) == 0 );
assert( gamma_free_fields(board, 9) == 22 );
assert( gamma_move(board, 10, 13, 2) == 0 );
assert( gamma_move(board, 10, 3, 11) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_golden_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_free_fields(board, 6) == 21 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 9, 1, 12) == 0 );
assert( gamma_move(board, 10, 5, 7) == 1 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_free_fields(board, 10) == 20 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 8, 2, 11) == 0 );


gamma_delete(board);

    return 0;
}
