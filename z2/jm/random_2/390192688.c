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
uuid: 390192688
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 6, 15, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 9, 3, 10) == 0 );
assert( gamma_move(board, 9, 5, 1) == 1 );
assert( gamma_move(board, 10, 1, 6) == 0 );
assert( gamma_move(board, 10, 0, 4) == 1 );
assert( gamma_free_fields(board, 10) == 67 );
assert( gamma_move(board, 11, 9, 2) == 1 );
assert( gamma_move(board, 12, 3, 10) == 0 );
assert( gamma_move(board, 13, 2, 5) == 1 );
assert( gamma_move(board, 13, 9, 0) == 1 );
assert( gamma_move(board, 14, 1, 6) == 0 );
assert( gamma_move(board, 15, 2, 3) == 1 );
assert( gamma_move(board, 15, 10, 5) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 3) == 1 );
assert( gamma_move(board, 10, 0, 7) == 0 );
assert( gamma_move(board, 11, 3, 5) == 0 );
assert( gamma_move(board, 12, 4, 7) == 0 );
assert( gamma_move(board, 12, 5, 2) == 1 );
assert( gamma_move(board, 13, 7, 5) == 1 );
assert( gamma_move(board, 13, 10, 4) == 1 );
assert( gamma_move(board, 14, 0, 1) == 1 );
assert( gamma_free_fields(board, 14) == 53 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_free_fields(board, 8) == 47 );


char* board863597209 = gamma_board(board);
assert( board863597209 != NULL );
assert( strcmp(board863597209, 
"7.133...13..15.\n"
"10..4...3..13.\n"
".915......3..\n"
"3.86.126..11..\n"
"144.1.9....4.\n"
"......1..13..\n") == 0);
free(board863597209);
board863597209 = NULL;
assert( gamma_move(board, 9, 1, 1) == 0 );
assert( gamma_move(board, 9, 5, 0) == 1 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 10, 7, 3) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 5, 8) == 0 );
assert( gamma_move(board, 11, 5, 3) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 11, 5) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 5, 9) == 0 );
assert( gamma_move(board, 14, 2, 3) == 0 );
assert( gamma_move(board, 15, 3, 3) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board174191923 = gamma_board(board);
assert( board174191923 != NULL );
assert( strcmp(board174191923, 
"7.1331..13..1512\n"
"10..4...3..13.\n"
".91515.11.10.3..\n"
"3.86.126..11..\n"
"144.1.9...24.\n"
".....91..13..\n") == 0);
free(board174191923);
board174191923 = NULL;
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 8, 6, 3) == 1 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board110153712 = gamma_board(board);
assert( board110153712 != NULL );
assert( strcmp(board110153712, 
"7.1331..13..1512\n"
"104.4...3..13.\n"
".91515.11810.3..\n"
"3.864126..11..\n"
"144.1.9...24.\n"
".....91..13..\n") == 0);
free(board110153712);
board110153712 = NULL;
assert( gamma_move(board, 10, 7, 2) == 1 );
assert( gamma_move(board, 10, 4, 1) == 1 );
assert( gamma_golden_move(board, 10, 5, 2) == 1 );
assert( gamma_move(board, 11, 4, 5) == 0 );
assert( gamma_move(board, 12, 4, 8) == 0 );
assert( gamma_move(board, 12, 6, 3) == 0 );
assert( gamma_move(board, 13, 0, 4) == 0 );
assert( gamma_move(board, 14, 3, 10) == 0 );
assert( gamma_move(board, 14, 11, 0) == 1 );
assert( gamma_move(board, 15, 5, 1) == 0 );
assert( gamma_move(board, 15, 11, 1) == 1 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_golden_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 9, 1, 6) == 0 );
assert( gamma_move(board, 9, 11, 3) == 1 );
assert( gamma_move(board, 10, 5, 8) == 0 );
assert( gamma_move(board, 11, 1, 8) == 0 );
assert( gamma_move(board, 12, 1, 6) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 0, 3) == 1 );
assert( gamma_move(board, 13, 8, 4) == 1 );
assert( gamma_move(board, 14, 2, 10) == 0 );
assert( gamma_free_fields(board, 15) == 29 );


char* board451087236 = gamma_board(board);
assert( board451087236 != NULL );
assert( strcmp(board451087236, 
"7.1311..13..1512\n"
"10434...313.13.\n"
"1391515.11810.3.9\n"
"3.86410610.11..\n"
"144.1109...2415\n"
".....91..13.14\n") == 0);
free(board451087236);
board451087236 = NULL;
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board168253895 = gamma_board(board);
assert( board168253895 != NULL );
assert( strcmp(board168253895, 
"7.1311..13..1512\n"
"10434...313213.\n"
"1391515.11810.3.9\n"
"3.86410610.11..\n"
"144.1109...2415\n"
".....91..13.14\n") == 0);
free(board168253895);
board168253895 = NULL;
assert( gamma_move(board, 10, 1, 1) == 0 );
assert( gamma_move(board, 10, 3, 3) == 0 );
assert( gamma_move(board, 11, 4, 5) == 0 );
assert( gamma_move(board, 12, 6, 3) == 0 );
assert( gamma_move(board, 13, 4, 0) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 5, 9) == 0 );
assert( gamma_move(board, 15, 0, 4) == 0 );
assert( gamma_move(board, 15, 8, 3) == 1 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_golden_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_move(board, 10, 5, 1) == 0 );
assert( gamma_move(board, 10, 6, 0) == 0 );
assert( gamma_move(board, 11, 2, 8) == 0 );
assert( gamma_move(board, 12, 2, 10) == 0 );
assert( gamma_move(board, 13, 0, 8) == 0 );
assert( gamma_move(board, 13, 8, 1) == 1 );
assert( gamma_move(board, 14, 11, 5) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 1, 7) == 0 );
assert( gamma_move(board, 15, 5, 0) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_golden_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_free_fields(board, 9) == 20 );
assert( gamma_move(board, 10, 0, 3) == 0 );
assert( gamma_move(board, 10, 4, 2) == 0 );
assert( gamma_move(board, 11, 11, 3) == 0 );
assert( gamma_move(board, 11, 4, 4) == 0 );
assert( gamma_move(board, 12, 5, 5) == 1 );
assert( gamma_move(board, 13, 4, 5) == 0 );
assert( gamma_move(board, 14, 1, 7) == 0 );
assert( gamma_move(board, 15, 4, 11) == 0 );
assert( gamma_move(board, 15, 1, 3) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );


char* board926357390 = gamma_board(board);
assert( board926357390 != NULL );
assert( strcmp(board926357390, 
"7.41112.13..1512\n"
"104345..313213.\n"
"1391515.11810153.9\n"
"3886410610.11..\n"
"144.1109..132415\n"
"71..13918213.14\n") == 0);
free(board926357390);
board926357390 = NULL;
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_free_fields(board, 6) == 18 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 11, 4) == 1 );
assert( gamma_move(board, 9, 8, 5) == 1 );
assert( gamma_free_fields(board, 9) == 16 );
assert( gamma_golden_move(board, 9, 4, 3) == 0 );
assert( gamma_move(board, 10, 11, 4) == 0 );
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_golden_move(board, 10, 1, 10) == 0 );
assert( gamma_move(board, 11, 5, 9) == 0 );
assert( gamma_move(board, 12, 2, 8) == 0 );


char* board716614237 = gamma_board(board);
assert( board716614237 != NULL );
assert( strcmp(board716614237, 
"7.41112.139.1512\n"
"104345..3132138\n"
"1391515.11810153.9\n"
"3886410610.11..\n"
"144.1109..132415\n"
"71..13918213.14\n") == 0);
free(board716614237);
board716614237 = NULL;
assert( gamma_move(board, 13, 7, 5) == 0 );
assert( gamma_move(board, 13, 9, 4) == 0 );
assert( gamma_move(board, 14, 1, 6) == 0 );
assert( gamma_move(board, 14, 10, 3) == 1 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 9, 0) == 0 );
assert( gamma_move(board, 15, 1, 4) == 0 );
assert( gamma_busy_fields(board, 15) == 5 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );


char* board476612825 = gamma_board(board);
assert( board476612825 != NULL );
assert( strcmp(board476612825, 
"7.41112.139.1512\n"
"1043452.3132138\n"
"1391515.11810153149\n"
"3886410610.11..\n"
"144.1109..132415\n"
"71..13918213.14\n") == 0);
free(board476612825);
board476612825 = NULL;
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_golden_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_golden_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 10, 3) == 0 );
assert( gamma_move(board, 9, 1, 3) == 0 );


gamma_delete(board);

    return 0;
}
