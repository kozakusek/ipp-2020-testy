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
uuid: 910946807
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 20, 9, 15);
assert( board != NULL );


assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_free_fields(board, 2) == 159 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_free_fields(board, 3) == 159 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 5, 19) == 1 );
assert( gamma_move(board, 5, 7, 15) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 16) == 1 );
assert( gamma_move(board, 7, 2, 17) == 1 );
assert( gamma_move(board, 9, 6, 7) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 13) == 1 );
assert( gamma_golden_move(board, 5, 19, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_free_fields(board, 7) == 152 );
assert( gamma_move(board, 8, 6, 19) == 1 );
assert( gamma_move(board, 9, 7, 14) == 1 );
assert( gamma_busy_fields(board, 1) == 0 );
assert( gamma_free_fields(board, 1) == 150 );
assert( gamma_move(board, 3, 0, -1) == 0 );
assert( gamma_move(board, 4, 3, 20) == 0 );
assert( gamma_move(board, 5, 5, 19) == 0 );
assert( gamma_move(board, 6, 5, 9) == 1 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_free_fields(board, 7) == 148 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_golden_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_free_fields(board, 6) == 145 );
assert( gamma_move(board, 8, 4, 18) == 1 );
assert( gamma_move(board, 9, 5, -1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_golden_move(board, 2, 18, 4) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_free_fields(board, 3) == 142 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_free_fields(board, 4) == 141 );
assert( gamma_move(board, 9, 8, 10) == 0 );


char* board564904397 = gamma_board(board);
assert( board564904397 != NULL );
assert( strcmp(board564904397, 
".....48.\n"
"....8...\n"
"..7.....\n"
"....6...\n"
".......5\n"
".......9\n"
"....5...\n"
"........\n"
".....2..\n"
"........\n"
".....6.4\n"
"........\n"
"......9.\n"
".3......\n"
"........\n"
"........\n"
"2......5\n"
"........\n"
"8......6\n"
".7.2....\n") == 0);
free(board564904397);
board564904397 = NULL;
assert( gamma_move(board, 1, 6, 12) == 1 );
assert( gamma_move(board, 2, 5, 17) == 1 );
assert( gamma_move(board, 3, 0, 15) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 6, -1, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_free_fields(board, 6) == 137 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 11) == 1 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 8, 3, 8) == 1 );
assert( gamma_move(board, 9, 3, 13) == 1 );
assert( gamma_golden_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 2, 20) == 0 );
assert( gamma_move(board, 5, 4, 10) == 1 );
assert( gamma_move(board, 7, 3, 20) == 0 );
assert( gamma_move(board, 9, 4, 4) == 1 );
assert( gamma_move(board, 2, 3, 14) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 4, 15) == 1 );
assert( gamma_move(board, 7, 3, 17) == 1 );
assert( gamma_move(board, 8, 4, 20) == 0 );
assert( gamma_move(board, 1, 2, -1) == 0 );


char* board201343839 = gamma_board(board);
assert( board201343839 != NULL );
assert( strcmp(board201343839, 
".....48.\n"
"....8...\n"
"..77.2..\n"
"....6...\n"
"3...6..5\n"
"...2...9\n"
"...95...\n"
"......1.\n"
"...7.2..\n"
"....5...\n"
".....6.4\n"
"...8....\n"
"....5.9.\n"
"53......\n"
"........\n"
"....93..\n"
"2......5\n"
".....4..\n"
"8....6.6\n"
".7.2....\n") == 0);
free(board201343839);
board201343839 = NULL;
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 2, 15) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 5, 4, 17) == 1 );
assert( gamma_move(board, 6, 6, 13) == 1 );
assert( gamma_free_fields(board, 6) == 121 );
assert( gamma_free_fields(board, 7) == 121 );


char* board604516158 = gamma_board(board);
assert( board604516158 != NULL );
assert( strcmp(board604516158, 
".....48.\n"
"....8...\n"
"..7752..\n"
"....6...\n"
"3.3.6..5\n"
"...2...9\n"
"...95.6.\n"
"......1.\n"
"...7.2..\n"
"....5...\n"
".....6.4\n"
"...8....\n"
"..3.5.9.\n"
"53......\n"
"........\n"
"....93..\n"
"2......5\n"
".....4..\n"
"3....6.6\n"
".7.2....\n") == 0);
free(board604516158);
board604516158 = NULL;
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 9, 6, 19) == 0 );
assert( gamma_move(board, 1, 0, 11) == 1 );
assert( gamma_move(board, 2, 0, 14) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );


char* board155922594 = gamma_board(board);
assert( board155922594 != NULL );
assert( strcmp(board155922594, 
".....48.\n"
"....8...\n"
"..7752..\n"
"....6...\n"
"3.3.6..5\n"
"2..2...9\n"
"...95.6.\n"
"......1.\n"
"1..7.2..\n"
"....5...\n"
".....6.4\n"
"...8....\n"
"..3.5.9.\n"
"53......\n"
"........\n"
"...493..\n"
"2......5\n"
".....4..\n"
"8....6.6\n"
".7.2....\n") == 0);
free(board155922594);
board155922594 = NULL;
assert( gamma_move(board, 5, 3, 18) == 1 );
assert( gamma_free_fields(board, 5) == 117 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 17, 2) == 0 );
assert( gamma_move(board, 7, 0, 15) == 0 );
assert( gamma_golden_move(board, 8, 12, 6) == 0 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_free_fields(board, 3) == 116 );
assert( gamma_move(board, 4, 4, 18) == 0 );
assert( gamma_move(board, 5, 3, -1) == 0 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_move(board, 7, 6, 18) == 1 );
assert( gamma_move(board, 9, 5, 11) == 0 );
assert( gamma_move(board, 2, -1, 6) == 0 );
assert( gamma_move(board, 4, 5, 13) == 1 );
assert( gamma_move(board, 5, -1, 9) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_free_fields(board, 6) == 113 );
assert( gamma_move(board, 7, 5, 16) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, -1, 11) == 0 );
assert( gamma_move(board, 9, 6, 12) == 0 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_golden_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 3, 17) == 0 );
assert( gamma_move(board, 5, 1, 11) == 1 );
assert( gamma_free_fields(board, 5) == 110 );
assert( gamma_move(board, 7, 7, 17) == 1 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_golden_move(board, 8, 12, 6) == 0 );
assert( gamma_free_fields(board, 1) == 108 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_move(board, 5, 5, 20) == 0 );
assert( gamma_golden_move(board, 5, 14, 0) == 0 );
assert( gamma_move(board, 6, -1, 14) == 0 );
assert( gamma_move(board, 7, 3, 16) == 1 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 6, 19) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 2, 12) == 1 );
assert( gamma_move(board, 4, 1, 12) == 1 );
assert( gamma_move(board, 5, 0, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, -1, 10) == 0 );
assert( gamma_free_fields(board, 6) == 100 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_free_fields(board, 7) == 99 );
assert( gamma_move(board, 8, 7, 20) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 6, 7, 13) == 1 );


char* board474212603 = gamma_board(board);
assert( board474212603 != NULL );
assert( strcmp(board474212603, 
".....48.\n"
"...58.7.\n"
"..7752.7\n"
"...767..\n"
"3.3.6..5\n"
"2..2...9\n"
"...95466\n"
"543...1.\n"
"15.7.2..\n"
"..4.5...\n"
"...616.4\n"
"...8.4..\n"
"..3.5.9.\n"
"53......\n"
"....7...\n"
".6.4932.\n"
"28.....5\n"
"3...34.1\n"
"8....6.6\n"
".1.2....\n") == 0);
free(board474212603);
board474212603 = NULL;
assert( gamma_move(board, 7, 2, 13) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 2, -1) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );


char* board671260627 = gamma_board(board);
assert( board671260627 != NULL );
assert( strcmp(board671260627, 
".....48.\n"
"...58.7.\n"
"..7752.7\n"
"...767..\n"
"3.3.6..5\n"
"2..2...9\n"
"..795466\n"
"543...1.\n"
"15.7.2..\n"
"..4.5...\n"
"...616.4\n"
"...8.4..\n"
"..3.5.9.\n"
"53......\n"
"....7...\n"
".6.4932.\n"
"28.....5\n"
"3...34.1\n"
"8....6.6\n"
".1.2....\n") == 0);
free(board671260627);
board671260627 = NULL;
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 6, 7, 15) == 0 );
assert( gamma_move(board, 7, 2, 8) == 1 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 7, 18) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 8, -1) == 0 );


char* board865313764 = gamma_board(board);
assert( board865313764 != NULL );
assert( strcmp(board865313764, 
".....48.\n"
"...58.72\n"
"..7752.7\n"
"...767..\n"
"3.3.6..5\n"
"2..2...9\n"
"..795466\n"
"543...1.\n"
"15.7.2..\n"
"..4.5...\n"
"...616.4\n"
"..78.4..\n"
"..3.5.9.\n"
"53....3.\n"
"..5.7...\n"
".6.4932.\n"
"28.....5\n"
"3...34.1\n"
"88...6.6\n"
".1.2....\n") == 0);
free(board865313764);
board865313764 = NULL;
assert( gamma_move(board, 5, -1, 19) == 0 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 8, 1, -1) == 0 );
assert( gamma_move(board, 9, -1, 9) == 0 );
assert( gamma_free_fields(board, 9) == 89 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_free_fields(board, 1) == 88 );
assert( gamma_move(board, 3, 4, 14) == 1 );


char* board733013335 = gamma_board(board);
assert( board733013335 != NULL );
assert( strcmp(board733013335, 
".....48.\n"
"...58.72\n"
"..7752.7\n"
"...767..\n"
"3.3.6..5\n"
"2..23..9\n"
"..795466\n"
"543...1.\n"
"15.7.2..\n"
"..4.5...\n"
"1..616.4\n"
"..78.4..\n"
"..3.5.9.\n"
"53....3.\n"
"..5.7...\n"
".6.4932.\n"
"28.....5\n"
"3.7.34.1\n"
"88...6.6\n"
".1.2....\n") == 0);
free(board733013335);
board733013335 = NULL;
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, -1) == 0 );
assert( gamma_move(board, 7, 2, 11) == 1 );
assert( gamma_golden_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 9, 0, 0) == 1 );


char* board662563532 = gamma_board(board);
assert( board662563532 != NULL );
assert( strcmp(board662563532, 
".....48.\n"
"...58.72\n"
"..7752.7\n"
"...767..\n"
"3.3.6..5\n"
"2..23..9\n"
"..795466\n"
"543...1.\n"
"1577.2..\n"
"..4.5...\n"
"1..616.4\n"
"..78.4..\n"
"..3.5.9.\n"
"53....3.\n"
"..5.7...\n"
".6.4932.\n"
"28.....5\n"
"3.7.34.1\n"
"88...6.6\n"
"91.2....\n") == 0);
free(board662563532);
board662563532 = NULL;
assert( gamma_move(board, 1, -1, 7) == 0 );
assert( gamma_move(board, 2, -1, 12) == 0 );
assert( gamma_free_fields(board, 2) == 85 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, -1, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 7, -1, 16) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 9, -1, 3) == 0 );
assert( gamma_move(board, 1, 6, 19) == 0 );
assert( gamma_move(board, 2, 2, 18) == 1 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 6, 2, -1) == 0 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_move(board, 8, 7, 4) == 1 );
assert( gamma_golden_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 9, 3, 16) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 11) == 1 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_golden_move(board, 7, 12, 0) == 0 );
assert( gamma_move(board, 8, 4, 14) == 0 );
assert( gamma_move(board, 2, 6, -1) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, -1, 12) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 7, 5, 11) == 0 );


char* board738751809 = gamma_board(board);
assert( board738751809 != NULL );
assert( strcmp(board738751809, 
".....48.\n"
"..258.72\n"
"..7752.7\n"
"...767..\n"
"3.3.6..5\n"
"2..23..9\n"
"..795466\n"
"543...1.\n"
"1577.24.\n"
"..4.5...\n"
"1..616.4\n"
"..78.4..\n"
"..3.5.9.\n"
"53....3.\n"
"..5.7...\n"
".6.49328\n"
"28.....5\n"
"3.7.34.1\n"
"88...6.6\n"
"91.2.47.\n") == 0);
free(board738751809);
board738751809 = NULL;
assert( gamma_move(board, 9, 5, 10) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 3, 15) == 1 );
assert( gamma_free_fields(board, 9) == 78 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_golden_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 4, 4, 18) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 6, 6, 13) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_move(board, 9, 8, 13) == 0 );
assert( gamma_move(board, 2, 4, 19) == 1 );
assert( gamma_move(board, 3, 1, 13) == 1 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 8, 12) == 0 );
assert( gamma_move(board, 9, 3, 13) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_free_fields(board, 1) == 75 );
assert( gamma_move(board, 2, 0, 13) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 4, 18) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );


char* board219393307 = gamma_board(board);
assert( board219393307 != NULL );
assert( strcmp(board219393307, 
"....248.\n"
"..258.72\n"
"..7752.7\n"
"...767..\n"
"3.396..5\n"
"2..23..9\n"
"23795466\n"
"543...1.\n"
"1577.24.\n"
"..4.59..\n"
"1..616.4\n"
"8.78.4..\n"
"..3.5.9.\n"
"53....3.\n"
"..5.7...\n"
".6.49328\n"
"28.....5\n"
"3.7.34.1\n"
"88..36.6\n"
"91.2.47.\n") == 0);
free(board219393307);
board219393307 = NULL;
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_move(board, 9, 2, 9) == 1 );
assert( gamma_move(board, 1, 0, 19) == 1 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );


char* board119351960 = gamma_board(board);
assert( board119351960 != NULL );
assert( strcmp(board119351960, 
"1...248.\n"
"..258.72\n"
"..7752.7\n"
"...767..\n"
"3.396..5\n"
"2..23..9\n"
"23795466\n"
"543...1.\n"
"1577.24.\n"
"..4.59..\n"
"1.9616.4\n"
"8.78.4..\n"
"..3.5.9.\n"
"53....3.\n"
"..5.7...\n"
"86.49328\n"
"28..4..5\n"
"3.7.34.1\n"
"88..36.6\n"
"91.2.47.\n") == 0);
free(board119351960);
board119351960 = NULL;
assert( gamma_move(board, 2, 4, 5) == 0 );


char* board857142004 = gamma_board(board);
assert( board857142004 != NULL );
assert( strcmp(board857142004, 
"1...248.\n"
"..258.72\n"
"..7752.7\n"
"...767..\n"
"3.396..5\n"
"2..23..9\n"
"23795466\n"
"543...1.\n"
"1577.24.\n"
"..4.59..\n"
"1.9616.4\n"
"8.78.4..\n"
"..3.5.9.\n"
"53....3.\n"
"..5.7...\n"
"86.49328\n"
"28..4..5\n"
"3.7.34.1\n"
"88..36.6\n"
"91.2.47.\n") == 0);
free(board857142004);
board857142004 = NULL;
assert( gamma_move(board, 3, 7, 19) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 4, 4) == 0 );


char* board366103553 = gamma_board(board);
assert( board366103553 != NULL );
assert( strcmp(board366103553, 
"1...2483\n"
"..258.72\n"
"..7752.7\n"
"...767..\n"
"3.396..5\n"
"2..23..9\n"
"23795466\n"
"543...1.\n"
"1577.24.\n"
"..4.59..\n"
"1.9616.4\n"
"8.78.4..\n"
"..3.5.9.\n"
"53....3.\n"
"..5.7...\n"
"86.49328\n"
"28..4..5\n"
"3.7.34.1\n"
"88..36.6\n"
"91.2.47.\n") == 0);
free(board366103553);
board366103553 = NULL;
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 3, 19) == 1 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_move(board, 4, 3, 18) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 18) == 0 );
assert( gamma_move(board, 6, 4, 14) == 0 );
assert( gamma_move(board, 8, 3, 17) == 0 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_move(board, 2, 5, 19) == 0 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 20) == 0 );
assert( gamma_move(board, 6, 3, 15) == 0 );


char* board654167662 = gamma_board(board);
assert( board654167662 != NULL );
assert( strcmp(board654167662, 
"1..32483\n"
"..258.72\n"
"..7752.7\n"
"...767..\n"
"3.396..5\n"
"2..23..9\n"
"23795466\n"
"543...1.\n"
"1577.24.\n"
"..4.59..\n"
"1.9616.4\n"
"8.78.4..\n"
"..3.5.9.\n"
"53....3.\n"
"..5.7...\n"
"86.49328\n"
"28..4..5\n"
"397.34.1\n"
"88..36.6\n"
"91.2.47.\n") == 0);
free(board654167662);
board654167662 = NULL;
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 14 );
assert( gamma_move(board, 8, 6, 3) == 1 );
assert( gamma_free_fields(board, 8) == 64 );
assert( gamma_move(board, 9, 6, 14) == 1 );
assert( gamma_free_fields(board, 9) == 63 );
assert( gamma_free_fields(board, 1) == 63 );
assert( gamma_free_fields(board, 2) == 63 );
assert( gamma_move(board, 3, 7, 19) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );


char* board644205157 = gamma_board(board);
assert( board644205157 != NULL );
assert( strcmp(board644205157, 
"1..32483\n"
"..258.72\n"
"..7752.7\n"
"...767..\n"
"3.396..5\n"
"2..23.99\n"
"23795466\n"
"543...1.\n"
"1577.24.\n"
"..4.59..\n"
"1.9616.4\n"
"8.78.4..\n"
"..3.5.9.\n"
"53....3.\n"
"7.5.7...\n"
"86.49328\n"
"28..4.85\n"
"397.34.1\n"
"88..36.6\n"
"91.2.47.\n") == 0);
free(board644205157);
board644205157 = NULL;
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 8, 2, 2) == 0 );
assert( gamma_move(board, 9, 5, 17) == 0 );


char* board543194653 = gamma_board(board);
assert( board543194653 != NULL );
assert( strcmp(board543194653, 
"1..32483\n"
"..258.72\n"
"..7752.7\n"
"...767..\n"
"3.396..5\n"
"2..23.99\n"
"23795466\n"
"543...1.\n"
"1577.24.\n"
"..4.59..\n"
"1.9616.4\n"
"8.78.4..\n"
"..3.5.9.\n"
"53....3.\n"
"775.7...\n"
"86.49328\n"
"28..4.85\n"
"397.34.1\n"
"88..36.6\n"
"91.2.47.\n") == 0);
free(board543194653);
board543194653 = NULL;
assert( gamma_move(board, 1, 3, 16) == 0 );


char* board461667437 = gamma_board(board);
assert( board461667437 != NULL );
assert( strcmp(board461667437, 
"1..32483\n"
"..258.72\n"
"..7752.7\n"
"...767..\n"
"3.396..5\n"
"2..23.99\n"
"23795466\n"
"543...1.\n"
"1577.24.\n"
"..4.59..\n"
"1.9616.4\n"
"8.78.4..\n"
"..3.5.9.\n"
"53....3.\n"
"775.7...\n"
"86.49328\n"
"28..4.85\n"
"397.34.1\n"
"88..36.6\n"
"91.2.47.\n") == 0);
free(board461667437);
board461667437 = NULL;
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_free_fields(board, 5) == 62 );
assert( gamma_move(board, 6, 7, -1) == 0 );
assert( gamma_move(board, 7, 6, 14) == 0 );
assert( gamma_free_fields(board, 7) == 62 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_move(board, 9, 2, 10) == 0 );
assert( gamma_free_fields(board, 9) == 61 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 0, 19) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );


gamma_delete(board);

    return 0;
}
