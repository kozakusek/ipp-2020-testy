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
uuid: 882776234
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 9, 3, 5);
assert( board != NULL );


assert( gamma_golden_move(board, 1, 7, 3) == 0 );
assert( gamma_free_fields(board, 2) == 81 );


char* board285619400 = gamma_board(board);
assert( board285619400 != NULL );
assert( strcmp(board285619400, 
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n") == 0);
free(board285619400);
board285619400 = NULL;
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );


char* board709959025 = gamma_board(board);
assert( board709959025 != NULL );
assert( strcmp(board709959025, 
"....3....\n"
".........\n"
".........\n"
".........\n"
".........\n"
"...3.....\n"
"..3......\n"
"..2......\n"
"....1....\n") == 0);
free(board709959025);
board709959025 = NULL;
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );


char* board708064131 = gamma_board(board);
assert( board708064131 != NULL );
assert( strcmp(board708064131, 
"....3....\n"
".........\n"
".........\n"
".........\n"
".........\n"
".2.3.....\n"
"..3......\n"
"..2......\n"
"....1....\n") == 0);
free(board708064131);
board708064131 = NULL;
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_free_fields(board, 2) == 74 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board219610966 = gamma_board(board);
assert( board219610966 != NULL );
assert( strcmp(board219610966, 
"....3..1.\n"
".........\n"
".........\n"
".........\n"
".........\n"
".2.3.....\n"
"..3......\n"
"..2......\n"
"....1....\n") == 0);
free(board219610966);
board219610966 = NULL;
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 1, 5, -1) == 0 );


char* board238749071 = gamma_board(board);
assert( board238749071 != NULL );
assert( strcmp(board238749071, 
"....3..1.\n"
".........\n"
".........\n"
".........\n"
".........\n"
".2.3.....\n"
"313......\n"
"..2......\n"
"1...1....\n") == 0);
free(board238749071);
board238749071 = NULL;
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_free_fields(board, 2) == 69 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_free_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_golden_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );


char* board353314697 = gamma_board(board);
assert( board353314697 != NULL );
assert( strcmp(board353314697, 
"...23..1.\n"
".2.......\n"
".........\n"
"...2.....\n"
".........\n"
".2.3.....\n"
"313..1.3.\n"
"..2......\n"
"1...1....\n") == 0);
free(board353314697);
board353314697 = NULL;
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_free_fields(board, 2) == 16 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, -1) == 0 );
assert( gamma_golden_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 2, -1) == 0 );


gamma_delete(board);

    return 0;
}
