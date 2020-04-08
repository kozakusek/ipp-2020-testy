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
uuid: 863609605
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 8, 7, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_free_fields(board, 2) == 64 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_free_fields(board, 5) == 64 );
assert( gamma_move(board, 6, 3, 7) == 1 );


char* board379768884 = gamma_board(board);
assert( board379768884 != NULL );
assert( strcmp(board379768884, 
"...6....\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n") == 0);
free(board379768884);
board379768884 = NULL;
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_golden_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_free_fields(board, 7) == 54 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, -1) == 0 );


char* board384413283 = gamma_board(board);
assert( board384413283 != NULL );
assert( strcmp(board384413283, 
"7..6....\n"
"..1.....\n"
"3.......\n"
"....2.2.\n"
"...1.6..\n"
"...7....\n"
"..41...4\n"
".......2\n") == 0);
free(board384413283);
board384413283 = NULL;
assert( gamma_free_fields(board, 7) == 51 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board727260908 = gamma_board(board);
assert( board727260908 != NULL );
assert( strcmp(board727260908, 
"7..6....\n"
"..1.....\n"
"3.......\n"
"....2.2.\n"
"2..146..\n"
"...7....\n"
"1.41...4\n"
".......2\n") == 0);
free(board727260908);
board727260908 = NULL;
assert( gamma_move(board, 7, 2, 4) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );


char* board166369577 = gamma_board(board);
assert( board166369577 != NULL );
assert( strcmp(board166369577, 
"7..6....\n"
"..1.....\n"
"3.......\n"
"..7.2.2.\n"
"2..146..\n"
"...7....\n"
"1.41...4\n"
".......2\n") == 0);
free(board166369577);
board166369577 = NULL;
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_free_fields(board, 3) == 47 );
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_free_fields(board, 6) == 46 );


char* board829654282 = gamma_board(board);
assert( board829654282 != NULL );
assert( strcmp(board829654282, 
"7..6....\n"
"..1...6.\n"
"3.......\n"
"..7.2.2.\n"
"2..146..\n"
"...7....\n"
"1.41...4\n"
".......2\n") == 0);
free(board829654282);
board829654282 = NULL;
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );


char* board796223066 = gamma_board(board);
assert( board796223066 != NULL );
assert( strcmp(board796223066, 
"7..6....\n"
"..1...6.\n"
"3.......\n"
"..7.2.2.\n"
"2..146..\n"
"...7....\n"
"1.41...4\n"
".......2\n") == 0);
free(board796223066);
board796223066 = NULL;
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_golden_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_free_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 7, 7, 1) == 0 );


char* board407713470 = gamma_board(board);
assert( board407713470 != NULL );
assert( strcmp(board407713470, 
"7..6...5\n"
"..1...6.\n"
"3.......\n"
"..7.2.2.\n"
"2.7146..\n"
"...7....\n"
"1.41..64\n"
"1.....32\n") == 0);
free(board407713470);
board407713470 = NULL;


char* board475488853 = gamma_board(board);
assert( board475488853 != NULL );
assert( strcmp(board475488853, 
"7..6...5\n"
"..1...6.\n"
"3.......\n"
"..7.2.2.\n"
"2.7146..\n"
"...7....\n"
"1.41..64\n"
"1.....32\n") == 0);
free(board475488853);
board475488853 = NULL;
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_golden_move(board, 4, 7, 3) == 0 );
assert( gamma_golden_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 7, -1, 8) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 3, 5) == 0 );


gamma_delete(board);

    return 0;
}
