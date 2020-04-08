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
uuid: 129665754
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 10, 4, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );


char* board659043363 = gamma_board(board);
assert( board659043363 != NULL );
assert( strcmp(board659043363, 
"........\n"
".1......\n"
"..1.....\n"
"........\n"
"........\n"
"........\n"
"........\n"
"...4..2.\n"
"........\n"
"........\n") == 0);
free(board659043363);
board659043363 = NULL;
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 3, 9) == 1 );


char* board170408313 = gamma_board(board);
assert( board170408313 != NULL );
assert( strcmp(board170408313, 
"...4....\n"
".1......\n"
"..1...3.\n"
"........\n"
"........\n"
"........\n"
"........\n"
"...4.22.\n"
"........\n"
"........\n") == 0);
free(board170408313);
board170408313 = NULL;
assert( gamma_move(board, 1, 3, -1) == 0 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_golden_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 1, 5, 5) == 1 );


char* board222770783 = gamma_board(board);
assert( board222770783 != NULL );
assert( strcmp(board222770783, 
"...4....\n"
".1......\n"
"..1...3.\n"
"........\n"
".....1..\n"
"21......\n"
"........\n"
"...4.223\n"
"........\n"
"........\n") == 0);
free(board222770783);
board222770783 = NULL;
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_golden_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 3, -1, 1) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_golden_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );


char* board315083869 = gamma_board(board);
assert( board315083869 != NULL );
assert( strcmp(board315083869, 
"...4....\n"
".1......\n"
"..1...3.\n"
".4......\n"
".....1..\n"
"212.4...\n"
"........\n"
"...4.223\n"
"........\n"
".....2..\n") == 0);
free(board315083869);
board315083869 = NULL;
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_golden_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );


char* board445839205 = gamma_board(board);
assert( board445839205 != NULL );
assert( strcmp(board445839205, 
"..344...\n"
".1......\n"
"..1...3.\n"
".4.....3\n"
".....1..\n"
"212.4...\n"
"........\n"
"...4.223\n"
"........\n"
".....2..\n") == 0);
free(board445839205);
board445839205 = NULL;
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_golden_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, -1, 9) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_free_fields(board, 1) == 60 );


char* board376574301 = gamma_board(board);
assert( board376574301 != NULL );
assert( strcmp(board376574301, 
"..344...\n"
".1......\n"
".11...3.\n"
".41....3\n"
".....1..\n"
"212.4...\n"
"........\n"
"...4.223\n"
"........\n"
".....2..\n") == 0);
free(board376574301);
board376574301 = NULL;
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );


gamma_delete(board);

    return 0;
}
