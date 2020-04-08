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
uuid: 662037191
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 13, 10, 15);
assert( board != NULL );


assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 9, 11) == 1 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_move(board, 6, 10, 1) == 1 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_golden_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 2, 12) == 1 );
assert( gamma_move(board, 7, 8, 11) == 1 );
assert( gamma_move(board, 8, 0, 2) == 1 );
assert( gamma_move(board, 9, 9, 4) == 1 );
assert( gamma_move(board, 9, 0, 12) == 1 );
assert( gamma_move(board, 10, 6, 11) == 1 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_free_fields(board, 4) == 150 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_free_fields(board, 5) == 149 );


char* board497582728 = gamma_board(board);
assert( board497582728 != NULL );
assert( strcmp(board497582728, 
"9.7..........\n"
"......10.75...\n"
".............\n"
"3.3..........\n"
"..1..........\n"
"........3....\n"
"1.......4.5..\n"
".4.....4.....\n"
".........9...\n"
"..........6..\n"
"853..........\n"
"..........6..\n"
".............\n") == 0);
free(board497582728);
board497582728 = NULL;
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 7, 11, 4) == 1 );
assert( gamma_free_fields(board, 7) == 146 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 3) == 1 );
assert( gamma_move(board, 9, 9, 1) == 1 );
assert( gamma_move(board, 10, 10, 0) == 1 );
assert( gamma_move(board, 10, 1, 1) == 1 );
assert( gamma_move(board, 1, 12, 11) == 1 );
assert( gamma_golden_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 3, 9, 7) == 1 );


char* board444576712 = gamma_board(board);
assert( board444576712 != NULL );
assert( strcmp(board444576712, 
"9.7..........\n"
"......10.75..1\n"
".............\n"
"3.3..........\n"
"..1..6.......\n"
"..2.....33...\n"
"1.......4.5..\n"
".4.....4.....\n"
".........9.7.\n"
".......9..6..\n"
"853..7.......\n"
".10.....3.96..\n"
"..........10..\n") == 0);
free(board444576712);
board444576712 = NULL;
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 5, 10, 10) == 1 );
assert( gamma_move(board, 5, 1, 12) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 11) == 1 );
assert( gamma_move(board, 8, 6, 0) == 1 );
assert( gamma_move(board, 8, 11, 8) == 1 );
assert( gamma_free_fields(board, 8) == 132 );
assert( gamma_move(board, 9, 3, 0) == 1 );
assert( gamma_move(board, 9, 4, 6) == 1 );
assert( gamma_move(board, 10, 3, 8) == 1 );
assert( gamma_free_fields(board, 10) == 129 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_golden_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 6, 11, 2) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 7, 5, 12) == 1 );
assert( gamma_move(board, 8, 7, 4) == 1 );
assert( gamma_move(board, 8, 9, 12) == 1 );
assert( gamma_move(board, 9, 9, 11) == 0 );
assert( gamma_move(board, 9, 7, 4) == 0 );
assert( gamma_move(board, 10, 7, 3) == 0 );
assert( gamma_move(board, 10, 1, 4) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 10, 4) == 1 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 7, 4, 8) == 1 );
assert( gamma_move(board, 7, 6, 8) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_move(board, 9, 8, 7) == 0 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_free_fields(board, 9) == 110 );
assert( gamma_move(board, 10, 0, 1) == 1 );
assert( gamma_move(board, 1, 12, 3) == 1 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 8, 12) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_free_fields(board, 6) == 103 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 7) == 1 );


char* board699223304 = gamma_board(board);
assert( board699223304 != NULL );
assert( strcmp(board699223304, 
"957..7..48...\n"
"7.....10.75..1\n"
".......3..5..\n"
"3.34.........\n"
"3.110767..4.8.\n"
"..2.7...33...\n"
"1...9...4.5..\n"
"14.....4.....\n"
".10.462.8.957.\n"
"..4..1.9..6.1\n"
"853..7....26.\n"
"1010.....3296.5\n"
"...9..853310..\n") == 0);
free(board699223304);
board699223304 = NULL;
assert( gamma_move(board, 8, 2, 11) == 1 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 9, 9, 7) == 0 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_move(board, 10, 7, 5) == 0 );


char* board865034407 = gamma_board(board);
assert( board865034407 != NULL );
assert( strcmp(board865034407, 
"957..7..48...\n"
"7.8...10.75..1\n"
".......3..5..\n"
"3.34.........\n"
"3.110767..4.8.\n"
"..2.7...33...\n"
"1...9...4.5..\n"
"14.....4.....\n"
".10.462.8.957.\n"
"..4..1.9..6.1\n"
"853..7....26.\n"
"1010.....3296.5\n"
"...9..853310..\n") == 0);
free(board865034407);
board865034407 = NULL;
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_free_fields(board, 5) == 98 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_move(board, 7, 8, 9) == 1 );
assert( gamma_move(board, 7, 9, 9) == 1 );


char* board308242983 = gamma_board(board);
assert( board308242983 != NULL );
assert( strcmp(board308242983, 
"957..7..48...\n"
"7.8...10.75..1\n"
".......3..5..\n"
"3.34.1..77...\n"
"3.110767..4.8.\n"
"..2.7...33...\n"
"1...9...4.5..\n"
"14.....4.....\n"
"310.462.8.957.\n"
".54..1.9..6.1\n"
"853..7....26.\n"
"1010.....3296.5\n"
"...9..853310..\n") == 0);
free(board308242983);
board308242983 = NULL;
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 9, 6, 11) == 0 );
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_free_fields(board, 9) == 96 );
assert( gamma_move(board, 10, 12, 1) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_free_fields(board, 2) == 95 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_free_fields(board, 3) == 95 );


char* board834685807 = gamma_board(board);
assert( board834685807 != NULL );
assert( strcmp(board834685807, 
"957..7..48...\n"
"7.8...10.75..1\n"
".......3..5..\n"
"3.34.1..77...\n"
"3.110767..4.8.\n"
"..2.7...33...\n"
"1...9...4.5..\n"
"14.....4.2...\n"
"310.462.8.957.\n"
".54..1.9..6.1\n"
"853..7....26.\n"
"1010.....3296.5\n"
"...9..853310..\n") == 0);
free(board834685807);
board834685807 = NULL;
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_free_fields(board, 5) == 94 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board766315357 = gamma_board(board);
assert( board766315357 != NULL );
assert( strcmp(board766315357, 
"957..7..48...\n"
"7.8...10.75..1\n"
".......3..5..\n"
"3.34.1..77...\n"
"3.110767..4.8.\n"
"..2.7...33...\n"
"1...9...4.5..\n"
"14.....4.25..\n"
"310.462.8.957.\n"
".54..1.9..6.1\n"
"853..7....26.\n"
"1010.....3296.5\n"
"...9..853310..\n") == 0);
free(board766315357);
board766315357 = NULL;
assert( gamma_move(board, 7, 8, 12) == 0 );
assert( gamma_move(board, 8, 3, 11) == 1 );
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_move(board, 10, 4, 8) == 0 );
assert( gamma_move(board, 10, 3, 5) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 6, 6, 12) == 1 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 7, 2, 11) == 0 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 8, 4, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 10, 10, 3) == 0 );
assert( gamma_move(board, 10, 5, 2) == 0 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 1, 12, 8) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_free_fields(board, 2) == 82 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_golden_move(board, 4, 2, 11) == 1 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 7, 9, 9) == 0 );
assert( gamma_move(board, 8, 2, 6) == 1 );
assert( gamma_move(board, 9, 6, 4) == 0 );
assert( gamma_move(board, 9, 4, 7) == 0 );
assert( gamma_move(board, 10, 3, 4) == 0 );
assert( gamma_free_fields(board, 10) == 80 );
assert( gamma_golden_move(board, 10, 12, 8) == 1 );
assert( gamma_move(board, 1, 12, 7) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_golden_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 3, 12, 10) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 0) == 0 );


char* board346329185 = gamma_board(board);
assert( board346329185 != NULL );
assert( strcmp(board346329185, 
"957..76.48...\n"
"7.48..10.75..1\n"
".......3..5.3\n"
"3.34.1..77...\n"
"3.110767..4.810\n"
"..2.7...33..1\n"
"128.9...4.5..\n"
"14.10...4.25..\n"
"310.46248.957.\n"
"2542.169..6.1\n"
"8531.7.7..26.\n"
"10103.8..3296.5\n"
"8..9..853310..\n") == 0);
free(board346329185);
board346329185 = NULL;
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 7, 9, 9) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 8, 6, 5) == 1 );
assert( gamma_busy_fields(board, 8) == 10 );
assert( gamma_move(board, 9, 9, 12) == 0 );
assert( gamma_move(board, 10, 2, 11) == 0 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 8, 7) == 0 );


char* board846472238 = gamma_board(board);
assert( board846472238 != NULL );
assert( strcmp(board846472238, 
"9572.76.48...\n"
"7.48..10.75..1\n"
".......3..5.3\n"
"3.34.1..77...\n"
"3.110767..4.810\n"
"..2.7...33..1\n"
"128.9...4.5..\n"
"14.10..84.25..\n"
"310.46248.957.\n"
"2542.169..6.1\n"
"8531.7.7..26.\n"
"10103.8..3296.5\n"
"8..9..853310..\n") == 0);
free(board846472238);
board846472238 = NULL;
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 8, 2, 5) == 1 );
assert( gamma_move(board, 9, 12, 11) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 3, 11) == 0 );
assert( gamma_move(board, 1, 11, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 3, 2) == 1 );


char* board963640914 = gamma_board(board);
assert( board963640914 != NULL );
assert( strcmp(board963640914, 
"9572.76.48...\n"
"7.48..10.75..1\n"
".......3..5.3\n"
"3.34.1..77...\n"
"3.110767..4.810\n"
"..2.7.5.33.11\n"
"128.9...4.5..\n"
"14810..84.25..\n"
"310.46248.957.\n"
"2542.169..6.1\n"
"8532.7.7..26.\n"
"10103.8..3296.5\n"
"8..9..853310..\n") == 0);
free(board963640914);
board963640914 = NULL;
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_free_fields(board, 3) == 72 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_free_fields(board, 5) == 71 );
assert( gamma_golden_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 7, 12, 8) == 0 );


char* board456933283 = gamma_board(board);
assert( board456933283 != NULL );
assert( strcmp(board456933283, 
"9572.76.48...\n"
"7.48..10.75..1\n"
".......3..5.3\n"
"3.34.1..77...\n"
"3.110767..4.810\n"
"..2.7.5.33.11\n"
"128.9...4.5..\n"
"1486..84.25..\n"
"310.46248.957.\n"
"2542.169..6.1\n"
"8532.7.7..26.\n"
"10103.8..3296.5\n"
"8.59..853310..\n") == 0);
free(board456933283);
board456933283 = NULL;
assert( gamma_move(board, 8, 0, 11) == 0 );
assert( gamma_move(board, 9, 4, 10) == 1 );
assert( gamma_move(board, 10, 9, 5) == 0 );
assert( gamma_move(board, 10, 6, 3) == 0 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 1, 11) == 1 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_free_fields(board, 5) == 68 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_golden_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 0, 11) == 0 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_move(board, 10, 11, 11) == 1 );
assert( gamma_move(board, 10, 11, 7) == 0 );


char* board545265229 = gamma_board(board);
assert( board545265229 != NULL );
assert( strcmp(board545265229, 
"9572.76.48...\n"
"7448..10.75.101\n"
"....9..3..5.3\n"
"3.34.1..77...\n"
"3.110767..4.810\n"
"..2.7.5.33.11\n"
"128.9...4.5..\n"
"1486..84.25..\n"
"310546248.957.\n"
"25428169..6.1\n"
"8532.7.7..26.\n"
"10103.8..3296.5\n"
"8.59..853310..\n") == 0);
free(board545265229);
board545265229 = NULL;
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_free_fields(board, 1) == 66 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_free_fields(board, 5) == 66 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 9, 6, 6) == 1 );
assert( gamma_move(board, 10, 7, 0) == 0 );
assert( gamma_move(board, 10, 9, 5) == 0 );
assert( gamma_move(board, 1, 11, 10) == 1 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_free_fields(board, 2) == 63 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 10, 3) == 0 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_move(board, 9, 3, 8) == 0 );
assert( gamma_move(board, 10, 6, 3) == 0 );


char* board712857505 = gamma_board(board);
assert( board712857505 != NULL );
assert( strcmp(board712857505, 
"9572.76.48...\n"
"7448..10.75.101\n"
"....9..3..513\n"
"3.34.1..77...\n"
"3.110767..4.810\n"
"..2.7.5.33.11\n"
"128.9.964.5..\n"
"1486..84.25..\n"
"310546248.957.\n"
"25428169..6.1\n"
"8532.7.7..26.\n"
"10103.8..3296.5\n"
"8.59..853310..\n") == 0);
free(board712857505);
board712857505 = NULL;
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_move(board, 5, 12, 12) == 1 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_golden_move(board, 7, 12, 1) == 1 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );


char* board947945350 = gamma_board(board);
assert( board947945350 != NULL );
assert( strcmp(board947945350, 
"9572.76.48..5\n"
"7448..10.75.101\n"
"....9..3..513\n"
"3.34.12.77...\n"
"3.110767..4.810\n"
"..2.7.5.33.11\n"
"128.9.964.54.\n"
"1486..84.25..\n"
"310546248.957.\n"
"25428169..6.1\n"
"8532.7.7..26.\n"
"10103.8..3296.7\n"
"8.59..853310..\n") == 0);
free(board947945350);
board947945350 = NULL;
assert( gamma_move(board, 9, 7, 3) == 0 );
assert( gamma_move(board, 10, 5, 8) == 0 );
assert( gamma_move(board, 10, 4, 7) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 6, 11, 12) == 1 );
assert( gamma_free_fields(board, 6) == 59 );
assert( gamma_move(board, 8, 10, 9) == 1 );
assert( gamma_move(board, 8, 12, 11) == 0 );
assert( gamma_busy_fields(board, 8) == 13 );
assert( gamma_move(board, 9, 10, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 10, 4, 12) == 1 );
assert( gamma_move(board, 10, 9, 9) == 0 );
assert( gamma_free_fields(board, 10) == 57 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 7, 7, 9) == 1 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_free_fields(board, 8) == 55 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 10, 8) == 1 );
assert( gamma_move(board, 10, 5, 4) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 7, 11) == 1 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );


char* board973663675 = gamma_board(board);
assert( board973663675 != NULL );
assert( strcmp(board973663675, 
"95721076.48.65\n"
"7448..10475.101\n"
"....9..3..513\n"
"3.34.127778..\n"
"3.110767..49810\n"
"..237.5.33.11\n"
"128.9.964.54.\n"
"1486..84.25..\n"
"310546248.957.\n"
"25428169..6.1\n"
"8532.7.7..26.\n"
"10103.8..3296.7\n"
"8.59..853310..\n") == 0);
free(board973663675);
board973663675 = NULL;
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 8, 10, 11) == 1 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_move(board, 10, 3, 9) == 0 );
assert( gamma_move(board, 10, 3, 8) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 11, 9) == 1 );
assert( gamma_golden_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 12, 10) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 7, 7) == 1 );
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 10, 10, 8) == 0 );
assert( gamma_move(board, 10, 7, 4) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 2, 11, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 4, 12) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_free_fields(board, 7) == 49 );
assert( gamma_golden_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 10, 0, 9) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 6, 12, 9) == 1 );
assert( gamma_move(board, 8, 5, 12) == 0 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 9, 6, 10) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 0, 3) == 1 );
assert( gamma_move(board, 10, 3, 8) == 0 );
assert( gamma_golden_move(board, 10, 10, 12) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 10, 10, 2) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 11, 9) == 0 );
assert( gamma_free_fields(board, 7) == 42 );
assert( gamma_golden_move(board, 7, 3, 1) == 0 );


char* board922603380 = gamma_board(board);
assert( board922603380 != NULL );
assert( strcmp(board922603380, 
"95721076.48.65\n"
"7448..104758101\n"
"....9.932.513\n"
"3.34.12777836\n"
"3.110767..49810\n"
"..237.5733.11\n"
"128.94964.54.\n"
"1486..84.252.\n"
"310546248.957.\n"
"95423169..6.1\n"
"8532.7.7.526.\n"
"10103.82.3296.7\n"
"8.595.853310..\n") == 0);
free(board922603380);
board922603380 = NULL;
assert( gamma_move(board, 8, 1, 11) == 0 );
assert( gamma_move(board, 9, 0, 11) == 0 );
assert( gamma_move(board, 9, 11, 5) == 0 );
assert( gamma_move(board, 10, 3, 5) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 7, 0, 10) == 1 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 8, 9, 10) == 1 );
assert( gamma_free_fields(board, 9) == 40 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 10, 5, 8) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_free_fields(board, 5) == 40 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 5, 12) == 0 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_free_fields(board, 7) == 39 );
assert( gamma_move(board, 8, 0, 12) == 0 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 10, 8, 8) == 1 );


char* board571921316 = gamma_board(board);
assert( board571921316 != NULL );
assert( strcmp(board571921316, 
"95721076.48.65\n"
"7448..104758101\n"
"7...9.9328513\n"
"3.34.12777836\n"
"3.110767.1049810\n"
"..237.5733.11\n"
"128.94964.54.\n"
"1486.684.252.\n"
"310546248.957.\n"
"95423169..6.1\n"
"8532.7.7.526.\n"
"10103.82.3296.7\n"
"8.595.853310..\n") == 0);
free(board571921316);
board571921316 = NULL;
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_free_fields(board, 3) == 37 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 6, 8, 3) == 1 );
assert( gamma_free_fields(board, 6) == 36 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 2, 12) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 9, 7, 10) == 0 );
assert( gamma_move(board, 9, 11, 7) == 0 );
assert( gamma_free_fields(board, 9) == 36 );
assert( gamma_move(board, 10, 8, 3) == 0 );
assert( gamma_move(board, 10, 1, 9) == 1 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 8, 0, 11) == 0 );
assert( gamma_move(board, 9, 5, 8) == 0 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_golden_move(board, 9, 9, 1) == 0 );
assert( gamma_move(board, 10, 10, 3) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 12, 5) == 1 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 8, 3, 10) == 1 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 9, 6, 12) == 0 );
assert( gamma_move(board, 10, 1, 10) == 1 );
assert( gamma_free_fields(board, 10) == 31 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 3, 1, 11) == 0 );


char* board388915210 = gamma_board(board);
assert( board388915210 != NULL );
assert( strcmp(board388915210, 
"95721076.48.65\n"
"7448..104758101\n"
"710.89.9328513\n"
"31034.12777836\n"
"32110767.1049810\n"
"..237.5733.11\n"
"128.94964.54.\n"
"14865684.2522\n"
"3105462481957.\n"
"954231696.6.1\n"
"8532.7.7.526.\n"
"10103.8213296.7\n"
"82595.853310..\n") == 0);
free(board388915210);
board388915210 = NULL;
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 16 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_move(board, 8, 7, 12) == 1 );
assert( gamma_busy_fields(board, 8) == 16 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_move(board, 10, 3, 9) == 0 );
assert( gamma_move(board, 10, 12, 12) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_golden_move(board, 4, 5, 2) == 0 );


char* board367461379 = gamma_board(board);
assert( board367461379 != NULL );
assert( strcmp(board367461379, 
"95721076848.65\n"
"7448..104758101\n"
"710.89.9328513\n"
"31034.12777836\n"
"32110767.1049810\n"
"..237.5733.11\n"
"128.94964.54.\n"
"14865684.2522\n"
"3105462481957.\n"
"954231696.6.1\n"
"8532.7.7.526.\n"
"10103.8213296.7\n"
"82595.853310..\n") == 0);
free(board367461379);
board367461379 = NULL;
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 10, 12) == 1 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_move(board, 8, 0, 11) == 0 );
assert( gamma_move(board, 9, 4, 12) == 0 );
assert( gamma_move(board, 9, 6, 2) == 1 );


char* board519418862 = gamma_board(board);
assert( board519418862 != NULL );
assert( strcmp(board519418862, 
"95721076848665\n"
"7448..104758101\n"
"710.89.9328513\n"
"31034.12777836\n"
"32110767.1049810\n"
"..237.5733.11\n"
"128.94964.54.\n"
"14865684.2522\n"
"3105462481957.\n"
"954231696.6.1\n"
"8532.797.526.\n"
"10103.8213296.7\n"
"82595.853310..\n") == 0);
free(board519418862);
board519418862 = NULL;
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );


char* board857634692 = gamma_board(board);
assert( board857634692 != NULL );
assert( strcmp(board857634692, 
"95721076848665\n"
"7448..104758101\n"
"710.89.9328513\n"
"31034.12777836\n"
"32110767.1049810\n"
"..237.5733.11\n"
"128.94964.54.\n"
"14865684.2522\n"
"3105462481957.\n"
"954231696.6.1\n"
"85321797.526.\n"
"10103.8213296.7\n"
"82595.853310..\n") == 0);
free(board857634692);
board857634692 = NULL;
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_move(board, 10, 1, 3) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 10, 2) == 0 );


char* board418275716 = gamma_board(board);
assert( board418275716 != NULL );
assert( strcmp(board418275716, 
"95721076848665\n"
"7448..104758101\n"
"710.89.9328513\n"
"31034.12777836\n"
"32110767.1049810\n"
"..237.5733.11\n"
"128.94964.54.\n"
"14865684.2522\n"
"3105462481957.\n"
"954231696.6.1\n"
"85321797.526.\n"
"10103.8213296.7\n"
"82595.853310..\n") == 0);
free(board418275716);
board418275716 = NULL;
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_free_fields(board, 7) == 24 );
assert( gamma_move(board, 8, 11, 4) == 0 );


gamma_delete(board);

    return 0;
}
