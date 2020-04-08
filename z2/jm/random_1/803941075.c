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
uuid: 803941075
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(16, 10, 8, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 12, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 15, 0) == 1 );


char* board993527286 = gamma_board(board);
assert( board993527286 != NULL );
assert( strcmp(board993527286, 
"................\n"
"................\n"
"................\n"
"................\n"
"................\n"
"................\n"
"................\n"
"................\n"
"........1...2...\n"
"...............3\n") == 0);
free(board993527286);
board993527286 = NULL;
assert( gamma_move(board, 6, 9, 5) == 1 );
assert( gamma_move(board, 7, -1, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );


char* board762065732 = gamma_board(board);
assert( board762065732 != NULL );
assert( strcmp(board762065732, 
"................\n"
"................\n"
"................\n"
"................\n"
".........6......\n"
"................\n"
"................\n"
"................\n"
"........1...2...\n"
"...............3\n") == 0);
free(board762065732);
board762065732 = NULL;
assert( gamma_move(board, 8, 13, 3) == 1 );
assert( gamma_move(board, 4, 13, 4) == 1 );
assert( gamma_move(board, 5, 14, 6) == 1 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_move(board, 7, 7, -1) == 0 );
assert( gamma_move(board, 8, -1, 8) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 4, 10, 7) == 1 );


char* board934101886 = gamma_board(board);
assert( board934101886 != NULL );
assert( strcmp(board934101886, 
"................\n"
"................\n"
"........6.4.....\n"
"..............5.\n"
".........6......\n"
".............4..\n"
".............8..\n"
"................\n"
"........1...2...\n"
"...............3\n") == 0);
free(board934101886);
board934101886 = NULL;
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 13, 6) == 1 );
assert( gamma_move(board, 1, 13, 10) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_move(board, 5, 13, 8) == 1 );
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_move(board, 7, 7, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );


char* board128264312 = gamma_board(board);
assert( board128264312 != NULL );
assert( strcmp(board128264312, 
"................\n"
".............5..\n"
"........6.4.....\n"
"...7.........85.\n"
".........6......\n"
".............4..\n"
".............8..\n"
"................\n"
"........1...2...\n"
".2.............3\n") == 0);
free(board128264312);
board128264312 = NULL;
assert( gamma_move(board, 8, 8, 4) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 5, 12, 9) == 1 );
assert( gamma_move(board, 6, 14, 4) == 1 );
assert( gamma_move(board, 7, 13, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 9, 7) == 1 );
assert( gamma_free_fields(board, 8) == 139 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 12, 6) == 1 );
assert( gamma_free_fields(board, 2) == 138 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 11, -1) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_free_fields(board, 5) == 137 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 10, 7) == 0 );


char* board611224897 = gamma_board(board);
assert( board611224897 != NULL );
assert( strcmp(board611224897, 
"......3.....5...\n"
"...4.........5..\n"
"........684.....\n"
".1.7........285.\n"
".........6......\n"
"........8....46.\n"
".............8..\n"
"................\n"
".38.....1...2...\n"
".2.2.........7.3\n") == 0);
free(board611224897);
board611224897 = NULL;
assert( gamma_free_fields(board, 4) == 135 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 7, 13, 4) == 0 );
assert( gamma_move(board, 8, 4, 6) == 1 );
assert( gamma_golden_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_move(board, 4, 13, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 14, 1) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, -1, 10) == 0 );
assert( gamma_move(board, 5, 15, 3) == 1 );
assert( gamma_move(board, 6, 12, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_free_fields(board, 1) == 125 );
assert( gamma_move(board, 2, 14, 8) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 14, 0) == 1 );
assert( gamma_move(board, 5, 4, 9) == 1 );
assert( gamma_move(board, 6, 10, 5) == 1 );
assert( gamma_free_fields(board, 6) == 120 );
assert( gamma_move(board, 7, 14, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_free_fields(board, 8) == 120 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_free_fields(board, 2) == 120 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 10) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, -1) == 0 );
assert( gamma_move(board, 6, 11, -1) == 0 );
assert( gamma_move(board, 8, 15, 10) == 0 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 5, 13, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_golden_move(board, 5, 6, 13) == 0 );


char* board528299005 = gamma_board(board);
assert( board528299005 != NULL );
assert( strcmp(board528299005, 
"....5.3.....5...\n"
"...4.....3...52.\n"
"........684.....\n"
".1.78.......285.\n"
"......3.466.....\n"
"....6...8....46.\n"
"3..6.........8.5\n"
"............1...\n"
".38.....1...245.\n"
".2.2........6743\n") == 0);
free(board528299005);
board528299005 = NULL;
assert( gamma_move(board, 6, 15, 0) == 0 );
assert( gamma_move(board, 7, 13, 10) == 0 );
assert( gamma_golden_move(board, 7, 6, 12) == 0 );
assert( gamma_move(board, 8, 14, 2) == 1 );
assert( gamma_move(board, 1, 16, 2) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 10, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_free_fields(board, 2) == 114 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 4, 2) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_move(board, 3, 13, 9) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 13, 7) == 1 );
assert( gamma_move(board, 7, 16, 2) == 0 );
assert( gamma_move(board, 8, 14, 4) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_free_fields(board, 2) == 107 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 7, 14, 7) == 1 );
assert( gamma_move(board, 8, 14, 10) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );


char* board672748113 = gamma_board(board);
assert( board672748113 != NULL );
assert( strcmp(board672748113, 
"5...5.3.....53..\n"
"1.34.....3...52.\n"
"....3...684..67.\n"
".1278...3.8.285.\n"
"......3.466.....\n"
"....6...8....46.\n"
"3..6..5......8.5\n"
"....8.......1.8.\n"
".386...21..4245.\n"
".2.2....4...6743\n") == 0);
free(board672748113);
board672748113 = NULL;
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 6, -1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_free_fields(board, 4) == 99 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_move(board, 8, 14, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 1, 15, 4) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 5, 11, 3) == 1 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_move(board, 7, 14, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_free_fields(board, 6) == 90 );
assert( gamma_move(board, 7, 11, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 7, -1) == 0 );


gamma_delete(board);

    return 0;
}
