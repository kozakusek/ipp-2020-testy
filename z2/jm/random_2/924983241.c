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
uuid: 924983241
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 7, 15, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_free_fields(board, 2) == 60 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 9, 5, 4) == 1 );
assert( gamma_move(board, 9, 6, 0) == 1 );
assert( gamma_move(board, 10, 8, 3) == 0 );
assert( gamma_move(board, 10, 8, 1) == 0 );
assert( gamma_move(board, 11, 1, 1) == 1 );
assert( gamma_move(board, 11, 3, 2) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 6, 5) == 1 );
assert( gamma_move(board, 13, 3, 5) == 1 );
assert( gamma_free_fields(board, 13) == 49 );
assert( gamma_move(board, 14, 5, 5) == 1 );
assert( gamma_move(board, 14, 7, 5) == 1 );
assert( gamma_free_fields(board, 14) == 47 );
assert( gamma_move(board, 15, 1, 3) == 1 );


char* board384355533 = gamma_board(board);
assert( board384355533 != NULL );
assert( strcmp(board384355533, 
".........\n"
"..613.141214.\n"
"..1..9...\n"
".153.....2\n"
"4.32.....\n"
".11......4\n"
"5.....9..\n") == 0);
free(board384355533);
board384355533 = NULL;
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_free_fields(board, 7) == 41 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_move(board, 10, 4, 6) == 0 );
assert( gamma_move(board, 10, 3, 6) == 1 );
assert( gamma_move(board, 11, 4, 3) == 1 );
assert( gamma_move(board, 11, 5, 2) == 1 );
assert( gamma_move(board, 12, 4, 1) == 1 );
assert( gamma_busy_fields(board, 12) == 2 );
assert( gamma_move(board, 13, 4, 1) == 0 );
assert( gamma_move(board, 14, 6, 2) == 1 );
assert( gamma_move(board, 15, 1, 0) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );


char* board206295501 = gamma_board(board);
assert( board206295501 != NULL );
assert( strcmp(board206295501, 
".5.104....\n"
"..613.141214.\n"
"..1.39...\n"
".153.11...2\n"
"4.32.1114..\n"
".112.123..4\n"
"58....9..\n") == 0);
free(board206295501);
board206295501 = NULL;
assert( gamma_move(board, 7, 6, 6) == 1 );
assert( gamma_move(board, 7, 7, 6) == 1 );


char* board364960982 = gamma_board(board);
assert( board364960982 != NULL );
assert( strcmp(board364960982, 
".5.104.77.\n"
"..613.141214.\n"
"..1.39...\n"
".153.11...2\n"
"4.32.1114..\n"
".112.123..4\n"
"58....9..\n") == 0);
free(board364960982);
board364960982 = NULL;
assert( gamma_move(board, 9, 5, 3) == 1 );
assert( gamma_move(board, 10, 0, 6) == 1 );
assert( gamma_move(board, 10, 0, 1) == 1 );
assert( gamma_move(board, 11, 1, 3) == 0 );
assert( gamma_move(board, 11, 3, 0) == 1 );
assert( gamma_free_fields(board, 11) == 29 );
assert( gamma_move(board, 12, 4, 1) == 0 );
assert( gamma_move(board, 12, 2, 2) == 0 );
assert( gamma_busy_fields(board, 12) == 2 );
assert( gamma_move(board, 13, 0, 2) == 0 );
assert( gamma_move(board, 14, 5, 0) == 1 );
assert( gamma_move(board, 14, 6, 6) == 0 );
assert( gamma_free_fields(board, 14) == 28 );
assert( gamma_move(board, 15, 2, 1) == 0 );
assert( gamma_move(board, 15, 1, 4) == 1 );
assert( gamma_golden_move(board, 15, 0, 1) == 1 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );


char* board614276926 = gamma_board(board);
assert( board614276926 != NULL );
assert( strcmp(board614276926, 
"105.104.77.\n"
"..613.141214.\n"
".151.39.5.\n"
".153.119.22\n"
"4.32.1114..\n"
"15112.123..4\n"
"58.11.149..\n") == 0);
free(board614276926);
board614276926 = NULL;
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_free_fields(board, 9) == 25 );
assert( gamma_move(board, 10, 8, 2) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 0, 7) == 0 );
assert( gamma_move(board, 11, 1, 6) == 0 );
assert( gamma_move(board, 12, 5, 4) == 0 );
assert( gamma_move(board, 13, 4, 3) == 0 );
assert( gamma_move(board, 13, 8, 6) == 1 );
assert( gamma_busy_fields(board, 13) == 2 );
assert( gamma_move(board, 14, 4, 3) == 0 );
assert( gamma_move(board, 14, 4, 2) == 1 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 4, 8) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 10, 4, 6) == 0 );
assert( gamma_golden_move(board, 10, 5, 2) == 1 );
assert( gamma_move(board, 11, 5, 3) == 0 );
assert( gamma_move(board, 11, 2, 2) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 0, 4) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 14, 4, 8) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );


char* board277372039 = gamma_board(board);
assert( board277372039 != NULL );
assert( strcmp(board277372039, 
"105.104.7713\n"
"..613.141214.\n"
"12151.39.5.\n"
"1153.119.22\n"
"4.32141014.10\n"
"15112.123..4\n"
"58.11.149..\n") == 0);
free(board277372039);
board277372039 = NULL;
assert( gamma_move(board, 15, 5, 1) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_golden_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_golden_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_move(board, 11, 1, 7) == 0 );
assert( gamma_free_fields(board, 12) == 19 );
assert( gamma_move(board, 13, 0, 5) == 1 );
assert( gamma_free_fields(board, 13) == 18 );
assert( gamma_golden_move(board, 13, 4, 7) == 0 );
assert( gamma_move(board, 14, 4, 2) == 0 );
assert( gamma_free_fields(board, 14) == 18 );


char* board303315064 = gamma_board(board);
assert( board303315064 != NULL );
assert( strcmp(board303315064, 
"105.104.7713\n"
"13.613.141214.\n"
"12151.39.5.\n"
"183.119.22\n"
"4.32141014.10\n"
"15112.123..4\n"
"58611.149..\n") == 0);
free(board303315064);
board303315064 = NULL;
assert( gamma_move(board, 15, 5, 4) == 0 );
assert( gamma_move(board, 15, 1, 5) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_free_fields(board, 2) == 17 );


char* board204140515 = gamma_board(board);
assert( board204140515 != NULL );
assert( strcmp(board204140515, 
"105.104.7713\n"
"1315613.141214.\n"
"12151.39.5.\n"
"183.119.22\n"
"4.32141014.10\n"
"15112.123..4\n"
"58611.149..\n") == 0);
free(board204140515);
board204140515 = NULL;
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board270093691 = gamma_board(board);
assert( board270093691 != NULL );
assert( strcmp(board270093691, 
"105.104.7713\n"
"1315613.141214.\n"
"12151.3955.\n"
"183.119.22\n"
"4.32141014.10\n"
"15112.123..4\n"
"58611.149..\n") == 0);
free(board270093691);
board270093691 = NULL;
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_move(board, 10, 3, 3) == 1 );
assert( gamma_move(board, 10, 6, 5) == 0 );
assert( gamma_free_fields(board, 10) == 15 );


char* board632851634 = gamma_board(board);
assert( board632851634 != NULL );
assert( strcmp(board632851634, 
"105.104.7713\n"
"1315613.141214.\n"
"12151.3955.\n"
"18310119.22\n"
"4.32141014.10\n"
"15112.123..4\n"
"58611.149..\n") == 0);
free(board632851634);
board632851634 = NULL;
assert( gamma_move(board, 12, 5, 4) == 0 );
assert( gamma_move(board, 13, 6, 5) == 0 );
assert( gamma_move(board, 13, 0, 2) == 0 );
assert( gamma_move(board, 15, 4, 3) == 0 );
assert( gamma_move(board, 15, 4, 4) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_free_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 9, 6, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_move(board, 11, 6, 2) == 0 );
assert( gamma_move(board, 11, 3, 0) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 6, 4) == 0 );
assert( gamma_free_fields(board, 12) == 14 );
assert( gamma_move(board, 13, 3, 6) == 0 );
assert( gamma_free_fields(board, 13) == 14 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 1, 1) == 0 );
assert( gamma_golden_move(board, 14, 4, 1) == 1 );
assert( gamma_move(board, 15, 0, 7) == 0 );
assert( gamma_move(board, 15, 3, 0) == 0 );
assert( gamma_busy_fields(board, 15) == 3 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );


gamma_delete(board);

    return 0;
}
