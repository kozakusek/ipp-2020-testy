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
uuid: 313913760
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 9, 11, 18);
assert( board != NULL );


assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );


char* board727513568 = gamma_board(board);
assert( board727513568 != NULL );
assert( strcmp(board727513568, 
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
".......2\n"
"........\n"
"........\n"
"........\n") == 0);
free(board727513568);
board727513568 = NULL;
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board755172461 = gamma_board(board);
assert( board755172461 != NULL );
assert( strcmp(board755172461, 
"...5....\n"
"........\n"
".......4\n"
"........\n"
"........\n"
".......2\n"
"...4....\n"
"........\n"
"........\n") == 0);
free(board755172461);
board755172461 = NULL;
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_move(board, 8, 1, 8) == 1 );
assert( gamma_move(board, 9, 1, 4) == 1 );
assert( gamma_move(board, 9, 7, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 7, 6) == 0 );
assert( gamma_move(board, 11, 7, 5) == 1 );
assert( gamma_move(board, 11, 5, 1) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 9, 1, 7) == 1 );
assert( gamma_move(board, 10, 3, 1) == 1 );
assert( gamma_free_fields(board, 10) == 51 );
assert( gamma_move(board, 11, 3, 5) == 1 );
assert( gamma_move(board, 11, 0, 1) == 0 );
assert( gamma_free_fields(board, 11) == 50 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_free_fields(board, 6) == 47 );
assert( gamma_move(board, 8, 4, 4) == 0 );
assert( gamma_free_fields(board, 8) == 47 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 10, 7, 2) == 1 );
assert( gamma_move(board, 11, 4, 2) == 1 );
assert( gamma_busy_fields(board, 11) == 4 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_free_fields(board, 2) == 42 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 9, 5, 0) == 1 );
assert( gamma_move(board, 10, 5, 2) == 1 );
assert( gamma_move(board, 10, 2, 6) == 0 );
assert( gamma_free_fields(board, 10) == 35 );
assert( gamma_move(board, 11, 2, 2) == 1 );
assert( gamma_free_fields(board, 11) == 34 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );


char* board611607315 = gamma_board(board);
assert( board611607315 != NULL );
assert( strcmp(board611607315, 
".8.5....\n"
"591.....\n"
"8.1.2..4\n"
"85.11.1611\n"
".9..3666\n"
".446..42\n"
".21141110710\n"
"5..10.11..\n"
"..87.9..\n") == 0);
free(board611607315);
board611607315 = NULL;
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 9, 6, 6) == 1 );
assert( gamma_golden_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 10, 3, 4) == 1 );
assert( gamma_move(board, 11, 6, 3) == 0 );
assert( gamma_move(board, 11, 5, 6) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 3, 7) == 1 );


char* board763693552 = gamma_board(board);
assert( board763693552 != NULL );
assert( strcmp(board763693552, 
".8.5....\n"
"5915....\n"
"8.1.21194\n"
"85.1151611\n"
"29.103666\n"
".446..42\n"
".21141110710\n"
"5..10.11..\n"
"..87.9..\n") == 0);
free(board763693552);
board763693552 = NULL;
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 9, 8, 5) == 0 );
assert( gamma_move(board, 9, 6, 3) == 0 );
assert( gamma_move(board, 10, 6, 3) == 0 );
assert( gamma_move(board, 11, 1, 1) == 1 );
assert( gamma_move(board, 11, 6, 0) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_golden_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 10, 6, 1) == 0 );
assert( gamma_move(board, 10, 1, 7) == 0 );
assert( gamma_move(board, 11, 8, 0) == 0 );
assert( gamma_move(board, 11, 4, 3) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 4, 5) == 0 );


char* board315663197 = gamma_board(board);
assert( board315663197 != NULL );
assert( strcmp(board315663197, 
".865....\n"
"5915...1\n"
"8.1.21194\n"
"85.1151611\n"
"29.103666\n"
".4468.42\n"
".21141110710\n"
"511.103116.\n"
"..87.911.\n") == 0);
free(board315663197);
board315663197 = NULL;
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );


char* board614505806 = gamma_board(board);
assert( board614505806 != NULL );
assert( strcmp(board614505806, 
".865....\n"
"5915...1\n"
"8.1.21194\n"
"85.1151611\n"
"29.103666\n"
".4468.42\n"
".21141110710\n"
"511.103116.\n"
"..87.911.\n") == 0);
free(board614505806);
board614505806 = NULL;
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_move(board, 11, 3, 5) == 0 );
assert( gamma_move(board, 11, 1, 4) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_golden_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_move(board, 9, 8, 6) == 0 );
assert( gamma_move(board, 10, 0, 3) == 1 );
assert( gamma_move(board, 11, 3, 4) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_move(board, 10, 6, 7) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 0, 8) == 1 );
assert( gamma_busy_fields(board, 11) == 8 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_golden_move(board, 11, 3, 3) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_free_fields(board, 6) == 11 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );


char* board370497704 = gamma_board(board);
assert( board370497704 != NULL );
assert( strcmp(board370497704, 
"11865.5.2\n"
"5915.8101\n"
"861.21194\n"
"85.1151611\n"
"294103666\n"
"1044118442\n"
".21141110710\n"
"511.103116.\n"
"4.87.94.\n") == 0);
free(board370497704);
board370497704 = NULL;
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_move(board, 9, 8, 6) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_golden_move(board, 9, 8, 0) == 0 );


char* board239785418 = gamma_board(board);
assert( board239785418 != NULL );
assert( strcmp(board239785418, 
"11865.5.2\n"
"5915.8101\n"
"861.21194\n"
"85.1151611\n"
"294103666\n"
"1044118442\n"
".21141110710\n"
"511.103116.\n"
"4.87.94.\n") == 0);
free(board239785418);
board239785418 = NULL;
assert( gamma_move(board, 11, 1, 2) == 0 );
assert( gamma_move(board, 11, 1, 6) == 0 );
assert( gamma_free_fields(board, 11) == 11 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );


char* board416290655 = gamma_board(board);
assert( board416290655 != NULL );
assert( strcmp(board416290655, 
"11865.5.2\n"
"5915.8101\n"
"861.21194\n"
"85.1151611\n"
"294103666\n"
"1044118442\n"
".21141110710\n"
"5112103116.\n"
"4.87.94.\n") == 0);
free(board416290655);
board416290655 = NULL;
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 10, 6, 3) == 0 );
assert( gamma_move(board, 10, 3, 7) == 0 );
assert( gamma_move(board, 11, 0, 7) == 0 );
assert( gamma_move(board, 11, 3, 0) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_golden_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_free_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_move(board, 9, 8, 6) == 0 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 10, 0, 7) == 0 );
assert( gamma_move(board, 10, 5, 1) == 0 );
assert( gamma_move(board, 11, 0, 2) == 0 );
assert( gamma_move(board, 11, 4, 8) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );


gamma_delete(board);

    return 0;
}
