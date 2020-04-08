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
uuid: 240623344
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 6, 8, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_golden_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_free_fields(board, 6) == 68 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 8, 9, -1) == 0 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 0, -1) == 0 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_move(board, 1, 11, 4) == 1 );
assert( gamma_free_fields(board, 1) == 61 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );


char* board402074852 = gamma_board(board);
assert( board402074852 != NULL );
assert( strcmp(board402074852, 
"7.4.........\n"
"...6...2...1\n"
"57...5......\n"
"......8..1..\n"
"..1.........\n"
"...2.5......\n") == 0);
free(board402074852);
board402074852 = NULL;
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );


char* board333608191 = gamma_board(board);
assert( board333608191 != NULL );
assert( strcmp(board333608191, 
"7.4....6....\n"
"...6...2...1\n"
"57...5......\n"
"......8..1..\n"
"..1.........\n"
"...2.5......\n") == 0);
free(board333608191);
board333608191 = NULL;
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 6, 5, -1) == 0 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_free_fields(board, 8) == 56 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_golden_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_free_fields(board, 8) == 52 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 11, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );


char* board385428353 = gamma_board(board);
assert( board385428353 != NULL );
assert( strcmp(board385428353, 
"7.4....6...2\n"
".4.6.7.23..1\n"
"57...5.6....\n"
"5.....8..1..\n"
"..1...5.....\n"
"...2.5.7....\n") == 0);
free(board385428353);
board385428353 = NULL;
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 8, 3) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board537210152 = gamma_board(board);
assert( board537210152 != NULL );
assert( strcmp(board537210152, 
"7.4....6..32\n"
".4.6.7.23..1\n"
"57...5.68...\n"
"5.....8..1..\n"
"..1...5.....\n"
"...2.5.7....\n") == 0);
free(board537210152);
board537210152 = NULL;
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_move(board, 6, 5, -1) == 0 );
assert( gamma_free_fields(board, 6) == 47 );
assert( gamma_move(board, 7, 9, 3) == 0 );
assert( gamma_free_fields(board, 7) == 47 );
assert( gamma_move(board, 8, 9, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );


char* board190072798 = gamma_board(board);
assert( board190072798 != NULL );
assert( strcmp(board190072798, 
"7.4....6..32\n"
".4.6.7.23..1\n"
"57...5.685..\n"
"5.....8..1..\n"
"..1...5.....\n"
"...2.5.7....\n") == 0);
free(board190072798);
board190072798 = NULL;
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 8, -1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_free_fields(board, 8) == 46 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 7, 3) == 0 );


char* board651595216 = gamma_board(board);
assert( board651595216 != NULL );
assert( strcmp(board651595216, 
"7.4....6..32\n"
".4.6.7.23..1\n"
"57...5.685..\n"
"5....18..1..\n"
"..1...5.....\n"
"...2.5.7....\n") == 0);
free(board651595216);
board651595216 = NULL;
assert( gamma_move(board, 5, 10, -1) == 0 );
assert( gamma_move(board, 6, 11, 1) == 1 );
assert( gamma_move(board, 7, 1, -1) == 0 );
assert( gamma_free_fields(board, 8) == 45 );
assert( gamma_golden_move(board, 8, 4, 11) == 0 );


gamma_delete(board);

    return 0;
}
