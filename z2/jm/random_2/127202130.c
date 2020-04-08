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
uuid: 127202130
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 14, 15, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 11) == 1 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_move(board, 7, 5, 7) == 1 );
assert( gamma_move(board, 9, 7, 14) == 0 );
assert( gamma_move(board, 9, 14, 8) == 1 );
assert( gamma_move(board, 10, 13, 13) == 1 );
assert( gamma_move(board, 11, 2, 5) == 1 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_golden_move(board, 11, 3, 1) == 0 );
assert( gamma_move(board, 12, 12, 2) == 1 );
assert( gamma_move(board, 13, 4, 4) == 1 );
assert( gamma_move(board, 15, 2, 0) == 1 );
assert( gamma_move(board, 15, 9, 8) == 1 );


char* board747470590 = gamma_board(board);
assert( board747470590 != NULL );
assert( strcmp(board747470590, 
".............10.\n"
"...............\n"
"..........1..4.\n"
"...............\n"
"...............\n"
".........15....9\n"
".....7.........\n"
"...............\n"
"..11............\n"
"....13..........\n"
".2.......33....\n"
"............12..\n"
"..........5....\n"
"..15........2...\n") == 0);
free(board747470590);
board747470590 = NULL;
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_move(board, 2, 12, 6) == 1 );
assert( gamma_move(board, 3, 13, 11) == 0 );
assert( gamma_move(board, 3, 11, 13) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 6, 12, 7) == 1 );
assert( gamma_move(board, 6, 5, 10) == 1 );
assert( gamma_move(board, 7, 3, 13) == 1 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 8, 10, 6) == 1 );
assert( gamma_free_fields(board, 8) == 185 );
assert( gamma_move(board, 9, 6, 8) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 7, 7) == 1 );
assert( gamma_move(board, 12, 2, 10) == 1 );
assert( gamma_move(board, 12, 12, 0) == 1 );
assert( gamma_move(board, 13, 6, 7) == 1 );
assert( gamma_move(board, 13, 7, 9) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 15, 9, 11) == 1 );
assert( gamma_move(board, 15, 1, 0) == 1 );
assert( gamma_move(board, 1, 7, 12) == 1 );
assert( gamma_move(board, 2, 8, 11) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 3, 10, 7) == 1 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 5, 12, 5) == 1 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_move(board, 6, 6, 13) == 1 );
assert( gamma_free_fields(board, 6) == 169 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_move(board, 7, 14, 11) == 1 );
assert( gamma_move(board, 8, 2, 13) == 1 );
assert( gamma_move(board, 8, 7, 13) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 10, 13, 8) == 1 );
assert( gamma_move(board, 10, 13, 4) == 1 );


char* board371185820 = gamma_board(board);
assert( board371185820 != NULL );
assert( strcmp(board371185820, 
"..87..68...3.10.\n"
".......1.......\n"
".....5..2151..47\n"
"..12..6.........\n"
".......13.......\n"
"......9..15...109\n"
".....71311..3.6..\n"
"....4.....8.2..\n"
".711.........5..\n"
"....13........10.\n"
".2..7....33....\n"
"...........112..\n"
"......5...5....\n"
"31515.....4..212..\n") == 0);
free(board371185820);
board371185820 = NULL;
assert( gamma_move(board, 11, 7, 0) == 1 );
assert( gamma_move(board, 11, 9, 1) == 1 );
assert( gamma_move(board, 14, 3, 13) == 0 );
assert( gamma_move(board, 15, 11, 8) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 13, 5) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 4, 11, 10) == 1 );
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 13) == 0 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_free_fields(board, 7) == 153 );
assert( gamma_move(board, 8, 7, 2) == 1 );
assert( gamma_move(board, 8, 4, 11) == 1 );
assert( gamma_move(board, 9, 5, 6) == 1 );
assert( gamma_move(board, 10, 10, 8) == 1 );
assert( gamma_move(board, 10, 7, 0) == 0 );
assert( gamma_move(board, 11, 5, 1) == 1 );
assert( gamma_move(board, 11, 12, 1) == 1 );
assert( gamma_move(board, 12, 9, 12) == 1 );
assert( gamma_move(board, 13, 13, 10) == 1 );
assert( gamma_move(board, 13, 0, 12) == 1 );
assert( gamma_move(board, 14, 9, 10) == 1 );
assert( gamma_move(board, 14, 7, 8) == 1 );
assert( gamma_busy_fields(board, 14) == 2 );
assert( gamma_move(board, 15, 3, 0) == 0 );
assert( gamma_move(board, 15, 12, 11) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 8) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 5, 13, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 14, 9) == 1 );
assert( gamma_move(board, 7, 6, 3) == 1 );
assert( gamma_move(board, 7, 11, 13) == 0 );
assert( gamma_golden_move(board, 7, 5, 12) == 0 );
assert( gamma_move(board, 9, 8, 6) == 1 );
assert( gamma_move(board, 10, 11, 11) == 1 );
assert( gamma_move(board, 10, 2, 5) == 0 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 11, 7, 1) == 0 );
assert( gamma_move(board, 12, 13, 0) == 0 );
assert( gamma_move(board, 13, 5, 3) == 0 );
assert( gamma_move(board, 13, 10, 7) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );


char* board572665372 = gamma_board(board);
assert( board572665372 != NULL );
assert( strcmp(board572665372, 
"..87..68...3.10.\n"
"13......1.12.....\n"
"....85..2151101547\n"
"..12..6...14.4.13.\n"
".......13......6\n"
"......914.1510154109\n"
"....171311..3.6..\n"
"5...49..9.8.2..\n"
"2711....4.3..53.\n"
"....13........10.\n"
".2.1727..33....\n"
".......86..112..\n"
".....1154.115.11..\n"
"315157...114..2125.\n") == 0);
free(board572665372);
board572665372 = NULL;
assert( gamma_move(board, 14, 12, 3) == 1 );
assert( gamma_move(board, 15, 12, 6) == 0 );
assert( gamma_move(board, 15, 9, 5) == 0 );


char* board849270814 = gamma_board(board);
assert( board849270814 != NULL );
assert( strcmp(board849270814, 
"..87..68...3.10.\n"
"13......1.12.....\n"
"....85..2151101547\n"
"..12..6...14.4.13.\n"
".......13......6\n"
"......914.1510154109\n"
"....171311..3.6..\n"
"5...49..9.8.2..\n"
"2711....4.3..53.\n"
"....13........10.\n"
".2.1727..33.14..\n"
".......86..112..\n"
".....1154.115.11..\n"
"315157...114..2125.\n") == 0);
free(board849270814);
board849270814 = NULL;
assert( gamma_move(board, 1, 5, 13) == 1 );


char* board633928082 = gamma_board(board);
assert( board633928082 != NULL );
assert( strcmp(board633928082, 
"..87.168...3.10.\n"
"13......1.12.....\n"
"....85..2151101547\n"
"..12..6...14.4.13.\n"
".......13......6\n"
"......914.1510154109\n"
"....171311..3.6..\n"
"5...49..9.8.2..\n"
"2711....4.3..53.\n"
"....13........10.\n"
".2.1727..33.14..\n"
".......86..112..\n"
".....1154.115.11..\n"
"315157...114..2125.\n") == 0);
free(board633928082);
board633928082 = NULL;
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );


char* board790462025 = gamma_board(board);
assert( board790462025 != NULL );
assert( strcmp(board790462025, 
"..87.168...3.10.\n"
"13......1.12.....\n"
"....85..2151101547\n"
"..12..6...14.4.13.\n"
".......13......6\n"
"......914.1510154109\n"
"....171311..3.6..\n"
"5...49..9.8.2..\n"
"2711....4.3..53.\n"
"....13........10.\n"
".2.17274.33.14..\n"
".......86..112..\n"
".....1154.115.11..\n"
"315157...114..2125.\n") == 0);
free(board790462025);
board790462025 = NULL;
assert( gamma_move(board, 7, 14, 3) == 1 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 8, 2, 14) == 0 );
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_move(board, 9, 7, 4) == 1 );
assert( gamma_move(board, 10, 12, 6) == 0 );
assert( gamma_move(board, 11, 4, 4) == 0 );
assert( gamma_move(board, 12, 8, 10) == 1 );
assert( gamma_move(board, 12, 0, 12) == 0 );
assert( gamma_move(board, 13, 3, 11) == 1 );
assert( gamma_golden_move(board, 13, 3, 5) == 0 );
assert( gamma_move(board, 14, 6, 3) == 0 );
assert( gamma_move(board, 15, 12, 4) == 1 );
assert( gamma_free_fields(board, 15) == 121 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 1, 14) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 9, 13, 0) == 0 );
assert( gamma_move(board, 10, 12, 8) == 0 );
assert( gamma_move(board, 11, 11, 8) == 0 );
assert( gamma_move(board, 11, 3, 8) == 1 );
assert( gamma_golden_move(board, 11, 6, 4) == 0 );
assert( gamma_move(board, 12, 1, 13) == 1 );
assert( gamma_move(board, 12, 8, 2) == 0 );
assert( gamma_move(board, 13, 2, 4) == 1 );
assert( gamma_move(board, 14, 7, 2) == 0 );
assert( gamma_move(board, 15, 11, 5) == 1 );
assert( gamma_move(board, 2, 9, 13) == 1 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_free_fields(board, 2) == 113 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 9, 9) == 1 );
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 8) == 1 );
assert( gamma_move(board, 8, 7, 10) == 1 );
assert( gamma_move(board, 9, 9, 1) == 0 );


char* board668596588 = gamma_board(board);
assert( board668596588 != NULL );
assert( strcmp(board668596588, 
".1287.168.2.3.10.\n"
"13......1.12.....\n"
"...1385..2151101547\n"
"..12..6.81214.4.13.\n"
".......13.4....6\n"
".8.11..914.1510154109\n"
"....171311..3.6..\n"
"5...49..9.8.2..\n"
"2711..4.4.3.1553.\n"
"..13.13..9....1510.\n"
".2.17274.33.14.7\n"
"...5...86..112..\n"
"7....1154.115.11..\n"
"315157..1114..2125.\n") == 0);
free(board668596588);
board668596588 = NULL;
assert( gamma_move(board, 10, 4, 14) == 0 );
assert( gamma_move(board, 10, 0, 7) == 1 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_move(board, 11, 3, 13) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 3, 2) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 0, 3) == 1 );
assert( gamma_move(board, 14, 9, 4) == 1 );
assert( gamma_move(board, 14, 9, 7) == 1 );
assert( gamma_move(board, 15, 6, 13) == 0 );


char* board697342260 = gamma_board(board);
assert( board697342260 != NULL );
assert( strcmp(board697342260, 
".1287.168.2.3.10.\n"
"13......1.12.....\n"
"...1385..2151101547\n"
"..12..6.81214.4.13.\n"
".......13.4....6\n"
".8.11..914.1510154109\n"
"10...171311.143.6..\n"
"5...49..9.8.2..\n"
"2711..4.4.3.1553.\n"
"..13.13..9.14..1510.\n"
"132.17274.33.14.7\n"
"...5...86..112..\n"
"7....1154.115.11..\n"
"315157..1114..2125.\n") == 0);
free(board697342260);
board697342260 = NULL;
assert( gamma_move(board, 1, 10, 5) == 1 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 1, 13) == 0 );


char* board638346754 = gamma_board(board);
assert( board638346754 != NULL );
assert( strcmp(board638346754, 
".1287.168.2.3.10.\n"
"13......1.12.....\n"
"...1385..2151101547\n"
"..12..6.81214.4.13.\n"
".......13.4....6\n"
".8.11..914.1510154109\n"
"10...171311.143.6..\n"
"5...49..9.8.2..\n"
"2711..4.4.311553.\n"
"..13.13..9.14..1510.\n"
"132.17274.33.14.7\n"
"...5...86..112..\n"
"7....1154.115.11..\n"
"315157..1114..2125.\n") == 0);
free(board638346754);
board638346754 = NULL;
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 13, 8) == 0 );
assert( gamma_move(board, 6, 12, 12) == 1 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 7, 5, 13) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 9, 13, 14) == 0 );
assert( gamma_move(board, 9, 14, 9) == 0 );
assert( gamma_free_fields(board, 9) == 103 );
assert( gamma_move(board, 10, 2, 13) == 0 );
assert( gamma_move(board, 10, 10, 4) == 1 );
assert( gamma_move(board, 11, 10, 14) == 0 );
assert( gamma_move(board, 12, 14, 6) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 4, 1) == 1 );
assert( gamma_move(board, 14, 4, 7) == 0 );
assert( gamma_move(board, 15, 0, 10) == 1 );
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 6) == 1 );
assert( gamma_move(board, 8, 10, 2) == 1 );
assert( gamma_move(board, 9, 12, 2) == 0 );
assert( gamma_move(board, 10, 2, 5) == 0 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_free_fields(board, 10) == 96 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 6, 9) == 1 );
assert( gamma_move(board, 11, 3, 7) == 1 );
assert( gamma_busy_fields(board, 11) == 9 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 5, 8) == 1 );
assert( gamma_move(board, 12, 5, 9) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 11, 2) == 0 );
assert( gamma_move(board, 14, 1, 13) == 0 );
assert( gamma_move(board, 15, 3, 11) == 0 );
assert( gamma_busy_fields(board, 15) == 9 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_golden_move(board, 2, 2, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 12) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_golden_move(board, 5, 6, 12) == 0 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 7, 8, 4) == 1 );
assert( gamma_move(board, 9, 10, 10) == 1 );
assert( gamma_move(board, 9, 11, 9) == 1 );


char* board967065461 = gamma_board(board);
assert( board967065461 != NULL );
assert( strcmp(board967065461, 
".1287.168.2.3.10.\n"
"13......1.12..64.\n"
"...1385..2151101547\n"
"15.12..6.8121494.13.\n"
"..3..121113.4.9..6\n"
".8.11.12914.1510154109\n"
"10..111713114143.6..\n"
"5...49..968.2.12\n"
"2711..4.4.311553.\n"
"..13.13..971410.1510.\n"
"132.17274533.14.7\n"
"...5...86.8112..\n"
"7..6131154.115.11..\n"
"315157..1114..2125.\n") == 0);
free(board967065461);
board967065461 = NULL;
assert( gamma_move(board, 10, 8, 2) == 0 );
assert( gamma_move(board, 11, 6, 13) == 0 );
assert( gamma_move(board, 11, 5, 13) == 0 );
assert( gamma_move(board, 12, 1, 1) == 1 );
assert( gamma_move(board, 12, 8, 11) == 0 );
assert( gamma_golden_move(board, 12, 2, 3) == 0 );


char* board415800922 = gamma_board(board);
assert( board415800922 != NULL );
assert( strcmp(board415800922, 
".1287.168.2.3.10.\n"
"13......1.12..64.\n"
"...1385..2151101547\n"
"15.12..6.8121494.13.\n"
"..3..121113.4.9..6\n"
".8.11.12914.1510154109\n"
"10..111713114143.6..\n"
"5...49..968.2.12\n"
"2711..4.4.311553.\n"
"..13.13..971410.1510.\n"
"132.17274533.14.7\n"
"...5...86.8112..\n"
"712.6131154.115.11..\n"
"315157..1114..2125.\n") == 0);
free(board415800922);
board415800922 = NULL;
assert( gamma_move(board, 13, 12, 3) == 0 );
assert( gamma_move(board, 13, 5, 9) == 0 );
assert( gamma_busy_fields(board, 13) == 9 );
assert( gamma_move(board, 14, 10, 14) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_golden_move(board, 14, 10, 7) == 1 );


char* board539712265 = gamma_board(board);
assert( board539712265 != NULL );
assert( strcmp(board539712265, 
".1287.168.2.3.10.\n"
"13......1.12..64.\n"
"...1385..2151101547\n"
"15.12..6.8121494.13.\n"
"..3..121113.4.9..6\n"
".8.11.12914.1510154109\n"
"10..1117131141414.6..\n"
"5...49..968.2.12\n"
"2711..4.4.311553.\n"
"..13.13..971410.1510.\n"
"132.17274533.14.7\n"
"...5...86.8112..\n"
"712.6131154.115.11..\n"
"315157..1114..2125.\n") == 0);
free(board539712265);
board539712265 = NULL;
assert( gamma_move(board, 15, 5, 2) == 1 );
assert( gamma_move(board, 15, 9, 13) == 0 );
assert( gamma_free_fields(board, 15) == 84 );


char* board926818280 = gamma_board(board);
assert( board926818280 != NULL );
assert( strcmp(board926818280, 
".1287.168.2.3.10.\n"
"13......1.12..64.\n"
"...1385..2151101547\n"
"15.12..6.8121494.13.\n"
"..3..121113.4.9..6\n"
".8.11.12914.1510154109\n"
"10..1117131141414.6..\n"
"5...49..968.2.12\n"
"2711..4.4.311553.\n"
"..13.13..971410.1510.\n"
"132.17274533.14.7\n"
"...5.15.86.8112..\n"
"712.6131154.115.11..\n"
"315157..1114..2125.\n") == 0);
free(board926818280);
board926818280 = NULL;
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_move(board, 8, 9, 13) == 0 );
assert( gamma_move(board, 8, 8, 10) == 0 );
assert( gamma_golden_move(board, 9, 5, 7) == 1 );
assert( gamma_move(board, 10, 12, 5) == 0 );
assert( gamma_free_fields(board, 10) == 82 );
assert( gamma_move(board, 11, 5, 6) == 0 );
assert( gamma_move(board, 11, 1, 3) == 0 );
assert( gamma_move(board, 12, 4, 11) == 0 );
assert( gamma_move(board, 12, 3, 0) == 0 );
assert( gamma_move(board, 14, 14, 8) == 0 );
assert( gamma_move(board, 15, 0, 9) == 1 );
assert( gamma_move(board, 15, 6, 12) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 0, 13) == 1 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_golden_move(board, 5, 13, 11) == 1 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 7, 13, 8) == 0 );
assert( gamma_move(board, 7, 13, 9) == 1 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 12, 8) == 0 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_move(board, 10, 2, 9) == 0 );
assert( gamma_move(board, 10, 0, 2) == 1 );
assert( gamma_move(board, 11, 9, 0) == 1 );
assert( gamma_move(board, 12, 8, 8) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 7, 2) == 0 );
assert( gamma_move(board, 13, 8, 9) == 1 );
assert( gamma_move(board, 14, 11, 7) == 1 );
assert( gamma_move(board, 14, 2, 0) == 0 );
assert( gamma_busy_fields(board, 14) == 7 );
assert( gamma_free_fields(board, 14) == 73 );
assert( gamma_golden_possible(board, 14) == 0 );
assert( gamma_move(board, 15, 11, 1) == 1 );
assert( gamma_move(board, 15, 6, 4) == 1 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_free_fields(board, 4) == 70 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 8, 9, 9) == 0 );
assert( gamma_free_fields(board, 8) == 69 );
assert( gamma_move(board, 9, 2, 6) == 0 );
assert( gamma_free_fields(board, 9) == 69 );
assert( gamma_move(board, 10, 12, 3) == 0 );
assert( gamma_move(board, 11, 12, 8) == 0 );
assert( gamma_move(board, 12, 13, 10) == 0 );
assert( gamma_move(board, 12, 7, 6) == 1 );
assert( gamma_move(board, 13, 4, 0) == 1 );
assert( gamma_move(board, 13, 10, 5) == 0 );
assert( gamma_move(board, 14, 10, 9) == 1 );
assert( gamma_move(board, 15, 12, 4) == 0 );
assert( gamma_move(board, 15, 12, 7) == 0 );
assert( gamma_free_fields(board, 15) == 66 );
assert( gamma_move(board, 1, 6, 11) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 12, 10) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 3, 5, 12) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board724087546 = gamma_board(board);
assert( board724087546 != NULL );
assert( strcmp(board724087546, 
"11287.168.2.3.10.\n"
"13....3151.12..64.\n"
"...13851.2151101557\n"
"15.12..6.8121494213.\n"
"15.3..121113134149.76\n"
".8.11.12914121510154109\n"
"10..1119131141414146..\n"
"5.2.49512968.2.12\n"
"2711.24.4.311553.\n"
"..13.13.15971410.1510.\n"
"132.17274533.14.7\n"
"10.65.15.86.8112..\n"
"712.6131154.1151511..\n"
"31515713.111411.2125.\n") == 0);
free(board724087546);
board724087546 = NULL;
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 14) == 0 );
assert( gamma_move(board, 7, 9, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 8, 14, 11) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 9, 9, 3) == 0 );
assert( gamma_move(board, 10, 8, 11) == 0 );
assert( gamma_move(board, 11, 14, 8) == 0 );
assert( gamma_move(board, 12, 10, 6) == 0 );
assert( gamma_move(board, 13, 5, 12) == 0 );
assert( gamma_move(board, 15, 2, 6) == 0 );
assert( gamma_move(board, 15, 8, 3) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_free_fields(board, 1) == 63 );
assert( gamma_golden_move(board, 1, 11, 8) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 7, 10, 14) == 0 );
assert( gamma_move(board, 7, 9, 11) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 8, 14, 6) == 0 );
assert( gamma_move(board, 9, 0, 14) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_free_fields(board, 9) == 62 );
assert( gamma_move(board, 10, 6, 11) == 0 );
assert( gamma_move(board, 11, 2, 14) == 0 );
assert( gamma_move(board, 11, 10, 10) == 0 );
assert( gamma_move(board, 12, 5, 12) == 0 );
assert( gamma_move(board, 13, 14, 7) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 4, 10) == 1 );
assert( gamma_busy_fields(board, 14) == 9 );
assert( gamma_move(board, 15, 11, 2) == 0 );
assert( gamma_busy_fields(board, 15) == 13 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_free_fields(board, 3) == 59 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 6, 14, 7) == 0 );
assert( gamma_move(board, 8, 11, 5) == 0 );
assert( gamma_free_fields(board, 8) == 58 );
assert( gamma_golden_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 9, 12, 1) == 0 );
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 10, 6, 6) == 0 );
assert( gamma_move(board, 10, 10, 2) == 0 );
assert( gamma_busy_fields(board, 10) == 8 );
assert( gamma_move(board, 11, 4, 4) == 0 );
assert( gamma_move(board, 11, 13, 7) == 1 );
assert( gamma_move(board, 12, 4, 0) == 0 );
assert( gamma_move(board, 12, 14, 4) == 1 );
assert( gamma_move(board, 13, 2, 14) == 0 );
assert( gamma_move(board, 13, 7, 9) == 0 );
assert( gamma_busy_fields(board, 13) == 12 );


char* board513430416 = gamma_board(board);
assert( board513430416 != NULL );
assert( strcmp(board513430416, 
"11287.168.2.3.10.\n"
"13....3151.12..64.\n"
".2.13851.2151101557\n"
"15.12.146.8121494213.\n"
"15.3.3121113134149.76\n"
".8.11.1291412151014109\n"
"10..11191311414141461113\n"
"8.2.49512968.2.12\n"
"2711.24.4.311553.\n"
"..13.13.15971410.151012\n"
"132.17274533.14.7\n"
"10565.15.86.8112..\n"
"712.6131154.1151511..\n"
"31515713.111411.2125.\n") == 0);
free(board513430416);
board513430416 = NULL;
assert( gamma_move(board, 14, 13, 8) == 0 );
assert( gamma_move(board, 14, 9, 11) == 0 );
assert( gamma_busy_fields(board, 14) == 9 );
assert( gamma_golden_possible(board, 14) == 0 );
assert( gamma_move(board, 15, 4, 11) == 0 );
assert( gamma_move(board, 15, 13, 6) == 1 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_free_fields(board, 1) == 55 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 10, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_golden_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_move(board, 7, 13, 6) == 0 );
assert( gamma_move(board, 7, 3, 10) == 1 );


char* board495056602 = gamma_board(board);
assert( board495056602 != NULL );
assert( strcmp(board495056602, 
"11287.168.2.3.10.\n"
"13....3151.12..64.\n"
".2.13851.2151101557\n"
"15.127146.8121494213.\n"
"15.3.3121113134149.76\n"
".8.11.1291412151014109\n"
"10..11191311414141461113\n"
"8.2.49512968.21512\n"
"2711.24.4.311553.\n"
"..13.13.15971410.151012\n"
"132.17274533.14.7\n"
"10565.15.86.8112..\n"
"712.6131154.1151511..\n"
"31515713.11141142125.\n") == 0);
free(board495056602);
board495056602 = NULL;
assert( gamma_move(board, 8, 12, 10) == 0 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 10, 9, 7) == 0 );
assert( gamma_golden_move(board, 10, 0, 4) == 0 );
assert( gamma_move(board, 11, 0, 14) == 0 );
assert( gamma_move(board, 11, 14, 3) == 0 );
assert( gamma_move(board, 12, 9, 1) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 15, 10, 6) == 0 );
assert( gamma_move(board, 15, 7, 5) == 0 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_free_fields(board, 5) == 52 );
assert( gamma_move(board, 6, 13, 11) == 0 );
assert( gamma_move(board, 6, 13, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );


char* board955030963 = gamma_board(board);
assert( board955030963 != NULL );
assert( strcmp(board955030963, 
"11287.168.2.3.10.\n"
"13....3151.12..64.\n"
".2.13851.2151101557\n"
"15.127146.8121494213.\n"
"15.3.3121113134149.76\n"
".8.11.1291412151014109\n"
"10..11191311414141461113\n"
"8.2.49512968.21512\n"
"2711.24.4.311553.\n"
"..13.13.15971410.151012\n"
"132.17274533.14.7\n"
"10565.15.86.8112..\n"
"712.6131154.1151511..\n"
"31515713211141142125.\n") == 0);
free(board955030963);
board955030963 = NULL;
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 9, 12, 11) == 0 );
assert( gamma_move(board, 9, 1, 11) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 10, 4, 3) == 0 );
assert( gamma_busy_fields(board, 10) == 8 );
assert( gamma_move(board, 11, 9, 11) == 0 );
assert( gamma_move(board, 11, 6, 0) == 0 );
assert( gamma_move(board, 12, 2, 4) == 0 );
assert( gamma_move(board, 13, 3, 13) == 0 );
assert( gamma_move(board, 13, 6, 2) == 1 );
assert( gamma_free_fields(board, 14) == 51 );
assert( gamma_move(board, 15, 1, 14) == 0 );
assert( gamma_move(board, 15, 1, 4) == 1 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_golden_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 5, 13, 14) == 0 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board392675561 = gamma_board(board);
assert( board392675561 != NULL );
assert( strcmp(board392675561, 
"11287.168.2.3.10.\n"
"13..2.3151.12..64.\n"
".2.13851.2151101557\n"
"15.127146.8121494213.\n"
"15.3.3121113134149.76\n"
".8.11.1291412151014109\n"
"2..11191311414141461113\n"
"8.2.49512968.21512\n"
"2711.24.4.311553.\n"
".1513.13.15971410.151012\n"
"132.17274533.14.7\n"
"10565.151386.8112..\n"
"712.6131154.1151511..\n"
"31515713211141142125.\n") == 0);
free(board392675561);
board392675561 = NULL;
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 2, 14) == 0 );
assert( gamma_move(board, 8, 10, 9) == 0 );
assert( gamma_move(board, 9, 10, 7) == 0 );
assert( gamma_move(board, 9, 9, 1) == 0 );
assert( gamma_move(board, 10, 13, 14) == 0 );
assert( gamma_move(board, 11, 5, 14) == 0 );
assert( gamma_move(board, 12, 12, 10) == 0 );
assert( gamma_move(board, 12, 7, 8) == 0 );
assert( gamma_move(board, 13, 2, 9) == 0 );
assert( gamma_move(board, 14, 9, 12) == 0 );
assert( gamma_move(board, 15, 1, 8) == 0 );
assert( gamma_move(board, 15, 14, 10) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_free_fields(board, 3) == 48 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 7, 14, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 13, 9) == 0 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 10, 13, 8) == 0 );
assert( gamma_move(board, 10, 2, 12) == 1 );
assert( gamma_busy_fields(board, 10) == 8 );
assert( gamma_move(board, 11, 7, 9) == 0 );
assert( gamma_move(board, 11, 13, 1) == 1 );
assert( gamma_move(board, 12, 11, 7) == 0 );
assert( gamma_move(board, 12, 3, 6) == 1 );
assert( gamma_move(board, 13, 11, 3) == 1 );
assert( gamma_golden_move(board, 13, 8, 12) == 0 );
assert( gamma_move(board, 14, 5, 6) == 0 );
assert( gamma_move(board, 15, 12, 14) == 0 );
assert( gamma_busy_fields(board, 15) == 16 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 14, 9) == 0 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 13, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_move(board, 7, 13, 1) == 0 );
assert( gamma_move(board, 8, 2, 13) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_free_fields(board, 8) == 44 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 10, 8, 0) == 0 );
assert( gamma_move(board, 11, 7, 2) == 0 );
assert( gamma_move(board, 11, 14, 8) == 0 );
assert( gamma_move(board, 12, 6, 11) == 0 );
assert( gamma_move(board, 13, 6, 1) == 0 );
assert( gamma_move(board, 14, 7, 1) == 0 );
assert( gamma_move(board, 14, 2, 3) == 1 );
assert( gamma_busy_fields(board, 14) == 10 );
assert( gamma_move(board, 15, 6, 11) == 0 );
assert( gamma_move(board, 15, 3, 8) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 9, 1, 8) == 0 );
assert( gamma_move(board, 10, 8, 13) == 1 );
assert( gamma_move(board, 11, 3, 13) == 0 );
assert( gamma_move(board, 12, 2, 9) == 0 );
assert( gamma_move(board, 12, 14, 4) == 0 );
assert( gamma_move(board, 13, 5, 3) == 0 );
assert( gamma_move(board, 13, 4, 2) == 1 );
assert( gamma_move(board, 14, 5, 14) == 0 );
assert( gamma_move(board, 14, 3, 0) == 0 );
assert( gamma_move(board, 15, 4, 3) == 0 );
assert( gamma_busy_fields(board, 15) == 16 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 3, 14, 12) == 1 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 13, 4) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 2, 9) == 0 );
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_move(board, 9, 13, 4) == 0 );
assert( gamma_move(board, 10, 8, 4) == 0 );
assert( gamma_move(board, 10, 3, 10) == 0 );
assert( gamma_move(board, 11, 10, 5) == 0 );
assert( gamma_move(board, 12, 7, 1) == 0 );
assert( gamma_move(board, 13, 4, 1) == 0 );
assert( gamma_move(board, 14, 12, 4) == 0 );
assert( gamma_move(board, 15, 10, 6) == 0 );
assert( gamma_free_fields(board, 15) == 40 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_golden_move(board, 2, 4, 8) == 0 );


char* board566676574 = gamma_board(board);
assert( board566676574 != NULL );
assert( strcmp(board566676574, 
"11287.168102.3.10.\n"
"13.102.3151.12..643\n"
".2.13851.2151101557\n"
"15.127146.812149421315\n"
"15.3.3121113134149.76\n"
".8.11.1291412151014109\n"
"2..11191311414141461113\n"
"8.21249512968.21512\n"
"2711.24.4.311553.\n"
".1513.13.15971410.151012\n"
"13214172745331314.7\n"
"1056513151386.8112..\n"
"712.6131154.115151111.\n"
"31515713211141142125.\n") == 0);
free(board566676574);
board566676574 = NULL;
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 5, 2, 14) == 0 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 7, 12, 11) == 0 );
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_free_fields(board, 8) == 40 );
assert( gamma_move(board, 9, 12, 11) == 0 );
assert( gamma_move(board, 9, 0, 10) == 0 );
assert( gamma_free_fields(board, 9) == 40 );
assert( gamma_move(board, 10, 5, 6) == 0 );


char* board476873644 = gamma_board(board);
assert( board476873644 != NULL );
assert( strcmp(board476873644, 
"11287.168102.3.10.\n"
"13.102.3151.12..643\n"
".2.13851.2151101557\n"
"15.127146.812149421315\n"
"15.3.3121113134149.76\n"
".8.11.1291412151014109\n"
"2..11191311414141461113\n"
"8.21249512968.21512\n"
"2711.24.4.311553.\n"
".1513.13.15971410.151012\n"
"13214172745331314.7\n"
"1056513151386.8112..\n"
"712.6131154.115151111.\n"
"31515713211141142125.\n") == 0);
free(board476873644);
board476873644 = NULL;
assert( gamma_move(board, 12, 13, 14) == 0 );
assert( gamma_move(board, 12, 5, 12) == 0 );
assert( gamma_move(board, 13, 1, 5) == 0 );
assert( gamma_move(board, 13, 5, 13) == 0 );
assert( gamma_move(board, 14, 0, 8) == 1 );
assert( gamma_golden_move(board, 14, 0, 6) == 0 );
assert( gamma_move(board, 15, 2, 8) == 1 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 13, 14) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_move(board, 6, 13, 12) == 0 );
assert( gamma_move(board, 6, 13, 4) == 0 );
assert( gamma_move(board, 7, 11, 0) == 0 );
assert( gamma_move(board, 7, 12, 6) == 0 );
assert( gamma_move(board, 8, 12, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 9, 3, 10) == 0 );
assert( gamma_free_fields(board, 9) == 37 );
assert( gamma_move(board, 10, 6, 1) == 0 );
assert( gamma_move(board, 10, 12, 3) == 0 );
assert( gamma_move(board, 11, 11, 2) == 0 );
assert( gamma_move(board, 13, 10, 1) == 0 );
assert( gamma_move(board, 14, 4, 3) == 0 );
assert( gamma_move(board, 15, 1, 2) == 0 );
assert( gamma_move(board, 15, 9, 1) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_free_fields(board, 3) == 37 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 7, 1, 14) == 0 );
assert( gamma_move(board, 8, 3, 9) == 1 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 9, 14, 3) == 0 );
assert( gamma_free_fields(board, 9) == 36 );
assert( gamma_move(board, 10, 10, 6) == 0 );
assert( gamma_move(board, 10, 14, 6) == 0 );
assert( gamma_move(board, 11, 13, 4) == 0 );


char* board266738053 = gamma_board(board);
assert( board266738053 != NULL );
assert( strcmp(board266738053, 
"11287.168102.3.10.\n"
"13.102.3151.12..643\n"
".2.13851.2151101557\n"
"15.127146.812149421315\n"
"15.383121113134149.76\n"
"148151151291412151014109\n"
"2..11191311414141461113\n"
"8.21249512968.21512\n"
"2711.24.4.311553.\n"
".1513.13.15971410.151012\n"
"13214172745331314.7\n"
"1056513151386.8112..\n"
"712.6131154.115151111.\n"
"31515713211141142125.\n") == 0);
free(board266738053);
board266738053 = NULL;
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 4, 0) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 5, 13, 14) == 0 );
assert( gamma_move(board, 6, 11, 7) == 0 );


char* board359803311 = gamma_board(board);
assert( board359803311 != NULL );
assert( strcmp(board359803311, 
"11287.168102.3.10.\n"
"13.102.3151.12..643\n"
".2.13851.2151101557\n"
"15.127146.812149421315\n"
"15.383121113134149.76\n"
"148151151291412151014109\n"
"2..11191311414141461113\n"
"8.21249512968.21512\n"
"2711.24.4.311553.\n"
".1513.13.15971410.151012\n"
"13214172745331314.7\n"
"1056513151386.8112..\n"
"712.6131154.115151111.\n"
"31515713211141142125.\n") == 0);
free(board359803311);
board359803311 = NULL;
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 5, 14) == 0 );
assert( gamma_move(board, 8, 9, 5) == 0 );
assert( gamma_move(board, 9, 0, 2) == 0 );
assert( gamma_move(board, 10, 0, 14) == 0 );
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_busy_fields(board, 11) == 12 );
assert( gamma_move(board, 12, 13, 4) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 7, 2) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 12, 1) == 0 );
assert( gamma_move(board, 14, 14, 8) == 0 );
assert( gamma_busy_fields(board, 14) == 11 );
assert( gamma_move(board, 15, 4, 0) == 0 );


gamma_delete(board);

    return 0;
}
