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
uuid: 733790751
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 4, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 70 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_free_fields(board, 2) == 70 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_golden_move(board, 3, 7, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_golden_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_golden_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_golden_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_free_fields(board, 2) == 60 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );


char* board702229621 = gamma_board(board);
assert( board702229621 != NULL );
assert( strcmp(board702229621, 
"....1...2\n"
"3...3....\n"
".13....4.\n"
"...2.....\n"
".....12..\n"
"..3......\n"
".........\n"
".1.......\n") == 0);
free(board702229621);
board702229621 = NULL;
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_golden_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );


char* board575167980 = gamma_board(board);
assert( board575167980 != NULL );
assert( strcmp(board575167980, 
"...41...2\n"
"3..33....\n"
".13....4.\n"
"...2.....\n"
".....12..\n"
"213......\n"
"......3..\n"
".1.......\n") == 0);
free(board575167980);
board575167980 = NULL;
assert( gamma_move(board, 1, 4, 1) == 1 );


char* board193873753 = gamma_board(board);
assert( board193873753 != NULL );
assert( strcmp(board193873753, 
"...41...2\n"
"3..33....\n"
".13....4.\n"
"...2.....\n"
".....12..\n"
"213......\n"
"....1.3..\n"
".1.......\n") == 0);
free(board193873753);
board193873753 = NULL;
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 4, -1, 4) == 0 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );


char* board356777451 = gamma_board(board);
assert( board356777451 != NULL );
assert( strcmp(board356777451, 
"...41...2\n"
"3..33....\n"
".13...24.\n"
"...2....3\n"
".....12..\n"
"213......\n"
"2...1.3..\n"
".1.......\n") == 0);
free(board356777451);
board356777451 = NULL;
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );


char* board584887985 = gamma_board(board);
assert( board584887985 != NULL );
assert( strcmp(board584887985, 
"...41...2\n"
"3..33....\n"
".134..24.\n"
"...2....3\n"
".....12..\n"
"213......\n"
"2...1.3..\n"
".1.......\n") == 0);
free(board584887985);
board584887985 = NULL;
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_move(board, 1, -1, 1) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_free_fields(board, 4) == 46 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );


gamma_delete(board);

    return 0;
}
