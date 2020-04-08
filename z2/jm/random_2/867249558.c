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
uuid: 867249558
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 4, 13, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_golden_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );


char* board972454981 = gamma_board(board);
assert( board972454981 != NULL );
assert( strcmp(board972454981, 
".65.......\n"
"....2.....\n"
"..1.......\n"
".3........\n") == 0);
free(board972454981);
board972454981 = NULL;
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 8, 7, 1) == 1 );
assert( gamma_golden_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 10, 1, 4) == 0 );
assert( gamma_move(board, 10, 0, 0) == 1 );
assert( gamma_move(board, 11, 1, 5) == 0 );
assert( gamma_move(board, 11, 8, 0) == 1 );
assert( gamma_move(board, 12, 2, 7) == 0 );
assert( gamma_move(board, 12, 9, 0) == 1 );


char* board617919894 = gamma_board(board);
assert( board617919894 != NULL );
assert( strcmp(board617919894, 
".65.......\n"
".79.2.....\n"
"..1....8..\n"
"103......1112\n") == 0);
free(board617919894);
board617919894 = NULL;
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_golden_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_golden_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board918450345 = gamma_board(board);
assert( board918450345 != NULL );
assert( strcmp(board918450345, 
".65.......\n"
".7932..2..\n"
".41....8..\n"
"103......1112\n") == 0);
free(board918450345);
board918450345 = NULL;
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_free_fields(board, 6) == 26 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 9, 0, 2) == 1 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_move(board, 10, 1, 0) == 0 );
assert( gamma_move(board, 11, 4, 0) == 1 );
assert( gamma_move(board, 12, 2, 0) == 1 );
assert( gamma_move(board, 13, 1, 8) == 0 );
assert( gamma_move(board, 13, 7, 2) == 0 );
assert( gamma_free_fields(board, 13) == 22 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_golden_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 6, 9, 2) == 1 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );


char* board769203328 = gamma_board(board);
assert( board769203328 != NULL );
assert( strcmp(board769203328, 
"665..1....\n"
"97932..2.6\n"
".41.3..8..\n"
"10312.11..71112\n") == 0);
free(board769203328);
board769203328 = NULL;
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_move(board, 10, 3, 1) == 1 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_move(board, 11, 0, 5) == 0 );
assert( gamma_move(board, 11, 3, 1) == 0 );
assert( gamma_move(board, 12, 0, 3) == 0 );
assert( gamma_free_fields(board, 12) == 17 );
assert( gamma_move(board, 13, 2, 8) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 10, 6, 3) == 1 );
assert( gamma_busy_fields(board, 10) == 3 );


char* board395608029 = gamma_board(board);
assert( board395608029 != NULL );
assert( strcmp(board395608029, 
"665..110...\n"
"97932..2.6\n"
".41103..8..\n"
"10312811.271112\n") == 0);
free(board395608029);
board395608029 = NULL;
assert( gamma_move(board, 12, 3, 4) == 0 );
assert( gamma_move(board, 12, 2, 3) == 0 );
assert( gamma_move(board, 13, 1, 5) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 10, 3, 7) == 0 );
assert( gamma_move(board, 10, 3, 0) == 0 );
assert( gamma_free_fields(board, 10) == 10 );
assert( gamma_move(board, 11, 7, 0) == 0 );
assert( gamma_move(board, 12, 3, 3) == 1 );
assert( gamma_move(board, 13, 1, 6) == 0 );
assert( gamma_move(board, 13, 4, 1) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_move(board, 10, 7, 1) == 0 );


char* board650229970 = gamma_board(board);
assert( board650229970 != NULL );
assert( strcmp(board650229970, 
"66512.110.3.\n"
"979321.2.6\n"
".41103..862\n"
"10312811.271112\n") == 0);
free(board650229970);
board650229970 = NULL;
assert( gamma_move(board, 11, 6, 1) == 1 );
assert( gamma_move(board, 11, 8, 1) == 0 );
assert( gamma_move(board, 12, 0, 5) == 0 );
assert( gamma_free_fields(board, 12) == 8 );
assert( gamma_move(board, 13, 1, 0) == 0 );
assert( gamma_move(board, 13, 6, 1) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );


gamma_delete(board);

    return 0;
}
