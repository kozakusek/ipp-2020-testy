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
uuid: 161817078
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 9, 8, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_golden_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );


char* board546312199 = gamma_board(board);
assert( board546312199 != NULL );
assert( strcmp(board546312199, 
"............\n"
"............\n"
"........2...\n"
"......1.....\n"
"............\n"
"............\n"
"3....1......\n"
"............\n"
"............\n") == 0);
free(board546312199);
board546312199 = NULL;
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board255525946 = gamma_board(board);
assert( board255525946 != NULL );
assert( strcmp(board255525946, 
"............\n"
"............\n"
"4.......2...\n"
"......1.....\n"
"..5.........\n"
"..5.........\n"
"3....1......\n"
"....6.......\n"
"............\n") == 0);
free(board255525946);
board255525946 = NULL;
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 7, 10, 1) == 1 );
assert( gamma_move(board, 8, 7, 11) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_free_fields(board, 1) == 97 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_free_fields(board, 4) == 95 );
assert( gamma_golden_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 6, 1, 8) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 9, 4) == 1 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 10, 8) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 11, 2) == 1 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board657182354 = gamma_board(board);
assert( board657182354 != NULL );
assert( strcmp(board657182354, 
".6........4.\n"
"............\n"
"4...1...2...\n"
".....31.....\n"
"..5..4...7..\n"
"..5.....3...\n"
"3.7..1..2..5\n"
"..2.67....7.\n"
".7.2.6......\n") == 0);
free(board657182354);
board657182354 = NULL;
assert( gamma_move(board, 8, 5, 3) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 1, 10, 0) == 1 );


char* board479396365 = gamma_board(board);
assert( board479396365 != NULL );
assert( strcmp(board479396365, 
".6..1.....4.\n"
"............\n"
"4...1...2...\n"
".....31.....\n"
"..5..4...7..\n"
"..5..8..3...\n"
"3.7..1..2..5\n"
"..2.67....7.\n"
".7.2.6....1.\n") == 0);
free(board479396365);
board479396365 = NULL;
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 0) == 1 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );


char* board161404404 = gamma_board(board);
assert( board161404404 != NULL );
assert( strcmp(board161404404, 
".6..1.....4.\n"
"1..5........\n"
"4...1.142...\n"
".....31.....\n"
"..5..4...73.\n"
"..5..8..3...\n"
"3.7..1..2..5\n"
"..2467....7.\n"
".7.2.6..7.1.\n") == 0);
free(board161404404);
board161404404 = NULL;
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_golden_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_golden_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 2, 0) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );


char* board976847474 = gamma_board(board);
assert( board976847474 != NULL );
assert( strcmp(board976847474, 
".6..1.....4.\n"
"1..536......\n"
"4..71.142...\n"
".5...31..1..\n"
"..5..4...73.\n"
"..5..8.43...\n"
"3.7.21..2..5\n"
"..2467..3.7.\n"
".782.6..7.1.\n") == 0);
free(board976847474);
board976847474 = NULL;
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_golden_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 5, 10, 2) == 1 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 8, 7) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );


char* board235706670 = gamma_board(board);
assert( board235706670 != NULL );
assert( strcmp(board235706670, 
"26..1.....4.\n"
"1..536.62...\n"
"4..71.142...\n"
".54..31.61..\n"
"..5..4...73.\n"
"..5..8.43...\n"
"3.7.21.32.55\n"
"..2467..3.7.\n"
".78286..7.1.\n") == 0);
free(board235706670);
board235706670 = NULL;
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_free_fields(board, 5) == 57 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_free_fields(board, 6) == 11 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 8, 4) == 1 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_golden_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_golden_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_free_fields(board, 5) == 50 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_free_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_free_fields(board, 1) == 11 );
assert( gamma_golden_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );


char* board884780303 = gamma_board(board);
assert( board884780303 != NULL );
assert( strcmp(board884780303, 
"268.1.....4.\n"
"1..536.62...\n"
"4..71.142...\n"
".54.831661..\n"
"..5..4..873.\n"
"..5.28.43...\n"
"3.7.21.32.55\n"
"..24676.3.7.\n"
"278286.57.1.\n") == 0);
free(board884780303);
board884780303 = NULL;
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_golden_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_golden_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 7, 6, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_free_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_golden_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_free_fields(board, 8) == 49 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 7, 8, 11) == 0 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_golden_move(board, 8, 8, 5) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_free_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 8, 2, 5) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_golden_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 11, 7) == 1 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 8, 9, 2) == 0 );
assert( gamma_free_fields(board, 8) == 8 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_golden_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_free_fields(board, 6) == 5 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 7, 8, 3) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 6, 10) == 0 );


char* board834072555 = gamma_board(board);
assert( board834072555 != NULL );
assert( strcmp(board834072555, 
"268.11....4.\n"
"41.536562..8\n"
"4.571.142...\n"
".54.831681..\n"
"..5.444.873.\n"
"..5.28.43...\n"
"327.21332.55\n"
".224676.3.7.\n"
"278286.57.1.\n") == 0);
free(board834072555);
board834072555 = NULL;
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_free_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 7, 11, 4) == 0 );
assert( gamma_golden_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 10, 5) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );


char* board450913004 = gamma_board(board);
assert( board450913004 != NULL );
assert( strcmp(board450913004, 
"268.11....4.\n"
"41.536562..8\n"
"44571.142...\n"
".54.8316811.\n"
"..5.4446873.\n"
"..5.28.43...\n"
"327.21332.55\n"
".224676.3.7.\n"
"278286.57.1.\n") == 0);
free(board450913004);
board450913004 = NULL;
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_golden_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board423521062 = gamma_board(board);
assert( board423521062 != NULL );
assert( strcmp(board423521062, 
"268.11....4.\n"
"41.536562..8\n"
"44571.142...\n"
".54.8316811.\n"
"..5.4446873.\n"
"..5.28.43...\n"
"327.21332.55\n"
".224676.3.7.\n"
"278286.57.1.\n") == 0);
free(board423521062);
board423521062 = NULL;
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_free_fields(board, 8) == 7 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_golden_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );


gamma_delete(board);

    return 0;
}
