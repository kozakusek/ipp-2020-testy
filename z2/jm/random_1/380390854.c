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
uuid: 380390854
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 10, 7, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_free_fields(board, 2) == 88 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_free_fields(board, 4) == 87 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_free_fields(board, 4) == 83 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_free_fields(board, 7) == 83 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board971126508 = gamma_board(board);
assert( board971126508 != NULL );
assert( strcmp(board971126508, 
".........\n"
".......2.\n"
".........\n"
".........\n"
"...27....\n"
".........\n"
"....5....\n"
"..3.3....\n"
".........\n"
".....1...\n") == 0);
free(board971126508);
board971126508 = NULL;
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );


char* board640276412 = gamma_board(board);
assert( board640276412 != NULL );
assert( strcmp(board640276412, 
"...4.....\n"
".......2.\n"
"..4......\n"
".3.1.....\n"
"...27....\n"
".........\n"
"....5....\n"
"..3.3....\n"
".........\n"
".....1...\n") == 0);
free(board640276412);
board640276412 = NULL;
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );


char* board965344239 = gamma_board(board);
assert( board965344239 != NULL );
assert( strcmp(board965344239, 
"...46....\n"
".......2.\n"
".44......\n"
".3.1.....\n"
"...27....\n"
"2........\n"
"....5....\n"
"..3.3....\n"
"..5......\n"
".....1...\n") == 0);
free(board965344239);
board965344239 = NULL;
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_golden_move(board, 7, 4, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_golden_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_free_fields(board, 4) == 68 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_free_fields(board, 7) == 66 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_golden_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 5, -1) == 0 );
assert( gamma_move(board, 7, 1, 8) == 1 );
assert( gamma_golden_move(board, 7, 4, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );


char* board569999799 = gamma_board(board);
assert( board569999799 != NULL );
assert( strcmp(board569999799, 
".2.46....\n"
".7.....2.\n"
".44..6...\n"
".371.....\n"
"...27.52.\n"
"2..4.....\n"
"....531..\n"
"..3.3....\n"
"..55.....\n"
"...671...\n") == 0);
free(board569999799);
board569999799 = NULL;
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_free_fields(board, 5) == 63 );
assert( gamma_golden_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_free_fields(board, 7) == 8 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );


char* board309154813 = gamma_board(board);
assert( board309154813 != NULL );
assert( strcmp(board309154813, 
".2.461...\n"
"67..4..2.\n"
".44..6..6\n"
".371.....\n"
"...27.527\n"
"2..4.....\n"
"3...531..\n"
"..3.3....\n"
"1.55.....\n"
"...671...\n") == 0);
free(board309154813);
board309154813 = NULL;
assert( gamma_move(board, 6, -1, 6) == 0 );


gamma_delete(board);

    return 0;
}
