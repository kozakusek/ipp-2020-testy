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
uuid: 593190547
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 7, 4, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_free_fields(board, 1) == 62 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_free_fields(board, 1) == 60 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_free_fields(board, 1) == 58 );
assert( gamma_busy_fields(board, 2) == 1 );


char* board497523613 = gamma_board(board);
assert( board497523613 != NULL );
assert( strcmp(board497523613, 
"..1......\n"
"......1..\n"
"........4\n"
".......2.\n"
"......1..\n"
".........\n"
".........\n") == 0);
free(board497523613);
board497523613 = NULL;
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board106073603 = gamma_board(board);
assert( board106073603 != NULL );
assert( strcmp(board106073603, 
"..1......\n"
"......1..\n"
"........4\n"
".......2.\n"
"....4.1..\n"
".........\n"
"....2....\n") == 0);
free(board106073603);
board106073603 = NULL;
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board369526279 = gamma_board(board);
assert( board369526279 != NULL );
assert( strcmp(board369526279, 
"3.1......\n"
"......1..\n"
"........4\n"
".......2.\n"
"....4.1..\n"
".........\n"
"....2....\n") == 0);
free(board369526279);
board369526279 = NULL;
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );


char* board817907855 = gamma_board(board);
assert( board817907855 != NULL );
assert( strcmp(board817907855, 
"3.1...1..\n"
"....2.1..\n"
"........4\n"
"4......2.\n"
"3...4.1..\n"
"....1....\n"
"....2....\n") == 0);
free(board817907855);
board817907855 = NULL;
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_free_fields(board, 3) == 47 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );


gamma_delete(board);

    return 0;
}
