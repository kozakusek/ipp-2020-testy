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
uuid: 613428053
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 13, 4, 7);
assert( board != NULL );


assert( gamma_free_fields(board, 1) == 104 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 7, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 3, 8) == 1 );


char* board328223467 = gamma_board(board);
assert( board328223467 != NULL );
assert( strcmp(board328223467, 
"........\n"
"........\n"
"........\n"
"........\n"
"...3...2\n"
"...4....\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n"
"........\n") == 0);
free(board328223467);
board328223467 = NULL;
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_free_fields(board, 3) == 99 );
assert( gamma_golden_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_golden_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, -1, 11) == 0 );
assert( gamma_free_fields(board, 4) == 97 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_free_fields(board, 2) == 93 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board645641425 = gamma_board(board);
assert( board645641425 != NULL );
assert( strcmp(board645641425, 
"...2....\n"
"...2....\n"
"........\n"
"........\n"
"...3...2\n"
"...4..41\n"
"..2.....\n"
"........\n"
"........\n"
"........\n"
"...2....\n"
"..1.....\n"
"3.......\n") == 0);
free(board645641425);
board645641425 = NULL;
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 1, 0, 12) == 1 );
assert( gamma_golden_move(board, 1, 7, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_golden_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 1, -1, 6) == 0 );
assert( gamma_golden_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, -1, 3) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_free_fields(board, 1) == 82 );
assert( gamma_golden_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_golden_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 1, 5, 11) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_golden_move(board, 3, 7, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_free_fields(board, 3) == 77 );
assert( gamma_golden_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_free_fields(board, 3) == 18 );


char* board310577933 = gamma_board(board);
assert( board310577933 != NULL );
assert( strcmp(board310577933, 
"1..2....\n"
"...2.1..\n"
"...4.2..\n"
"2....3..\n"
".1.3.2.2\n"
"3..44.41\n"
"..2.....\n"
".......3\n"
"........\n"
"4......3\n"
"...2.3.3\n"
"..1.1...\n"
"34.4.1..\n") == 0);
free(board310577933);
board310577933 = NULL;
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, -1, 11) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_golden_move(board, 1, 10, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );


char* board500245889 = gamma_board(board);
assert( board500245889 != NULL );
assert( strcmp(board500245889, 
"1..2....\n"
"...2.1..\n"
"...4.2..\n"
"2....3..\n"
".1.3.2.2\n"
"3..44.41\n"
"..2.....\n"
".......3\n"
"........\n"
"4......3\n"
"...2.3.3\n"
"..1.1...\n"
"34.4.1..\n") == 0);
free(board500245889);
board500245889 = NULL;
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board141595644 = gamma_board(board);
assert( board141595644 != NULL );
assert( strcmp(board141595644, 
"1..2....\n"
"...2.1..\n"
"...4.2..\n"
"2....3..\n"
".1.3.2.2\n"
"3..44.41\n"
"..2.....\n"
".......3\n"
"4.......\n"
"4......3\n"
"...2.3.3\n"
"..1.1...\n"
"34.4.1..\n") == 0);
free(board141595644);
board141595644 = NULL;
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 5, 12) == 1 );
assert( gamma_move(board, 1, -1, 12) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


gamma_delete(board);

    return 0;
}
