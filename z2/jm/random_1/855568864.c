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
uuid: 855568864
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 10, 3, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_golden_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );


char* board769082093 = gamma_board(board);
assert( board769082093 != NULL );
assert( strcmp(board769082093, 
"........\n"
"........\n"
"........\n"
".3......\n"
"........\n"
"........\n"
"........\n"
".....1..\n"
"........\n"
"........\n") == 0);
free(board769082093);
board769082093 = NULL;
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_golden_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_free_fields(board, 3) == 75 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_golden_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 1, -1, -1) == 0 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_free_fields(board, 1) == 67 );


char* board474198182 = gamma_board(board);
assert( board474198182 != NULL );
assert( strcmp(board474198182, 
"......2.\n"
"........\n"
"...1....\n"
"13....23\n"
"......2.\n"
"..3....3\n"
"........\n"
"....311.\n"
"......3.\n"
"........\n") == 0);
free(board474198182);
board474198182 = NULL;
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );


char* board908825741 = gamma_board(board);
assert( board908825741 != NULL );
assert( strcmp(board908825741, 
"......2.\n"
"........\n"
"...1....\n"
"13....23\n"
"......2.\n"
"..3....3\n"
"........\n"
"....311.\n"
"......3.\n"
"........\n") == 0);
free(board908825741);
board908825741 = NULL;
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_free_fields(board, 2) == 66 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, -1, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 2) == 64 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_free_fields(board, 2) == 61 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, -1, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_golden_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board754560943 = gamma_board(board);
assert( board754560943 != NULL );
assert( strcmp(board754560943, 
"..2...2.\n"
"1.......\n"
".1.1....\n"
"13...323\n"
"...33.2.\n"
".2321..3\n"
"......1.\n"
"...3311.\n"
"......2.\n"
"..11..2.\n") == 0);
free(board754560943);
board754560943 = NULL;
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );


char* board309747788 = gamma_board(board);
assert( board309747788 != NULL );
assert( strcmp(board309747788, 
"..2...2.\n"
"1.......\n"
".1.1....\n"
"13.2.323\n"
"...33.2.\n"
"22321..3\n"
"......1.\n"
"...3311.\n"
"......2.\n"
"..11..2.\n") == 0);
free(board309747788);
board309747788 = NULL;


gamma_delete(board);

    return 0;
}
