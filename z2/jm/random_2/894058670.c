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
uuid: 894058670
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 4, 8, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_golden_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );


char* board427491478 = gamma_board(board);
assert( board427491478 != NULL );
assert( strcmp(board427491478, 
"...3......\n"
"..........\n"
"......5...\n"
".3......2.\n") == 0);
free(board427491478);
board427491478 = NULL;
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 7, 7, 3) == 1 );
assert( gamma_golden_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 8, 6, 3) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 6, 3, 3) == 0 );


char* board813636148 = gamma_board(board);
assert( board813636148 != NULL );
assert( strcmp(board813636148, 
"...7..87..\n"
".7........\n"
"..81.45...\n"
".321.5..2.\n") == 0);
free(board813636148);
board813636148 = NULL;
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 8, 0, 0) == 1 );


char* board191387724 = gamma_board(board);
assert( board191387724 != NULL );
assert( strcmp(board191387724, 
"...7..87..\n"
".7........\n"
"..81.45...\n"
"8321.5..2.\n") == 0);
free(board191387724);
board191387724 = NULL;
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_free_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board184937380 = gamma_board(board);
assert( board184937380 != NULL );
assert( strcmp(board184937380, 
"..37..87..\n"
".7........\n"
"..81.45...\n"
"8321.5..2.\n") == 0);
free(board184937380);
board184937380 = NULL;
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_move(board, 8, 4, 2) == 1 );


char* board366930771 = gamma_board(board);
assert( board366930771 != NULL );
assert( strcmp(board366930771, 
"..37..87..\n"
".7..8.....\n"
"..81.45...\n"
"8321.5..2.\n") == 0);
free(board366930771);
board366930771 = NULL;
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );


char* board818562436 = gamma_board(board);
assert( board818562436 != NULL );
assert( strcmp(board818562436, 
"..373.873.\n"
"175.8.13..\n"
".88154575.\n"
"8321.52.2.\n") == 0);
free(board818562436);
board818562436 = NULL;
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_golden_move(board, 6, 3, 4) == 0 );


char* board675449323 = gamma_board(board);
assert( board675449323 != NULL );
assert( strcmp(board675449323, 
"..373.873.\n"
"175.8.13..\n"
".88154575.\n"
"8321.52.2.\n") == 0);
free(board675449323);
board675449323 = NULL;
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_free_fields(board, 7) == 13 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );


char* board996517106 = gamma_board(board);
assert( board996517106 != NULL );
assert( strcmp(board996517106, 
"..373.873.\n"
"175.8.13..\n"
".88154575.\n"
"8321.52.2.\n") == 0);
free(board996517106);
board996517106 = NULL;
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_golden_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_free_fields(board, 6) == 10 );


char* board292387379 = gamma_board(board);
assert( board292387379 != NULL );
assert( strcmp(board292387379, 
"..373.8735\n"
"17548.13..\n"
".881545753\n"
"8321.52.2.\n") == 0);
free(board292387379);
board292387379 = NULL;
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );


gamma_delete(board);

    return 0;
}
