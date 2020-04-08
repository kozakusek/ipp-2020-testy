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
uuid: 564271937
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 5, 14, 14);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_free_fields(board, 2) == 70 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_move(board, 9, 6, 4) == 1 );


char* board775979113 = gamma_board(board);
assert( board775979113 != NULL );
assert( strcmp(board775979113, 
"7.....9.......\n"
"..............\n"
"54.......3....\n"
"..............\n"
".9............\n") == 0);
free(board775979113);
board775979113 = NULL;
assert( gamma_move(board, 10, 4, 1) == 1 );
assert( gamma_move(board, 11, 4, 5) == 0 );
assert( gamma_busy_fields(board, 11) == 0 );
assert( gamma_move(board, 12, 2, 13) == 0 );
assert( gamma_move(board, 12, 5, 3) == 1 );
assert( gamma_move(board, 13, 3, 6) == 0 );
assert( gamma_move(board, 14, 4, 0) == 1 );
assert( gamma_move(board, 14, 5, 3) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );


char* board998928507 = gamma_board(board);
assert( board998928507 != NULL );
assert( strcmp(board998928507, 
"7.....9.......\n"
".....12........\n"
"54.......3....\n"
".1..10.........\n"
".9..14...1.....\n") == 0);
free(board998928507);
board998928507 = NULL;
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_free_fields(board, 5) == 55 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 7, 13, 2) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_free_fields(board, 8) == 52 );
assert( gamma_move(board, 9, 1, 11) == 0 );
assert( gamma_free_fields(board, 9) == 52 );
assert( gamma_move(board, 10, 3, 2) == 1 );
assert( gamma_move(board, 10, 8, 3) == 1 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 3, 7) == 0 );
assert( gamma_move(board, 11, 7, 2) == 1 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_free_fields(board, 11) == 49 );
assert( gamma_move(board, 12, 4, 2) == 1 );
assert( gamma_move(board, 13, 9, 3) == 1 );
assert( gamma_move(board, 14, 4, 13) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 11, 4) == 1 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_move(board, 10, 6, 3) == 1 );


char* board454797369 = gamma_board(board);
assert( board454797369 != NULL );
assert( strcmp(board454797369, 
"7....39....6..\n"
".8.2.1210.10134...\n"
"5481012.411.3...7\n"
".122103..3.....\n"
".9..14...1.....\n") == 0);
free(board454797369);
board454797369 = NULL;
assert( gamma_move(board, 11, 2, 2) == 0 );
assert( gamma_move(board, 11, 2, 3) == 1 );
assert( gamma_move(board, 12, 9, 1) == 1 );
assert( gamma_move(board, 12, 12, 0) == 1 );
assert( gamma_move(board, 13, 0, 2) == 0 );
assert( gamma_move(board, 14, 6, 3) == 0 );
assert( gamma_busy_fields(board, 14) == 1 );
assert( gamma_move(board, 1, 12, 3) == 1 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_free_fields(board, 3) == 37 );
assert( gamma_golden_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 10, 4, 3) == 1 );
assert( gamma_move(board, 11, 3, 11) == 0 );
assert( gamma_move(board, 11, 6, 4) == 0 );
assert( gamma_move(board, 12, 0, 7) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_golden_move(board, 12, 0, 4) == 1 );
assert( gamma_move(board, 13, 1, 6) == 0 );
assert( gamma_move(board, 13, 9, 3) == 0 );
assert( gamma_move(board, 14, 2, 8) == 0 );
assert( gamma_move(board, 14, 12, 2) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 13, 3) == 1 );
assert( gamma_golden_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 8, 2, 2) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );


char* board898939790 = gamma_board(board);
assert( board898939790 != NULL );
assert( strcmp(board898939790, 
"12..4.39..2.6..\n"
".811231210.10134.16\n"
"5481012.411.3..147\n"
".722103..312....\n"
".9..14...1...12.\n") == 0);
free(board898939790);
board898939790 = NULL;
assert( gamma_move(board, 10, 4, 1) == 0 );
assert( gamma_move(board, 10, 2, 3) == 0 );
assert( gamma_move(board, 11, 1, 4) == 1 );
assert( gamma_move(board, 12, 4, 10) == 0 );
assert( gamma_busy_fields(board, 12) == 5 );
assert( gamma_golden_possible(board, 12) == 0 );
assert( gamma_golden_move(board, 12, 3, 4) == 0 );
assert( gamma_move(board, 13, 10, 4) == 1 );
assert( gamma_move(board, 14, 10, 4) == 0 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 13, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 10, 0) == 1 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 7, 12, 0) == 0 );
assert( gamma_free_fields(board, 7) == 25 );
assert( gamma_move(board, 8, 12, 0) == 0 );
assert( gamma_move(board, 9, 1, 7) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 6, 0) == 1 );
assert( gamma_move(board, 11, 10, 4) == 0 );
assert( gamma_move(board, 11, 1, 0) == 0 );
assert( gamma_move(board, 12, 0, 0) == 1 );
assert( gamma_move(board, 12, 13, 1) == 1 );
assert( gamma_move(board, 13, 4, 13) == 0 );
assert( gamma_move(board, 13, 8, 2) == 1 );
assert( gamma_move(board, 14, 4, 13) == 0 );
assert( gamma_move(board, 14, 8, 3) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 11, 0) == 1 );
assert( gamma_golden_move(board, 5, 3, 12) == 0 );


char* board419692158 = gamma_board(board);
assert( board419692158 != NULL );
assert( strcmp(board419692158, 
"1211.4739..2136..\n"
"3811231210.10134.16\n"
"5481012.411133..147\n"
".722103..312...12\n"
"129.114.10.1.45122\n") == 0);
free(board419692158);
board419692158 = NULL;
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 12, 1) == 1 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 9, 0, 9) == 0 );
assert( gamma_move(board, 10, 3, 7) == 0 );
assert( gamma_free_fields(board, 10) == 19 );
assert( gamma_move(board, 11, 4, 8) == 0 );
assert( gamma_move(board, 11, 6, 4) == 0 );
assert( gamma_move(board, 12, 1, 6) == 0 );
assert( gamma_move(board, 13, 4, 3) == 0 );
assert( gamma_move(board, 13, 11, 4) == 0 );
assert( gamma_move(board, 14, 12, 1) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 6, 10, 2) == 1 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_move(board, 9, 1, 11) == 0 );
assert( gamma_move(board, 9, 0, 1) == 1 );
assert( gamma_move(board, 10, 6, 4) == 0 );
assert( gamma_move(board, 11, 0, 2) == 0 );
assert( gamma_move(board, 12, 4, 8) == 0 );
assert( gamma_move(board, 12, 11, 0) == 0 );
assert( gamma_move(board, 13, 1, 10) == 0 );
assert( gamma_move(board, 13, 10, 1) == 1 );
assert( gamma_move(board, 14, 10, 0) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 4, 13) == 0 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_move(board, 8, 11, 4) == 0 );
assert( gamma_move(board, 9, 2, 5) == 0 );
assert( gamma_move(board, 10, 1, 11) == 0 );
assert( gamma_move(board, 10, 3, 4) == 0 );
assert( gamma_busy_fields(board, 11) == 3 );
assert( gamma_move(board, 12, 4, 7) == 0 );
assert( gamma_move(board, 12, 0, 3) == 0 );


char* board295400724 = gamma_board(board);
assert( board295400724 != NULL );
assert( strcmp(board295400724, 
"1211.4739..2136..\n"
"3811231210.10134.16\n"
"5481012.4111336.147\n"
"97221035.31213.812\n"
"129.114.1081.45122\n") == 0);
free(board295400724);
board295400724 = NULL;
assert( gamma_move(board, 13, 8, 3) == 0 );


char* board412930934 = gamma_board(board);
assert( board412930934 != NULL );
assert( strcmp(board412930934, 
"1211.4739..2136..\n"
"3811231210.10134.16\n"
"5481012.4111336.147\n"
"97221035.31213.812\n"
"129.114.1081.45122\n") == 0);
free(board412930934);
board412930934 = NULL;
assert( gamma_move(board, 14, 3, 7) == 0 );
assert( gamma_move(board, 14, 2, 4) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_golden_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_free_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 3, 11) == 0 );
assert( gamma_move(board, 9, 3, 11) == 0 );
assert( gamma_move(board, 9, 1, 1) == 0 );
assert( gamma_move(board, 10, 6, 3) == 0 );
assert( gamma_move(board, 10, 2, 3) == 0 );
assert( gamma_move(board, 11, 3, 4) == 0 );
assert( gamma_move(board, 11, 11, 3) == 1 );
assert( gamma_move(board, 13, 8, 2) == 0 );
assert( gamma_busy_fields(board, 13) == 4 );
assert( gamma_move(board, 14, 6, 4) == 0 );


gamma_delete(board);

    return 0;
}
