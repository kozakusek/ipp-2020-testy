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
uuid: 672847686
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 13, 8, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );


char* board410422282 = gamma_board(board);
assert( board410422282 != NULL );
assert( strcmp(board410422282, 
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n") == 0);
free(board410422282);
board410422282 = NULL;
assert( gamma_move(board, 6, 8, 3) == 1 );
assert( gamma_move(board, 7, -1, 12) == 0 );
assert( gamma_move(board, 8, 8, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_free_fields(board, 5) == 113 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 7, 3, 2) == 1 );
assert( gamma_move(board, 8, 7, 1) == 1 );
assert( gamma_move(board, 1, -1, 10) == 0 );
assert( gamma_move(board, 3, -1, 5) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, -1, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 7, 12) == 1 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board806891901 = gamma_board(board);
assert( board806891901 != NULL );
assert( strcmp(board806891901, 
".......3.\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
"....24...\n"
".....3..4\n"
"...7.....\n"
"........6\n"
"...7.....\n"
".......8.\n"
"..6.....8\n") == 0);
free(board806891901);
board806891901 = NULL;
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 8, 1) == 1 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 7, -1, 1) == 0 );
assert( gamma_move(board, 8, 5, 1) == 1 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 11) == 1 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, -1, 8) == 0 );
assert( gamma_move(board, 7, -1, 10) == 0 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 6, 9) == 1 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_move(board, 7, 5, 13) == 0 );
assert( gamma_move(board, 8, -1, 12) == 0 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_golden_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 7, 6, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_golden_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 7, 5, -1) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_free_fields(board, 4) == 84 );
assert( gamma_free_fields(board, 5) == 84 );
assert( gamma_move(board, 6, 8, 11) == 1 );
assert( gamma_move(board, 7, 7, 12) == 0 );
assert( gamma_move(board, 8, 2, 4) == 1 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_golden_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_free_fields(board, 4) == 81 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_free_fields(board, 7) == 77 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_golden_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 6, 7, 13) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 2, 4, 11) == 1 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_free_fields(board, 3) == 76 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_free_fields(board, 6) == 74 );


char* board966082888 = gamma_board(board);
assert( board966082888 != NULL );
assert( strcmp(board966082888, 
".......3.\n"
"2...2...6\n"
"1........\n"
"......5..\n"
"1.1......\n"
".834.57..\n"
"6.13245..\n"
".....3..4\n"
".487..4.1\n"
"....72..6\n"
"...7.....\n"
"4...68588\n"
"4.6.55258\n") == 0);
free(board966082888);
board966082888 = NULL;
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board123682036 = gamma_board(board);
assert( board123682036 != NULL );
assert( strcmp(board123682036, 
".......3.\n"
"2...2...6\n"
"1........\n"
"......5..\n"
"1.1......\n"
".834.57..\n"
"6.13245..\n"
".....3..4\n"
".4872.4.1\n"
"....72..6\n"
"...7.....\n"
"43..68588\n"
"4.6.55258\n") == 0);
free(board123682036);
board123682036 = NULL;


gamma_delete(board);

    return 0;
}
