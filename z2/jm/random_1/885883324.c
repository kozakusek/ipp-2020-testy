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
uuid: 885883324
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 10, 6, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_golden_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 6, -1, 6) == 0 );
assert( gamma_golden_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_free_fields(board, 4) == 56 );


char* board292345142 = gamma_board(board);
assert( board292345142 != NULL );
assert( strcmp(board292345142, 
"..1...\n"
"...1..\n"
"3.....\n"
"......\n"
"......\n"
"......\n"
"......\n"
"...4..\n"
"......\n"
"......\n") == 0);
free(board292345142);
board292345142 = NULL;
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_free_fields(board, 6) == 55 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board292279955 = gamma_board(board);
assert( board292279955 != NULL );
assert( strcmp(board292279955, 
"..1.6.\n"
"...1..\n"
"3.....\n"
"......\n"
"......\n"
"......\n"
"......\n"
"...4..\n"
"......\n"
"......\n") == 0);
free(board292279955);
board292279955 = NULL;
assert( gamma_golden_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board177346260 = gamma_board(board);
assert( board177346260 != NULL );
assert( strcmp(board177346260, 
"..1.6.\n"
"...1..\n"
"3.....\n"
"......\n"
"......\n"
"..25..\n"
".3....\n"
"...4..\n"
"......\n"
"......\n") == 0);
free(board177346260);
board177346260 = NULL;
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );


char* board868670330 = gamma_board(board);
assert( board868670330 != NULL );
assert( strcmp(board868670330, 
"..1.6.\n"
"...1..\n"
"3.....\n"
"......\n"
"......\n"
"..25..\n"
".3....\n"
"..34..\n"
"......\n"
"......\n") == 0);
free(board868670330);
board868670330 = NULL;
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_golden_move(board, 6, 6, 4) == 0 );
assert( gamma_golden_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_free_fields(board, 6) == 46 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_golden_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_free_fields(board, 4) == 40 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_move(board, 6, -1, 4) == 0 );


gamma_delete(board);

    return 0;
}
