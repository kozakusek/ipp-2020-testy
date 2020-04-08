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
uuid: 301897002
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 11, 4, 8);
assert( board != NULL );


assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_free_fields(board, 2) == 140 );
assert( gamma_move(board, 3, 0, 6) == 1 );


char* board820617649 = gamma_board(board);
assert( board820617649 != NULL );
assert( strcmp(board820617649, 
".............\n"
".............\n"
".............\n"
".............\n"
"3.......1....\n"
".............\n"
".....2.......\n"
".............\n"
".2...........\n"
".............\n"
".............\n") == 0);
free(board820617649);
board820617649 = NULL;
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 12, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 12, 7) == 1 );
assert( gamma_golden_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 3, 11, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_free_fields(board, 4) == 132 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 11, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_free_fields(board, 3) == 130 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 8) == 1 );


char* board791926699 = gamma_board(board);
assert( board791926699 != NULL );
assert( strcmp(board791926699, 
".............\n"
"....3.......3\n"
"...3......43.\n"
".1..4.......1\n"
"3.......1....\n"
".............\n"
"3...22...4...\n"
".....3..1.2..\n"
".2....2......\n"
"4.......1....\n"
"......1......\n") == 0);
free(board791926699);
board791926699 = NULL;
assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 1, 10, -1) == 0 );
assert( gamma_move(board, 2, 11, 0) == 1 );


char* board948018200 = gamma_board(board);
assert( board948018200 != NULL );
assert( strcmp(board948018200, 
".............\n"
"..2.3.......3\n"
"...3......43.\n"
".1..4.......1\n"
"3.......1....\n"
".4..3........\n"
"3...22...41..\n"
".....3..1.2..\n"
".2....2......\n"
"4.......1....\n"
"......1....2.\n") == 0);
free(board948018200);
board948018200 = NULL;
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_golden_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_golden_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_free_fields(board, 4) == 113 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_golden_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_free_fields(board, 4) == 113 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_free_fields(board, 2) == 111 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_move(board, 1, -1, 11) == 0 );
assert( gamma_move(board, 2, -1, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_free_fields(board, 4) == 110 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 3, 11, 9) == 1 );


char* board539806595 = gamma_board(board);
assert( board539806595 != NULL );
assert( strcmp(board539806595, 
"44...........\n"
"..2.3......33\n"
"...3......43.\n"
".1..4.......1\n"
"3...4...1....\n"
"44..3........\n"
"3...22..141..\n"
".....3..1.2..\n"
"42....2......\n"
"4.......1....\n"
"......1....2.\n") == 0);
free(board539806595);
board539806595 = NULL;
assert( gamma_move(board, 4, -1, 10) == 0 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board448703939 = gamma_board(board);
assert( board448703939 != NULL );
assert( strcmp(board448703939, 
"44...........\n"
"..2.3......33\n"
"...3......43.\n"
".1..4.......1\n"
"3...4...1....\n"
"44..3........\n"
"3...22..141..\n"
".....3..1.2..\n"
"42....2......\n"
"4.......1....\n"
"......1....2.\n") == 0);
free(board448703939);
board448703939 = NULL;
assert( gamma_move(board, 2, 12, 8) == 1 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 0) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_golden_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_golden_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_golden_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 12, -1) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );


char* board425789661 = gamma_board(board);
assert( board425789661 != NULL );
assert( strcmp(board425789661, 
"44...........\n"
"..2.3......33\n"
"...3.4....432\n"
".1..4.......1\n"
"3...4...1....\n"
"44..3........\n"
"3...22..141..\n"
".....3..1.2..\n"
"42....21.....\n"
"4.......1....\n"
"..4.2.1...32.\n") == 0);
free(board425789661);
board425789661 = NULL;
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_free_fields(board, 4) == 24 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, -1) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_free_fields(board, 4) == 25 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_golden_move(board, 2, 7, 12) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 10, -1) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );


char* board528989121 = gamma_board(board);
assert( board528989121 != NULL );
assert( strcmp(board528989121, 
"44...........\n"
"..2.3......33\n"
"...3.4....432\n"
".1..4.......1\n"
"3...4...1....\n"
"44..3........\n"
"34..22..141..\n"
".....3..1.2..\n"
"42....21.....\n"
"4.......1....\n"
"..4.2.1...32.\n") == 0);
free(board528989121);
board528989121 = NULL;
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 9, -1) == 0 );


gamma_delete(board);

    return 0;
}
