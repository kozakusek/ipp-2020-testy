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
uuid: 669585333
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 9, 14, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_free_fields(board, 2) == 133 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board914620639 = gamma_board(board);
assert( board914620639 != NULL );
assert( strcmp(board914620639, 
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...2...........\n"
"...............\n"
"...............\n"
"....1..........\n"
"...............\n") == 0);
free(board914620639);
board914620639 = NULL;
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 4, 14) == 0 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 7, 1, 13) == 0 );
assert( gamma_move(board, 7, 13, 0) == 1 );
assert( gamma_move(board, 8, 2, 13) == 0 );
assert( gamma_move(board, 9, 5, 11) == 0 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 10, 6, 10) == 0 );
assert( gamma_busy_fields(board, 10) == 0 );
assert( gamma_move(board, 11, 8, 7) == 1 );
assert( gamma_busy_fields(board, 12) == 0 );
assert( gamma_move(board, 13, 2, 8) == 1 );
assert( gamma_free_fields(board, 13) == 125 );
assert( gamma_golden_move(board, 14, 4, 3) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 11, 7) == 1 );
assert( gamma_move(board, 4, 13, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_golden_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_golden_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 9, 6, 1) == 1 );
assert( gamma_move(board, 9, 12, 0) == 1 );
assert( gamma_move(board, 10, 5, 11) == 0 );
assert( gamma_move(board, 10, 6, 4) == 1 );
assert( gamma_free_fields(board, 10) == 114 );
assert( gamma_move(board, 11, 4, 10) == 0 );
assert( gamma_move(board, 11, 3, 6) == 1 );
assert( gamma_move(board, 12, 8, 13) == 0 );
assert( gamma_move(board, 12, 1, 7) == 0 );
assert( gamma_move(board, 13, 4, 7) == 1 );
assert( gamma_move(board, 14, 1, 7) == 0 );
assert( gamma_move(board, 14, 7, 6) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_free_fields(board, 6) == 107 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 8, 8, 12) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 9, 11, 7) == 0 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_move(board, 10, 5, 2) == 1 );
assert( gamma_move(board, 11, 2, 1) == 1 );
assert( gamma_move(board, 12, 7, 5) == 0 );
assert( gamma_move(board, 12, 12, 7) == 1 );
assert( gamma_move(board, 13, 2, 12) == 0 );
assert( gamma_move(board, 13, 4, 4) == 1 );
assert( gamma_move(board, 14, 7, 6) == 0 );
assert( gamma_move(board, 14, 3, 2) == 1 );
assert( gamma_busy_fields(board, 14) == 1 );


char* board240335698 = gamma_board(board);
assert( board240335698 != NULL );
assert( strcmp(board240335698, 
"..136...........\n"
".3..13..211..412..\n"
"...11.566.....4.\n"
".......2.......\n"
"...213.10.5......\n"
"4......2.......\n"
"...14.10.........\n"
"..1121.9...4.5..\n"
"..6.78......97.\n") == 0);
free(board240335698);
board240335698 = NULL;
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );


char* board444745486 = gamma_board(board);
assert( board444745486 != NULL );
assert( strcmp(board444745486, 
"..136...........\n"
".3..13..211..412..\n"
"...11.566.....4.\n"
".......2.......\n"
"...213.10.5......\n"
"4......2.......\n"
"...14.10.........\n"
"..1121.9...4.5..\n"
"..6.78......97.\n") == 0);
free(board444745486);
board444745486 = NULL;
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 3, 6) == 0 );


char* board554421149 = gamma_board(board);
assert( board554421149 != NULL );
assert( strcmp(board554421149, 
"..136...........\n"
".3..13..211..412..\n"
"...11.566.....4.\n"
".......2.......\n"
"...213.10.5......\n"
"4......2.......\n"
"...14.10.........\n"
"..1121.9...4.5..\n"
"..6.78.....297.\n") == 0);
free(board554421149);
board554421149 = NULL;
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 10, 8) == 1 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 13, 5) == 1 );
assert( gamma_move(board, 9, 7, 14) == 0 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 11, 2, 9) == 0 );
assert( gamma_move(board, 11, 2, 1) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 4, 1) == 0 );
assert( gamma_move(board, 13, 7, 13) == 0 );
assert( gamma_move(board, 13, 6, 5) == 1 );
assert( gamma_golden_move(board, 13, 1, 4) == 0 );
assert( gamma_move(board, 14, 7, 10) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 3, 10, 2) == 1 );


char* board916356964 = gamma_board(board);
assert( board916356964 != NULL );
assert( strcmp(board916356964, 
"..136......5....\n"
".3..13..211.1412..\n"
"...11.566.4...4.\n"
"......132.....8.\n"
"...213.10.5......\n"
"4......2.......\n"
"...14.10....3....\n"
"..1121.9...4.5..\n"
"..6.783.4..297.\n") == 0);
free(board916356964);
board916356964 = NULL;
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 4, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_free_fields(board, 7) == 92 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 8, 11, 6) == 1 );
assert( gamma_move(board, 9, 8, 1) == 1 );
assert( gamma_move(board, 10, 3, 14) == 0 );
assert( gamma_move(board, 10, 1, 8) == 1 );
assert( gamma_free_fields(board, 10) == 89 );
assert( gamma_move(board, 12, 4, 11) == 0 );
assert( gamma_move(board, 12, 2, 7) == 1 );
assert( gamma_move(board, 13, 1, 5) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 13, 8) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_free_fields(board, 5) == 85 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 9, 5, 7) == 1 );
assert( gamma_busy_fields(board, 9) == 4 );


char* board213760363 = gamma_board(board);
assert( board213760363 != NULL );
assert( strcmp(board213760363, 
".10136...6..5..1.\n"
".3128139.211.1412..\n"
"...11.566.4.8.4.\n"
".13....132.....8.\n"
"...213.10.5......\n"
"4......2.......\n"
"...14.10....3....\n"
".61121.9.9.4.5..\n"
".46.783.4..297.\n") == 0);
free(board213760363);
board213760363 = NULL;
assert( gamma_move(board, 10, 1, 4) == 1 );
assert( gamma_move(board, 11, 2, 8) == 0 );
assert( gamma_move(board, 11, 13, 4) == 1 );
assert( gamma_move(board, 12, 6, 4) == 0 );
assert( gamma_free_fields(board, 12) == 80 );
assert( gamma_move(board, 13, 4, 9) == 0 );
assert( gamma_move(board, 13, 0, 3) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 1, 6) == 1 );
assert( gamma_busy_fields(board, 14) == 2 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 3, 14, 2) == 1 );
assert( gamma_move(board, 4, 4, 14) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 5, 9, 8) == 1 );
assert( gamma_golden_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_free_fields(board, 7) == 75 );


char* board348194148 = gamma_board(board);
assert( board348194148 != NULL );
assert( strcmp(board348194148, 
".10136...6.55..1.\n"
".3128139.211.1412..\n"
".14.11.566.4.8.4.\n"
".13....1322....8.\n"
"210.213.10.5....11.\n"
"4......2.......\n"
"...14.10....3...3\n"
".61121.9.9.4.5..\n"
".46.783.4..297.\n") == 0);
free(board348194148);
board348194148 = NULL;
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 8, 8, 6) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 4) == 0 );
assert( gamma_move(board, 9, 8, 5) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 0, 14) == 0 );
assert( gamma_move(board, 11, 8, 1) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 3, 5) == 1 );
assert( gamma_move(board, 13, 2, 2) == 1 );
assert( gamma_move(board, 13, 2, 1) == 0 );
assert( gamma_move(board, 14, 8, 1) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_free_fields(board, 3) == 70 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 6, 7, 13) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_free_fields(board, 10) == 69 );
assert( gamma_move(board, 11, 2, 7) == 0 );
assert( gamma_move(board, 11, 5, 0) == 0 );
assert( gamma_move(board, 12, 5, 2) == 0 );
assert( gamma_move(board, 12, 0, 8) == 0 );
assert( gamma_move(board, 13, 7, 6) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 0, 9) == 0 );
assert( gamma_move(board, 14, 14, 5) == 1 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 8, 12) == 0 );
assert( gamma_move(board, 8, 4, 12) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 3, 3) == 1 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_free_fields(board, 10) == 65 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 12, 3, 4) == 0 );
assert( gamma_move(board, 12, 11, 8) == 1 );
assert( gamma_move(board, 13, 0, 9) == 0 );
assert( gamma_move(board, 13, 11, 0) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 2, 4) == 0 );
assert( gamma_move(board, 14, 10, 4) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_free_fields(board, 3) == 62 );
assert( gamma_move(board, 4, 10, 6) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 6, 12, 5) == 1 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 7, 9, 7) == 1 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 10, 1, 0) == 0 );
assert( gamma_move(board, 10, 5, 5) == 1 );
assert( gamma_move(board, 11, 4, 12) == 0 );
assert( gamma_move(board, 11, 14, 1) == 1 );
assert( gamma_move(board, 12, 7, 0) == 1 );
assert( gamma_move(board, 13, 8, 6) == 0 );
assert( gamma_move(board, 14, 12, 1) == 0 );
assert( gamma_move(board, 14, 6, 2) == 1 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 6, 0, 14) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 11, 4) == 1 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 9, 8, 12) == 0 );
assert( gamma_move(board, 10, 2, 12) == 0 );
assert( gamma_move(board, 10, 14, 6) == 1 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_move(board, 11, 0, 5) == 1 );
assert( gamma_move(board, 11, 6, 0) == 0 );
assert( gamma_move(board, 12, 3, 9) == 0 );
assert( gamma_move(board, 12, 9, 3) == 1 );
assert( gamma_busy_fields(board, 12) == 6 );
assert( gamma_move(board, 13, 8, 8) == 1 );
assert( gamma_move(board, 14, 6, 0) == 0 );
assert( gamma_move(board, 14, 6, 6) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 6, 8, 4) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 8, 2, 12) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 10, 3, 0) == 1 );
assert( gamma_move(board, 11, 2, 8) == 0 );
assert( gamma_move(board, 11, 7, 3) == 0 );
assert( gamma_move(board, 12, 0, 10) == 0 );
assert( gamma_move(board, 12, 5, 6) == 0 );
assert( gamma_move(board, 13, 8, 12) == 0 );
assert( gamma_move(board, 14, 3, 1) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 3, 14, 0) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );


char* board640798380 = gamma_board(board);
assert( board640798380 != NULL );
assert( strcmp(board640798380, 
"810136...6135512.1.\n"
"13128139.21171412..\n"
".14.11.5668448.410\n"
"1113.128101322...6814\n"
"2105213.1055.147.11.\n"
"4..9...2.121....\n"
".3131431014...3...3\n"
".61121.9.9.425.11\n"
".4610783124..2973\n") == 0);
free(board640798380);
board640798380 = NULL;
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 5, 13, 3) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_free_fields(board, 6) == 44 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_free_fields(board, 7) == 44 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, 13, 4) == 0 );


char* board787498731 = gamma_board(board);
assert( board787498731 != NULL );
assert( strcmp(board787498731, 
"810136...6135512.1.\n"
"13128139.21171412..\n"
".14.11.5668448.410\n"
"1113.128101322...6814\n"
"2105213.1055.147.11.\n"
"4..9...2.121..5.\n"
".3131431014...3...3\n"
".61121.9.9.425.11\n"
".4610783124..2973\n") == 0);
free(board787498731);
board787498731 = NULL;
assert( gamma_move(board, 11, 6, 2) == 0 );
assert( gamma_move(board, 11, 5, 3) == 1 );
assert( gamma_move(board, 12, 1, 0) == 0 );
assert( gamma_move(board, 12, 8, 5) == 0 );
assert( gamma_move(board, 13, 0, 6) == 0 );
assert( gamma_move(board, 14, 13, 3) == 0 );
assert( gamma_busy_fields(board, 14) == 5 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_free_fields(board, 6) == 42 );
assert( gamma_move(board, 7, 2, 5) == 1 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_golden_move(board, 9, 3, 13) == 0 );
assert( gamma_move(board, 10, 4, 3) == 0 );
assert( gamma_move(board, 10, 0, 1) == 0 );
assert( gamma_move(board, 11, 0, 8) == 0 );
assert( gamma_move(board, 13, 3, 6) == 0 );
assert( gamma_move(board, 13, 2, 6) == 0 );
assert( gamma_busy_fields(board, 13) == 7 );
assert( gamma_move(board, 14, 8, 6) == 0 );
assert( gamma_free_fields(board, 14) == 41 );


char* board195045283 = gamma_board(board);
assert( board195045283 != NULL );
assert( strcmp(board195045283, 
"810136...6135512.1.\n"
"13128139.21171412..\n"
".14.11.5668448.410\n"
"11137128101322...6814\n"
"2105213.1055.147.11.\n"
"4..9.11.2.121..5.\n"
".3131431014...3...3\n"
"161121.9.9.425.11\n"
".4610783124..2973\n") == 0);
free(board195045283);
board195045283 = NULL;
assert( gamma_move(board, 1, 14, 7) == 1 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 14, 5) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 14, 4) == 1 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_free_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 9, 10, 8) == 0 );
assert( gamma_move(board, 10, 4, 12) == 0 );
assert( gamma_move(board, 10, 4, 6) == 0 );
assert( gamma_move(board, 12, 0, 10) == 0 );
assert( gamma_move(board, 12, 4, 6) == 1 );
assert( gamma_busy_fields(board, 12) == 7 );
assert( gamma_move(board, 13, 3, 11) == 0 );
assert( gamma_move(board, 13, 8, 2) == 0 );
assert( gamma_move(board, 14, 5, 11) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_golden_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board224083461 = gamma_board(board);
assert( board224083461 != NULL );
assert( strcmp(board224083461, 
"810136...6135512.1.\n"
"13128139.21171412.1\n"
".14.11125668448.410\n"
"11137128101322...6814\n"
"2105213.1055.147.116\n"
"4..9.11.2.121..5.\n"
".3131431014...3...3\n"
"161121.9.9.425.11\n"
".46107831244.2973\n") == 0);
free(board224083461);
board224083461 = NULL;
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 10, 11, 7) == 0 );
assert( gamma_move(board, 10, 9, 4) == 0 );
assert( gamma_move(board, 11, 0, 10) == 0 );
assert( gamma_move(board, 12, 4, 12) == 0 );
assert( gamma_busy_fields(board, 12) == 7 );
assert( gamma_move(board, 13, 12, 1) == 0 );
assert( gamma_golden_move(board, 13, 2, 6) == 0 );
assert( gamma_move(board, 14, 2, 12) == 0 );
assert( gamma_move(board, 14, 10, 6) == 0 );


char* board813610314 = gamma_board(board);
assert( board813610314 != NULL );
assert( strcmp(board813610314, 
"810136...6135512.1.\n"
"13128139.21171412.1\n"
".14.11125668448.410\n"
"11137128101322...6814\n"
"2105213.1055.147.116\n"
"4..9.11.2.121..5.\n"
".3131431014...3...3\n"
"161121.9.9.425.11\n"
".46107831244.2973\n") == 0);
free(board813610314);
board813610314 = NULL;
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_free_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_golden_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_golden_move(board, 5, 7, 12) == 0 );


char* board828060618 = gamma_board(board);
assert( board828060618 != NULL );
assert( strcmp(board828060618, 
"83136...6135512.1.\n"
"13128139.21171412.1\n"
".14.11125668448.410\n"
"11137128101322...6814\n"
"2105213.1055.147.116\n"
"4..9.11.2.121..5.\n"
".3131431014...3...3\n"
"161121.9.9.425.11\n"
".46107831244.2973\n") == 0);
free(board828060618);
board828060618 = NULL;
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 8, 2, 13) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_move(board, 10, 1, 6) == 0 );
assert( gamma_move(board, 11, 4, 5) == 0 );
assert( gamma_move(board, 11, 4, 4) == 0 );
assert( gamma_free_fields(board, 11) == 7 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 4, 8) == 0 );
assert( gamma_move(board, 13, 0, 7) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_golden_move(board, 13, 1, 3) == 0 );
assert( gamma_golden_move(board, 14, 2, 14) == 0 );


char* board859347223 = gamma_board(board);
assert( board859347223 != NULL );
assert( strcmp(board859347223, 
"83136...6135512.1.\n"
"13128139.21171412.1\n"
".14.11125668448.410\n"
"11137128101322...6814\n"
"2105213.1055.147.116\n"
"4..9.11.2.121..5.\n"
".3131431014...3...3\n"
"161121.9.9.425.11\n"
".46107831244.2973\n") == 0);
free(board859347223);
board859347223 = NULL;
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_golden_move(board, 7, 5, 13) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 9, 10, 1) == 0 );
assert( gamma_move(board, 11, 4, 5) == 0 );
assert( gamma_busy_fields(board, 11) == 7 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 0, 10) == 0 );
assert( gamma_move(board, 13, 4, 5) == 0 );
assert( gamma_move(board, 13, 7, 1) == 0 );
assert( gamma_busy_fields(board, 13) == 7 );
assert( gamma_move(board, 14, 4, 5) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_free_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 7, 14, 7) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 9, 5, 10) == 0 );
assert( gamma_move(board, 9, 2, 3) == 1 );
assert( gamma_move(board, 11, 11, 8) == 0 );
assert( gamma_move(board, 11, 8, 2) == 0 );
assert( gamma_move(board, 12, 0, 8) == 0 );
assert( gamma_move(board, 13, 12, 6) == 0 );
assert( gamma_move(board, 14, 7, 6) == 0 );
assert( gamma_move(board, 14, 14, 5) == 0 );
assert( gamma_free_fields(board, 14) == 36 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );


gamma_delete(board);

    return 0;
}
