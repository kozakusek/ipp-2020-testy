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
uuid: 442401636
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 16, 8, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 15) == 0 );
assert( gamma_move(board, 2, 5, 15) == 0 );
assert( gamma_move(board, 3, 2, 11) == 1 );


char* board801439004 = gamma_board(board);
assert( board801439004 != NULL );
assert( strcmp(board801439004, 
".....\n"
".....\n"
".....\n"
".....\n"
"..3..\n"
".....\n"
".....\n"
".....\n"
".....\n"
".....\n"
".....\n"
".....\n"
".....\n"
".....\n"
".....\n"
".....\n") == 0);
free(board801439004);
board801439004 = NULL;
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_move(board, 6, 5, 13) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_golden_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, -1, 13) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board320677971 = gamma_board(board);
assert( board320677971 != NULL );
assert( strcmp(board320677971, 
".....\n"
".....\n"
".....\n"
".....\n"
"..34.\n"
"...6.\n"
".....\n"
".....\n"
"...8.\n"
".5...\n"
".....\n"
".....\n"
".....\n"
"....1\n"
".....\n"
"...4.\n") == 0);
free(board320677971);
board320677971 = NULL;
assert( gamma_move(board, 4, 4, 6) == 1 );


char* board304610588 = gamma_board(board);
assert( board304610588 != NULL );
assert( strcmp(board304610588, 
".....\n"
".....\n"
".....\n"
".....\n"
"..34.\n"
"...6.\n"
".....\n"
".....\n"
"...8.\n"
".5..4\n"
".....\n"
".....\n"
".....\n"
"....1\n"
".....\n"
"...4.\n") == 0);
free(board304610588);
board304610588 = NULL;
assert( gamma_move(board, 6, 0, 10) == 1 );
assert( gamma_move(board, 7, 5, 16) == 0 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_golden_move(board, 8, 6, 1) == 0 );


char* board915697162 = gamma_board(board);
assert( board915697162 != NULL );
assert( strcmp(board915697162, 
".....\n"
".....\n"
".....\n"
".....\n"
"..34.\n"
"6..6.\n"
".....\n"
".....\n"
"...8.\n"
".5..4\n"
".....\n"
".....\n"
".....\n"
"..8.1\n"
".....\n"
"...4.\n") == 0);
free(board915697162);
board915697162 = NULL;
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 2, 12) == 1 );
assert( gamma_move(board, 7, 0, 9) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, -1, 6) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_free_fields(board, 3) == 66 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_free_fields(board, 5) == 65 );


char* board473297260 = gamma_board(board);
assert( board473297260 != NULL );
assert( strcmp(board473297260, 
".....\n"
".....\n"
".....\n"
"..6..\n"
"..34.\n"
"6..6.\n"
"7....\n"
".5...\n"
"...8.\n"
".5.24\n"
".....\n"
".....\n"
".....\n"
"..8.1\n"
".....\n"
".1.4.\n") == 0);
free(board473297260);
board473297260 = NULL;
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 2, 15) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_golden_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 1, 16) == 0 );


char* board823209233 = gamma_board(board);
assert( board823209233 != NULL );
assert( strcmp(board823209233, 
"..7..\n"
".....\n"
".....\n"
"..6.2\n"
"..34.\n"
"6..6.\n"
"7....\n"
".5...\n"
"...8.\n"
".5.24\n"
".....\n"
".....\n"
".1...\n"
"6.8.1\n"
".....\n"
".1.4.\n") == 0);
free(board823209233);
board823209233 = NULL;
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 8, -1, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_golden_move(board, 4, 9, 0) == 0 );
assert( gamma_golden_move(board, 5, 9, 1) == 0 );


char* board347117807 = gamma_board(board);
assert( board347117807 != NULL );
assert( strcmp(board347117807, 
"..7..\n"
".....\n"
".....\n"
"..6.2\n"
"..34.\n"
"6..6.\n"
"75...\n"
".5...\n"
"...8.\n"
".5.24\n"
".....\n"
".....\n"
".1...\n"
"668.1\n"
".....\n"
".1.4.\n") == 0);
free(board347117807);
board347117807 = NULL;
assert( gamma_move(board, 6, 0, 15) == 1 );
assert( gamma_golden_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, -1, 9) == 0 );
assert( gamma_free_fields(board, 1) == 58 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 5, 16) == 0 );
assert( gamma_move(board, 6, 4, 11) == 1 );
assert( gamma_move(board, 7, 1, 13) == 1 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_free_fields(board, 6) == 51 );
assert( gamma_golden_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, 4, 9) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );


char* board310185871 = gamma_board(board);
assert( board310185871 != NULL );
assert( strcmp(board310185871, 
"6.7..\n"
".....\n"
".7...\n"
"..6.2\n"
"..346\n"
"6..6.\n"
"75..7\n"
".5..1\n"
"...8.\n"
".5.24\n"
"..2..\n"
".....\n"
".1.6.\n"
"66861\n"
".8...\n"
".1.44\n") == 0);
free(board310185871);
board310185871 = NULL;
assert( gamma_move(board, 1, 1, 1) == 0 );


char* board954702828 = gamma_board(board);
assert( board954702828 != NULL );
assert( strcmp(board954702828, 
"6.7..\n"
".....\n"
".7...\n"
"..6.2\n"
"..346\n"
"6..6.\n"
"75..7\n"
".5..1\n"
"...8.\n"
".5.24\n"
"..2..\n"
".....\n"
".1.6.\n"
"66861\n"
".8...\n"
".1.44\n") == 0);
free(board954702828);
board954702828 = NULL;
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_move(board, 3, 0, 15) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 1, -1) == 0 );
assert( gamma_move(board, 6, -1, 5) == 0 );


char* board442834829 = gamma_board(board);
assert( board442834829 != NULL );
assert( strcmp(board442834829, 
"6.7..\n"
".....\n"
".7...\n"
"..6.2\n"
"..346\n"
"6..6.\n"
"75..7\n"
".5..1\n"
"...8.\n"
".5424\n"
"..2..\n"
".....\n"
".1.6.\n"
"66861\n"
".8...\n"
".1.44\n") == 0);
free(board442834829);
board442834829 = NULL;
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 1, 0, 16) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_free_fields(board, 5) == 46 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_move(board, 7, 1, 10) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_free_fields(board, 1) == 45 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 5, 1, 16) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 7, 3, 13) == 1 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 4, 16) == 0 );


char* board749020274 = gamma_board(board);
assert( board749020274 != NULL );
assert( strcmp(board749020274, 
"6.7..\n"
".....\n"
".7.7.\n"
"..6.2\n"
"..346\n"
"67.6.\n"
"751.7\n"
".5..1\n"
"...8.\n"
".5424\n"
"..22.\n"
".....\n"
"71.6.\n"
"66861\n"
".8...\n"
".1.44\n") == 0);
free(board749020274);
board749020274 = NULL;
assert( gamma_move(board, 4, -1, 11) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 1, 3, 12) == 1 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 4, 2, 16) == 0 );
assert( gamma_move(board, 5, 0, -1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 16) == 0 );
assert( gamma_move(board, 7, -1, 9) == 0 );
assert( gamma_move(board, 8, 2, 2) == 0 );


char* board214708884 = gamma_board(board);
assert( board214708884 != NULL );
assert( strcmp(board214708884, 
"6.7..\n"
".....\n"
".7.7.\n"
"..612\n"
"..346\n"
"67.6.\n"
"75167\n"
"55..1\n"
"...84\n"
".5424\n"
"..22.\n"
"7.5.3\n"
"71.6.\n"
"66861\n"
".8.3.\n"
".1.44\n") == 0);
free(board214708884);
board214708884 = NULL;
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_golden_move(board, 3, 8, 1) == 0 );


char* board943620247 = gamma_board(board);
assert( board943620247 != NULL );
assert( strcmp(board943620247, 
"6.7..\n"
".....\n"
".7.7.\n"
"..612\n"
"..346\n"
"67.6.\n"
"75167\n"
"55..1\n"
"...84\n"
".5424\n"
"..22.\n"
"7.5.3\n"
"71.6.\n"
"66861\n"
"28.3.\n"
".1.44\n") == 0);
free(board943620247);
board943620247 = NULL;
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_free_fields(board, 8) == 34 );
assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, -1, 8) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_free_fields(board, 7) == 34 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_free_fields(board, 3) == 32 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_golden_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 5, 14) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_free_fields(board, 6) == 32 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_free_fields(board, 7) == 32 );
assert( gamma_golden_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 8, 4, 4) == 0 );
assert( gamma_move(board, 1, 0, 15) == 0 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 0, 15) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 7, 0, 15) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_free_fields(board, 7) == 32 );
assert( gamma_move(board, 8, 0, 1) == 0 );


gamma_delete(board);

    return 0;
}
