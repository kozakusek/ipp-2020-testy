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
uuid: 952798721
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 9, 9, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_free_fields(board, 5) == 78 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 6, 4) == 1 );
assert( gamma_move(board, 9, 5, 0) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_free_fields(board, 4) == 75 );
assert( gamma_golden_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );


char* board131833122 = gamma_board(board);
assert( board131833122 != NULL );
assert( strcmp(board131833122, 
".........\n"
".........\n"
".........\n"
".........\n"
"......83.\n"
"...6.....\n"
"......5..\n"
".5.......\n"
"....19...\n") == 0);
free(board131833122);
board131833122 = NULL;
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_free_fields(board, 7) == 73 );


char* board747479698 = gamma_board(board);
assert( board747479698 != NULL );
assert( strcmp(board747479698, 
".........\n"
".........\n"
".........\n"
".........\n"
"......83.\n"
"...6.....\n"
"......5..\n"
".5.......\n"
"..6.19...\n") == 0);
free(board747479698);
board747479698 = NULL;
assert( gamma_move(board, 8, 7, 2) == 1 );


char* board470145675 = gamma_board(board);
assert( board470145675 != NULL );
assert( strcmp(board470145675, 
".........\n"
".........\n"
".........\n"
".........\n"
"......83.\n"
"...6.....\n"
"......58.\n"
".5.......\n"
"..6.19...\n") == 0);
free(board470145675);
board470145675 = NULL;
assert( gamma_move(board, 9, 4, 2) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 5, 0, 8) == 1 );


char* board541116752 = gamma_board(board);
assert( board541116752 != NULL );
assert( strcmp(board541116752, 
"5........\n"
".........\n"
".........\n"
".......4.\n"
"......83.\n"
"...6...3.\n"
"....9.58.\n"
".5.......\n"
"..6.19...\n") == 0);
free(board541116752);
board541116752 = NULL;
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board284927182 = gamma_board(board);
assert( board284927182 != NULL );
assert( strcmp(board284927182, 
"5........\n"
".........\n"
".........\n"
".......4.\n"
"......83.\n"
"...6...3.\n"
"....9.58.\n"
".5.......\n"
"..6.19...\n") == 0);
free(board284927182);
board284927182 = NULL;
assert( gamma_move(board, 7, 6, 8) == 1 );
assert( gamma_free_fields(board, 7) == 67 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 9, 1, 7) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_free_fields(board, 3) == 64 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, -1, 7) == 0 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board764145036 = gamma_board(board);
assert( board764145036 != NULL );
assert( strcmp(board764145036, 
"5.....7..\n"
".9..3....\n"
"8..2.....\n"
".......4.\n"
".7.8..83.\n"
"5..6...3.\n"
"....9.58.\n"
".5.......\n"
"..6.19...\n") == 0);
free(board764145036);
board764145036 = NULL;
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_free_fields(board, 2) == 58 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, -1, 8) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );


char* board869170885 = gamma_board(board);
assert( board869170885 != NULL );
assert( strcmp(board869170885, 
"5..3..7..\n"
".9..3....\n"
"8..2.....\n"
".....2.4.\n"
".7.8..83.\n"
"5..6...3.\n"
"....9.58.\n"
".571.....\n"
"..6.19...\n") == 0);
free(board869170885);
board869170885 = NULL;
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_free_fields(board, 3) == 56 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 8, 5, 1) == 1 );
assert( gamma_move(board, 9, -1, 8) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_free_fields(board, 2) == 53 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_move(board, 9, 3, -1) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 0, 5) == 0 );


char* board373809844 = gamma_board(board);
assert( board373809844 != NULL );
assert( strcmp(board373809844, 
"5..3..76.\n"
".92.3.3..\n"
"8..2.....\n"
".....244.\n"
".7.8..834\n"
"5..6...3.\n"
"....9.58.\n"
".571.8...\n"
"..6.195..\n") == 0);
free(board373809844);
board373809844 = NULL;
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_free_fields(board, 8) == 48 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 3) == 1 );


gamma_delete(board);

    return 0;
}
