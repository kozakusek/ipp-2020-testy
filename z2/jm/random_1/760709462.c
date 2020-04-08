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
uuid: 760709462
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 7, 11, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 5) == 1 );
assert( gamma_move(board, 6, 12, 0) == 1 );
assert( gamma_golden_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 9, 0, 1) == 1 );
assert( gamma_move(board, 10, 0, 5) == 1 );
assert( gamma_free_fields(board, 10) == 87 );
assert( gamma_golden_move(board, 10, 5, 10) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 11, -1) == 0 );
assert( gamma_free_fields(board, 3) == 86 );
assert( gamma_free_fields(board, 4) == 86 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_free_fields(board, 5) == 85 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_free_fields(board, 6) == 85 );
assert( gamma_golden_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 10, 11, -1) == 0 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_move(board, 11, 3, 1) == 1 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 3, 10, 1) == 1 );
assert( gamma_move(board, 4, 12, 5) == 1 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_free_fields(board, 6) == 81 );
assert( gamma_move(board, 7, 9, 1) == 1 );
assert( gamma_golden_move(board, 7, 6, 10) == 0 );
assert( gamma_free_fields(board, 8) == 80 );
assert( gamma_move(board, 9, 13, 6) == 0 );
assert( gamma_move(board, 10, 1, -1) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_free_fields(board, 4) == 77 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, -1, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 13, 0) == 0 );
assert( gamma_move(board, 11, 7, 0) == 0 );
assert( gamma_golden_move(board, 11, 5, 12) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_golden_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 5, 11, -1) == 0 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 9, 4, 4) == 1 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_golden_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_free_fields(board, 4) == 71 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 7, 8, 2) == 1 );
assert( gamma_move(board, 8, 9, 0) == 1 );
assert( gamma_move(board, 9, 3, 5) == 1 );
assert( gamma_move(board, 11, 4, 3) == 1 );
assert( gamma_busy_fields(board, 11) == 2 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 11, 5) == 1 );
assert( gamma_free_fields(board, 2) == 64 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );


char* board670428645 = gamma_board(board);
assert( board670428645 != NULL );
assert( strcmp(board670428645, 
"23........5..\n"
"10..9......124\n"
".16.9.4......\n"
"..1.11..3.2.2.\n"
"1....1..7....\n"
"9..115....73..\n"
"....5..6.8..6\n") == 0);
free(board670428645);
board670428645 = NULL;
assert( gamma_move(board, 6, 8, -1) == 0 );
assert( gamma_move(board, 7, 13, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_free_fields(board, 7) == 62 );
assert( gamma_free_fields(board, 8) == 62 );
assert( gamma_move(board, 9, 1, 1) == 1 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_free_fields(board, 9) == 61 );
assert( gamma_move(board, 10, 6, 6) == 1 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_free_fields(board, 10) == 60 );
assert( gamma_busy_fields(board, 11) == 2 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 6, 1, 7) == 0 );


char* board286736497 = gamma_board(board);
assert( board286736497 != NULL );
assert( strcmp(board286736497, 
"23....10...5..\n"
"10..9......124\n"
".16.9.4......\n"
"..1.115.3.2.2.\n"
"1....1..7....\n"
"99.115....73..\n"
"....5..6.8..6\n") == 0);
free(board286736497);
board286736497 = NULL;
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 9, 0, 0) == 1 );


char* board939056453 = gamma_board(board);
assert( board939056453 != NULL );
assert( strcmp(board939056453, 
"23....10...5..\n"
"107.9......124\n"
".16.9.4......\n"
"..1.115.3.2.2.\n"
"1....1..7....\n"
"99.115....73..\n"
"9...5..6.8..6\n") == 0);
free(board939056453);
board939056453 = NULL;
assert( gamma_move(board, 10, 13, 4) == 0 );
assert( gamma_move(board, 11, 7, 3) == 0 );
assert( gamma_move(board, 1, 13, 5) == 0 );


char* board286987717 = gamma_board(board);
assert( board286987717 != NULL );
assert( strcmp(board286987717, 
"23....10...5..\n"
"107.9......124\n"
".16.9.4......\n"
"..1.115.3.2.2.\n"
"1....1..7....\n"
"99.115....73..\n"
"9...5..6.8..6\n") == 0);
free(board286987717);
board286987717 = NULL;
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 4) == 1 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );


char* board835846035 = gamma_board(board);
assert( board835846035 != NULL );
assert( strcmp(board835846035, 
"23....10...5..\n"
"107.9......124\n"
".16.944.....5\n"
"..1.115.3.2.2.\n"
"1....1..7....\n"
"99.115....73..\n"
"9...5..6.8..6\n") == 0);
free(board835846035);
board835846035 = NULL;
assert( gamma_move(board, 7, 9, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_move(board, 9, 9, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_free_fields(board, 9) == 54 );


char* board812540144 = gamma_board(board);
assert( board812540144 != NULL );
assert( strcmp(board812540144, 
"23....10..75..\n"
"107.9......124\n"
".16.944.....5\n"
"..1.115.3.2.2.\n"
"1....1..7....\n"
"99.115....73..\n"
"9...5..6.8..6\n") == 0);
free(board812540144);
board812540144 = NULL;
assert( gamma_free_fields(board, 10) == 54 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_free_fields(board, 4) == 52 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_golden_move(board, 10, 4, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_free_fields(board, 8) == 49 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_free_fields(board, 10) == 49 );
assert( gamma_move(board, 11, 3, -1) == 0 );


char* board353718317 = gamma_board(board);
assert( board353718317 != NULL );
assert( strcmp(board353718317, 
"23.510.107.75..\n"
"10749......124\n"
".16.944.....5\n"
"..13115.3.2.2.\n"
"1....1..7....\n"
"99.115....73..\n"
"9...5..6.8..6\n") == 0);
free(board353718317);
board353718317 = NULL;
assert( gamma_move(board, 2, 12, 4) == 0 );


char* board699729058 = gamma_board(board);
assert( board699729058 != NULL );
assert( strcmp(board699729058, 
"23.510.107.75..\n"
"10749......124\n"
".16.944.....5\n"
"..13115.3.2.2.\n"
"1....1..7....\n"
"99.115....73..\n"
"9...5..6.8..6\n") == 0);
free(board699729058);
board699729058 = NULL;
assert( gamma_move(board, 3, 11, 1) == 1 );


char* board549047882 = gamma_board(board);
assert( board549047882 != NULL );
assert( strcmp(board549047882, 
"23.510.107.75..\n"
"10749......124\n"
".16.944.....5\n"
"..13115.3.2.2.\n"
"1....1..7....\n"
"99.115....733.\n"
"9...5..6.8..6\n") == 0);
free(board549047882);
board549047882 = NULL;
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 9, 6, -1) == 0 );
assert( gamma_move(board, 10, 8, 6) == 1 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 11, -1, 2) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, -1, 5) == 0 );
assert( gamma_move(board, 8, 13, 4) == 0 );


char* board174198421 = gamma_board(board);
assert( board174198421 != NULL );
assert( strcmp(board174198421, 
"23.510.1071075..\n"
"10749.6....124\n"
".16.944.....5\n"
"..13115.332.2.\n"
"1....1..7....\n"
"99.115....733.\n"
"9...5..6.8..6\n") == 0);
free(board174198421);
board174198421 = NULL;
assert( gamma_move(board, 11, 13, 5) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_free_fields(board, 6) == 44 );
assert( gamma_move(board, 7, -1, 0) == 0 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_free_fields(board, 9) == 43 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 8, 4) == 1 );
assert( gamma_move(board, 11, 6, 3) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, -1) == 0 );
assert( gamma_move(board, 7, 12, 3) == 1 );
assert( gamma_move(board, 9, 11, 5) == 0 );
assert( gamma_free_fields(board, 9) == 39 );
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 11, 1, 1) == 0 );
assert( gamma_free_fields(board, 11) == 39 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_free_fields(board, 1) == 38 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, -1) == 0 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 10, 11, 7) == 0 );
assert( gamma_move(board, 11, 3, 4) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_free_fields(board, 3) == 35 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 12, 1) == 1 );


gamma_delete(board);

    return 0;
}
