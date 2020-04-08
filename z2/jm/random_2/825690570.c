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
uuid: 825690570
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 8, 12, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_free_fields(board, 5) == 52 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_free_fields(board, 8) == 51 );
assert( gamma_move(board, 9, 2, 4) == 1 );
assert( gamma_move(board, 11, 6, 7) == 1 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 3, 6) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 8, 5, 1) == 1 );
assert( gamma_move(board, 9, 3, 3) == 1 );
assert( gamma_move(board, 9, 5, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 1, 4) == 0 );
assert( gamma_free_fields(board, 10) == 41 );


char* board335099325 = gamma_board(board);
assert( board335099325 != NULL );
assert( strcmp(board335099325, 
".8....11\n"
"..34...\n"
".......\n"
".19....\n"
"...9...\n"
"..1....\n"
"..24.83\n"
".735...\n") == 0);
free(board335099325);
board335099325 = NULL;
assert( gamma_move(board, 11, 7, 4) == 0 );
assert( gamma_move(board, 12, 4, 0) == 1 );
assert( gamma_free_fields(board, 12) == 40 );
assert( gamma_golden_move(board, 12, 0, 1) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );


char* board429945614 = gamma_board(board);
assert( board429945614 != NULL );
assert( strcmp(board429945614, 
".8....11\n"
"..34...\n"
".......\n"
".19..1.\n"
"...9...\n"
"..1....\n"
"..24.83\n"
".73512..\n") == 0);
free(board429945614);
board429945614 = NULL;
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_golden_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_free_fields(board, 9) == 36 );
assert( gamma_move(board, 10, 3, 2) == 1 );
assert( gamma_move(board, 11, 3, 2) == 0 );
assert( gamma_move(board, 11, 4, 3) == 1 );
assert( gamma_move(board, 12, 1, 0) == 0 );
assert( gamma_move(board, 12, 1, 0) == 0 );


char* board950652422 = gamma_board(board);
assert( board950652422 != NULL );
assert( strcmp(board950652422, 
".8...811\n"
"..34...\n"
".......\n"
".19..1.\n"
"...911..\n"
"..110..5\n"
".624.83\n"
".73512..\n") == 0);
free(board950652422);
board950652422 = NULL;
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_free_fields(board, 7) == 28 );
assert( gamma_move(board, 8, 3, 5) == 1 );
assert( gamma_move(board, 8, 5, 2) == 1 );


char* board111388772 = gamma_board(board);
assert( board111388772 != NULL );
assert( strcmp(board111388772, 
"18...811\n"
".534...\n"
"...8...\n"
".19.611\n"
"...911..\n"
"..110.85\n"
".624.83\n"
"4735122.\n") == 0);
free(board111388772);
board111388772 = NULL;
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 10, 7, 4) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 1, 0) == 0 );
assert( gamma_move(board, 11, 3, 5) == 0 );
assert( gamma_move(board, 12, 4, 0) == 0 );
assert( gamma_move(board, 12, 3, 2) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 3, 7) == 1 );
assert( gamma_free_fields(board, 7) == 25 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 10, 4, 3) == 0 );
assert( gamma_move(board, 11, 3, 5) == 0 );
assert( gamma_free_fields(board, 11) == 25 );


char* board502949801 = gamma_board(board);
assert( board502949801 != NULL );
assert( strcmp(board502949801, 
"18.7.811\n"
".534...\n"
"...8...\n"
".19.611\n"
"...911..\n"
"..110.85\n"
".624.83\n"
"4735122.\n") == 0);
free(board502949801);
board502949801 = NULL;
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_free_fields(board, 7) == 23 );
assert( gamma_move(board, 8, 6, 0) == 1 );
assert( gamma_free_fields(board, 8) == 22 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 10, 5, 4) == 0 );
assert( gamma_move(board, 11, 4, 3) == 0 );
assert( gamma_move(board, 12, 4, 0) == 0 );
assert( gamma_move(board, 12, 5, 7) == 0 );
assert( gamma_busy_fields(board, 12) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 7, 2, 5) == 1 );


char* board550761556 = gamma_board(board);
assert( board550761556 != NULL );
assert( strcmp(board550761556, 
"18.7.811\n"
".534.4.\n"
"..78.7.\n"
".19.611\n"
"...9116.\n"
".1110.85\n"
".624.83\n"
"47351228\n") == 0);
free(board550761556);
board550761556 = NULL;
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 9, 3, 4) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 2, 6) == 0 );
assert( gamma_move(board, 11, 6, 0) == 0 );


char* board967063464 = gamma_board(board);
assert( board967063464 != NULL );
assert( strcmp(board967063464, 
"18.7.811\n"
".534.4.\n"
"..78.7.\n"
".199611\n"
"...9116.\n"
".1110.85\n"
".624.83\n"
"47351228\n") == 0);
free(board967063464);
board967063464 = NULL;
assert( gamma_move(board, 12, 1, 3) == 1 );
assert( gamma_move(board, 12, 2, 0) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 10, 6, 4) == 0 );
assert( gamma_move(board, 10, 3, 6) == 0 );
assert( gamma_move(board, 11, 5, 0) == 0 );
assert( gamma_move(board, 12, 2, 4) == 0 );
assert( gamma_move(board, 12, 2, 2) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_golden_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 3, 6) == 0 );
assert( gamma_move(board, 11, 2, 2) == 0 );
assert( gamma_free_fields(board, 11) == 15 );
assert( gamma_golden_move(board, 11, 3, 4) == 1 );
assert( gamma_move(board, 12, 2, 4) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );


gamma_delete(board);

    return 0;
}
