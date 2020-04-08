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
uuid: 398556349
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 4, 15, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 9, 11, 2) == 1 );
assert( gamma_move(board, 10, 3, 8) == 0 );
assert( gamma_move(board, 10, 7, 1) == 1 );
assert( gamma_move(board, 11, 1, 1) == 1 );
assert( gamma_golden_move(board, 11, 2, 5) == 0 );
assert( gamma_move(board, 12, 0, 1) == 1 );
assert( gamma_move(board, 13, 0, 2) == 1 );
assert( gamma_move(board, 14, 3, 7) == 0 );
assert( gamma_move(board, 14, 12, 2) == 1 );
assert( gamma_free_fields(board, 14) == 47 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 6, 8, 3) == 1 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_golden_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 0, 12) == 0 );
assert( gamma_move(board, 9, 8, 2) == 1 );
assert( gamma_move(board, 11, 3, 3) == 1 );
assert( gamma_move(board, 11, 0, 1) == 0 );
assert( gamma_move(board, 12, 4, 0) == 1 );
assert( gamma_move(board, 12, 8, 3) == 0 );
assert( gamma_move(board, 13, 4, 3) == 1 );
assert( gamma_move(board, 13, 2, 2) == 1 );
assert( gamma_move(board, 14, 3, 2) == 1 );
assert( gamma_move(board, 14, 12, 3) == 1 );
assert( gamma_busy_fields(board, 14) == 3 );
assert( gamma_move(board, 15, 4, 1) == 0 );
assert( gamma_free_fields(board, 15) == 35 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 8, 3, 10) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 9, 11, 0) == 1 );
assert( gamma_golden_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 10, 1, 9) == 0 );
assert( gamma_move(board, 10, 10, 2) == 1 );
assert( gamma_move(board, 11, 1, 2) == 0 );
assert( gamma_busy_fields(board, 11) == 2 );
assert( gamma_move(board, 12, 2, 7) == 0 );


char* board298228516 = gamma_board(board);
assert( board298228516 != NULL );
assert( strcmp(board298228516, 
".8.1113..56..214.\n"
"1331314.13.9.10914.\n"
"1211..3..10...2..\n"
"46..1243.1..9..\n") == 0);
free(board298228516);
board298228516 = NULL;
assert( gamma_move(board, 13, 1, 8) == 0 );
assert( gamma_move(board, 13, 10, 0) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 13, 0) == 1 );
assert( gamma_move(board, 14, 6, 2) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 2, 0) == 1 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board523871049 = gamma_board(board);
assert( board523871049 != NULL );
assert( strcmp(board523871049, 
".8.1113..56..214.\n"
"1331314.13.9.10914.\n"
"1211..3..10...2..\n"
"4615.1243.1.139.14\n") == 0);
free(board523871049);
board523871049 = NULL;
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );


char* board278069912 = gamma_board(board);
assert( board278069912 != NULL );
assert( strcmp(board278069912, 
".8.1113..56..214.\n"
"1331314.13.9.10914.\n"
"1211..3..10...2..\n"
"4615.1243.1.139.14\n") == 0);
free(board278069912);
board278069912 = NULL;
assert( gamma_move(board, 7, 1, 12) == 0 );
assert( gamma_busy_fields(board, 7) == 0 );
assert( gamma_move(board, 8, 12, 0) == 1 );


char* board706254239 = gamma_board(board);
assert( board706254239 != NULL );
assert( strcmp(board706254239, 
".8.1113..56..214.\n"
"1331314.13.9.10914.\n"
"1211..3..10...2..\n"
"4615.1243.1.139814\n") == 0);
free(board706254239);
board706254239 = NULL;
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_move(board, 10, 13, 1) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 3, 5) == 0 );
assert( gamma_move(board, 11, 7, 3) == 0 );
assert( gamma_free_fields(board, 11) == 22 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 7, 3) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 11, 3) == 0 );
assert( gamma_move(board, 14, 9, 0) == 1 );
assert( gamma_move(board, 15, 1, 1) == 0 );
assert( gamma_move(board, 15, 4, 2) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 8, 9, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 3, 13) == 0 );
assert( gamma_move(board, 11, 4, 3) == 0 );
assert( gamma_move(board, 12, 2, 0) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 2, 7) == 0 );
assert( gamma_move(board, 13, 13, 2) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 0, 2) == 0 );
assert( gamma_move(board, 14, 4, 3) == 0 );
assert( gamma_golden_move(board, 14, 1, 7) == 0 );
assert( gamma_move(board, 15, 1, 12) == 0 );
assert( gamma_move(board, 15, 2, 0) == 0 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 13, 2) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_golden_move(board, 9, 0, 13) == 0 );
assert( gamma_move(board, 10, 3, 13) == 0 );
assert( gamma_move(board, 10, 13, 1) == 0 );
assert( gamma_free_fields(board, 10) == 14 );
assert( gamma_move(board, 11, 3, 2) == 0 );


char* board828887245 = gamma_board(board);
assert( board828887245 != NULL );
assert( strcmp(board828887245, 
"18.1113..56.4214.\n"
"1331314151339.1091413\n"
"1211..3..10.852.10\n"
"4615.1243.114139814\n") == 0);
free(board828887245);
board828887245 = NULL;
assert( gamma_move(board, 12, 7, 1) == 0 );
assert( gamma_move(board, 13, 1, 12) == 0 );
assert( gamma_move(board, 14, 12, 3) == 0 );
assert( gamma_move(board, 14, 12, 3) == 0 );
assert( gamma_golden_move(board, 14, 0, 12) == 0 );
assert( gamma_move(board, 15, 3, 2) == 0 );
assert( gamma_move(board, 15, 10, 1) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );


char* board919668768 = gamma_board(board);
assert( board919668768 != NULL );
assert( strcmp(board919668768, 
"18.1113..56.4214.\n"
"1331314151339.1091413\n"
"1211..3..10.852.10\n"
"4615.1243.114139814\n") == 0);
free(board919668768);
board919668768 = NULL;
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );


char* board575740370 = gamma_board(board);
assert( board575740370 != NULL );
assert( strcmp(board575740370, 
"18.1113..56.4214.\n"
"1331314151339.1091413\n"
"1211..3..10.852.10\n"
"4615.1243.114139814\n") == 0);
free(board575740370);
board575740370 = NULL;
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 0) == 0 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 2, 9) == 0 );
assert( gamma_move(board, 10, 7, 2) == 0 );
assert( gamma_move(board, 11, 3, 2) == 0 );
assert( gamma_move(board, 12, 3, 9) == 0 );
assert( gamma_move(board, 13, 1, 3) == 0 );
assert( gamma_move(board, 14, 1, 3) == 0 );
assert( gamma_move(board, 15, 1, 3) == 0 );
assert( gamma_move(board, 15, 0, 1) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );


char* board719018048 = gamma_board(board);
assert( board719018048 != NULL );
assert( strcmp(board719018048, 
"18.1113..56.4214.\n"
"1331314151339.1091413\n"
"1211..33.107852.10\n"
"4615.12438114139814\n") == 0);
free(board719018048);
board719018048 = NULL;
assert( gamma_move(board, 7, 7, 0) == 0 );


gamma_delete(board);

    return 0;
}
