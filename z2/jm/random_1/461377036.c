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
uuid: 461377036
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 6, 13, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 3, 13, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 10, 0) == 1 );
assert( gamma_free_fields(board, 5) == 82 );
assert( gamma_busy_fields(board, 8) == 0 );
assert( gamma_golden_move(board, 8, 3, 11) == 0 );
assert( gamma_move(board, 9, 6, 2) == 1 );
assert( gamma_golden_move(board, 9, 0, 10) == 0 );
assert( gamma_golden_move(board, 10, 1, 9) == 0 );
assert( gamma_move(board, 11, 7, 3) == 1 );
assert( gamma_move(board, 12, 11, 2) == 1 );
assert( gamma_golden_move(board, 13, 0, 7) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 8, 13, 4) == 1 );
assert( gamma_move(board, 10, 3, 6) == 0 );
assert( gamma_move(board, 11, 12, 4) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 6, 0) == 1 );
assert( gamma_move(board, 13, 8, 3) == 1 );
assert( gamma_move(board, 1, 7, -1) == 0 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_free_fields(board, 2) == 70 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_move(board, 4, 13, 0) == 1 );
assert( gamma_move(board, 5, 13, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_golden_move(board, 6, 1, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_free_fields(board, 8) == 68 );
assert( gamma_move(board, 9, 0, 2) == 1 );
assert( gamma_move(board, 10, 10, 6) == 0 );
assert( gamma_move(board, 11, 2, 0) == 1 );
assert( gamma_move(board, 12, 6, 1) == 1 );
assert( gamma_move(board, 13, 9, 6) == 0 );
assert( gamma_move(board, 3, 13, 3) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 3, 4) == 1 );
assert( gamma_move(board, 8, 14, 4) == 0 );
assert( gamma_move(board, 9, 3, 0) == 1 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 5, 1) == 1 );
assert( gamma_move(board, 11, 4, 0) == 1 );
assert( gamma_move(board, 12, 14, 5) == 0 );
assert( gamma_move(board, 13, 13, 2) == 1 );
assert( gamma_busy_fields(board, 13) == 2 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_free_fields(board, 5) == 57 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 14, -1) == 0 );
assert( gamma_golden_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 8, 8, 4) == 1 );


char* board809461909 = gamma_board(board);
assert( board809461909 != NULL );
assert( strcmp(board809461909, 
"..6...5...4...\n"
"..176...8...118\n"
"...5...1113....3\n"
"9.2...9....12.13\n"
"...7.1012.......\n"
"..7911.121..5..4\n") == 0);
free(board809461909);
board809461909 = NULL;
assert( gamma_move(board, 10, 5, 0) == 1 );
assert( gamma_free_fields(board, 10) == 55 );
assert( gamma_move(board, 11, 3, -1) == 0 );
assert( gamma_move(board, 12, 11, 3) == 1 );
assert( gamma_free_fields(board, 12) == 54 );
assert( gamma_golden_move(board, 12, 1, 3) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 12, 1) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_free_fields(board, 5) == 49 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_golden_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 10, 5) == 0 );
assert( gamma_move(board, 11, 8, 6) == 0 );
assert( gamma_move(board, 12, 3, 2) == 1 );
assert( gamma_move(board, 13, 2, -1) == 0 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_free_fields(board, 6) == 46 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 8, 11, 0) == 1 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 11, 8, 5) == 1 );
assert( gamma_move(board, 13, 1, 6) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_golden_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 9, 7, 2) == 1 );
assert( gamma_move(board, 10, 10, 3) == 1 );
assert( gamma_golden_move(board, 10, 4, 8) == 0 );
assert( gamma_move(board, 11, 5, 0) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 13, 12, 4) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 6, 10, -1) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );


char* board470038392 = gamma_board(board);
assert( board470038392 != NULL );
assert( strcmp(board470038392, 
"..6...5.11.4...\n"
"..176...8...118\n"
".3.5...111331012.3\n"
"91612..9955.12.13\n"
"...7.101243...2.\n"
"..791110121..58.4\n") == 0);
free(board470038392);
board470038392 = NULL;
assert( gamma_move(board, 10, 2, 4) == 0 );
assert( gamma_move(board, 11, 10, 2) == 1 );
assert( gamma_move(board, 12, 11, 0) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 11, 3) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_golden_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 8, 14, -1) == 0 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_free_fields(board, 10) == 39 );
assert( gamma_move(board, 11, 13, 0) == 0 );
assert( gamma_move(board, 12, 5, 5) == 1 );
assert( gamma_busy_fields(board, 12) == 6 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_golden_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 7, -1, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_golden_possible(board, 7) == 0 );


char* board853949662 = gamma_board(board);
assert( board853949662 != NULL );
assert( strcmp(board853949662, 
"4.6..125.11.4...\n"
".5176...83..118\n"
".3.5...111331012.3\n"
"91612..99551112.13\n"
"...7.101243...2.\n"
"..791110121..58.4\n") == 0);
free(board853949662);
board853949662 = NULL;
assert( gamma_move(board, 8, 13, 3) == 0 );
assert( gamma_free_fields(board, 8) == 36 );
assert( gamma_move(board, 9, 10, 0) == 0 );


char* board694978844 = gamma_board(board);
assert( board694978844 != NULL );
assert( strcmp(board694978844, 
"4.6..125.11.4...\n"
".5176...83..118\n"
".3.5...111331012.3\n"
"91612..99551112.13\n"
"...7.101243...2.\n"
"..791110121..58.4\n") == 0);
free(board694978844);
board694978844 = NULL;
assert( gamma_move(board, 10, 5, 2) == 1 );
assert( gamma_free_fields(board, 10) == 35 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, -1) == 0 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 13, 1) == 1 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 9, 10, 6) == 0 );
assert( gamma_free_fields(board, 9) == 33 );
assert( gamma_move(board, 10, 3, 6) == 0 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 11, 6, 6) == 0 );
assert( gamma_move(board, 12, 13, 1) == 0 );
assert( gamma_busy_fields(board, 12) == 6 );


char* board200924573 = gamma_board(board);
assert( board200924573 != NULL );
assert( strcmp(board200924573, 
"4.6..125111.4...\n"
".5176...83..118\n"
".3.5...111331012.3\n"
"91612.1099551112.13\n"
"...7.101243...26\n"
"..791110121..58.4\n") == 0);
free(board200924573);
board200924573 = NULL;
assert( gamma_move(board, 13, 8, 1) == 0 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_golden_move(board, 7, 5, 11) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 10, 7, 1) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 12, 2) == 0 );
assert( gamma_busy_fields(board, 11) == 5 );
assert( gamma_free_fields(board, 12) == 32 );


gamma_delete(board);

    return 0;
}
