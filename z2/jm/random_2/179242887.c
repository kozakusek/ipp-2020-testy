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
uuid: 179242887
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 13, 9, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_golden_move(board, 1, 10, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_golden_move(board, 2, 3, 1) == 0 );


char* board936929620 = gamma_board(board);
assert( board936929620 != NULL );
assert( strcmp(board936929620, 
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
".1....\n"
"......\n"
"......\n"
"......\n") == 0);
free(board936929620);
board936929620 = NULL;
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 9) == 1 );
assert( gamma_move(board, 8, 2, 7) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 0) == 1 );
assert( gamma_move(board, 9, 2, 5) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_golden_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 3, 4, 11) == 1 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_golden_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );


char* board405015451 = gamma_board(board);
assert( board405015451 != NULL );
assert( strcmp(board405015451, 
"......\n"
"....3.\n"
"......\n"
"8....7\n"
"5...23\n"
"..8...\n"
"......\n"
"..9...\n"
"1.332.\n"
"61.3.2\n"
"3.....\n"
"7...8.\n"
"...9..\n") == 0);
free(board405015451);
board405015451 = NULL;
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 8, 11, 5) == 0 );
assert( gamma_move(board, 9, 10, 5) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );


char* board302167044 = gamma_board(board);
assert( board302167044 != NULL );
assert( strcmp(board302167044, 
"......\n"
"....3.\n"
"......\n"
"8....7\n"
"5...23\n"
"..8...\n"
"......\n"
"..9...\n"
"1.332.\n"
"6113.2\n"
"3...7.\n"
"7...8.\n"
"..19..\n") == 0);
free(board302167044);
board302167044 = NULL;
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 1, 10) == 1 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_free_fields(board, 5) == 52 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_free_fields(board, 8) == 52 );


char* board552011253 = gamma_board(board);
assert( board552011253 != NULL );
assert( strcmp(board552011253, 
"......\n"
"....3.\n"
".3....\n"
"8....7\n"
"5...23\n"
"..8.25\n"
"......\n"
"..9...\n"
"1.332.\n"
"6113.2\n"
"3...7.\n"
"7...8.\n"
"..19..\n") == 0);
free(board552011253);
board552011253 = NULL;
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_free_fields(board, 9) == 52 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 0, 12) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_move(board, 5, 2, 12) == 1 );
assert( gamma_free_fields(board, 5) == 49 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_golden_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 9, 3, 11) == 1 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_golden_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 3, 1, 11) == 1 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 8, 4, 11) == 0 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 5, 11) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_free_fields(board, 3) == 42 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 7, 4, 12) == 1 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 9, 6, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 5, 12) == 1 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_free_fields(board, 6) == 35 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 4, 1, 12) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );


char* board921910955 = gamma_board(board);
assert( board921910955 != NULL );
assert( strcmp(board921910955, 
"345.73\n"
".3.931\n"
".3...1\n"
"862..7\n"
"5...23\n"
"148.25\n"
"465..4\n"
"139...\n"
"133327\n"
"6113.2\n"
"3...7.\n"
"741.8.\n"
"..19..\n") == 0);
free(board921910955);
board921910955 = NULL;
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 9, 9, 3) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_golden_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );


char* board715118942 = gamma_board(board);
assert( board715118942 != NULL );
assert( strcmp(board715118942, 
"345.73\n"
".3.931\n"
".3...1\n"
"862..7\n"
"5...23\n"
"148.25\n"
"465..4\n"
"139...\n"
"133327\n"
"6113.2\n"
"3...7.\n"
"741.8.\n"
"..19..\n") == 0);
free(board715118942);
board715118942 = NULL;
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 9, 0, 11) == 1 );
assert( gamma_move(board, 9, 3, 10) == 1 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 2, 4, 10) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 8, 12, 3) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 11) == 0 );


char* board263185545 = gamma_board(board);
assert( board263185545 != NULL );
assert( strcmp(board263185545, 
"345.73\n"
"93.931\n"
"33.921\n"
"862..7\n"
"5...23\n"
"148.25\n"
"4656.4\n"
"139...\n"
"133327\n"
"6113.2\n"
"3...7.\n"
"741.8.\n"
".4196.\n") == 0);
free(board263185545);
board263185545 = NULL;
assert( gamma_move(board, 6, 7, 3) == 0 );


char* board606603541 = gamma_board(board);
assert( board606603541 != NULL );
assert( strcmp(board606603541, 
"345.73\n"
"93.931\n"
"33.921\n"
"862..7\n"
"5...23\n"
"148.25\n"
"4656.4\n"
"139...\n"
"133327\n"
"6113.2\n"
"3...7.\n"
"741.8.\n"
".4196.\n") == 0);
free(board606603541);
board606603541 = NULL;
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 9, 4, 9) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_free_fields(board, 6) == 20 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );


char* board261242649 = gamma_board(board);
assert( board261242649 != NULL );
assert( strcmp(board261242649, 
"345.73\n"
"93.931\n"
"33.921\n"
"862.97\n"
"5...23\n"
"148.25\n"
"4656.4\n"
"1397..\n"
"133327\n"
"6113.2\n"
"3.9.7.\n"
"741.8.\n"
".4196.\n") == 0);
free(board261242649);
board261242649 = NULL;
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 9, 1, 0) == 0 );
assert( gamma_free_fields(board, 9) == 19 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_golden_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_golden_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 3, 12) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_golden_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 8, 3, 11) == 0 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board189090498 = gamma_board(board);
assert( board189090498 != NULL );
assert( strcmp(board189090498, 
"345173\n"
"93.931\n"
"33.921\n"
"862.97\n"
"5..223\n"
"148.25\n"
"4656.4\n"
"1397..\n"
"133327\n"
"6113.2\n"
"3.9.63\n"
"741.8.\n"
"14196.\n") == 0);
free(board189090498);
board189090498 = NULL;
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_free_fields(board, 8) == 13 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 9, 0, 8) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );


gamma_delete(board);

    return 0;
}
