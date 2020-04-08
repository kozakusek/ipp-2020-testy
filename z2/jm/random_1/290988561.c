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
uuid: 290988561
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 15, 3, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 11) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 1, 3, 14) == 1 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 3, 10, 7) == 1 );
assert( gamma_move(board, 1, 1, 10) == 1 );


char* board561576151 = gamma_board(board);
assert( board561576151 != NULL );
assert( strcmp(board561576151, 
"...1........\n"
"............\n"
"............\n"
"........1...\n"
".1..........\n"
"............\n"
"............\n"
"...3......3.\n"
"............\n"
".........23.\n"
".......2....\n"
"............\n"
"............\n"
"............\n"
"..1.........\n") == 0);
free(board561576151);
board561576151 = NULL;
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 0, 14) == 1 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_free_fields(board, 2) == 169 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 1, -1, 14) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_golden_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 10, 4) == 1 );


char* board174869919 = gamma_board(board);
assert( board174869919 != NULL );
assert( strcmp(board174869919, 
"3..1........\n"
"............\n"
"............\n"
"........1...\n"
".1..........\n"
"............\n"
"............\n"
"..23......3.\n"
".........3..\n"
"...1.....23.\n"
".......2..2.\n"
"............\n"
"............\n"
"............\n"
"..1.........\n") == 0);
free(board174869919);
board174869919 = NULL;
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 1, -1, 15) == 0 );


char* board637464563 = gamma_board(board);
assert( board637464563 != NULL );
assert( strcmp(board637464563, 
"3..1........\n"
"............\n"
"............\n"
"........1...\n"
".1..........\n"
"............\n"
"............\n"
"..23......3.\n"
".........3..\n"
"...1.....23.\n"
".......2..2.\n"
"............\n"
"............\n"
"............\n"
"..1.........\n") == 0);
free(board637464563);
board637464563 = NULL;
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 0, 13) == 1 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_golden_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_golden_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board696994517 = gamma_board(board);
assert( board696994517 != NULL );
assert( strcmp(board696994517, 
"3..1........\n"
"2...........\n"
"............\n"
"........1...\n"
".1..........\n"
"............\n"
"............\n"
"..23......3.\n"
".........3..\n"
"...1.....23.\n"
".......2..2.\n"
"............\n"
"............\n"
"............\n"
"..1.........\n") == 0);
free(board696994517);
board696994517 = NULL;
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );


char* board880884655 = gamma_board(board);
assert( board880884655 != NULL );
assert( strcmp(board880884655, 
"3..1........\n"
"2...........\n"
"............\n"
"........1...\n"
".1..........\n"
"............\n"
"............\n"
"..23......3.\n"
".........3..\n"
"...1.....23.\n"
".......2..2.\n"
"............\n"
"............\n"
"............\n"
"..1.........\n") == 0);
free(board880884655);
board880884655 = NULL;
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 5, 15) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 11, 13) == 0 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 12) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 1, 7, 11) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 13) == 0 );


char* board308528429 = gamma_board(board);
assert( board308528429 != NULL );
assert( strcmp(board308528429, 
"3..1........\n"
"2...........\n"
"............\n"
".......11...\n"
".1..........\n"
"............\n"
"............\n"
"..23......3.\n"
".........3..\n"
"...1.....23.\n"
".......2..2.\n"
"............\n"
"............\n"
"............\n"
"..1.........\n") == 0);
free(board308528429);
board308528429 = NULL;
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );


char* board982007571 = gamma_board(board);
assert( board982007571 != NULL );
assert( strcmp(board982007571, 
"3..1........\n"
"2...........\n"
"............\n"
".......11...\n"
".1..........\n"
"............\n"
"............\n"
"..23......3.\n"
".........3..\n"
"...1.....23.\n"
".......2..2.\n"
"............\n"
"............\n"
"............\n"
"..1.........\n") == 0);
free(board982007571);
board982007571 = NULL;
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_move(board, 3, 11, 15) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 1, 12, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_golden_move(board, 2, 5, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, -1, 11) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 1, 13) == 1 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 1, 9, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 8, 15) == 0 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 2, 2, 13) == 1 );
assert( gamma_golden_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 1, -1, 10) == 0 );
assert( gamma_move(board, 2, 5, 15) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 2, 10, 14) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 1, 1, 11) == 1 );


char* board325747453 = gamma_board(board);
assert( board325747453 != NULL );
assert( strcmp(board325747453, 
"3..1........\n"
"222.........\n"
"............\n"
".1.....11...\n"
".1..........\n"
"............\n"
"............\n"
"..23......3.\n"
".........3..\n"
"...1.....23.\n"
"......22..2.\n"
"............\n"
"............\n"
"............\n"
"..1.........\n") == 0);
free(board325747453);
board325747453 = NULL;
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_golden_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 1, 6, 11) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_golden_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_golden_move(board, 2, 9, 4) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_golden_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, -1, 11) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );


char* board593590587 = gamma_board(board);
assert( board593590587 != NULL );
assert( strcmp(board593590587, 
"3..1........\n"
"222.........\n"
"............\n"
".1....111...\n"
".1..........\n"
"............\n"
"............\n"
"..23......3.\n"
".........3..\n"
"...1.....23.\n"
"......22..2.\n"
"............\n"
"............\n"
"............\n"
"..1.........\n") == 0);
free(board593590587);
board593590587 = NULL;
assert( gamma_move(board, 1, -1, 11) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );


char* board539022140 = gamma_board(board);
assert( board539022140 != NULL );
assert( strcmp(board539022140, 
"3..1........\n"
"222.........\n"
"............\n"
".1....111...\n"
".1..........\n"
"............\n"
"............\n"
"..23......3.\n"
".........3..\n"
"...1.....23.\n"
"......22..2.\n"
"............\n"
"............\n"
"............\n"
"..1.........\n") == 0);
free(board539022140);
board539022140 = NULL;


char* board207790343 = gamma_board(board);
assert( board207790343 != NULL );
assert( strcmp(board207790343, 
"3..1........\n"
"222.........\n"
"............\n"
".1....111...\n"
".1..........\n"
"............\n"
"............\n"
"..23......3.\n"
".........3..\n"
"...1.....23.\n"
"......22..2.\n"
"............\n"
"............\n"
"............\n"
"..1.........\n") == 0);
free(board207790343);
board207790343 = NULL;
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_golden_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );


gamma_delete(board);

    return 0;
}
