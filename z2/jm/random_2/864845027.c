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
uuid: 864845027
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 6, 9, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_free_fields(board, 4) == 80 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 12) == 0 );
assert( gamma_free_fields(board, 8) == 77 );
assert( gamma_move(board, 9, 12, 1) == 1 );
assert( gamma_move(board, 9, 12, 4) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_free_fields(board, 2) == 73 );
assert( gamma_move(board, 3, 13, 1) == 1 );
assert( gamma_golden_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 13, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 3) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 7, 11, 0) == 1 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 8, 7, 2) == 1 );
assert( gamma_move(board, 9, 4, 0) == 1 );
assert( gamma_move(board, 9, 11, 5) == 1 );
assert( gamma_free_fields(board, 9) == 62 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 12, 0) == 1 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 8, 12, 5) == 1 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_golden_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 13, 2) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 9, 6, 2) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );


char* board620673206 = gamma_board(board);
assert( board620673206 != NULL );
assert( strcmp(board620673206, 
"753.5......984\n"
"1...3....2..9.\n"
"716.6...1..5..\n"
".6....98.22..4\n"
"..8.25......93\n"
"83.69......74.\n") == 0);
free(board620673206);
board620673206 = NULL;
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 11, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 7, 12, 3) == 1 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 8, 9, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 13, 3) == 1 );


char* board351427936 = gamma_board(board);
assert( board351427936 != NULL );
assert( strcmp(board351427936, 
"75345......984\n"
"1...3....2..9.\n"
"71676...18.572\n"
"16...598.223.4\n"
"..8.25......93\n"
"83.69......74.\n") == 0);
free(board351427936);
board351427936 = NULL;
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 5) == 1 );
assert( gamma_golden_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 12, 5) == 0 );


char* board697829167 = gamma_board(board);
assert( board697829167 != NULL );
assert( strcmp(board697829167, 
"753458.....984\n"
"1...3....2..9.\n"
"71676...18.572\n"
"16..5598.223.4\n"
".48.25......93\n"
"83.69......74.\n") == 0);
free(board697829167);
board697829167 = NULL;
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );


char* board782818228 = gamma_board(board);
assert( board782818228 != NULL );
assert( strcmp(board782818228, 
"753458.....984\n"
"1...3....2..9.\n"
"71676...18.572\n"
"16..5598.223.4\n"
".48.25......93\n"
"83.69......74.\n") == 0);
free(board782818228);
board782818228 = NULL;
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 9, 1, 10) == 0 );
assert( gamma_golden_move(board, 9, 0, 0) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_free_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_golden_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 13, 5) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 8, 4, 11) == 0 );


char* board703476592 = gamma_board(board);
assert( board703476592 != NULL );
assert( strcmp(board703476592, 
"753458.....984\n"
"18..3....2..9.\n"
"71676...18.572\n"
"16..5598.223.4\n"
"748.25......93\n"
"93.69......74.\n") == 0);
free(board703476592);
board703476592 = NULL;
assert( gamma_move(board, 9, 12, 2) == 1 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_free_fields(board, 4) == 34 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_free_fields(board, 6) == 34 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_free_fields(board, 7) == 34 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_golden_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_free_fields(board, 7) == 31 );


char* board455260908 = gamma_board(board);
assert( board455260908 != NULL );
assert( strcmp(board455260908, 
"753458.....984\n"
"18..3....2.29.\n"
"71676...181572\n"
"16..5598422394\n"
"748.25.3....93\n"
"93.69...5..74.\n") == 0);
free(board455260908);
board455260908 = NULL;
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 8, 12, 3) == 0 );
assert( gamma_move(board, 9, 0, 0) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 13, 0) == 1 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_golden_move(board, 6, 2, 4) == 0 );


char* board957732661 = gamma_board(board);
assert( board957732661 != NULL );
assert( strcmp(board957732661, 
"7534586....984\n"
"18..3....2.29.\n"
"71676...181572\n"
"161.5598422394\n"
"748.25.3....93\n"
"93.69...5..743\n") == 0);
free(board957732661);
board957732661 = NULL;
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_move(board, 9, 9, 3) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_golden_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 8, 9, 4) == 0 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 9, 11, 3) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 4, 13) == 0 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_free_fields(board, 7) == 27 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_free_fields(board, 5) == 24 );


char* board209119835 = gamma_board(board);
assert( board209119835 != NULL );
assert( strcmp(board209119835, 
"7534586....984\n"
"18..3..4.2.29.\n"
"7167624.181572\n"
"161.5598422394\n"
"748.25.3....93\n"
"93.69..85..743\n") == 0);
free(board209119835);
board209119835 = NULL;
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 11, 4) == 0 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_move(board, 9, 12, 5) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 8, 11, 5) == 0 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 9, 11, 5) == 0 );


char* board730398040 = gamma_board(board);
assert( board730398040 != NULL );
assert( strcmp(board730398040, 
"7534586..2.984\n"
"184.3..4.2.29.\n"
"7167624.181572\n"
"16175598422394\n"
"748.25.3....93\n"
"93.69..85..743\n") == 0);
free(board730398040);
board730398040 = NULL;
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );


char* board129673149 = gamma_board(board);
assert( board129673149 != NULL );
assert( strcmp(board129673149, 
"7534586..2.984\n"
"184.3..4.2.29.\n"
"7167624.181572\n"
"16175598422394\n"
"748.25.3....93\n"
"93.69..85..743\n") == 0);
free(board129673149);
board129673149 = NULL;
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 9, 5, 8) == 0 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_free_fields(board, 9) == 20 );
assert( gamma_move(board, 1, 13, 5) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 12, 4) == 0 );


gamma_delete(board);

    return 0;
}
