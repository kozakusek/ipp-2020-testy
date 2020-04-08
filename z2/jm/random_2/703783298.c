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
uuid: 703783298
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 13, 13, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_free_fields(board, 1) == 195 );
assert( gamma_move(board, 2, 12, 7) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_golden_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_golden_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 11, 14) == 0 );
assert( gamma_move(board, 5, 13, 12) == 1 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_free_fields(board, 6) == 189 );
assert( gamma_move(board, 7, 10, 7) == 1 );
assert( gamma_move(board, 7, 11, 3) == 1 );
assert( gamma_move(board, 8, 14, 3) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 10, 11) == 1 );
assert( gamma_move(board, 9, 11, 11) == 1 );
assert( gamma_move(board, 10, 2, 8) == 1 );
assert( gamma_move(board, 11, 11, 3) == 0 );
assert( gamma_free_fields(board, 11) == 183 );
assert( gamma_move(board, 12, 7, 5) == 1 );
assert( gamma_move(board, 13, 9, 5) == 1 );
assert( gamma_move(board, 13, 12, 6) == 1 );
assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_free_fields(board, 3) == 175 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 10) == 1 );
assert( gamma_free_fields(board, 6) == 173 );
assert( gamma_move(board, 7, 11, 1) == 1 );
assert( gamma_golden_move(board, 7, 1, 14) == 0 );
assert( gamma_move(board, 8, 6, 0) == 1 );
assert( gamma_move(board, 8, 7, 9) == 1 );
assert( gamma_move(board, 9, 2, 5) == 1 );
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_move(board, 10, 0, 5) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 0, 10) == 1 );
assert( gamma_move(board, 11, 4, 1) == 1 );
assert( gamma_move(board, 12, 11, 5) == 1 );
assert( gamma_move(board, 13, 0, 5) == 0 );
assert( gamma_busy_fields(board, 13) == 2 );
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 11, 13) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 8, 8, 12) == 1 );
assert( gamma_move(board, 8, 12, 9) == 1 );
assert( gamma_move(board, 9, 8, 6) == 1 );
assert( gamma_move(board, 10, 3, 0) == 1 );
assert( gamma_move(board, 10, 14, 11) == 1 );
assert( gamma_move(board, 11, 6, 8) == 1 );
assert( gamma_move(board, 11, 11, 0) == 1 );
assert( gamma_move(board, 12, 9, 10) == 1 );
assert( gamma_move(board, 12, 4, 0) == 1 );
assert( gamma_move(board, 13, 12, 1) == 1 );
assert( gamma_move(board, 13, 11, 12) == 1 );
assert( gamma_free_fields(board, 13) == 147 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 2, 4, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 3, 10, 9) == 1 );
assert( gamma_golden_move(board, 3, 1, 11) == 0 );


char* board281061789 = gamma_board(board);
assert( board281061789 != NULL );
assert( strcmp(board281061789, 
"5.......8..13.5.\n"
"..1.......99..10\n"
"116..2....12..6..\n"
"..5...281.3.8..\n"
"..10...11........\n"
".4.3....3.7.2..\n"
"....7...9...13..\n"
"10.9..2.12.13.12...\n"
".......3.......\n"
"....1......7..8\n"
".2.2...........\n"
"..6511......713..\n"
"...1012.8....11...\n") == 0);
free(board281061789);
board281061789 = NULL;
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_free_fields(board, 7) == 142 );
assert( gamma_move(board, 8, 4, 9) == 1 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 1, 9) == 1 );
assert( gamma_move(board, 9, 1, 6) == 1 );
assert( gamma_move(board, 10, 12, 9) == 0 );
assert( gamma_move(board, 10, 1, 12) == 1 );
assert( gamma_move(board, 11, 6, 7) == 1 );
assert( gamma_move(board, 11, 8, 11) == 1 );
assert( gamma_golden_move(board, 11, 1, 2) == 1 );
assert( gamma_move(board, 12, 7, 9) == 0 );
assert( gamma_move(board, 12, 12, 12) == 1 );
assert( gamma_move(board, 13, 1, 9) == 0 );
assert( gamma_free_fields(board, 13) == 135 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_free_fields(board, 1) == 135 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 3, 14, 11) == 0 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 14, 7) == 1 );
assert( gamma_move(board, 5, 14, 4) == 1 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_free_fields(board, 6) == 129 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 10) == 0 );
assert( gamma_move(board, 10, 10, 5) == 1 );
assert( gamma_move(board, 11, 0, 7) == 0 );
assert( gamma_free_fields(board, 11) == 128 );
assert( gamma_move(board, 12, 2, 14) == 0 );
assert( gamma_move(board, 13, 6, 9) == 0 );
assert( gamma_move(board, 13, 14, 2) == 1 );
assert( gamma_free_fields(board, 13) == 127 );
assert( gamma_move(board, 1, 8, 10) == 1 );
assert( gamma_free_fields(board, 1) == 126 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 12, 2) == 1 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 6, 12, 8) == 1 );
assert( gamma_free_fields(board, 6) == 122 );
assert( gamma_golden_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 7, 12, 6) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 9, 14) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 10, 0, 0) == 1 );
assert( gamma_move(board, 11, 7, 4) == 0 );
assert( gamma_move(board, 12, 1, 8) == 1 );
assert( gamma_move(board, 12, 11, 2) == 1 );
assert( gamma_move(board, 13, 2, 2) == 1 );
assert( gamma_busy_fields(board, 13) == 6 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 14, 0) == 1 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 4, 11, 4) == 1 );


char* board895341965 = gamma_board(board);
assert( board895341965 != NULL );
assert( strcmp(board895341965, 
"510......8..13125.\n"
"..1.....11.99..10\n"
"116..2...112..6..\n"
".95.87281.3.8..\n"
".1210..611.....6..\n"
"24.3..11.3.7.2.5\n"
".9..7...9...13..\n"
"10791.2.12.131012...\n"
"..4....3...4..5\n"
"....1.4....7..8\n"
".11132...6...125.13\n"
".26511.6....713..\n"
"10..1012.8.3..11..2\n") == 0);
free(board895341965);
board895341965 = NULL;
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 12, 14) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 7, 3, 10) == 1 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 9, 8, 7) == 0 );
assert( gamma_move(board, 9, 14, 8) == 1 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 8, 0) == 0 );
assert( gamma_move(board, 10, 11, 0) == 0 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_move(board, 11, 1, 6) == 0 );
assert( gamma_golden_move(board, 11, 10, 12) == 0 );
assert( gamma_move(board, 12, 3, 5) == 0 );
assert( gamma_move(board, 12, 1, 9) == 0 );
assert( gamma_move(board, 13, 2, 1) == 0 );
assert( gamma_free_fields(board, 13) == 111 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board369558825 = gamma_board(board);
assert( board369558825 != NULL );
assert( strcmp(board369558825, 
"510......8..13125.\n"
"..1.....11.99..10\n"
"116.72...112..6..\n"
".95.87281.3.8..\n"
".1210..611.....6.9\n"
"24.3..11.3.7.2.5\n"
".9..7...9...13..\n"
"10791.2412.131012...\n"
"..4..5.3...4..5\n"
"....1.4.2..7..8\n"
".11132...6...125.13\n"
".26511.6....713..\n"
"101.1012.8.3..11..2\n") == 0);
free(board369558825);
board369558825 = NULL;
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 8 );


char* board575673081 = gamma_board(board);
assert( board575673081 != NULL );
assert( strcmp(board575673081, 
"510......8..13125.\n"
"..1.....11.99..10\n"
"116.72...112..6..\n"
".95.87281.3.8..\n"
".1210..611.....6.9\n"
"24.3..11.3.7.2.5\n"
".9..7.6.9...13..\n"
"10791.2412.131012...\n"
"..4..5.3...4..5\n"
"....1.4.2..7..8\n"
".11132...6...125.13\n"
".26511.6....713..\n"
"101.1012.8.3..11..2\n") == 0);
free(board575673081);
board575673081 = NULL;
assert( gamma_move(board, 7, 3, 13) == 0 );
assert( gamma_move(board, 8, 13, 3) == 1 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 10, 12, 10) == 0 );
assert( gamma_move(board, 11, 9, 13) == 0 );
assert( gamma_move(board, 11, 12, 1) == 0 );
assert( gamma_move(board, 12, 6, 0) == 0 );
assert( gamma_move(board, 13, 8, 0) == 0 );
assert( gamma_move(board, 13, 9, 12) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 13, 4) == 1 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_free_fields(board, 5) == 102 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 6, 11, 8) == 1 );
assert( gamma_golden_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 12, 3) == 1 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_move(board, 8, 8, 4) == 1 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 12, 14) == 0 );
assert( gamma_move(board, 10, 3, 10) == 0 );
assert( gamma_move(board, 10, 12, 12) == 0 );
assert( gamma_move(board, 11, 6, 10) == 1 );
assert( gamma_golden_possible(board, 11) == 0 );


char* board219513789 = gamma_board(board);
assert( board219513789 != NULL );
assert( strcmp(board219513789, 
"510......813.13125.\n"
"..1.....11.99..10\n"
"116.72.11.112..6..\n"
".95.87281.3.8..\n"
".1210..611....66.9\n"
"24.3..11.3.7.2.5\n"
".9..7.6.9...13..\n"
"10791.2412.131012...\n"
"..4.45.38..4.15\n"
".8..1.4.2..7788\n"
".11132...6...125.13\n"
".26511.6....713..\n"
"101.1012.8.3..11..2\n") == 0);
free(board219513789);
board219513789 = NULL;
assert( gamma_move(board, 12, 10, 2) == 1 );
assert( gamma_move(board, 12, 14, 6) == 1 );
assert( gamma_move(board, 13, 5, 2) == 1 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 8, 9, 1) == 1 );
assert( gamma_move(board, 9, 3, 6) == 1 );
assert( gamma_move(board, 10, 2, 13) == 0 );
assert( gamma_move(board, 10, 13, 2) == 1 );
assert( gamma_busy_fields(board, 10) == 8 );
assert( gamma_move(board, 11, 8, 8) == 1 );
assert( gamma_move(board, 12, 3, 2) == 0 );
assert( gamma_busy_fields(board, 12) == 9 );
assert( gamma_move(board, 13, 12, 6) == 0 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_free_fields(board, 2) == 88 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );


char* board850225983 = gamma_board(board);
assert( board850225983 != NULL );
assert( strcmp(board850225983, 
"510......813.13125.\n"
"..1.....11.99..10\n"
"116.72.11.112..6..\n"
".95187281.3.8..\n"
".1210..611.11..66.9\n"
"24.3..11.3.7.2.5\n"
".9297.6.9...13.12\n"
"10791.2412.131012...\n"
"..4.45.38..4.15\n"
".8.71.4.2..7788\n"
".11132.13.6..121251013\n"
".26511.6..8.713..\n"
"101.1012.8.3..11..2\n") == 0);
free(board850225983);
board850225983 = NULL;
assert( gamma_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 7, 4, 12) == 1 );
assert( gamma_move(board, 8, 3, 10) == 0 );


char* board624471718 = gamma_board(board);
assert( board624471718 != NULL );
assert( strcmp(board624471718, 
"510..7...813.13125.\n"
"..1.....11.99..10\n"
"116.72.11.112..6..\n"
".95187281.3.8..\n"
".1210..611.11..66.9\n"
"24.3..11.3.7.2.5\n"
".9297.6.9...13.12\n"
"10791.2412.131012...\n"
"..4.45.38..4.15\n"
".8.71.4.2..7788\n"
".11132.13.6..121251013\n"
".26511.6..8.713..\n"
"101.1012.8.3..11..2\n") == 0);
free(board624471718);
board624471718 = NULL;
assert( gamma_move(board, 9, 8, 7) == 0 );
assert( gamma_golden_move(board, 9, 0, 8) == 0 );
assert( gamma_move(board, 10, 4, 10) == 0 );
assert( gamma_move(board, 10, 0, 8) == 1 );
assert( gamma_free_fields(board, 10) == 86 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 5, 14) == 0 );
assert( gamma_move(board, 11, 6, 6) == 0 );
assert( gamma_free_fields(board, 11) == 86 );
assert( gamma_move(board, 12, 14, 5) == 1 );
assert( gamma_golden_move(board, 12, 9, 12) == 1 );
assert( gamma_move(board, 13, 8, 10) == 0 );
assert( gamma_move(board, 1, 13, 5) == 1 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_golden_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 7, 13, 12) == 0 );
assert( gamma_move(board, 8, 10, 7) == 0 );
assert( gamma_move(board, 8, 5, 12) == 1 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 10, 2, 0) == 1 );
assert( gamma_move(board, 10, 4, 12) == 0 );
assert( gamma_move(board, 11, 1, 8) == 0 );
assert( gamma_move(board, 11, 6, 4) == 1 );
assert( gamma_move(board, 12, 11, 4) == 0 );
assert( gamma_move(board, 12, 14, 2) == 0 );
assert( gamma_free_fields(board, 12) == 78 );
assert( gamma_move(board, 13, 11, 3) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 5, 11, 6) == 1 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_golden_move(board, 6, 12, 12) == 1 );
assert( gamma_move(board, 7, 7, 7) == 1 );
assert( gamma_free_fields(board, 7) == 75 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 9, 8, 6) == 0 );
assert( gamma_move(board, 10, 8, 5) == 1 );
assert( gamma_move(board, 11, 12, 2) == 0 );
assert( gamma_move(board, 11, 4, 12) == 0 );
assert( gamma_move(board, 12, 14, 3) == 0 );
assert( gamma_move(board, 13, 11, 5) == 0 );
assert( gamma_move(board, 13, 10, 3) == 1 );
assert( gamma_free_fields(board, 13) == 73 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 2, 13, 6) == 1 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 10, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_free_fields(board, 8) == 69 );


char* board124472510 = gamma_board(board);
assert( board124472510 != NULL );
assert( strcmp(board124472510, 
"510..78..812.1365.\n"
"..1.....11.99..10\n"
"116.72.11.112..6..\n"
".95187281.3.8..\n"
"101210..611.11..66.9\n"
"24.3..117317.2.5\n"
".929716.9..513212\n"
"107914241210131012.112\n"
".34.451138..4.15\n"
".8.71.4.2.137788\n"
"211132.13.65.121251013\n"
".26511.6..8.713..\n"
"101101012.8.3.711..2\n") == 0);
free(board124472510);
board124472510 = NULL;
assert( gamma_move(board, 9, 0, 13) == 0 );
assert( gamma_move(board, 9, 14, 3) == 0 );
assert( gamma_move(board, 12, 0, 5) == 0 );
assert( gamma_move(board, 12, 12, 8) == 0 );
assert( gamma_move(board, 13, 14, 4) == 0 );
assert( gamma_move(board, 13, 7, 10) == 1 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_free_fields(board, 2) == 68 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_free_fields(board, 3) == 68 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 6, 10, 14) == 0 );
assert( gamma_move(board, 6, 14, 0) == 0 );
assert( gamma_move(board, 7, 4, 8) == 1 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 9, 13) == 0 );
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_move(board, 10, 10, 2) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 7, 2) == 0 );
assert( gamma_move(board, 12, 10, 2) == 0 );
assert( gamma_move(board, 13, 0, 5) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 12, 5) == 1 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 2, 13, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 2, 12) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_free_fields(board, 4) == 64 );
assert( gamma_move(board, 5, 11, 13) == 0 );
assert( gamma_move(board, 6, 9, 11) == 1 );
assert( gamma_move(board, 6, 14, 0) == 0 );
assert( gamma_move(board, 7, 8, 13) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 1, 10) == 0 );
assert( gamma_move(board, 8, 9, 8) == 1 );
assert( gamma_move(board, 9, 1, 13) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 10, 11, 13) == 0 );
assert( gamma_move(board, 10, 12, 9) == 0 );
assert( gamma_move(board, 11, 11, 9) == 1 );
assert( gamma_move(board, 11, 8, 4) == 0 );
assert( gamma_busy_fields(board, 11) == 11 );
assert( gamma_move(board, 13, 10, 13) == 0 );
assert( gamma_move(board, 13, 8, 0) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_golden_move(board, 2, 9, 12) == 1 );
assert( gamma_move(board, 3, 10, 14) == 0 );
assert( gamma_move(board, 3, 12, 12) == 0 );
assert( gamma_move(board, 4, 10, 8) == 1 );
assert( gamma_move(board, 5, 8, 9) == 0 );


char* board186373566 = gamma_board(board);
assert( board186373566 != NULL );
assert( strcmp(board186373566, 
"5104.78..82.1365.\n"
"..1.....11699..10\n"
"116.72.1113112..6..\n"
"295187281.3118..\n"
"101210.7611.118466.9\n"
"24.3..117317.2.5\n"
".929716.9..513212\n"
"1079142412101310121112\n"
".34.451138..4.15\n"
".8.71.4.2.137788\n"
"211132.13.65.121251013\n"
".26511.6..84713..\n"
"101101012.8.3.711..2\n") == 0);
free(board186373566);
board186373566 = NULL;
assert( gamma_move(board, 7, 10, 10) == 1 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 10, 6, 7) == 0 );
assert( gamma_move(board, 11, 9, 13) == 0 );
assert( gamma_move(board, 11, 12, 11) == 1 );
assert( gamma_move(board, 12, 1, 12) == 0 );
assert( gamma_move(board, 13, 0, 13) == 0 );
assert( gamma_busy_fields(board, 13) == 9 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 5, 11, 7) == 1 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 1, 13) == 0 );
assert( gamma_move(board, 7, 7, 11) == 1 );
assert( gamma_move(board, 9, 8, 13) == 0 );
assert( gamma_move(board, 10, 1, 9) == 0 );
assert( gamma_move(board, 10, 2, 7) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 1, 8) == 0 );
assert( gamma_move(board, 11, 8, 7) == 0 );
assert( gamma_move(board, 12, 11, 1) == 0 );
assert( gamma_move(board, 13, 1, 7) == 0 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 14, 1) == 1 );
assert( gamma_golden_move(board, 3, 0, 12) == 1 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 6, 5, 11) == 1 );
assert( gamma_move(board, 7, 9, 9) == 1 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_free_fields(board, 7) == 16 );
assert( gamma_golden_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 9, 0, 9) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 10, 11, 3) == 0 );
assert( gamma_move(board, 11, 11, 0) == 0 );
assert( gamma_move(board, 11, 7, 12) == 1 );
assert( gamma_move(board, 12, 1, 9) == 0 );
assert( gamma_golden_possible(board, 12) == 0 );
assert( gamma_move(board, 13, 9, 14) == 0 );
assert( gamma_move(board, 13, 0, 0) == 0 );
assert( gamma_free_fields(board, 13) == 47 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );


char* board282276819 = gamma_board(board);
assert( board282276819 != NULL );
assert( strcmp(board282276819, 
"3104.78.1182.1365.\n"
"..1..6.71169911.10\n"
"116.72.11131127.6..\n"
"29518728173118..\n"
"101210.7611.118466.9\n"
"241035.11731752.5\n"
".929716.9..513212\n"
"1079142412101310121112\n"
".348451138..4.15\n"
".8.71.4.2.137788\n"
"211132.13.65.121251013\n"
".26511.6..84713.3\n"
"1011010127823.711..2\n") == 0);
free(board282276819);
board282276819 = NULL;
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 11, 13) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 13) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 9, 10, 3) == 0 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_move(board, 10, 1, 3) == 0 );
assert( gamma_free_fields(board, 10) == 46 );
assert( gamma_move(board, 11, 11, 13) == 0 );
assert( gamma_move(board, 11, 5, 7) == 1 );
assert( gamma_move(board, 12, 11, 3) == 0 );
assert( gamma_move(board, 13, 10, 9) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 13, 0) == 1 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 13 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_move(board, 8, 14, 1) == 0 );
assert( gamma_move(board, 9, 11, 4) == 0 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 10, 4, 0) == 0 );
assert( gamma_move(board, 11, 9, 14) == 0 );
assert( gamma_busy_fields(board, 11) == 14 );
assert( gamma_golden_possible(board, 11) == 0 );
assert( gamma_golden_move(board, 11, 12, 13) == 0 );
assert( gamma_move(board, 12, 3, 0) == 0 );
assert( gamma_move(board, 12, 13, 7) == 1 );
assert( gamma_move(board, 13, 10, 13) == 0 );
assert( gamma_move(board, 13, 14, 9) == 1 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );


char* board533133848 = gamma_board(board);
assert( board533133848 != NULL );
assert( strcmp(board533133848, 
"3104.78.1182.1365.\n"
"..1..6.71169911.10\n"
"116.72.11131127.6..\n"
"29518728173118.13\n"
"101210.7611.118466.9\n"
"2410351111731752125\n"
".929716.92.513212\n"
"1079142412101310121112\n"
"4348451138..4.15\n"
".8.71.4.2.137788\n"
"211132.13.65.121251013\n"
".26511.63.84713.3\n"
"1011010127823.711.62\n") == 0);
free(board533133848);
board533133848 = NULL;
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 9, 11, 1) == 0 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_move(board, 10, 12, 3) == 0 );
assert( gamma_move(board, 11, 11, 0) == 0 );
assert( gamma_busy_fields(board, 11) == 14 );
assert( gamma_free_fields(board, 11) == 39 );
assert( gamma_move(board, 12, 3, 5) == 0 );
assert( gamma_move(board, 13, 5, 9) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_golden_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 8, 8, 13) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_free_fields(board, 8) == 39 );
assert( gamma_move(board, 9, 0, 9) == 0 );
assert( gamma_move(board, 9, 14, 5) == 0 );
assert( gamma_move(board, 10, 9, 7) == 0 );
assert( gamma_move(board, 10, 12, 3) == 0 );
assert( gamma_move(board, 11, 7, 4) == 0 );
assert( gamma_busy_fields(board, 11) == 14 );


char* board633974215 = gamma_board(board);
assert( board633974215 != NULL );
assert( strcmp(board633974215, 
"3104.78.1182.1365.\n"
"..1..6.71169911.10\n"
"116.72.11131127.6..\n"
"29518728173118.13\n"
"101210.7611.118466.9\n"
"2410351111731752125\n"
".929716.92.513212\n"
"1079142412101310121112\n"
"4348451138..4.15\n"
".8.71.4.2.137788\n"
"211132.13.65.121251013\n"
".26511.63.84713.3\n"
"1011010127823.711.62\n") == 0);
free(board633974215);
board633974215 = NULL;
assert( gamma_move(board, 12, 6, 1) == 0 );
assert( gamma_move(board, 13, 1, 9) == 0 );
assert( gamma_move(board, 13, 9, 7) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_golden_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 6, 12, 4) == 1 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 7, 14, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 17 );
assert( gamma_move(board, 8, 4, 11) == 1 );
assert( gamma_move(board, 8, 5, 10) == 1 );
assert( gamma_move(board, 9, 8, 3) == 0 );
assert( gamma_golden_move(board, 9, 0, 8) == 1 );
assert( gamma_busy_fields(board, 10) == 11 );
assert( gamma_move(board, 11, 1, 5) == 0 );
assert( gamma_move(board, 13, 13, 10) == 1 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_free_fields(board, 4) == 35 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 8, 12, 2) == 0 );
assert( gamma_move(board, 8, 11, 7) == 0 );
assert( gamma_golden_move(board, 8, 10, 0) == 1 );
assert( gamma_move(board, 9, 8, 7) == 0 );
assert( gamma_move(board, 10, 7, 10) == 0 );
assert( gamma_move(board, 10, 12, 4) == 0 );
assert( gamma_golden_move(board, 10, 1, 3) == 1 );
assert( gamma_move(board, 11, 3, 7) == 0 );


char* board866160450 = gamma_board(board);
assert( board866160450 != NULL );
assert( strcmp(board866160450, 
"3104.78.1182.1365.\n"
"..1.86.71169911.10\n"
"116.72811131127.613.\n"
"29518728173118.13\n"
"91210.7611.118466.9\n"
"2410351111731752125\n"
".929716.92.513212\n"
"1079142412101310121112\n"
"4348451138..4615\n"
".10.71.4.2.137788\n"
"211132.13.65.121251013\n"
".26511.63.84713.3\n"
"1011010127823.811.62\n") == 0);
free(board866160450);
board866160450 = NULL;
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 4, 14, 9) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_golden_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 6, 12, 12) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 16 );
assert( gamma_move(board, 8, 0, 12) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 9, 8, 7) == 0 );
assert( gamma_move(board, 9, 0, 1) == 1 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 10, 3, 7) == 0 );
assert( gamma_busy_fields(board, 10) == 12 );
assert( gamma_golden_move(board, 10, 10, 4) == 0 );
assert( gamma_move(board, 11, 3, 5) == 0 );
assert( gamma_move(board, 11, 4, 7) == 0 );
assert( gamma_golden_possible(board, 11) == 0 );
assert( gamma_move(board, 12, 8, 7) == 0 );
assert( gamma_move(board, 12, 1, 6) == 0 );
assert( gamma_free_fields(board, 12) == 34 );
assert( gamma_golden_possible(board, 12) == 0 );
assert( gamma_move(board, 13, 2, 10) == 1 );
assert( gamma_free_fields(board, 13) == 33 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 3, 12) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 9, 13) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_move(board, 8, 11, 0) == 0 );
assert( gamma_move(board, 9, 1, 4) == 0 );
assert( gamma_move(board, 9, 8, 8) == 0 );
assert( gamma_busy_fields(board, 9) == 10 );
assert( gamma_move(board, 10, 10, 11) == 0 );


char* board157579058 = gamma_board(board);
assert( board157579058 != NULL );
assert( strcmp(board157579058, 
"3104378.1182.1365.\n"
"..1.86.71169911.10\n"
"1161372811131127.613.\n"
"29518728173118.13\n"
"91210.7611.118466.9\n"
"2410351111731752125\n"
".929716.92.513212\n"
"1079142412101310121112\n"
"4348451138..4615\n"
".10.71.4.2.137788\n"
"211132.13.55.121251013\n"
"926511.63.84713.3\n"
"1011010127823.811.62\n") == 0);
free(board157579058);
board157579058 = NULL;
assert( gamma_move(board, 12, 3, 12) == 0 );
assert( gamma_move(board, 12, 3, 0) == 0 );
assert( gamma_move(board, 13, 5, 7) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 5, 12, 14) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_free_fields(board, 5) == 32 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 7, 8, 12) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_move(board, 9, 14, 9) == 0 );
assert( gamma_free_fields(board, 9) == 32 );
assert( gamma_golden_move(board, 9, 0, 13) == 0 );
assert( gamma_move(board, 10, 6, 7) == 0 );
assert( gamma_move(board, 10, 7, 0) == 0 );
assert( gamma_move(board, 11, 8, 4) == 0 );
assert( gamma_golden_possible(board, 11) == 0 );
assert( gamma_move(board, 12, 5, 1) == 1 );
assert( gamma_move(board, 13, 4, 3) == 0 );


char* board425778065 = gamma_board(board);
assert( board425778065 != NULL );
assert( strcmp(board425778065, 
"3104378.1182.1365.\n"
"..1.86.71169911.10\n"
"1161372811131127.613.\n"
"29518728173118.13\n"
"91210.7611.118466.9\n"
"2410351111731752125\n"
".929716.92.513212\n"
"1079142412101310121112\n"
"4348451138..4615\n"
".10.71.4.2.137788\n"
"211132.13.55.121251013\n"
"9265111263.84713.3\n"
"1011010127823.811.62\n") == 0);
free(board425778065);
board425778065 = NULL;
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );


char* board793424672 = gamma_board(board);
assert( board793424672 != NULL );
assert( strcmp(board793424672, 
"3104378.1182.1365.\n"
"..1.86.71169911.10\n"
"1161372811131127.613.\n"
"29518728173118.13\n"
"91210.7611.118466.9\n"
"2410351111731752125\n"
".929716.92.513212\n"
"1079142412101310121112\n"
"4348451138..4615\n"
".10.71.4.2.137788\n"
"211132.13.55.121251013\n"
"9265111263.84713.3\n"
"1011010127823.811.62\n") == 0);
free(board793424672);
board793424672 = NULL;
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_golden_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 11, 13) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 15 );
assert( gamma_move(board, 9, 3, 9) == 0 );
assert( gamma_move(board, 10, 4, 10) == 0 );
assert( gamma_move(board, 10, 13, 4) == 0 );
assert( gamma_move(board, 11, 14, 11) == 0 );
assert( gamma_free_fields(board, 11) == 31 );
assert( gamma_move(board, 12, 11, 3) == 0 );
assert( gamma_move(board, 12, 9, 2) == 1 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 12, 8) == 0 );


char* board466257338 = gamma_board(board);
assert( board466257338 != NULL );
assert( strcmp(board466257338, 
"3104378.1182.1365.\n"
"..1.86.71169911.10\n"
"1161372811131127.613.\n"
"29518728173118.13\n"
"91210.7611.118466.9\n"
"2410351111731752125\n"
".929716.92.513212\n"
"1079142412101310121112\n"
"4348451138..4615\n"
".10.71.4.2.137788\n"
"211132.13.5512121251013\n"
"9265111263.84713.3\n"
"1011010127823.811.62\n") == 0);
free(board466257338);
board466257338 = NULL;
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );


char* board348640664 = gamma_board(board);
assert( board348640664 != NULL );
assert( strcmp(board348640664, 
"3104378.1182.1365.\n"
"..1.86.71169911.10\n"
"1161372811131127.613.\n"
"29518728173118.13\n"
"91210.7611.118466.9\n"
"2410351111731752125\n"
".929716.92.513212\n"
"1079142412101310121112\n"
"4348451138..4615\n"
".10.71.4.2.137788\n"
"211132.13.5512121251013\n"
"9265111263.84713.3\n"
"1011010127823.811.62\n") == 0);
free(board348640664);
board348640664 = NULL;
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 11, 13) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 7, 12, 14) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 8, 1, 11) == 1 );
assert( gamma_golden_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 9, 9, 13) == 0 );
assert( gamma_move(board, 10, 12, 6) == 0 );
assert( gamma_move(board, 10, 10, 5) == 0 );
assert( gamma_golden_move(board, 10, 7, 3) == 0 );
assert( gamma_move(board, 11, 3, 7) == 0 );
assert( gamma_move(board, 11, 2, 6) == 0 );
assert( gamma_move(board, 12, 8, 3) == 0 );
assert( gamma_move(board, 13, 6, 0) == 0 );
assert( gamma_move(board, 13, 12, 9) == 0 );


gamma_delete(board);

    return 0;
}
