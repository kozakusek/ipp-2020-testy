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
uuid: 547875507
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 13, 14, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_golden_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_move(board, 8, 4, 9) == 1 );


char* board258325125 = gamma_board(board);
assert( board258325125 != NULL );
assert( strcmp(board258325125, 
".....\n"
"....4\n"
"2....\n"
"....8\n"
".....\n"
"..2..\n"
".....\n"
".....\n"
"3...5\n"
".....\n"
".....\n"
"...8.\n"
"1....\n") == 0);
free(board258325125);
board258325125 = NULL;
assert( gamma_move(board, 9, 3, 8) == 1 );
assert( gamma_move(board, 9, 0, 9) == 1 );
assert( gamma_move(board, 10, 3, 5) == 1 );
assert( gamma_move(board, 10, 0, 3) == 1 );
assert( gamma_move(board, 11, 0, 3) == 0 );
assert( gamma_move(board, 11, 3, 2) == 1 );
assert( gamma_move(board, 12, 0, 0) == 0 );
assert( gamma_move(board, 13, 7, 3) == 0 );
assert( gamma_move(board, 14, 5, 1) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_golden_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 0 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_move(board, 8, 2, 12) == 1 );
assert( gamma_move(board, 9, 0, 1) == 1 );


char* board336295714 = gamma_board(board);
assert( board336295714 != NULL );
assert( strcmp(board336295714, 
"..8..\n"
"....4\n"
"2.5..\n"
"9...8\n"
"7..9.\n"
"..2.3\n"
".....\n"
"...10.\n"
"3...5\n"
"10....\n"
"...11.\n"
"9748.\n"
"1....\n") == 0);
free(board336295714);
board336295714 = NULL;
assert( gamma_move(board, 10, 10, 1) == 0 );
assert( gamma_move(board, 11, 1, 9) == 1 );
assert( gamma_move(board, 12, 7, 1) == 0 );
assert( gamma_move(board, 13, 1, 12) == 1 );
assert( gamma_move(board, 14, 11, 2) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_golden_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 5, 2, 9) == 1 );


char* board174958694 = gamma_board(board);
assert( board174958694 != NULL );
assert( strcmp(board174958694, 
".138..\n"
"....4\n"
"2.5..\n"
"9115.8\n"
"7..9.\n"
"..2.3\n"
".....\n"
"..310.\n"
"3..45\n"
"10....\n"
"...11.\n"
"9748.\n"
"1....\n") == 0);
free(board174958694);
board174958694 = NULL;
assert( gamma_move(board, 6, 4, 12) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_free_fields(board, 6) == 39 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 11, 2) == 0 );
assert( gamma_golden_move(board, 9, 9, 1) == 0 );
assert( gamma_move(board, 10, 11, 2) == 0 );
assert( gamma_move(board, 11, 9, 3) == 0 );
assert( gamma_move(board, 11, 2, 0) == 1 );
assert( gamma_move(board, 12, 2, 4) == 1 );
assert( gamma_move(board, 13, 2, 2) == 1 );
assert( gamma_move(board, 13, 2, 2) == 0 );
assert( gamma_move(board, 14, 11, 1) == 0 );
assert( gamma_move(board, 14, 4, 10) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 6, 0, 11) == 1 );
assert( gamma_golden_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 8, 6, 0) == 0 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_move(board, 9, 4, 5) == 1 );
assert( gamma_move(board, 10, 6, 2) == 0 );
assert( gamma_move(board, 11, 9, 3) == 0 );
assert( gamma_move(board, 11, 2, 2) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 1, 0) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 6, 4) == 0 );
assert( gamma_move(board, 13, 4, 6) == 1 );
assert( gamma_free_fields(board, 13) == 27 );
assert( gamma_move(board, 14, 8, 2) == 0 );
assert( gamma_move(board, 14, 2, 5) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 7, 0, 12) == 1 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 10, 0, 4) == 0 );
assert( gamma_move(board, 11, 1, 5) == 1 );
assert( gamma_free_fields(board, 12) == 24 );
assert( gamma_move(board, 13, 7, 0) == 0 );
assert( gamma_move(board, 14, 3, 4) == 0 );
assert( gamma_free_fields(board, 14) == 24 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );


char* board775094859 = gamma_board(board);
assert( board775094859 != NULL );
assert( strcmp(board775094859, 
"7138.6\n"
"6...4\n"
"2.5.14\n"
"9115.8\n"
"7.39.\n"
".72.3\n"
".5.313\n"
"2113109\n"
"351245\n"
"10....\n"
".413113\n"
"9748.\n"
"11211..\n") == 0);
free(board775094859);
board775094859 = NULL;
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 1, 10) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );


char* board639052500 = gamma_board(board);
assert( board639052500 != NULL );
assert( strcmp(board639052500, 
"7138.6\n"
"6...4\n"
"255.14\n"
"9115.8\n"
"7.39.\n"
".72.3\n"
".5.313\n"
"2113109\n"
"351245\n"
"10..6.\n"
".413113\n"
"9748.\n"
"11211..\n") == 0);
free(board639052500);
board639052500 = NULL;
assert( gamma_move(board, 9, 4, 12) == 0 );
assert( gamma_move(board, 9, 4, 4) == 0 );
assert( gamma_free_fields(board, 9) == 19 );
assert( gamma_move(board, 10, 3, 10) == 1 );
assert( gamma_move(board, 10, 3, 1) == 0 );
assert( gamma_move(board, 11, 12, 3) == 0 );
assert( gamma_move(board, 12, 1, 4) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 6, 0) == 0 );
assert( gamma_move(board, 14, 7, 0) == 0 );
assert( gamma_move(board, 14, 4, 3) == 1 );
assert( gamma_busy_fields(board, 14) == 2 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_free_fields(board, 1) == 16 );


char* board554778504 = gamma_board(board);
assert( board554778504 != NULL );
assert( strcmp(board554778504, 
"7138.6\n"
"6...4\n"
"2551014\n"
"9115.8\n"
"7.39.\n"
".72.3\n"
".51313\n"
"2113109\n"
"351245\n"
"10..614\n"
".413113\n"
"9748.\n"
"11211..\n") == 0);
free(board554778504);
board554778504 = NULL;
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_golden_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_free_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );


char* board926372711 = gamma_board(board);
assert( board926372711 != NULL );
assert( strcmp(board926372711, 
"7138.6\n"
"6...4\n"
"2551014\n"
"9115.8\n"
"7.39.\n"
".72.3\n"
".51313\n"
"2113109\n"
"351245\n"
"10..614\n"
".413113\n"
"9748.\n"
"11211..\n") == 0);
free(board926372711);
board926372711 = NULL;
assert( gamma_move(board, 9, 11, 1) == 0 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 11, 8, 1) == 0 );


char* board709513420 = gamma_board(board);
assert( board709513420 != NULL );
assert( strcmp(board709513420, 
"7138.6\n"
"6...4\n"
"2551014\n"
"9115.8\n"
"7.39.\n"
".72.3\n"
".51313\n"
"2113109\n"
"351245\n"
"10..614\n"
".413113\n"
"9748.\n"
"11211..\n") == 0);
free(board709513420);
board709513420 = NULL;
assert( gamma_move(board, 12, 3, 1) == 0 );
assert( gamma_move(board, 12, 2, 8) == 0 );
assert( gamma_move(board, 13, 3, 2) == 0 );
assert( gamma_move(board, 14, 7, 3) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );


char* board868198707 = gamma_board(board);
assert( board868198707 != NULL );
assert( strcmp(board868198707, 
"7138.6\n"
"6...4\n"
"2551014\n"
"9115.8\n"
"7.39.\n"
".72.3\n"
".51313\n"
"2113109\n"
"351245\n"
"10..614\n"
".413113\n"
"9748.\n"
"11211..\n") == 0);
free(board868198707);
board868198707 = NULL;
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_golden_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_free_fields(board, 6) == 16 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 9, 12, 3) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 0, 4) == 0 );
assert( gamma_move(board, 11, 3, 6) == 0 );
assert( gamma_move(board, 11, 4, 12) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 12, 3) == 0 );
assert( gamma_move(board, 14, 7, 3) == 0 );
assert( gamma_move(board, 14, 2, 12) == 0 );
assert( gamma_free_fields(board, 14) == 16 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_golden_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_free_fields(board, 3) == 15 );


char* board218213536 = gamma_board(board);
assert( board218213536 != NULL );
assert( strcmp(board218213536, 
"7138.6\n"
"6...4\n"
"2551014\n"
"9115.8\n"
"7.39.\n"
".72.3\n"
".51313\n"
"2113109\n"
"351245\n"
"101.614\n"
".413113\n"
"9748.\n"
"11211..\n") == 0);
free(board218213536);
board218213536 = NULL;
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 8, 0, 10) == 0 );
assert( gamma_move(board, 9, 11, 2) == 0 );


char* board221272666 = gamma_board(board);
assert( board221272666 != NULL );
assert( strcmp(board221272666, 
"7138.6\n"
"6...4\n"
"2551014\n"
"9115.8\n"
"7.39.\n"
".72.3\n"
".51313\n"
"2113109\n"
"351245\n"
"101.614\n"
".413113\n"
"9748.\n"
"11211..\n") == 0);
free(board221272666);
board221272666 = NULL;
assert( gamma_move(board, 10, 3, 2) == 0 );
assert( gamma_move(board, 10, 4, 9) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 1, 8) == 1 );
assert( gamma_busy_fields(board, 11) == 5 );
assert( gamma_move(board, 12, 8, 4) == 0 );
assert( gamma_move(board, 13, 0, 3) == 0 );
assert( gamma_move(board, 14, 6, 0) == 0 );
assert( gamma_move(board, 14, 2, 0) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


gamma_delete(board);

    return 0;
}
