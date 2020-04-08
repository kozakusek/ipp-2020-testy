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
uuid: 360473609
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 10, 10, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_free_fields(board, 4) == 135 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 9, 13) == 0 );
assert( gamma_move(board, 9, 6, 3) == 1 );
assert( gamma_free_fields(board, 9) == 130 );
assert( gamma_move(board, 10, 12, 6) == 1 );
assert( gamma_move(board, 10, 13, 1) == 1 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_free_fields(board, 3) == 124 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 5, 9, 10) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 7, 10, 6) == 0 );
assert( gamma_move(board, 8, 12, 9) == 1 );
assert( gamma_move(board, 9, 0, 6) == 1 );
assert( gamma_move(board, 9, 5, 9) == 1 );


char* board461271087 = gamma_board(board);
assert( board461271087 != NULL );
assert( strcmp(board461271087, 
".3.1.9.3....8.\n"
".....4........\n"
"..............\n"
"9......27.1.10.\n"
"..6..3........\n"
".1..5.........\n"
"7.....9.......\n"
"........4.....\n"
".........2...10\n"
".......7......\n") == 0);
free(board461271087);
board461271087 = NULL;
assert( gamma_move(board, 10, 4, 8) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 3, 12, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 4, 6, 9) == 1 );


char* board821395999 = gamma_board(board);
assert( board821395999 != NULL );
assert( strcmp(board821395999, 
".3.1.943....8.\n"
"....104.3......\n"
"....4.........\n"
"9......27.1.10.\n"
"..6..3........\n"
".1..5...2.....\n"
"7.....9.....3.\n"
"....1...4.....\n"
".........2...10\n"
".......7......\n") == 0);
free(board821395999);
board821395999 = NULL;
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 6, 9, 9) == 1 );
assert( gamma_move(board, 6, 13, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_free_fields(board, 8) == 108 );
assert( gamma_move(board, 9, 3, 1) == 1 );


char* board702822646 = gamma_board(board);
assert( board702822646 != NULL );
assert( strcmp(board702822646, 
".3.1.943.6..8.\n"
"....104.37.....\n"
"....4.........\n"
"9...7..27.1.10.\n"
"..6..3.......6\n"
".1..5...2.....\n"
"7.....9.....3.\n"
"....1...4.....\n"
"...9.....2...10\n"
".......7......\n") == 0);
free(board702822646);
board702822646 = NULL;
assert( gamma_move(board, 10, 8, 12) == 0 );
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 12, 8) == 1 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_golden_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_free_fields(board, 7) == 101 );
assert( gamma_move(board, 8, 9, 10) == 0 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_free_fields(board, 9) == 101 );
assert( gamma_move(board, 10, 12, 8) == 0 );
assert( gamma_move(board, 10, 13, 7) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_free_fields(board, 3) == 99 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 7, 12, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 6, 6) == 1 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 3, 10) == 0 );
assert( gamma_move(board, 10, 11, 9) == 1 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 4, 10, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 1, 6) == 1 );
assert( gamma_move(board, 9, 11, 1) == 1 );
assert( gamma_move(board, 10, 12, 2) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 9, 12, 3) == 0 );
assert( gamma_move(board, 10, 0, 5) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_free_fields(board, 6) == 81 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 7, 10, 5) == 1 );
assert( gamma_move(board, 8, 9, 7) == 1 );
assert( gamma_move(board, 9, 7, 7) == 1 );
assert( gamma_move(board, 9, 2, 4) == 1 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 11, 0) == 1 );
assert( gamma_move(board, 10, 2, 2) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_free_fields(board, 2) == 73 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_free_fields(board, 6) == 73 );
assert( gamma_move(board, 7, 13, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 13, 3) == 1 );
assert( gamma_move(board, 9, 3, 6) == 1 );
assert( gamma_move(board, 10, 3, 5) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_move(board, 4, 12, 5) == 1 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_move(board, 9, 4, 12) == 0 );
assert( gamma_move(board, 10, 8, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_free_fields(board, 5) == 62 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 4) == 1 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 9, 2, 8) == 1 );
assert( gamma_free_fields(board, 10) == 59 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_free_fields(board, 2) == 58 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 6, 11, 6) == 1 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 9, 12, 2) == 0 );
assert( gamma_move(board, 10, 3, 0) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_free_fields(board, 2) == 55 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 10, 5, 7) == 0 );
assert( gamma_free_fields(board, 10) == 54 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 9) == 1 );
assert( gamma_move(board, 6, 11, 9) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );


char* board834838752 = gamma_board(board);
assert( board834838752 != NULL );
assert( strcmp(board834838752, 
"3351.943.641085\n"
"1.95104237...3.\n"
"....45.9.81..10\n"
"97697.827.16107\n"
"8266534...7.46\n"
".192511227....\n"
"7.43..95....38\n"
"2210.1.564..210.\n"
"...97..362.9710\n"
"3..21..72..10..\n") == 0);
free(board834838752);
board834838752 = NULL;
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 9, 0, 5) == 0 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 10, 1, 1) == 1 );
assert( gamma_move(board, 10, 2, 8) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 12, 4) == 1 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );


char* board497691450 = gamma_board(board);
assert( board497691450 != NULL );
assert( strcmp(board497691450, 
"3351.943.641085\n"
"1.95104237...3.\n"
"....45.9.81..10\n"
"976973827.16107\n"
"8266534...7.46\n"
".192511227..5.\n"
"7.43..95..6.38\n"
"2210.1.564..210.\n"
".10.97..362.9710\n"
"3..21..72..10..\n") == 0);
free(board497691450);
board497691450 = NULL;
assert( gamma_move(board, 9, 11, 3) == 1 );
assert( gamma_move(board, 10, 7, 8) == 0 );
assert( gamma_move(board, 10, 0, 8) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 9, 7, 3) == 0 );
assert( gamma_move(board, 9, 6, 1) == 1 );
assert( gamma_move(board, 10, 3, 1) == 0 );
assert( gamma_golden_move(board, 10, 4, 6) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 9, 8, 10) == 0 );
assert( gamma_move(board, 9, 1, 9) == 0 );
assert( gamma_move(board, 10, 1, 8) == 1 );
assert( gamma_move(board, 10, 6, 0) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_move(board, 9, 11, 1) == 0 );
assert( gamma_move(board, 9, 11, 8) == 0 );
assert( gamma_move(board, 10, 5, 0) == 0 );
assert( gamma_move(board, 10, 12, 6) == 0 );
assert( gamma_free_fields(board, 10) == 13 );
assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 13, 0) == 1 );


char* board904775924 = gamma_board(board);
assert( board904775924 != NULL );
assert( strcmp(board904775924, 
"3351.9431641085\n"
"11095104237...3.\n"
"....45.9.81..10\n"
"9769103827.16107\n"
"82665342..7.46\n"
"8192511227..5.\n"
"7.43..95..6938\n"
"2210.1.564..210.\n"
".10.97.9362.9710\n"
"3..21..72..10.2\n") == 0);
free(board904775924);
board904775924 = NULL;
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 5, 13, 2) == 1 );
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 11) == 0 );
assert( gamma_golden_move(board, 7, 1, 12) == 0 );
assert( gamma_move(board, 8, 5, 8) == 0 );
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_move(board, 10, 3, 4) == 0 );
assert( gamma_golden_move(board, 10, 8, 5) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_free_fields(board, 7) == 37 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_move(board, 9, 8, 5) == 0 );
assert( gamma_move(board, 10, 11, 5) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_free_fields(board, 2) == 37 );


char* board464071727 = gamma_board(board);
assert( board464071727 != NULL );
assert( strcmp(board464071727, 
"3351.9431641085\n"
"11095104237...3.\n"
"....45.9.81..10\n"
"9769103827.16107\n"
"82665342..7.46\n"
"8192511227..5.\n"
"7.43..95..6938\n"
"2210.1.564.22105\n"
"610.97.9362.9710\n"
"3..21..72.610.2\n") == 0);
free(board464071727);
board464071727 = NULL;
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 13, 9) == 0 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 0, 12) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 9, 0, 9) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 10, 0, 2) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 12, 7) == 1 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 9, 9, 9) == 0 );


char* board500533792 = gamma_board(board);
assert( board500533792 != NULL );
assert( strcmp(board500533792, 
"3351.9431641085\n"
"11095104237...3.\n"
".64445.9.81.210\n"
"9769103827.16107\n"
"82665342..7.46\n"
"8192511227..5.\n"
"7.43..95..6938\n"
"2210.1.564.22105\n"
"610.97.9362.9710\n"
"3..21..72.610.2\n") == 0);
free(board500533792);
board500533792 = NULL;
assert( gamma_move(board, 10, 4, 13) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 9, 1, 1) == 0 );
assert( gamma_move(board, 10, 5, 11) == 0 );
assert( gamma_move(board, 10, 8, 8) == 0 );
assert( gamma_free_fields(board, 10) == 7 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 7, 9, 2) == 1 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_free_fields(board, 8) == 29 );
assert( gamma_golden_move(board, 8, 6, 0) == 1 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_move(board, 10, 1, 10) == 0 );
assert( gamma_move(board, 10, 11, 0) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_free_fields(board, 1) == 29 );


char* board468904829 = gamma_board(board);
assert( board468904829 != NULL );
assert( strcmp(board468904829, 
"335149431641085\n"
"11095104237...3.\n"
".64445.9.81.210\n"
"9769103827.16107\n"
"82665342..7.46\n"
"8192511227..5.\n"
"7.436.95..6938\n"
"2210.1.564722105\n"
"610.97.9362.9710\n"
"3..21.872.610.2\n") == 0);
free(board468904829);
board468904829 = NULL;
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 7, 8) == 0 );
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 10, 4, 11) == 0 );
assert( gamma_free_fields(board, 10) == 6 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 11, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 8, 9) == 0 );
assert( gamma_move(board, 6, 13, 2) == 0 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_golden_move(board, 7, 7, 10) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 9, 9, 3) == 0 );
assert( gamma_move(board, 10, 8, 10) == 0 );
assert( gamma_move(board, 10, 2, 0) == 0 );
assert( gamma_busy_fields(board, 10) == 11 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_golden_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 4, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_free_fields(board, 5) == 27 );
assert( gamma_move(board, 6, 12, 9) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 8, 4, 11) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );


char* board773587176 = gamma_board(board);
assert( board773587176 != NULL );
assert( strcmp(board773587176, 
"335149431641085\n"
"11095104237..53.\n"
".64445.9.81.210\n"
"9769103827.16107\n"
"82665342..7.46\n"
"8192511227..5.\n"
"71436.95..6938\n"
"2210.1.564722105\n"
"610.97.9362.9710\n"
"3..21.872.610.2\n") == 0);
free(board773587176);
board773587176 = NULL;
assert( gamma_move(board, 10, 2, 5) == 0 );
assert( gamma_free_fields(board, 10) == 5 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 6, 8, 13) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_move(board, 9, 7, 8) == 0 );
assert( gamma_move(board, 9, 12, 5) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 7, 6) == 0 );
assert( gamma_move(board, 10, 12, 9) == 0 );


gamma_delete(board);

    return 0;
}
