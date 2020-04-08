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
uuid: 188923690
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 6, 9, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_free_fields(board, 1) == 71 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_free_fields(board, 6) == 69 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 9, 3, 11) == 0 );
assert( gamma_move(board, 9, 4, 1) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 11, 0) == 1 );


char* board731374268 = gamma_board(board);
assert( board731374268 != NULL );
assert( strcmp(board731374268, 
"............\n"
"...1........\n"
"............\n"
"...1.4......\n"
"7...9.......\n"
"1.......2..2\n") == 0);
free(board731374268);
board731374268 = NULL;
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_free_fields(board, 8) == 58 );
assert( gamma_move(board, 9, 5, 4) == 1 );
assert( gamma_move(board, 9, 11, 2) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 10, 2) == 1 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 7, 9, 4) == 1 );
assert( gamma_move(board, 8, 8, 1) == 1 );
assert( gamma_move(board, 9, 0, 4) == 1 );
assert( gamma_move(board, 9, 10, 1) == 1 );
assert( gamma_busy_fields(board, 9) == 5 );


char* board780560464 = gamma_board(board);
assert( board780560464 != NULL );
assert( strcmp(board780560464, 
".....4...2..\n"
"9..1.9...7..\n"
"...7.55..3..\n"
"6..1.4....69\n"
"7...9...8.95\n"
"118.62..2..2\n") == 0);
free(board780560464);
board780560464 = NULL;
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_free_fields(board, 1) == 45 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 10, 0) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 5, 11, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_golden_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 8, 3, 10) == 0 );
assert( gamma_free_fields(board, 8) == 38 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 9, 0, 3) == 1 );
assert( gamma_free_fields(board, 9) == 37 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_free_fields(board, 6) == 35 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 9, 5, 5) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_move(board, 9, 3, 5) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );


char* board787244313 = gamma_board(board);
assert( board787244313 != NULL );
assert( strcmp(board787244313, 
".5.45437.24.\n"
"9..159.2.7..\n"
"98173554.35.\n"
"67.1.4....69\n"
"7...9..18.95\n"
"118.62..2642\n") == 0);
free(board787244313);
board787244313 = NULL;
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 10, 4) == 1 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_move(board, 6, 11, 1) == 0 );


char* board429466146 = gamma_board(board);
assert( board429466146 != NULL );
assert( strcmp(board429466146, 
".5.45437.24.\n"
"93.159.2.75.\n"
"98173554.35.\n"
"67.1.4....69\n"
"7...9..18.95\n"
"118.626.2642\n") == 0);
free(board429466146);
board429466146 = NULL;
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 1, 6) == 0 );


char* board860242900 = gamma_board(board);
assert( board860242900 != NULL );
assert( strcmp(board860242900, 
".5.45437.24.\n"
"93.159.2.75.\n"
"98173554.35.\n"
"67.1.4....69\n"
"7...91.18.95\n"
"118.626.2642\n") == 0);
free(board860242900);
board860242900 = NULL;
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_free_fields(board, 7) == 22 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 9, 7, 2) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 11, 5) == 1 );
assert( gamma_golden_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 2, 8) == 0 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_free_fields(board, 9) == 14 );


char* board602454741 = gamma_board(board);
assert( board602454741 != NULL );
assert( strcmp(board602454741, 
".5.45437.242\n"
"93.159.2.75.\n"
"98172554.35.\n"
"67916479..69\n"
"74.491.18.95\n"
"118262682642\n") == 0);
free(board602454741);
board602454741 = NULL;
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 11, 3) == 1 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_golden_move(board, 7, 3, 9) == 0 );


char* board570788005 = gamma_board(board);
assert( board570788005 != NULL );
assert( strcmp(board570788005, 
".5.45437.242\n"
"93.159.2.75.\n"
"98172554.355\n"
"67916479..69\n"
"74.491218.95\n"
"118262682642\n") == 0);
free(board570788005);
board570788005 = NULL;
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 8, 8, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 11, 4) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_free_fields(board, 6) == 10 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 9, 1, 9) == 0 );


char* board533626221 = gamma_board(board);
assert( board533626221 != NULL );
assert( strcmp(board533626221, 
".5.45437.242\n"
"93.15932.759\n"
"98172554.355\n"
"67916479..69\n"
"74.491218.95\n"
"118262682642\n") == 0);
free(board533626221);
board533626221 = NULL;


gamma_delete(board);

    return 0;
}
