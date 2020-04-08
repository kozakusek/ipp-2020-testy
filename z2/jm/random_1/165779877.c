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
uuid: 165779877
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 9, 4, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_free_fields(board, 2) == 116 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 11, 7) == 1 );
assert( gamma_golden_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, -1, 3) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_golden_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_free_fields(board, 2) == 113 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 1, 10, 5) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 1, 12, -1) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );


char* board116057099 = gamma_board(board);
assert( board116057099 != NULL );
assert( strcmp(board116057099, 
".............\n"
"...........4.\n"
"44..3........\n"
"...11..2..1..\n"
"1....2..4....\n"
".....13......\n"
".3.......4.2.\n"
"13...........\n"
"...........3.\n") == 0);
free(board116057099);
board116057099 = NULL;
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );


char* board567243365 = gamma_board(board);
assert( board567243365 != NULL );
assert( strcmp(board567243365, 
".............\n"
"...........4.\n"
"44..3........\n"
"...11..2..1..\n"
"1....2..4....\n"
".....13......\n"
".3.......4.2.\n"
"13...........\n"
"...........3.\n") == 0);
free(board567243365);
board567243365 = NULL;
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_free_fields(board, 3) == 96 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 8) == 1 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_golden_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 4, 12, 7) == 1 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );


char* board737427385 = gamma_board(board);
assert( board737427385 != NULL );
assert( strcmp(board737427385, 
"...........2.\n"
"..2........44\n"
"44..3.......1\n"
"...11..2..1..\n"
"1....2..4....\n"
".....13......\n"
".321.2...4.2.\n"
"13....3......\n"
"...........3.\n") == 0);
free(board737427385);
board737427385 = NULL;
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 0) == 1 );


char* board981389321 = gamma_board(board);
assert( board981389321 != NULL );
assert( strcmp(board981389321, 
"...........2.\n"
"..2........44\n"
"44..3.......1\n"
"...11..2..1..\n"
"1....2..4....\n"
".....13......\n"
".321.2...4.2.\n"
"13....3......\n"
".........4.34\n") == 0);
free(board981389321);
board981389321 = NULL;
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_golden_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_golden_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_golden_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 4, 1, 1) == 0 );


char* board558938328 = gamma_board(board);
assert( board558938328 != NULL );
assert( strcmp(board558938328, 
"...........2.\n"
"..2........44\n"
"44..3.......1\n"
"...11..2..1..\n"
"1....2..4...4\n"
".....13......\n"
".321.2...4.2.\n"
"13....3......\n"
".........4.34\n") == 0);
free(board558938328);
board558938328 = NULL;
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_golden_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 12, 1) == 1 );
assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_free_fields(board, 3) == 85 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 4, -1) == 0 );
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_golden_move(board, 2, 4, 12) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );


char* board483380772 = gamma_board(board);
assert( board483380772 != NULL );
assert( strcmp(board483380772, 
"...........2.\n"
".42.......444\n"
"44..3.......1\n"
"...11..2..1..\n"
"1....2.24...4\n"
".....13......\n"
".321.2...4.2.\n"
"13....3.....4\n"
".........4.34\n") == 0);
free(board483380772);
board483380772 = NULL;
assert( gamma_move(board, 1, 3, 8) == 0 );


gamma_delete(board);

    return 0;
}
