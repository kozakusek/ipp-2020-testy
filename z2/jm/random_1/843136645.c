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
uuid: 843136645
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 10, 7, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_free_fields(board, 2) == 88 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_move(board, 7, 9, -1) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 7, 9, 9) == 0 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 7, 6, 3) == 1 );


char* board309224779 = gamma_board(board);
assert( board309224779 != NULL );
assert( strcmp(board309224779, 
"..6......\n"
"........3\n"
".........\n"
".15.42...\n"
".........\n"
"....7..2.\n"
"......75.\n"
"3..6.....\n"
".4.......\n"
".........\n") == 0);
free(board309224779);
board309224779 = NULL;
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_free_fields(board, 1) == 77 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 7, -1, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_free_fields(board, 4) == 73 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_free_fields(board, 5) == 72 );
assert( gamma_move(board, 6, 6, -1) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_golden_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_free_fields(board, 5) == 70 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, -1, 3) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_free_fields(board, 1) == 69 );


char* board260661264 = gamma_board(board);
assert( board260661264 != NULL );
assert( strcmp(board260661264, 
"..6......\n"
"........3\n"
"..5......\n"
".15.42...\n"
".....2...\n"
".5..7..2.\n"
"..6.2.75.\n"
"3..6..1..\n"
".4.......\n"
"...5...1.\n") == 0);
free(board260661264);
board260661264 = NULL;
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_free_fields(board, 4) == 66 );
assert( gamma_move(board, 6, -1, 0) == 0 );
assert( gamma_move(board, 7, -1, 9) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );


char* board601645658 = gamma_board(board);
assert( board601645658 != NULL );
assert( strcmp(board601645658, 
"..64...2.\n"
".6......3\n"
"..5.....5\n"
".15.42...\n"
".....2...\n"
".5..7..2.\n"
"..6.2775.\n"
"3..6..1..\n"
".4...1.3.\n"
"...5...1.\n") == 0);
free(board601645658);
board601645658 = NULL;
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 7, 7, 8) == 1 );


char* board982246192 = gamma_board(board);
assert( board982246192 != NULL );
assert( strcmp(board982246192, 
"..64...2.\n"
".6.....73\n"
".35.....5\n"
".15.42...\n"
".....2.2.\n"
".5..7..2.\n"
"..6.2775.\n"
"3..6..1..\n"
".4...1.3.\n"
"...5...1.\n") == 0);
free(board982246192);
board982246192 = NULL;
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );


char* board728605699 = gamma_board(board);
assert( board728605699 != NULL );
assert( strcmp(board728605699, 
"..64...2.\n"
"46.....73\n"
".35.5...5\n"
".15.42...\n"
".....2.2.\n"
".5..7..2.\n"
"..6.2775.\n"
"3..6..1..\n"
".4...1.3.\n"
"..15...1.\n") == 0);
free(board728605699);
board728605699 = NULL;
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_free_fields(board, 2) == 56 );
assert( gamma_move(board, 3, 8, 6) == 1 );


char* board984093511 = gamma_board(board);
assert( board984093511 != NULL );
assert( strcmp(board984093511, 
"..64...2.\n"
"46.....73\n"
".35.5...5\n"
".15.42..3\n"
".....2.2.\n"
".5..7..2.\n"
"..6.2775.\n"
"3..6..1..\n"
".4...1.3.\n"
"..15...1.\n") == 0);
free(board984093511);
board984093511 = NULL;
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );


char* board181336443 = gamma_board(board);
assert( board181336443 != NULL );
assert( strcmp(board181336443, 
"..64...2.\n"
"46.....73\n"
".35.5...5\n"
".15.42..3\n"
".....2.2.\n"
".5..7..2.\n"
"..6.2775.\n"
"3..6..1..\n"
".4...1.3.\n"
"..15...1.\n") == 0);
free(board181336443);
board181336443 = NULL;
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_free_fields(board, 4) == 53 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board517590444 = gamma_board(board);
assert( board517590444 != NULL );
assert( strcmp(board517590444, 
"..64...2.\n"
"46.....73\n"
".35.5...5\n"
"315.42..3\n"
".....2.2.\n"
".5..7..2.\n"
"..6.2775.\n"
"3..6..1..\n"
".4...1.3.\n"
"..15...16\n") == 0);
free(board517590444);
board517590444 = NULL;


gamma_delete(board);

    return 0;
}
