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
uuid: 334872360
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 10, 7, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );


char* board389150245 = gamma_board(board);
assert( board389150245 != NULL );
assert( strcmp(board389150245, 
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".3...2...\n"
".........\n"
".........\n"
".........\n"
"4........\n") == 0);
free(board389150245);
board389150245 = NULL;
assert( gamma_move(board, 5, 0, 6) == 1 );


char* board442536207 = gamma_board(board);
assert( board442536207 != NULL );
assert( strcmp(board442536207, 
".........\n"
".........\n"
".........\n"
"5........\n"
".........\n"
".3...2...\n"
".........\n"
".........\n"
".........\n"
"4........\n") == 0);
free(board442536207);
board442536207 = NULL;
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_free_fields(board, 4) == 84 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_free_fields(board, 3) == 80 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_free_fields(board, 4) == 79 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_move(board, 7, -1, 3) == 0 );
assert( gamma_golden_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_free_fields(board, 3) == 76 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 5, -1, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board554189370 = gamma_board(board);
assert( board554189370 != NULL );
assert( strcmp(board554189370, 
".....3...\n"
".6.1..4.4\n"
".....15..\n"
"5.4......\n"
".........\n"
".3...2...\n"
"1........\n"
".........\n"
".77......\n"
"4........\n") == 0);
free(board554189370);
board554189370 = NULL;
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_golden_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_free_fields(board, 6) == 70 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 6) == 64 );
assert( gamma_move(board, 7, 0, 1) == 1 );


char* board987501268 = gamma_board(board);
assert( board987501268 != NULL );
assert( strcmp(board987501268, 
".....3...\n"
".6.1..4.4\n"
".....15.4\n"
"5.4......\n"
"3........\n"
"13...236.\n"
"1..1.34..\n"
"....7..7.\n"
"7776.....\n"
"4........\n") == 0);
free(board987501268);
board987501268 = NULL;
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );


char* board148435584 = gamma_board(board);
assert( board148435584 != NULL );
assert( strcmp(board148435584, 
".....3...\n"
".6.1..4.4\n"
".....15.4\n"
"5.4......\n"
"3........\n"
"13...236.\n"
"1..1.34..\n"
"....7..7.\n"
"7776.....\n"
"4........\n") == 0);
free(board148435584);
board148435584 = NULL;
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, -1, 1) == 0 );
assert( gamma_move(board, 7, 7, 6) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_golden_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 7, 4, 7) == 1 );


char* board969903572 = gamma_board(board);
assert( board969903572 != NULL );
assert( strcmp(board969903572, 
"5....3...\n"
".6.1..4.4\n"
"....715.4\n"
"5.42...77\n"
"3......6.\n"
"13...236.\n"
"1..1.34..\n"
"....71.7.\n"
"7776.6...\n"
"4........\n") == 0);
free(board969903572);
board969903572 = NULL;
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 6, 1, 4) == 0 );


gamma_delete(board);

    return 0;
}
