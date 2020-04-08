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
uuid: 595623618
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 8, 3, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_free_fields(board, 2) == 77 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_free_fields(board, 2) == 74 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_free_fields(board, 1) == 73 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 3, 7, 4) == 1 );


char* board134967834 = gamma_board(board);
assert( board134967834 != NULL );
assert( strcmp(board134967834, 
"...1......\n"
"....1.....\n"
".3..2.....\n"
".......3..\n"
"3.........\n"
"1.........\n"
"...2......\n"
"...2......\n") == 0);
free(board134967834);
board134967834 = NULL;
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );


char* board402263313 = gamma_board(board);
assert( board402263313 != NULL );
assert( strcmp(board402263313, 
"...1......\n"
"....1.....\n"
".3..2.....\n"
".......3..\n"
"3.........\n"
"1.........\n"
"...2......\n"
"...2......\n") == 0);
free(board402263313);
board402263313 = NULL;
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board833723258 = gamma_board(board);
assert( board833723258 != NULL );
assert( strcmp(board833723258, 
"..21......\n"
"....1.....\n"
".3..2.....\n"
".......3.3\n"
"3.........\n"
"1.........\n"
"...2......\n"
"...2......\n") == 0);
free(board833723258);
board833723258 = NULL;
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_free_fields(board, 1) == 67 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );


char* board951457988 = gamma_board(board);
assert( board951457988 != NULL );
assert( strcmp(board951457988, 
"..21......\n"
"....1.3...\n"
".3..2.....\n"
".......3.3\n"
"3.........\n"
"1.........\n"
"...2......\n"
"...21.....\n") == 0);
free(board951457988);
board951457988 = NULL;
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_free_fields(board, 1) == 66 );
assert( gamma_golden_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );


char* board706535409 = gamma_board(board);
assert( board706535409 != NULL );
assert( strcmp(board706535409, 
"..21......\n"
"....1.3...\n"
".3..2.....\n"
".......3.3\n"
"33........\n"
"1.........\n"
"..22......\n"
"...21....3\n") == 0);
free(board706535409);
board706535409 = NULL;
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_golden_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_golden_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 2, 4, -1) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_golden_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 4, -1) == 0 );


char* board385703798 = gamma_board(board);
assert( board385703798 != NULL );
assert( strcmp(board385703798, 
"..21......\n"
".2..1.3...\n"
".3..2.3...\n"
".1.....3.3\n"
"33........\n"
"121.......\n"
"..22.2....\n"
"...21....3\n") == 0);
free(board385703798);
board385703798 = NULL;
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 2, 8, -1) == 0 );


char* board148498265 = gamma_board(board);
assert( board148498265 != NULL );
assert( strcmp(board148498265, 
"..21......\n"
".2.31.3...\n"
".3..2.3...\n"
".12....3.3\n"
"33........\n"
"121..2....\n"
"..22.2....\n"
"...21....3\n") == 0);
free(board148498265);
board148498265 = NULL;
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


gamma_delete(board);

    return 0;
}
