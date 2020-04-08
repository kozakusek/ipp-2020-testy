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
uuid: 684989659
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 15, 12, 20);
assert( board != NULL );


assert( gamma_move(board, 1, -1, 14) == 0 );
assert( gamma_free_fields(board, 1) == 135 );


char* board583771903 = gamma_board(board);
assert( board583771903 != NULL );
assert( strcmp(board583771903, 
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n") == 0);
free(board583771903);
board583771903 = NULL;
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, -1, 7) == 0 );
assert( gamma_move(board, 5, 5, 14) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_free_fields(board, 6) == 132 );
assert( gamma_golden_move(board, 6, 3, 6) == 0 );
assert( gamma_free_fields(board, 7) == 132 );
assert( gamma_golden_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 2, 12) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_busy_fields(board, 9) == 0 );
assert( gamma_move(board, 10, 9, 11) == 0 );
assert( gamma_move(board, 11, 9, 3) == 0 );
assert( gamma_move(board, 12, 7, 8) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 2, 7, 15) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 6, -1, 1) == 0 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_free_fields(board, 7) == 127 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 7) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_free_fields(board, 10) == 126 );
assert( gamma_move(board, 11, 2, 6) == 1 );
assert( gamma_move(board, 12, 0, 12) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_free_fields(board, 1) == 123 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_golden_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board913513757 = gamma_board(board);
assert( board913513757 != NULL );
assert( strcmp(board913513757, 
".....5...\n"
".........\n"
"12.8......\n"
"...2.....\n"
".........\n"
"..5...4..\n"
".......12.\n"
"......8..\n"
"..11......\n"
".........\n"
"...4.....\n"
"......3..\n"
".........\n"
"7.......1\n"
"...6.....\n") == 0);
free(board913513757);
board913513757 = NULL;
assert( gamma_move(board, 6, 3, 10) == 1 );


char* board679859509 = gamma_board(board);
assert( board679859509 != NULL );
assert( strcmp(board679859509, 
".....5...\n"
".........\n"
"12.8......\n"
"...2.....\n"
"...6.....\n"
"..5...4..\n"
".......12.\n"
"......8..\n"
"..11......\n"
".........\n"
"...4.....\n"
"......3..\n"
".........\n"
"7.......1\n"
"...6.....\n") == 0);
free(board679859509);
board679859509 = NULL;
assert( gamma_move(board, 7, 3, -1) == 0 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 11) == 1 );
assert( gamma_move(board, 9, 1, 2) == 1 );
assert( gamma_move(board, 10, 9, 6) == 0 );
assert( gamma_golden_move(board, 10, 13, 0) == 0 );
assert( gamma_free_fields(board, 11) == 118 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, -1, 10) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_free_fields(board, 2) == 118 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 6, 4, -1) == 0 );


char* board825064220 = gamma_board(board);
assert( board825064220 != NULL );
assert( strcmp(board825064220, 
".....5...\n"
".........\n"
"12.8......\n"
"...28....\n"
"...6.....\n"
"..5...4..\n"
".......12.\n"
"......8.4\n"
"..11......\n"
".........\n"
"...4.....\n"
"......3..\n"
".9.......\n"
"7.......1\n"
"...6....5\n") == 0);
free(board825064220);
board825064220 = NULL;
assert( gamma_move(board, 12, 0, 4) == 1 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 8, 11) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 8) == 1 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_move(board, 8, 0, 14) == 1 );
assert( gamma_move(board, 10, 1, 11) == 1 );
assert( gamma_move(board, 11, 2, 15) == 0 );
assert( gamma_busy_fields(board, 11) == 1 );
assert( gamma_move(board, 12, 3, 5) == 1 );


char* board172346795 = gamma_board(board);
assert( board172346795 != NULL );
assert( strcmp(board172346795, 
"8....5...\n"
".........\n"
"12.8......\n"
".10.28...3\n"
"...6.....\n"
"..5...4..\n"
".......125\n"
"..2...8.4\n"
"..11.....7\n"
"...12.....\n"
"12..4.....\n"
"......3..\n"
".9.......\n"
"7.......1\n"
"...6....5\n") == 0);
free(board172346795);
board172346795 = NULL;
assert( gamma_move(board, 1, -1, 11) == 0 );
assert( gamma_free_fields(board, 1) == 108 );
assert( gamma_move(board, 2, -1, 12) == 0 );
assert( gamma_golden_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_move(board, 6, 4, 10) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 15) == 0 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 10, 5, 9) == 1 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_move(board, 11, 2, 6) == 0 );
assert( gamma_move(board, 12, 4, 2) == 1 );
assert( gamma_free_fields(board, 12) == 103 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_free_fields(board, 3) == 101 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 7, 15) == 0 );
assert( gamma_move(board, 7, -1, 10) == 0 );
assert( gamma_golden_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 8, 6, -1) == 0 );
assert( gamma_move(board, 9, 7, 6) == 1 );
assert( gamma_move(board, 10, 9, 0) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 2, 8) == 1 );
assert( gamma_move(board, 12, 5, 7) == 1 );
assert( gamma_busy_fields(board, 12) == 6 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_golden_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_free_fields(board, 2) == 96 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 7, 7, 5) == 1 );
assert( gamma_move(board, 9, 2, 10) == 1 );
assert( gamma_move(board, 11, 8, 3) == 1 );
assert( gamma_free_fields(board, 11) == 93 );
assert( gamma_move(board, 1, 6, 4) == 1 );


char* board393558069 = gamma_board(board);
assert( board393558069 != NULL );
assert( strcmp(board393558069, 
"8....5...\n"
".........\n"
"12.8......\n"
".10.28...3\n"
"..966....\n"
"..5..104..\n"
"..11.4..125\n"
"..2..128.4\n"
"..11....97\n"
"...12..17.\n"
"12..41.14.\n"
"......3.11\n"
"29..12....\n"
"78......1\n"
"...6....5\n") == 0);
free(board393558069);
board393558069 = NULL;
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, -1, 3) == 0 );
assert( gamma_golden_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 9, -1, -1) == 0 );
assert( gamma_free_fields(board, 9) == 90 );
assert( gamma_move(board, 11, 7, 13) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_free_fields(board, 1) == 89 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 2, 15) == 0 );
assert( gamma_free_fields(board, 5) == 88 );
assert( gamma_move(board, 6, 4, -1) == 0 );
assert( gamma_move(board, 7, -1, 9) == 0 );
assert( gamma_move(board, 8, 1, 9) == 1 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 9, 7, 9) == 1 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 11, 8, 5) == 1 );
assert( gamma_busy_fields(board, 12) == 6 );
assert( gamma_move(board, 1, 3, 9) == 1 );


char* board335736711 = gamma_board(board);
assert( board335736711 != NULL );
assert( strcmp(board335736711, 
"8....5...\n"
".......11.\n"
"12.8.2....\n"
".10.28...3\n"
"..966....\n"
".851.1049.\n"
"..11.4..125\n"
"..2..128.4\n"
"..116...97\n"
"...12..1711\n"
"12..41.14.\n"
"...5..3.11\n"
"29..12....\n"
"78......1\n"
"...6....5\n") == 0);
free(board335736711);
board335736711 = NULL;
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 3, 15) == 0 );
assert( gamma_move(board, 8, 6, 8) == 1 );
assert( gamma_move(board, 9, 5, 1) == 1 );
assert( gamma_move(board, 10, -1, 12) == 0 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_move(board, 11, 3, 1) == 1 );
assert( gamma_move(board, 12, 2, 8) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_free_fields(board, 6) == 78 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, -1, 5) == 0 );
assert( gamma_move(board, 9, 9, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 7, 6) == 0 );
assert( gamma_move(board, 11, 1, 3) == 1 );
assert( gamma_free_fields(board, 12) == 77 );
assert( gamma_move(board, 3, 1, 12) == 1 );
assert( gamma_move(board, 4, 4, 13) == 1 );
assert( gamma_move(board, 5, 7, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );


char* board976172508 = gamma_board(board);
assert( board976172508 != NULL );
assert( strcmp(board976172508, 
"8....5...\n"
"....4..11.\n"
"1238.2..5.\n"
".10.28...3\n"
"..966....\n"
".851.1049.\n"
".411.4.8125\n"
"..2..128.4\n"
"..116...97\n"
"...12..1711\n"
"12..41.14.\n"
".11.56.3.11\n"
"29..12....\n"
"78.11.9..1\n"
"...6..4.5\n") == 0);
free(board976172508);
board976172508 = NULL;
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 11, 5, 13) == 1 );
assert( gamma_move(board, 12, 8, 5) == 0 );
assert( gamma_move(board, 1, -1, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 7, 15) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 6, 15) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_golden_move(board, 7, 5, 7) == 1 );


char* board743509109 = gamma_board(board);
assert( board743509109 != NULL );
assert( strcmp(board743509109, 
"8....5...\n"
"....411.11.\n"
"1238.2..5.\n"
".10.28...3\n"
"..966....\n"
".851.1049.\n"
".411.4.8125\n"
"..2..78.4\n"
"..116...97\n"
"...12..1711\n"
"12..41.14.\n"
".11.5653.11\n"
"29..12.6..\n"
"78.11.9..1\n"
"...6..4.5\n") == 0);
free(board743509109);
board743509109 = NULL;
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, -1, 2) == 0 );
assert( gamma_move(board, 10, 5, 6) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 6, 5, 10) == 1 );
assert( gamma_move(board, 7, -1, 10) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_move(board, 10, 2, 4) == 1 );
assert( gamma_golden_move(board, 10, 6, 0) == 1 );
assert( gamma_move(board, 11, -1, 7) == 0 );
assert( gamma_free_fields(board, 11) == 67 );
assert( gamma_golden_move(board, 11, 11, 3) == 0 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_golden_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 6, 6, 11) == 1 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 8, -1, 1) == 0 );
assert( gamma_move(board, 9, -1, 0) == 0 );
assert( gamma_move(board, 10, 5, 11) == 1 );
assert( gamma_free_fields(board, 10) == 64 );
assert( gamma_move(board, 11, 6, 9) == 0 );
assert( gamma_golden_move(board, 11, 10, 5) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 15) == 0 );


char* board611021222 = gamma_board(board);
assert( board611021222 != NULL );
assert( strcmp(board611021222, 
"8....5...\n"
"....411.11.\n"
"1238.2..5.\n"
".10.28106.3\n"
"..9666...\n"
".851.1049.\n"
".411.4.8125\n"
"7.2..78.4\n"
".2116.10.97\n"
"...12..1711\n"
"12.1041.14.\n"
".11.5653.11\n"
"29..12.6..\n"
"78.11.9..1\n"
"...6.110.5\n") == 0);
free(board611021222);
board611021222 = NULL;
assert( gamma_move(board, 4, 3, 13) == 1 );


char* board548875346 = gamma_board(board);
assert( board548875346 != NULL );
assert( strcmp(board548875346, 
"8....5...\n"
"...4411.11.\n"
"1238.2..5.\n"
".10.28106.3\n"
"..9666...\n"
".851.1049.\n"
".411.4.8125\n"
"7.2..78.4\n"
".2116.10.97\n"
"...12..1711\n"
"12.1041.14.\n"
".11.5653.11\n"
"29..12.6..\n"
"78.11.9..1\n"
"...6.110.5\n") == 0);
free(board548875346);
board548875346 = NULL;
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 9, -1, 7) == 0 );
assert( gamma_move(board, 10, 5, 7) == 0 );
assert( gamma_move(board, 11, 7, 8) == 0 );
assert( gamma_free_fields(board, 12) == 61 );


char* board959134408 = gamma_board(board);
assert( board959134408 != NULL );
assert( strcmp(board959134408, 
"8....5...\n"
"...4411.11.\n"
"1238.2..5.\n"
".10.28106.3\n"
"..9666...\n"
".851.1049.\n"
".411.4.8125\n"
"7.2..78.4\n"
".2116.10.97\n"
"...12..1711\n"
"12.1041614.\n"
".11.5653.11\n"
"29..12.6..\n"
"78.11.9..1\n"
"...6.110.5\n") == 0);
free(board959134408);
board959134408 = NULL;
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 2) == 60 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_move(board, 4, 8, 12) == 1 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 7, -1, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 10, 6, 11) == 0 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_move(board, 11, 8, 8) == 0 );


char* board794328731 = gamma_board(board);
assert( board794328731 != NULL );
assert( strcmp(board794328731, 
"8....5...\n"
"...4411.11.\n"
"1238.2..54\n"
".10128106.3\n"
"..9666..3\n"
".851.1049.\n"
".411.4.8125\n"
"7.2..78.4\n"
".2116.10.97\n"
"...12..1711\n"
"12.1041614.\n"
".11.5653.11\n"
"29..12.6..\n"
"78.11.9..1\n"
"...6.110.5\n") == 0);
free(board794328731);
board794328731 = NULL;
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 8, 13) == 1 );
assert( gamma_move(board, 7, 2, 13) == 1 );
assert( gamma_move(board, 8, 4, -1) == 0 );
assert( gamma_move(board, 9, 6, 11) == 0 );
assert( gamma_free_fields(board, 9) == 54 );
assert( gamma_move(board, 10, 8, 0) == 0 );
assert( gamma_move(board, 11, 4, 0) == 1 );
assert( gamma_busy_fields(board, 11) == 9 );
assert( gamma_free_fields(board, 12) == 53 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 6, 12) == 1 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 6, 5, 13) == 0 );
assert( gamma_free_fields(board, 6) == 51 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_free_fields(board, 9) == 50 );
assert( gamma_move(board, 10, 4, 12) == 0 );
assert( gamma_move(board, 12, 7, 8) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 1, 6, 15) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, -1, 12) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_free_fields(board, 5) == 48 );
assert( gamma_move(board, 7, 8, 9) == 1 );
assert( gamma_move(board, 8, -1, 3) == 0 );


char* board508451725 = gamma_board(board);
assert( board508451725 != NULL );
assert( strcmp(board508451725, 
"8....5...\n"
"..74411.116\n"
"1238.2.154\n"
".10128106.3\n"
"..9666..3\n"
".851210497\n"
".411.4.8125\n"
"7.2.478.4\n"
".2116.10297\n"
".3.12..1711\n"
"12.1041614.\n"
".11.5653.11\n"
"29..1226..\n"
"78.11.9..1\n"
".9.611110.5\n") == 0);
free(board508451725);
board508451725 = NULL;
assert( gamma_move(board, 10, 8, 14) == 1 );


char* board906855202 = gamma_board(board);
assert( board906855202 != NULL );
assert( strcmp(board906855202, 
"8....5..10\n"
"..74411.116\n"
"1238.2.154\n"
".10128106.3\n"
"..9666..3\n"
".851210497\n"
".411.4.8125\n"
"7.2.478.4\n"
".2116.10297\n"
".3.12..1711\n"
"12.1041614.\n"
".11.5653.11\n"
"29..1226..\n"
"78.11.9..1\n"
".9.611110.5\n") == 0);
free(board906855202);
board906855202 = NULL;
assert( gamma_move(board, 11, 8, 0) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 7, -1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_golden_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_golden_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 0, 13) == 1 );
assert( gamma_move(board, 7, -1, 3) == 0 );
assert( gamma_move(board, 8, 6, 14) == 1 );
assert( gamma_move(board, 10, 7, 7) == 1 );
assert( gamma_golden_move(board, 10, 9, 7) == 0 );
assert( gamma_move(board, 11, 6, 11) == 0 );


char* board871422214 = gamma_board(board);
assert( board871422214 != NULL );
assert( strcmp(board871422214, 
"8....58.10\n"
"6.74411.116\n"
"1238.2.154\n"
".10128106.3\n"
"..9666..3\n"
".851210497\n"
".411.4.8125\n"
"7.2.458104\n"
".2116.2297\n"
".3.12..1711\n"
"12.1041614.\n"
".11.5653.11\n"
"29..1226..\n"
"78.11.9..1\n"
".9.611110.5\n") == 0);
free(board871422214);
board871422214 = NULL;
assert( gamma_move(board, 12, 6, 11) == 0 );
assert( gamma_busy_fields(board, 12) == 5 );
assert( gamma_golden_move(board, 12, 11, 8) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 5, 15) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_free_fields(board, 5) == 42 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );


gamma_delete(board);

    return 0;
}
