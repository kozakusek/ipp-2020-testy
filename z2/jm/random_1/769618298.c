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
uuid: 769618298
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 7, 7, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_free_fields(board, 6) == 65 );
assert( gamma_move(board, 7, 2, 7) == 0 );


char* board250172150 = gamma_board(board);
assert( board250172150 != NULL );
assert( strcmp(board250172150, 
"..........\n"
"....3.....\n"
"4.5.......\n"
"..........\n"
".1........\n"
"..........\n"
".......6..\n") == 0);
free(board250172150);
board250172150 = NULL;
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_free_fields(board, 1) == 64 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );


char* board388802777 = gamma_board(board);
assert( board388802777 != NULL );
assert( strcmp(board388802777, 
"..........\n"
"....3.....\n"
"4.5.......\n"
"...2......\n"
".1........\n"
"..........\n"
"......16..\n") == 0);
free(board388802777);
board388802777 = NULL;
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 7, 8, 0) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 4, 9, 6) == 1 );


char* board648268111 = gamma_board(board);
assert( board648268111 != NULL );
assert( strcmp(board648268111, 
".5.......4\n"
"....3.....\n"
"4.5......3\n"
"...2..6...\n"
".1.1....6.\n"
"7.....2...\n"
".7..261674\n") == 0);
free(board648268111);
board648268111 = NULL;
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_golden_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_golden_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_golden_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_free_fields(board, 3) == 48 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_free_fields(board, 6) == 10 );
assert( gamma_golden_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );


char* board501329199 = gamma_board(board);
assert( board501329199 != NULL );
assert( strcmp(board501329199, 
".5.......4\n"
".3..1.4...\n"
"4.5......3\n"
"..72..6...\n"
".1.11...6.\n"
"7.2...2...\n"
".7.2561674\n") == 0);
free(board501329199);
board501329199 = NULL;
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_free_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );


char* board795981169 = gamma_board(board);
assert( board795981169 != NULL );
assert( strcmp(board795981169, 
".5..5....4\n"
".3..1.4...\n"
"4.5......3\n"
"..72..6...\n"
".1.11.6.6.\n"
"7.2...2...\n"
".7.2561674\n") == 0);
free(board795981169);
board795981169 = NULL;
assert( gamma_move(board, 7, -1, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );


gamma_delete(board);

    return 0;
}
