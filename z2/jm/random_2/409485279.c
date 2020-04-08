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
uuid: 409485279
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 8, 13, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_move(board, 9, 2, 4) == 1 );
assert( gamma_move(board, 10, 1, 1) == 1 );


char* board931852699 = gamma_board(board);
assert( board931852699 != NULL );
assert( strcmp(board931852699, 
".......\n"
"...6...\n"
"7......\n"
"..9....\n"
".1.....\n"
"4......\n"
".101..5.\n"
".......\n") == 0);
free(board931852699);
board931852699 = NULL;
assert( gamma_move(board, 11, 2, 2) == 1 );
assert( gamma_move(board, 11, 4, 6) == 1 );
assert( gamma_move(board, 13, 2, 5) == 1 );
assert( gamma_move(board, 13, 4, 5) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 9, 2, 1) == 0 );


char* board798631344 = gamma_board(board);
assert( board798631344 != NULL );
assert( strcmp(board798631344, 
".......\n"
"7.16113.\n"
"7.13513..\n"
"..9....\n"
"31.....\n"
"4.116...\n"
"1101..5.\n"
"8......\n") == 0);
free(board798631344);
board798631344 = NULL;
assert( gamma_move(board, 10, 1, 7) == 1 );
assert( gamma_move(board, 10, 6, 7) == 1 );
assert( gamma_golden_move(board, 12, 5, 0) == 0 );
assert( gamma_move(board, 13, 0, 6) == 0 );
assert( gamma_move(board, 13, 0, 7) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );


char* board398677486 = gamma_board(board);
assert( board398677486 != NULL );
assert( strcmp(board398677486, 
"1310....10\n"
"7.16113.\n"
"7.13513..\n"
"..9....\n"
"31.....\n"
"4.116...\n"
"1101..5.\n"
"8......\n") == 0);
free(board398677486);
board398677486 = NULL;
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 9, 6, 0) == 1 );
assert( gamma_move(board, 10, 3, 6) == 0 );
assert( gamma_move(board, 11, 2, 6) == 0 );
assert( gamma_move(board, 12, 7, 4) == 0 );
assert( gamma_move(board, 12, 4, 7) == 1 );
assert( gamma_busy_fields(board, 12) == 1 );
assert( gamma_move(board, 13, 2, 4) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 8, 6, 5) == 1 );
assert( gamma_free_fields(board, 8) == 24 );
assert( gamma_move(board, 9, 1, 6) == 1 );
assert( gamma_move(board, 10, 6, 5) == 0 );
assert( gamma_golden_move(board, 10, 4, 1) == 1 );
assert( gamma_move(board, 11, 3, 6) == 0 );
assert( gamma_move(board, 11, 6, 1) == 1 );
assert( gamma_busy_fields(board, 11) == 3 );
assert( gamma_free_fields(board, 11) == 22 );
assert( gamma_move(board, 12, 6, 7) == 0 );
assert( gamma_busy_fields(board, 12) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 4, 0) == 1 );


char* board287600408 = gamma_board(board);
assert( board287600408 != NULL );
assert( strcmp(board287600408, 
"1310..12.10\n"
"7916113.\n"
"7313513.8\n"
".79.5..\n"
"31.....\n"
"48116.1.\n"
"1101.10511\n"
"8...13.9\n") == 0);
free(board287600408);
board287600408 = NULL;
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_free_fields(board, 1) == 20 );


char* board676149409 = gamma_board(board);
assert( board676149409 != NULL );
assert( strcmp(board676149409, 
"1310..12.10\n"
"7916113.\n"
"7313513.8\n"
".79.5..\n"
"31.1...\n"
"48116.1.\n"
"1101.10511\n"
"8...13.9\n") == 0);
free(board676149409);
board676149409 = NULL;
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );


char* board252770804 = gamma_board(board);
assert( board252770804 != NULL );
assert( strcmp(board252770804, 
"1310..12.10\n"
"7916113.\n"
"7313513.8\n"
"379.5..\n"
"31.12..\n"
"48116.1.\n"
"1101.10511\n"
"8...13.9\n") == 0);
free(board252770804);
board252770804 = NULL;
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_move(board, 10, 5, 2) == 0 );
assert( gamma_move(board, 11, 7, 5) == 0 );
assert( gamma_move(board, 12, 5, 3) == 1 );
assert( gamma_move(board, 12, 2, 7) == 1 );
assert( gamma_move(board, 13, 3, 6) == 0 );
assert( gamma_move(board, 13, 5, 6) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 8, 6, 6) == 1 );
assert( gamma_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_move(board, 10, 5, 0) == 1 );
assert( gamma_move(board, 11, 2, 0) == 1 );
assert( gamma_move(board, 12, 5, 1) == 0 );
assert( gamma_move(board, 13, 3, 6) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 3, 6) == 0 );
assert( gamma_move(board, 11, 3, 1) == 1 );
assert( gamma_move(board, 12, 3, 0) == 1 );
assert( gamma_move(board, 12, 1, 1) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );


char* board299110772 = gamma_board(board);
assert( board299110772 != NULL );
assert( strcmp(board299110772, 
"131012312610\n"
"79161138\n"
"731351348\n"
"379.5.5\n"
"3121212.\n"
"48116.1.\n"
"11011110511\n"
"8.111213109\n") == 0);
free(board299110772);
board299110772 = NULL;
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_move(board, 10, 4, 3) == 0 );
assert( gamma_move(board, 11, 0, 1) == 0 );
assert( gamma_move(board, 11, 3, 7) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 3, 7) == 0 );
assert( gamma_move(board, 12, 5, 4) == 1 );
assert( gamma_move(board, 13, 3, 7) == 0 );
assert( gamma_move(board, 13, 4, 7) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_free_fields(board, 3) == 5 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_golden_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );


char* board495616457 = gamma_board(board);
assert( board495616457 != NULL );
assert( strcmp(board495616457, 
"131012312610\n"
"79161138\n"
"731351348\n"
"379.5125\n"
"3121212.\n"
"48116.1.\n"
"11011110511\n"
"8.111213109\n") == 0);
free(board495616457);
board495616457 = NULL;
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_free_fields(board, 8) == 5 );


gamma_delete(board);

    return 0;
}
