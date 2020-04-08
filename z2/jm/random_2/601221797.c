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
uuid: 601221797
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 4, 15, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 0, 8) == 0 );


char* board807839112 = gamma_board(board);
assert( board807839112 != NULL );
assert( strcmp(board807839112, 
".........\n"
"...2.....\n"
"......1..\n"
"...2.....\n") == 0);
free(board807839112);
board807839112 = NULL;
assert( gamma_move(board, 4, 3, 0) == 0 );


char* board800848102 = gamma_board(board);
assert( board800848102 != NULL );
assert( strcmp(board800848102, 
".........\n"
"...2.....\n"
"......1..\n"
"...2.....\n") == 0);
free(board800848102);
board800848102 = NULL;
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 7, 8, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 7) == 0 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 6, 3) == 1 );
assert( gamma_move(board, 9, 6, 2) == 1 );
assert( gamma_move(board, 10, 1, 7) == 0 );
assert( gamma_busy_fields(board, 10) == 0 );
assert( gamma_move(board, 11, 0, 5) == 0 );
assert( gamma_move(board, 11, 4, 0) == 1 );
assert( gamma_free_fields(board, 11) == 24 );
assert( gamma_move(board, 12, 1, 0) == 0 );
assert( gamma_move(board, 13, 1, 2) == 1 );


char* board301275686 = gamma_board(board);
assert( board301275686 != NULL );
assert( strcmp(board301275686, 
"..5.6.9..\n"
".13.2..9.7\n"
"...8..1.5\n"
".6.211....\n") == 0);
free(board301275686);
board301275686 = NULL;
assert( gamma_move(board, 14, 1, 3) == 1 );
assert( gamma_move(board, 15, 3, 0) == 0 );
assert( gamma_move(board, 15, 0, 1) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_free_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 8, 5, 2) == 1 );
assert( gamma_move(board, 9, 2, 4) == 0 );
assert( gamma_move(board, 10, 6, 3) == 0 );
assert( gamma_move(board, 10, 2, 2) == 1 );
assert( gamma_move(board, 11, 0, 7) == 0 );
assert( gamma_move(board, 11, 4, 0) == 0 );
assert( gamma_golden_move(board, 11, 2, 3) == 1 );
assert( gamma_move(board, 12, 2, 2) == 0 );


char* board271931541 = gamma_board(board);
assert( board271931541 != NULL );
assert( strcmp(board271931541, 
".1411.6.9..\n"
"613102.89.7\n"
"15..8.41.5\n"
"36.211....\n") == 0);
free(board271931541);
board271931541 = NULL;
assert( gamma_move(board, 13, 0, 2) == 0 );
assert( gamma_move(board, 13, 4, 0) == 0 );
assert( gamma_free_fields(board, 13) == 16 );
assert( gamma_move(board, 14, 0, 8) == 0 );
assert( gamma_move(board, 15, 1, 4) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 1) == 1 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_free_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 10, 1, 1) == 0 );
assert( gamma_move(board, 11, 3, 3) == 1 );
assert( gamma_move(board, 11, 2, 2) == 0 );
assert( gamma_move(board, 12, 0, 6) == 0 );
assert( gamma_move(board, 12, 8, 2) == 0 );
assert( gamma_move(board, 13, 2, 4) == 0 );
assert( gamma_busy_fields(board, 13) == 1 );
assert( gamma_move(board, 14, 8, 0) == 1 );
assert( gamma_move(board, 15, 5, 0) == 0 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 7, 2) == 1 );


char* board992519991 = gamma_board(board);
assert( board992519991 != NULL );
assert( strcmp(board992519991, 
"71411116.93.\n"
"613102.8987\n"
"158.8.4175\n"
"36.2118..14\n") == 0);
free(board992519991);
board992519991 = NULL;
assert( gamma_move(board, 9, 2, 1) == 1 );
assert( gamma_move(board, 9, 2, 1) == 0 );


char* board847618307 = gamma_board(board);
assert( board847618307 != NULL );
assert( strcmp(board847618307, 
"71411116.93.\n"
"613102.8987\n"
"15898.4175\n"
"36.2118..14\n") == 0);
free(board847618307);
board847618307 = NULL;
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_move(board, 10, 2, 2) == 0 );
assert( gamma_golden_move(board, 10, 1, 8) == 0 );
assert( gamma_move(board, 11, 0, 2) == 0 );
assert( gamma_move(board, 12, 5, 1) == 0 );
assert( gamma_move(board, 12, 6, 2) == 0 );
assert( gamma_move(board, 13, 2, 4) == 0 );
assert( gamma_move(board, 13, 4, 3) == 0 );
assert( gamma_free_fields(board, 13) == 7 );


char* board536355434 = gamma_board(board);
assert( board536355434 != NULL );
assert( strcmp(board536355434, 
"71411116.93.\n"
"613102.8987\n"
"15898.4175\n"
"36.2118..14\n") == 0);
free(board536355434);
board536355434 = NULL;
assert( gamma_move(board, 14, 0, 7) == 0 );
assert( gamma_move(board, 14, 2, 0) == 1 );
assert( gamma_move(board, 15, 3, 5) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 2, 4) == 0 );
assert( gamma_move(board, 11, 5, 3) == 1 );
assert( gamma_move(board, 12, 3, 8) == 0 );
assert( gamma_move(board, 12, 7, 2) == 0 );


gamma_delete(board);

    return 0;
}
