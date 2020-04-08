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
uuid: 721247557
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 8, 15, 7);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 7, 5) == 1 );


char* board219289312 = gamma_board(board);
assert( board219289312 != NULL );
assert( strcmp(board219289312, 
"...........\n"
"...........\n"
"..4....6...\n"
"..........3\n"
".......5...\n"
"...25......\n"
"........3..\n"
"...........\n") == 0);
free(board219289312);
board219289312 = NULL;
assert( gamma_free_fields(board, 7) == 81 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 8, 10, 0) == 1 );
assert( gamma_move(board, 9, 1, 1) == 1 );
assert( gamma_move(board, 9, 4, 4) == 1 );
assert( gamma_move(board, 10, 1, 9) == 0 );
assert( gamma_move(board, 10, 10, 0) == 0 );
assert( gamma_move(board, 11, 5, 3) == 1 );
assert( gamma_move(board, 11, 7, 7) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 3, 3) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 6, 10) == 0 );
assert( gamma_move(board, 13, 9, 4) == 1 );
assert( gamma_move(board, 14, 4, 7) == 1 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 8, 8, 2) == 1 );
assert( gamma_move(board, 9, 7, 10) == 0 );
assert( gamma_move(board, 10, 7, 5) == 0 );
assert( gamma_move(board, 11, 0, 3) == 1 );
assert( gamma_move(board, 12, 1, 0) == 1 );
assert( gamma_busy_fields(board, 12) == 2 );
assert( gamma_move(board, 13, 6, 10) == 0 );
assert( gamma_move(board, 14, 4, 6) == 1 );
assert( gamma_move(board, 15, 8, 3) == 1 );
assert( gamma_move(board, 15, 2, 3) == 1 );
assert( gamma_free_fields(board, 15) == 62 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_free_fields(board, 1) == 61 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 10, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 7, 3, 1) == 1 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_busy_fields(board, 8) == 3 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_move(board, 10, 0, 2) == 1 );
assert( gamma_move(board, 11, 5, 2) == 1 );
assert( gamma_move(board, 11, 0, 2) == 0 );
assert( gamma_move(board, 12, 9, 3) == 1 );
assert( gamma_move(board, 13, 0, 0) == 1 );
assert( gamma_move(board, 13, 10, 7) == 0 );
assert( gamma_move(board, 14, 1, 2) == 0 );
assert( gamma_move(board, 15, 6, 6) == 1 );
assert( gamma_move(board, 15, 5, 6) == 0 );
assert( gamma_busy_fields(board, 15) == 3 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 8, 0) == 1 );
assert( gamma_move(board, 8, 6, 7) == 1 );
assert( gamma_free_fields(board, 8) == 47 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 10, 4, 7) == 0 );
assert( gamma_move(board, 12, 7, 2) == 1 );
assert( gamma_move(board, 12, 2, 7) == 1 );
assert( gamma_move(board, 13, 6, 5) == 1 );
assert( gamma_move(board, 14, 5, 5) == 1 );
assert( gamma_move(board, 14, 3, 7) == 0 );
assert( gamma_busy_fields(board, 14) == 3 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 1, 3) == 1 );
assert( gamma_free_fields(board, 15) == 42 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 6, 6) == 0 );
assert( gamma_move(board, 9, 0, 4) == 1 );
assert( gamma_move(board, 10, 5, 9) == 0 );
assert( gamma_move(board, 10, 3, 0) == 1 );
assert( gamma_move(board, 11, 5, 10) == 0 );
assert( gamma_move(board, 12, 4, 2) == 0 );
assert( gamma_busy_fields(board, 12) == 5 );
assert( gamma_move(board, 13, 4, 1) == 1 );
assert( gamma_move(board, 13, 1, 5) == 1 );
assert( gamma_golden_move(board, 13, 3, 7) == 1 );
assert( gamma_move(board, 14, 4, 5) == 0 );
assert( gamma_move(board, 14, 0, 5) == 0 );
assert( gamma_move(board, 15, 6, 10) == 0 );
assert( gamma_move(board, 15, 0, 4) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );


char* board250799625 = gamma_board(board);
assert( board250799625 != NULL );
assert( strcmp(board250799625, 
"..121314.811..3\n"
".2.314115....\n"
"4134.114136...\n"
"9...9.5..133\n"
"11151512311.51512.\n"
"108.25117128..\n"
".9.713..53..\n"
"1312.10..4.728\n") == 0);
free(board250799625);
board250799625 = NULL;
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_move(board, 8, 1, 7) == 1 );
assert( gamma_golden_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 9, 7, 5) == 0 );
assert( gamma_move(board, 10, 4, 2) == 0 );
assert( gamma_move(board, 10, 2, 7) == 0 );
assert( gamma_move(board, 11, 1, 1) == 0 );
assert( gamma_golden_move(board, 11, 7, 4) == 0 );
assert( gamma_move(board, 12, 4, 1) == 0 );
assert( gamma_move(board, 12, 8, 3) == 0 );
assert( gamma_move(board, 13, 5, 9) == 0 );
assert( gamma_move(board, 15, 4, 5) == 0 );
assert( gamma_free_fields(board, 15) == 35 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_free_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_free_fields(board, 3) == 32 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_free_fields(board, 5) == 32 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 6, 7) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 9, 4, 5) == 0 );
assert( gamma_move(board, 9, 5, 4) == 1 );
assert( gamma_move(board, 10, 2, 9) == 0 );
assert( gamma_move(board, 10, 3, 0) == 0 );
assert( gamma_move(board, 11, 4, 1) == 0 );
assert( gamma_move(board, 11, 2, 6) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 7, 6) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 7, 2) == 0 );
assert( gamma_move(board, 13, 10, 6) == 1 );
assert( gamma_golden_move(board, 13, 5, 4) == 0 );
assert( gamma_move(board, 14, 2, 10) == 0 );
assert( gamma_move(board, 15, 5, 4) == 0 );
assert( gamma_move(board, 15, 9, 5) == 1 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_golden_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_free_fields(board, 5) == 25 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 2, 9) == 0 );
assert( gamma_move(board, 10, 10, 4) == 0 );
assert( gamma_free_fields(board, 10) == 25 );
assert( gamma_move(board, 11, 7, 4) == 1 );
assert( gamma_move(board, 12, 2, 10) == 0 );
assert( gamma_free_fields(board, 12) == 24 );
assert( gamma_move(board, 13, 4, 8) == 0 );
assert( gamma_golden_possible(board, 13) == 0 );
assert( gamma_move(board, 14, 5, 8) == 0 );
assert( gamma_move(board, 14, 4, 3) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );


char* board550287947 = gamma_board(board);
assert( board550287947 != NULL );
assert( strcmp(board550287947, 
"381241448113.3\n"
".21131411512..13\n"
"4134.114136.15.\n"
"9...99511.133\n"
"1181512311.51512.\n"
"108.25117128..\n"
".9.713.1532.\n"
"1312.10..4.728\n") == 0);
free(board550287947);
board550287947 = NULL;
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 9, 1, 10) == 0 );
assert( gamma_move(board, 10, 3, 6) == 0 );
assert( gamma_free_fields(board, 10) == 23 );
assert( gamma_move(board, 11, 6, 8) == 0 );
assert( gamma_move(board, 13, 2, 2) == 1 );
assert( gamma_move(board, 13, 9, 5) == 0 );
assert( gamma_move(board, 14, 1, 2) == 0 );
assert( gamma_move(board, 14, 1, 0) == 0 );
assert( gamma_move(board, 15, 10, 6) == 0 );


char* board826496358 = gamma_board(board);
assert( board826496358 != NULL );
assert( strcmp(board826496358, 
"381241448113.3\n"
".21131411512..13\n"
"4134.114136.15.\n"
"9...99511.133\n"
"1181512311.51512.\n"
"1081325117128..\n"
".9.71361532.\n"
"1312.10..4.728\n") == 0);
free(board826496358);
board826496358 = NULL;
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );


char* board387519742 = gamma_board(board);
assert( board387519742 != NULL );
assert( strcmp(board387519742, 
"381241448113.3\n"
".21131411512..13\n"
"4134.114136.15.\n"
"9...99511.133\n"
"1181512311.51512.\n"
"1081325117128..\n"
".9.71361532.\n"
"1312.101.4.728\n") == 0);
free(board387519742);
board387519742 = NULL;
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 8, 0, 5) == 0 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 9, 6, 9) == 0 );
assert( gamma_move(board, 9, 10, 7) == 0 );
assert( gamma_free_fields(board, 9) == 19 );
assert( gamma_move(board, 10, 0, 7) == 0 );
assert( gamma_free_fields(board, 10) == 19 );
assert( gamma_golden_move(board, 10, 3, 8) == 0 );
assert( gamma_move(board, 11, 2, 9) == 0 );
assert( gamma_move(board, 11, 2, 4) == 1 );
assert( gamma_move(board, 12, 10, 0) == 0 );
assert( gamma_move(board, 12, 0, 0) == 0 );
assert( gamma_move(board, 14, 0, 2) == 0 );
assert( gamma_move(board, 15, 0, 2) == 0 );
assert( gamma_move(board, 15, 4, 6) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 7, 6, 0) == 0 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 9, 1, 10) == 0 );
assert( gamma_move(board, 9, 7, 6) == 0 );
assert( gamma_move(board, 10, 3, 10) == 0 );
assert( gamma_move(board, 10, 2, 6) == 0 );
assert( gamma_busy_fields(board, 10) == 2 );
assert( gamma_move(board, 11, 2, 9) == 0 );
assert( gamma_move(board, 11, 8, 6) == 1 );
assert( gamma_move(board, 12, 3, 6) == 0 );


char* board974608101 = gamma_board(board);
assert( board974608101 != NULL );
assert( strcmp(board974608101, 
"38124144811333\n"
".2113141151211.13\n"
"4134.114136.15.\n"
"9.11.99511.133\n"
"1181512311.51512.\n"
"1081325117128..\n"
"69.71361532.\n"
"1312.10174.728\n") == 0);
free(board974608101);
board974608101 = NULL;
assert( gamma_move(board, 13, 2, 9) == 0 );
assert( gamma_move(board, 13, 3, 5) == 0 );
assert( gamma_move(board, 14, 3, 10) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 5, 10) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_golden_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board701018290 = gamma_board(board);
assert( board701018290 != NULL );
assert( strcmp(board701018290, 
"38124144811333\n"
".2113141151211.13\n"
"4134.114136.15.\n"
"9.11.99511.133\n"
"1181512311.51512.\n"
"1081325117128..\n"
"69.71361532.\n"
"1312.10174.728\n") == 0);
free(board701018290);
board701018290 = NULL;
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_golden_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_free_fields(board, 8) == 15 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_move(board, 10, 0, 3) == 0 );
assert( gamma_move(board, 11, 3, 6) == 0 );
assert( gamma_move(board, 11, 1, 3) == 0 );


gamma_delete(board);

    return 0;
}
