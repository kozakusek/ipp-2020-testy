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
uuid: 213109243
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 4, 7, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_golden_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 7, 7, 3) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 1, 0) == 0 );


char* board687629359 = gamma_board(board);
assert( board687629359 != NULL );
assert( strcmp(board687629359, 
"...3...7....\n"
".........5..\n"
".5...162..1.\n"
".64.......1.\n") == 0);
free(board687629359);
board687629359 = NULL;
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 11, 0) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_golden_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_free_fields(board, 7) == 29 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 11, 3) == 1 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_free_fields(board, 6) == 19 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_free_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_free_fields(board, 3) == 15 );


char* board893136105 = gamma_board(board);
assert( board893136105 != NULL );
assert( strcmp(board893136105, 
"57.3.337.4.1\n"
"435.1.2..5.2\n"
"55.34162.11.\n"
"36476..13.14\n") == 0);
free(board893136105);
board893136105 = NULL;
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_golden_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_free_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_free_fields(board, 7) == 9 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_golden_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_free_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_free_fields(board, 7) == 7 );
assert( gamma_move(board, 1, 4, 1) == 0 );


char* board561539985 = gamma_board(board);
assert( board561539985 != NULL );
assert( strcmp(board561539985, 
"5713.337.441\n"
"425.162455.2\n"
"55534162711.\n"
"36476.613.14\n") == 0);
free(board561539985);
board561539985 = NULL;
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board543348533 = gamma_board(board);
assert( board543348533 != NULL );
assert( strcmp(board543348533, 
"5713.337.441\n"
"425.162455.2\n"
"55534162711.\n"
"36476.613.14\n") == 0);
free(board543348533);
board543348533 = NULL;
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_free_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_golden_move(board, 3, 3, 11) == 0 );


char* board620279882 = gamma_board(board);
assert( board620279882 != NULL );
assert( strcmp(board620279882, 
"5713.337.441\n"
"4253162455.2\n"
"55534162711.\n"
"36476.613.14\n") == 0);
free(board620279882);
board620279882 = NULL;
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_free_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 1, 11) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );


char* board165221308 = gamma_board(board);
assert( board165221308 != NULL );
assert( strcmp(board165221308, 
"5713.337.441\n"
"4253162455.2\n"
"55534162711.\n"
"36476.613.14\n") == 0);
free(board165221308);
board165221308 = NULL;
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_golden_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );


char* board280799964 = gamma_board(board);
assert( board280799964 != NULL );
assert( strcmp(board280799964, 
"5713.337.441\n"
"4253162455.2\n"
"55534162711.\n"
"364764613.14\n") == 0);
free(board280799964);
board280799964 = NULL;


gamma_delete(board);

    return 0;
}
