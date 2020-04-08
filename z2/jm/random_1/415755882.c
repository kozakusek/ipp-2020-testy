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
uuid: 415755882
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 16, 10, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 7, 15) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 9, 2, 9) == 1 );
assert( gamma_move(board, 10, -1, 4) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_free_fields(board, 1) == 120 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board726305675 = gamma_board(board);
assert( board726305675 != NULL );
assert( strcmp(board726305675, 
".......3\n"
"........\n"
"........\n"
"........\n"
"........\n"
"....1...\n"
".59.....\n"
"........\n"
"...4....\n"
"........\n"
"........\n"
"1.......\n"
".8....4.\n"
"........\n"
"...2....\n"
"....2...\n") == 0);
free(board726305675);
board726305675 = NULL;
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 7, -1, 5) == 0 );
assert( gamma_move(board, 8, -1, 0) == 0 );
assert( gamma_move(board, 9, 0, 15) == 1 );
assert( gamma_move(board, 10, 5, 9) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_golden_move(board, 1, 15, 0) == 0 );
assert( gamma_move(board, 2, 1, 13) == 1 );
assert( gamma_move(board, 3, 1, 14) == 1 );
assert( gamma_move(board, 4, 2, 15) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, -1, 14) == 0 );
assert( gamma_move(board, 7, 3, 11) == 1 );
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_move(board, 9, 3, 9) == 1 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 7, 1, 13) == 0 );
assert( gamma_move(board, 9, 7, 0) == 1 );
assert( gamma_move(board, 10, 0, 9) == 1 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_move(board, 2, 6, 16) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 12) == 1 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_move(board, 6, 4, 14) == 1 );
assert( gamma_free_fields(board, 6) == 100 );
assert( gamma_move(board, 7, 8, 14) == 0 );
assert( gamma_free_fields(board, 7) == 100 );
assert( gamma_move(board, 8, 6, -1) == 0 );


char* board633808846 = gamma_board(board);
assert( board633808846 != NULL );
assert( strcmp(board633808846, 
"9.4....3\n"
".3..6...\n"
".2......\n"
"...4....\n"
"..17....\n"
"....1...\n"
"10599.10.5\n"
"..8.....\n"
"...4....\n"
"........\n"
"........\n"
"1.......\n"
".8....4.\n"
".....5..\n"
"...24...\n"
"5.1.2..9\n") == 0);
free(board633808846);
board633808846 = NULL;
assert( gamma_move(board, 1, 1, 12) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 7, 13) == 1 );
assert( gamma_move(board, 3, 5, 16) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 5, 0, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 6, 13) == 1 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, -1, 4) == 0 );
assert( gamma_move(board, 9, 1, 14) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_free_fields(board, 9) == 95 );
assert( gamma_move(board, 10, 8, 8) == 0 );
assert( gamma_move(board, 1, -1, 14) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 4, 1, 16) == 0 );
assert( gamma_move(board, 5, 3, 13) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 7, 8, 8) == 0 );
assert( gamma_free_fields(board, 7) == 92 );
assert( gamma_move(board, 8, 0, 14) == 1 );
assert( gamma_busy_fields(board, 8) == 3 );


char* board617331440 = gamma_board(board);
assert( board617331440 != NULL );
assert( strcmp(board617331440, 
"9.4....3\n"
"83..6...\n"
".2.5..62\n"
"51.4....\n"
"..17....\n"
"....1...\n"
"10599.10.5\n"
"..8.....\n"
"...4...3\n"
"........\n"
"........\n"
"1.......\n"
".8....4.\n"
".....56.\n"
"..724...\n"
"5.1.2..9\n") == 0);
free(board617331440);
board617331440 = NULL;
assert( gamma_move(board, 9, 5, 13) == 1 );
assert( gamma_move(board, 10, 7, 0) == 0 );
assert( gamma_golden_move(board, 10, 12, 3) == 0 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_move(board, 6, 8, 16) == 0 );
assert( gamma_free_fields(board, 6) == 88 );
assert( gamma_move(board, 7, -1, 9) == 0 );
assert( gamma_move(board, 8, 5, -1) == 0 );
assert( gamma_move(board, 10, -1, -1) == 0 );
assert( gamma_move(board, 2, 3, 15) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 9) == 1 );
assert( gamma_move(board, 9, 0, 11) == 1 );
assert( gamma_move(board, 10, 6, 2) == 0 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_free_fields(board, 1) == 83 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );


char* board196072861 = gamma_board(board);
assert( board196072861 != NULL );
assert( strcmp(board196072861, 
"9.42...3\n"
"83..6...\n"
".2.5.962\n"
"51.4....\n"
"9117....\n"
"3...1...\n"
"10599810.5\n"
"..8.....\n"
".1.4...3\n"
"......3.\n"
"........\n"
"1.......\n"
".8....4.\n"
".....56.\n"
"..724...\n"
"5.1.2..9\n") == 0);
free(board196072861);
board196072861 = NULL;
assert( gamma_free_fields(board, 4) == 83 );
assert( gamma_busy_fields(board, 6) == 3 );


char* board775886412 = gamma_board(board);
assert( board775886412 != NULL );
assert( strcmp(board775886412, 
"9.42...3\n"
"83..6...\n"
".2.5.962\n"
"51.4....\n"
"9117....\n"
"3...1...\n"
"10599810.5\n"
"..8.....\n"
".1.4...3\n"
"......3.\n"
"........\n"
"1.......\n"
".8....4.\n"
".....56.\n"
"..724...\n"
"5.1.2..9\n") == 0);
free(board775886412);
board775886412 = NULL;
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, -1, 14) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 16) == 0 );
assert( gamma_move(board, 4, 3, -1) == 0 );


char* board135231212 = gamma_board(board);
assert( board135231212 != NULL );
assert( strcmp(board135231212, 
"9.42...3\n"
"83..6...\n"
".2.5.962\n"
"51.4....\n"
"9117....\n"
"3...1...\n"
"10599810.5\n"
"..8.....\n"
".1.4...3\n"
"......3.\n"
"2.......\n"
"1.......\n"
".8....41\n"
".....56.\n"
"..724...\n"
"5.1.2..9\n") == 0);
free(board135231212);
board135231212 = NULL;
assert( gamma_free_fields(board, 6) == 81 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 6) == 1 );
assert( gamma_free_fields(board, 8) == 80 );
assert( gamma_move(board, 9, 5, 0) == 1 );
assert( gamma_move(board, 10, 6, 0) == 1 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 7, 4, 11) == 1 );
assert( gamma_move(board, 9, 7, 8) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 3, 15) == 0 );
assert( gamma_free_fields(board, 3) == 71 );
assert( gamma_move(board, 4, 8, 14) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 10) == 0 );
assert( gamma_move(board, 10, -1, 13) == 0 );
assert( gamma_free_fields(board, 10) == 71 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_free_fields(board, 4) == 70 );
assert( gamma_move(board, 5, -1, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_free_fields(board, 5) == 70 );
assert( gamma_move(board, 6, 7, 10) == 1 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_free_fields(board, 8) == 69 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_free_fields(board, 10) == 69 );
assert( gamma_move(board, 1, 5, 14) == 1 );
assert( gamma_free_fields(board, 2) == 68 );


char* board899530964 = gamma_board(board);
assert( board899530964 != NULL );
assert( strcmp(board899530964, 
"9.42...3\n"
"83..61..\n"
".2.5.962\n"
"51.4....\n"
"91177...\n"
"3...1..6\n"
"10599810.5\n"
"..8....9\n"
".1.4...3\n"
".7....3.\n"
"2....4..\n"
"1......4\n"
".8....41\n"
"...6.561\n"
"..724..1\n"
"521.29109\n") == 0);
free(board899530964);
board899530964 = NULL;
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_free_fields(board, 4) == 68 );
assert( gamma_golden_move(board, 4, 9, 5) == 0 );
assert( gamma_golden_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_free_fields(board, 6) == 67 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 15) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, -1, 1) == 0 );
assert( gamma_free_fields(board, 8) == 66 );
assert( gamma_move(board, 9, 3, 0) == 1 );
assert( gamma_move(board, 10, 6, 13) == 0 );
assert( gamma_move(board, 1, 4, 15) == 1 );
assert( gamma_free_fields(board, 2) == 64 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 5, 6, 8) == 1 );
assert( gamma_move(board, 6, -1, 11) == 0 );
assert( gamma_move(board, 7, 1, 12) == 0 );
assert( gamma_golden_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 8, 3, 5) == 1 );
assert( gamma_free_fields(board, 10) == 62 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_free_fields(board, 7) == 61 );
assert( gamma_move(board, 8, 7, 16) == 0 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 10, 0, -1) == 0 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_move(board, 5, -1, 11) == 0 );
assert( gamma_free_fields(board, 5) == 59 );


char* board923478500 = gamma_board(board);
assert( board923478500 != NULL );
assert( strcmp(board923478500, 
"9.4217.3\n"
"83..61..\n"
".2.5.962\n"
"51.4....\n"
"91177...\n"
"3..11..6\n"
"10599810.5\n"
"7.8...59\n"
".1.4...3\n"
".7....3.\n"
"2..8.4..\n"
"1......4\n"
".8....41\n"
"...6.561\n"
".6774.31\n"
"521929109\n") == 0);
free(board923478500);
board923478500 = NULL;
assert( gamma_move(board, 9, 5, 12) == 1 );
assert( gamma_move(board, 10, 7, 5) == 1 );
assert( gamma_golden_move(board, 10, 14, 4) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_free_fields(board, 5) == 56 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 0, -1) == 0 );
assert( gamma_move(board, 8, 2, 2) == 1 );


char* board697813247 = gamma_board(board);
assert( board697813247 != NULL );
assert( strcmp(board697813247, 
"9.4217.3\n"
"83..61..\n"
".2.5.962\n"
"51.4.9..\n"
"91177...\n"
"3..11..6\n"
"10599810.5\n"
"7.8...59\n"
".1.4...3\n"
".7....3.\n"
"2..8.4.10\n"
"1......4\n"
".8....41\n"
".386.561\n"
".6774.31\n"
"521929109\n") == 0);
free(board697813247);
board697813247 = NULL;
assert( gamma_move(board, 9, 8, 9) == 0 );
assert( gamma_move(board, 10, 3, 4) == 1 );
assert( gamma_free_fields(board, 10) == 54 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 5, 10) == 1 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_free_fields(board, 4) == 53 );
assert( gamma_move(board, 5, 4, 7) == 1 );


char* board195825177 = gamma_board(board);
assert( board195825177 != NULL );
assert( strcmp(board195825177, 
"9.4217.3\n"
"83..61..\n"
".2.5.962\n"
"51.4.9..\n"
"91177...\n"
"3..113.6\n"
"10599810.5\n"
"7.8...59\n"
".1.45..3\n"
".7....3.\n"
"2..8.4.10\n"
"1..10...4\n"
".8....41\n"
".386.561\n"
".6774.31\n"
"521929109\n") == 0);
free(board195825177);
board195825177 = NULL;
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );


char* board259761050 = gamma_board(board);
assert( board259761050 != NULL );
assert( strcmp(board259761050, 
"9.4217.3\n"
"83..61..\n"
".2.5.962\n"
"51.4.9..\n"
"91177...\n"
"3..113.6\n"
"10599810.5\n"
"7.8...59\n"
".1.45..3\n"
".7....3.\n"
"2..8.4.10\n"
"1..10...4\n"
".8....41\n"
".386.561\n"
".6774.31\n"
"521929109\n") == 0);
free(board259761050);
board259761050 = NULL;
assert( gamma_move(board, 7, 6, 10) == 1 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_move(board, 7, 1, 10) == 1 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 9, 5, 1) == 1 );
assert( gamma_move(board, 2, 6, 11) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_golden_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 7, -1, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 5, 8) == 1 );
assert( gamma_move(board, 10, 8, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 16) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 5, 14) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 8, 6, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 10, 4, 3) == 1 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_free_fields(board, 3) == 9 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );


char* board665057355 = gamma_board(board);
assert( board665057355 != NULL );
assert( strcmp(board665057355, 
"9.4217.3\n"
"83..61..\n"
".2.5.962\n"
"51.4.9..\n"
"91177.2.\n"
"37.11376\n"
"10599810.5\n"
"7.8..859\n"
"46.45..3\n"
".7....3.\n"
"2..8.4610\n"
"1..10...4\n"
"28..10.41\n"
".386.561\n"
".6774931\n"
"521929109\n") == 0);
free(board665057355);
board665057355 = NULL;
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 10, 6, 1) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 7, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, -1, 15) == 0 );
assert( gamma_move(board, 3, 7, 15) == 0 );
assert( gamma_move(board, 4, 1, 16) == 0 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 6, 7, 14) == 0 );


gamma_delete(board);

    return 0;
}
