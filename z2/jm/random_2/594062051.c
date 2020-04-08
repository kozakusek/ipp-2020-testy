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
uuid: 594062051
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 14, 6, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 6, 12, 12) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 11, 10) == 1 );
assert( gamma_free_fields(board, 2) == 201 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 12, 12) == 1 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 4, 0, 11) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 6, 5, 13) == 1 );
assert( gamma_move(board, 6, 8, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 9, 11) == 1 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 2, 7, 11) == 1 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 3, 12, 11) == 1 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 4, 12, 9) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 12, 9) == 0 );
assert( gamma_move(board, 6, 9, 2) == 1 );
assert( gamma_free_fields(board, 6) == 184 );
assert( gamma_move(board, 1, 8, 13) == 1 );
assert( gamma_golden_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_move(board, 6, 13, 1) == 1 );
assert( gamma_move(board, 6, 10, 13) == 1 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_free_fields(board, 2) == 175 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 4, 13, 14) == 0 );
assert( gamma_move(board, 5, 13, 7) == 1 );
assert( gamma_move(board, 5, 1, 11) == 1 );
assert( gamma_move(board, 6, 2, 10) == 1 );
assert( gamma_move(board, 6, 14, 4) == 1 );
assert( gamma_free_fields(board, 6) == 171 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 12, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 2) == 1 );


char* board631772489 = gamma_board(board);
assert( board631772489 != NULL );
assert( strcmp(board631772489, 
".....6..1.6....\n"
"....2.......3..\n"
"45.....2.1..3..\n"
"..6.4..2...2...\n"
"2...3...6...4..\n"
".....42.3......\n"
".............5.\n"
"...2..2.....2..\n"
"...5.5....5....\n"
"..4....3......6\n"
"112.......3....\n"
".....1...63....\n"
".......5.....6.\n"
".5.....4.......\n") == 0);
free(board631772489);
board631772489 = NULL;
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_move(board, 5, 8, 12) == 1 );
assert( gamma_move(board, 6, 11, 3) == 1 );
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 11, 6) == 1 );
assert( gamma_move(board, 3, 13, 9) == 1 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_free_fields(board, 4) == 158 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 11, 5) == 1 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 1, 12, 14) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 12, 13) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_move(board, 1, 9, 14) == 0 );
assert( gamma_free_fields(board, 1) == 150 );
assert( gamma_move(board, 2, 6, 13) == 1 );
assert( gamma_move(board, 3, 14, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 6, 10) == 1 );
assert( gamma_move(board, 5, 13, 14) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 6, 12) == 1 );
assert( gamma_move(board, 3, 2, 13) == 1 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 4, 11, 0) == 1 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 13, 3) == 1 );
assert( gamma_move(board, 5, 13, 4) == 1 );
assert( gamma_golden_move(board, 5, 6, 12) == 1 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_free_fields(board, 1) == 140 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 3, 11, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 4, 14, 0) == 1 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 1, 13, 14) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 10, 0) == 1 );
assert( gamma_move(board, 4, 8, 14) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 7, 13) == 1 );
assert( gamma_move(board, 3, 12, 7) == 1 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 2, 13) == 0 );
assert( gamma_move(board, 6, 4, 13) == 1 );


char* board904016471 = gamma_board(board);
assert( board904016471 != NULL );
assert( strcmp(board904016471, 
"..3.66221.6.4..\n"
"..1.2.5.5...3..\n"
"45...5.2.1..3..\n"
"3.6.4.42...2...\n"
"2...3.6.6...43.\n"
"..1..42.3..3...\n"
".6....2.....35.\n"
"5..2..2.63.22..\n"
"3..5.5....56...\n"
"..4...63.....56\n"
"112.......36.5.\n"
"2....1..663...3\n"
"..4.4..5..5..6.\n"
".5.....46.34..4\n") == 0);
free(board904016471);
board904016471 = NULL;
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_free_fields(board, 2) == 128 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 9, 9) == 1 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_move(board, 1, 14, 13) == 1 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 2, 11, 13) == 1 );
assert( gamma_free_fields(board, 2) == 123 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 4, 10, 13) == 0 );
assert( gamma_move(board, 5, 10, 12) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_free_fields(board, 5) == 120 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 2, 13, 6) == 1 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 12, 14) == 0 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );


char* board969964403 = gamma_board(board);
assert( board969964403 != NULL );
assert( strcmp(board969964403, 
"..3.66221.624.1\n"
"..1.2.5.5.5.3..\n"
"45...5.2.1..3..\n"
"3.6.4.42...2...\n"
"2...3.6.66..43.\n"
"..1..42.3..3...\n"
".6....2.....35.\n"
"5..2..2563.222.\n"
"3..5.52...56...\n"
"1.4.6.63.....56\n"
"112...5...36.5.\n"
"25...1..663...3\n"
"..414..5425..6.\n"
".5.....46.34..4\n") == 0);
free(board969964403);
board969964403 = NULL;
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 2, 5, 12) == 1 );
assert( gamma_move(board, 3, 14, 4) == 0 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_free_fields(board, 3) == 113 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 11, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 12, 3) == 1 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 2, 11) == 1 );


char* board884994361 = gamma_board(board);
assert( board884994361 != NULL );
assert( strcmp(board884994361, 
"..3.66221.624.1\n"
"..1.225.5.5.3..\n"
"452..5.2.1..3..\n"
"3.6.4.42...2...\n"
"2...3.6366.443.\n"
"..1..42.3..3...\n"
".6....2.....35.\n"
"5..2..2563.222.\n"
"3.25.52...56...\n"
"114.6.63.....56\n"
"112...5...3655.\n"
"25...1..663...3\n"
"..414..5425..6.\n"
".5.....46.34..4\n") == 0);
free(board884994361);
board884994361 = NULL;
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );


char* board521717455 = gamma_board(board);
assert( board521717455 != NULL );
assert( strcmp(board521717455, 
"..3.66221.624.1\n"
"..1.225.5.5.3..\n"
"452..5.2.1..3..\n"
"3.6.4.42...2...\n"
"2...3.6366.443.\n"
"..1..42.3..3...\n"
".6....2.....35.\n"
"5..2..2563.222.\n"
"3.25.52...56...\n"
"114.6.63.....56\n"
"112...5...3655.\n"
"25...1..663...3\n"
"..414..5425..6.\n"
".5.....46.34..4\n") == 0);
free(board521717455);
board521717455 = NULL;
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 4, 12, 8) == 1 );


char* board813148182 = gamma_board(board);
assert( board813148182 != NULL );
assert( strcmp(board813148182, 
"..3.66221.624.1\n"
"..1.225.5.5.3..\n"
"452..5.2.1..3..\n"
"3.6.4.42...2...\n"
"2...3.6366.443.\n"
"..1..42.3..34..\n"
".64...2.....35.\n"
"5..2..2563.222.\n"
"3.25.52...56...\n"
"114.6.63.....56\n"
"112...5...3655.\n"
"25...1..663...3\n"
"..414..5425..6.\n"
".5.....46.34..4\n") == 0);
free(board813148182);
board813148182 = NULL;
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 6, 13, 3) == 0 );
assert( gamma_free_fields(board, 6) == 107 );
assert( gamma_golden_move(board, 6, 10, 0) == 1 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 4, 13, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 7, 10) == 0 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 1, 10, 9) == 1 );
assert( gamma_move(board, 2, 14, 13) == 0 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_move(board, 6, 11, 4) == 1 );
assert( gamma_move(board, 6, 3, 12) == 1 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 9, 14) == 0 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 11, 14) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_golden_move(board, 5, 13, 2) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 1, 11, 12) == 1 );
assert( gamma_golden_move(board, 1, 13, 10) == 0 );
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_move(board, 2, 14, 9) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 19 );


char* board756390051 = gamma_board(board);
assert( board756390051 != NULL );
assert( strcmp(board756390051, 
"..3.66221.624.1\n"
"..16225.5.513..\n"
"452..5.2.1..3..\n"
"3.6.4.42...2...\n"
"2...3.636614432\n"
"..1..4213..34..\n"
".644.42...2.35.\n"
"5.22..25633222.\n"
"3.25352...56...\n"
"114.6.63...6.56\n"
"11216.5...3655.\n"
"25...1..6632..3\n"
"..414..5425..6.\n"
"25.6...46.64.44\n") == 0);
free(board756390051);
board756390051 = NULL;
assert( gamma_move(board, 5, 12, 2) == 1 );
assert( gamma_move(board, 6, 10, 10) == 0 );
assert( gamma_move(board, 1, 8, 10) == 1 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 10, 11) == 1 );
assert( gamma_move(board, 6, 8, 14) == 0 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_golden_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_free_fields(board, 4) == 82 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 5, 1, 12) == 1 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 13) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 13, 10) == 1 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );


char* board553945770 = gamma_board(board);
assert( board553945770 != NULL );
assert( strcmp(board553945770, 
"..3.66221.624.1\n"
".516225.5.513..\n"
"452..5.2.15.3..\n"
"3.6.4.421.22.4.\n"
"2...3.636614432\n"
"..1..4213..34..\n"
".644.423..2.35.\n"
"5.22..25633222.\n"
"3.25352...56...\n"
"114.6.63...6.56\n"
"11216.5.4.3655.\n"
"25...1..66325.3\n"
"..414.15425..6.\n"
"25.6...46.64.44\n") == 0);
free(board553945770);
board553945770 = NULL;
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 6, 11, 6) == 0 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 13, 10) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 23 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_free_fields(board, 3) == 78 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 3, 3, 11) == 1 );
assert( gamma_move(board, 4, 14, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 12) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 23 );
assert( gamma_free_fields(board, 6) == 29 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 1, 4, 11) == 1 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_free_fields(board, 5) == 74 );
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 13, 8) == 1 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );


char* board973222288 = gamma_board(board);
assert( board973222288 != NULL );
assert( strcmp(board973222288, 
"..3.66221.624.1\n"
".516225.55513..\n"
"452315.2.15.3..\n"
"3.6.4.421.22.4.\n"
"2...3.636614432\n"
"..1.14213..344.\n"
".644.423..2.35.\n"
"5.22..25633222.\n"
"3.253522..56...\n"
"114.6.63...6.56\n"
"11216.5.4.3655.\n"
"25...1..66325.3\n"
"..414.15425..64\n"
"25.6...46.64.44\n") == 0);
free(board973222288);
board973222288 = NULL;
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 14) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 6, 14, 11) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 23 );
assert( gamma_free_fields(board, 4) == 73 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 1, 11, 14) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_golden_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 2) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_free_fields(board, 4) == 72 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_free_fields(board, 1) == 72 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_free_fields(board, 4) == 72 );
assert( gamma_move(board, 5, 12, 0) == 1 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_golden_move(board, 1, 13, 2) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_golden_move(board, 2, 8, 13) == 1 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );


char* board427143380 = gamma_board(board);
assert( board427143380 != NULL );
assert( strcmp(board427143380, 
"..3.66222.624.1\n"
".516225.55513..\n"
"452315.2.15.3..\n"
"3.6.4.421.22.4.\n"
"2...3.636614432\n"
"..1.14213..344.\n"
".644.423..2.35.\n"
"5.22..25633222.\n"
"33253522..56...\n"
"114.6.63...6.56\n"
"11216.5.4.3655.\n"
"25...1..66325.3\n"
".5414.15425..64\n"
"25.6...46.64544\n") == 0);
free(board427143380);
board427143380 = NULL;
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 8, 10) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_free_fields(board, 6) == 29 );
assert( gamma_move(board, 1, 14, 3) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );


char* board145309688 = gamma_board(board);
assert( board145309688 != NULL );
assert( strcmp(board145309688, 
"..3.66222.624.1\n"
".516225.55513..\n"
"452315.2.15.3..\n"
"3.6.4.421.22.4.\n"
"2...3.636614432\n"
"..1.14213..344.\n"
".644.423..2.35.\n"
"5.22..25633222.\n"
"33253522..56...\n"
"114.6.63...6.56\n"
"11216.5.4.36551\n"
"25...1..66325.3\n"
".5414.15425..64\n"
"25.6...46.64544\n") == 0);
free(board145309688);
board145309688 = NULL;
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_golden_move(board, 6, 12, 8) == 0 );
assert( gamma_move(board, 1, 13, 13) == 1 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_free_fields(board, 1) == 68 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 30 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_free_fields(board, 4) == 68 );
assert( gamma_move(board, 5, 7, 9) == 0 );
assert( gamma_move(board, 6, 10, 9) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_golden_move(board, 2, 0, 14) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );


char* board433246753 = gamma_board(board);
assert( board433246753 != NULL );
assert( strcmp(board433246753, 
"..3.66222.62411\n"
".516225.55513..\n"
"452315.2.15.3..\n"
"3.6.4.421.22.4.\n"
"2...3.636614432\n"
"..1.14213..344.\n"
".644.423..2.35.\n"
"5322..25633222.\n"
"33253522..56...\n"
"114.6.63...6.56\n"
"11216.5.4136551\n"
"25...1..66325.3\n"
".5414.15425..64\n"
"25.6...46.64544\n") == 0);
free(board433246753);
board433246753 = NULL;
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 11, 13) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_golden_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 6, 5, 13) == 0 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_golden_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 30 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_golden_move(board, 5, 13, 12) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 5, 14, 12) == 1 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_free_fields(board, 6) == 25 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 14, 11) == 0 );


char* board900967514 = gamma_board(board);
assert( board900967514 != NULL );
assert( strcmp(board900967514, 
"..3.66222.62411\n"
".516225.55513.5\n"
"452315.2.15.3..\n"
"3.6.4.421.22.4.\n"
"2...3.636614432\n"
"..1.14213..344.\n"
".644.423..2.35.\n"
"5322..25633222.\n"
"332535224.56...\n"
"114.6.63...6.56\n"
"11216.5.4136551\n"
"25...1..66325.3\n"
".5414.15425..64\n"
"25.6...46.64544\n") == 0);
free(board900967514);
board900967514 = NULL;
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 9, 1) == 0 );


char* board199140891 = gamma_board(board);
assert( board199140891 != NULL );
assert( strcmp(board199140891, 
"..3.66222.62411\n"
".516225.55513.5\n"
"452315.2.15.3..\n"
"3.6.4.421.22.4.\n"
"2...3.636614432\n"
"..1.14213..344.\n"
".644.423..2.35.\n"
"5322..25633222.\n"
"332535224356...\n"
"114.6.63...6.56\n"
"11216.5.4136551\n"
"25...1..66325.3\n"
".5414.15425..64\n"
"25.6...46.64544\n") == 0);
free(board199140891);
board199140891 = NULL;
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 6, 14, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 23 );
assert( gamma_move(board, 1, 9, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );


char* board191049292 = gamma_board(board);
assert( board191049292 != NULL );
assert( strcmp(board191049292, 
"..3.66222.62411\n"
".516225.55513.5\n"
"452315.2.15.3..\n"
"3.6.4.421.22.4.\n"
"2...3.636614432\n"
"..1.14213..344.\n"
".644.423..2.35.\n"
"5322..25633222.\n"
"332535224356...\n"
"114.6.63...6.56\n"
"11216.5.4136551\n"
"25...1..66325.3\n"
".5414.15425..64\n"
"25.6...46.64544\n") == 0);
free(board191049292);
board191049292 = NULL;
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 8, 7) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 23 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 7, 12) == 0 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 5, 13, 6) == 0 );
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 1, 13) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_free_fields(board, 5) == 28 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 6, 12, 4) == 1 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 30 );


char* board690749878 = gamma_board(board);
assert( board690749878 != NULL );
assert( strcmp(board690749878, 
".53.66222.62411\n"
".516225.55513.5\n"
"452315.2.15.3..\n"
"3.6.4.421.22.4.\n"
"2...3.636614432\n"
"..1.14213..344.\n"
".644.4236.2.35.\n"
"5322..25633222.\n"
"332535224356...\n"
"114.6663...6656\n"
"11216.5.4136551\n"
"256..1..66325.3\n"
".5414.15425..64\n"
"25.6...46.64544\n") == 0);
free(board690749878);
board690749878 = NULL;
assert( gamma_move(board, 5, 6, 14) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_move(board, 5, 9, 13) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );


char* board675789733 = gamma_board(board);
assert( board675789733 != NULL );
assert( strcmp(board675789733, 
".53.66222.62411\n"
".516225.55513.5\n"
"452315.2.15.3..\n"
"3.6.4.421.22.4.\n"
"2...3.636614432\n"
"..1.14213..344.\n"
".644.4236.2.35.\n"
"5322..25633222.\n"
"332535224356...\n"
"114.6663...6656\n"
"11216.5.4136551\n"
"256..1..66325.3\n"
".5414.15425..64\n"
"25.6...46.64544\n") == 0);
free(board675789733);
board675789733 = NULL;
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );


char* board236100724 = gamma_board(board);
assert( board236100724 != NULL );
assert( strcmp(board236100724, 
".53.66222.62411\n"
".516225.55513.5\n"
"452315.2.15.3..\n"
"3.6.4.421.22.4.\n"
"2...3.636614432\n"
"..1.14213..344.\n"
".644.4236.2.35.\n"
"5322..25633222.\n"
"332535224356...\n"
"114.6663...6656\n"
"11216.5.4136551\n"
"256..1..66325.3\n"
".5414.15425..64\n"
"25.6...46.64544\n") == 0);
free(board236100724);
board236100724 = NULL;
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 27 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 27 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 14, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 30 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_golden_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_golden_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 13, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 27 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 27 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 30 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 14, 8) == 0 );
assert( gamma_move(board, 6, 2, 13) == 0 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 10, 14) == 0 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 6, 10, 13) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_move(board, 2, 13, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 5, 8, 14) == 0 );
assert( gamma_move(board, 5, 13, 1) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 14, 11) == 0 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 3, 12, 13) == 0 );
assert( gamma_move(board, 4, 12, 13) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 24 );


char* board893191297 = gamma_board(board);
assert( board893191297 != NULL );
assert( strcmp(board893191297, 
".53.66222.62411\n"
".516225.55513.5\n"
"452315.2.15.3..\n"
"3.6.4.421.22.4.\n"
"2...3.636614432\n"
"..1.14213..344.\n"
".644.4236.2.35.\n"
"5322..25633222.\n"
"332535224356.2.\n"
"114.6663...6656\n"
"11216.5.4136551\n"
"256..1..66325.3\n"
".5414.15425..64\n"
"25.6..146.64544\n") == 0);
free(board893191297);
board893191297 = NULL;
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 27 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 13, 0) == 0 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_golden_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 11, 11) == 1 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 4, 11, 14) == 0 );
assert( gamma_move(board, 5, 12, 7) == 0 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 3, 5, 14) == 0 );
assert( gamma_move(board, 3, 3, 13) == 1 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 6, 7, 13) == 0 );
assert( gamma_move(board, 1, 7, 14) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 10, 14) == 0 );
assert( gamma_move(board, 6, 14, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 11, 14) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 12, 8) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 1, 6, 14) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 2, 11, 11) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_golden_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );


gamma_delete(board);

    return 0;
}
