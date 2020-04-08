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
uuid: 863535702
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 11, 15, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 8, 0, 0) == 1 );
assert( gamma_move(board, 8, 2, 4) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 5) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );


char* board738122607 = gamma_board(board);
assert( board738122607 != NULL );
assert( strcmp(board738122607, 
"..5....\n"
"2......\n"
"3......\n"
"......1\n"
"...27..\n"
"59...6.\n"
"7.8....\n"
".......\n"
".......\n"
".6.....\n"
"8..3...\n") == 0);
free(board738122607);
board738122607 = NULL;
assert( gamma_move(board, 10, 10, 0) == 0 );
assert( gamma_move(board, 11, 5, 0) == 1 );
assert( gamma_move(board, 11, 1, 6) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 9, 2) == 0 );
assert( gamma_move(board, 12, 3, 8) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 3, 6) == 0 );
assert( gamma_move(board, 15, 3, 6) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_move(board, 9, 3, 2) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 10, 3, 7) == 1 );
assert( gamma_move(board, 11, 1, 0) == 1 );
assert( gamma_free_fields(board, 11) == 51 );
assert( gamma_move(board, 12, 0, 1) == 1 );
assert( gamma_move(board, 12, 0, 2) == 1 );
assert( gamma_move(board, 13, 0, 4) == 0 );
assert( gamma_move(board, 13, 2, 1) == 1 );
assert( gamma_free_fields(board, 13) == 48 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 3, 9) == 1 );
assert( gamma_move(board, 15, 1, 5) == 0 );
assert( gamma_free_fields(board, 15) == 47 );


char* board203727149 = gamma_board(board);
assert( board203727149 != NULL );
assert( strcmp(board203727149, 
"..5.3..\n"
"2..14...\n"
"3..12...\n"
"...10..1\n"
".11127..\n"
"596..6.\n"
"7.85...\n"
"..4....\n"
"12..9..3\n"
"12613....\n"
"811.3.11.\n") == 0);
free(board203727149);
board203727149 = NULL;
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );


char* board619808925 = gamma_board(board);
assert( board619808925 != NULL );
assert( strcmp(board619808925, 
"..5.3..\n"
"2..14...\n"
"3..12...\n"
"...10..1\n"
".11127..\n"
"596..6.\n"
"7.85...\n"
"..43...\n"
"12..93.3\n"
"12613....\n"
"811.3.11.\n") == 0);
free(board619808925);
board619808925 = NULL;
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 9, 0, 4) == 0 );
assert( gamma_move(board, 9, 6, 10) == 1 );
assert( gamma_busy_fields(board, 9) == 3 );
assert( gamma_move(board, 11, 3, 4) == 0 );
assert( gamma_move(board, 11, 3, 0) == 0 );
assert( gamma_move(board, 12, 0, 4) == 0 );
assert( gamma_busy_fields(board, 12) == 3 );
assert( gamma_move(board, 13, 9, 4) == 0 );
assert( gamma_golden_move(board, 13, 6, 3) == 0 );
assert( gamma_move(board, 14, 2, 4) == 0 );
assert( gamma_move(board, 15, 7, 2) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_free_fields(board, 5) == 41 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_move(board, 9, 8, 1) == 0 );
assert( gamma_free_fields(board, 9) == 41 );
assert( gamma_move(board, 10, 3, 4) == 0 );
assert( gamma_move(board, 11, 4, 4) == 1 );
assert( gamma_move(board, 11, 4, 8) == 1 );
assert( gamma_move(board, 12, 7, 5) == 0 );
assert( gamma_move(board, 12, 0, 9) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );


char* board998658836 = gamma_board(board);
assert( board998658836 != NULL );
assert( strcmp(board998658836, 
"..5.3.9\n"
"2..14...\n"
"3..1211..\n"
"...10..1\n"
".111275.\n"
"596..6.\n"
"7.8511..\n"
"..43...\n"
"12.693.3\n"
"126136...\n"
"811.3.11.\n") == 0);
free(board998658836);
board998658836 = NULL;
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 7, 4) == 0 );
assert( gamma_move(board, 15, 6, 4) == 1 );
assert( gamma_move(board, 15, 0, 2) == 0 );
assert( gamma_free_fields(board, 15) == 38 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );


char* board605718071 = gamma_board(board);
assert( board605718071 != NULL );
assert( strcmp(board605718071, 
"..5.3.9\n"
"23.14...\n"
"3..1211..\n"
"...10..1\n"
".1112753\n"
"596..6.\n"
"7.8511.15\n"
"..43...\n"
"12.693.3\n"
"126136...\n"
"81143.11.\n") == 0);
free(board605718071);
board605718071 = NULL;
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 6, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 7, 2, 9) == 1 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 10, 5, 3) == 1 );
assert( gamma_move(board, 10, 4, 6) == 0 );
assert( gamma_free_fields(board, 10) == 31 );
assert( gamma_move(board, 11, 5, 6) == 0 );
assert( gamma_move(board, 11, 5, 6) == 0 );
assert( gamma_move(board, 12, 8, 6) == 0 );
assert( gamma_busy_fields(board, 12) == 3 );
assert( gamma_move(board, 13, 0, 4) == 0 );
assert( gamma_move(board, 13, 6, 9) == 0 );
assert( gamma_move(board, 14, 7, 4) == 0 );
assert( gamma_move(board, 14, 0, 2) == 0 );
assert( gamma_busy_fields(board, 14) == 1 );
assert( gamma_move(board, 15, 7, 2) == 0 );
assert( gamma_move(board, 15, 6, 4) == 0 );
assert( gamma_busy_fields(board, 15) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 9, 5, 6) == 0 );
assert( gamma_move(board, 10, 1, 4) == 1 );
assert( gamma_move(board, 10, 0, 10) == 1 );
assert( gamma_move(board, 11, 3, 3) == 0 );
assert( gamma_move(board, 12, 0, 4) == 0 );
assert( gamma_move(board, 12, 0, 5) == 0 );
assert( gamma_free_fields(board, 12) == 27 );
assert( gamma_move(board, 13, 10, 3) == 0 );
assert( gamma_move(board, 13, 1, 3) == 1 );
assert( gamma_move(board, 14, 5, 6) == 0 );
assert( gamma_move(board, 15, 2, 8) == 1 );
assert( gamma_golden_move(board, 15, 8, 3) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_golden_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 9, 0, 7) == 1 );
assert( gamma_move(board, 10, 1, 1) == 0 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 11, 2, 0) == 0 );
assert( gamma_move(board, 11, 2, 8) == 0 );
assert( gamma_move(board, 12, 8, 5) == 0 );
assert( gamma_move(board, 13, 10, 5) == 0 );
assert( gamma_busy_fields(board, 13) == 2 );
assert( gamma_move(board, 14, 5, 6) == 0 );
assert( gamma_move(board, 14, 1, 5) == 0 );
assert( gamma_move(board, 15, 6, 4) == 0 );


char* board599145019 = gamma_board(board);
assert( board599145019 != NULL );
assert( strcmp(board599145019, 
"10.5.3.9\n"
"23714..6\n"
"3.151211..\n"
"9..10..1\n"
"71112753\n"
"596.76.\n"
"7108511415\n"
".1343.101\n"
"12.693.3\n"
"1261365..\n"
"81141.11.\n") == 0);
free(board599145019);
board599145019 = NULL;
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_golden_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_free_fields(board, 8) == 22 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 5) == 0 );
assert( gamma_move(board, 9, 4, 8) == 0 );
assert( gamma_move(board, 11, 5, 6) == 0 );
assert( gamma_move(board, 11, 0, 8) == 0 );
assert( gamma_move(board, 12, 5, 6) == 0 );
assert( gamma_move(board, 12, 6, 2) == 0 );
assert( gamma_move(board, 13, 4, 6) == 0 );
assert( gamma_move(board, 13, 1, 7) == 1 );


char* board987040921 = gamma_board(board);
assert( board987040921 != NULL );
assert( strcmp(board987040921, 
"10.5.3.9\n"
"23714..6\n"
"3.151211..\n"
"913.10..1\n"
"71112753\n"
"596.76.\n"
"7108511415\n"
".1343.101\n"
"12.643.3\n"
"1261365..\n"
"81141.11.\n") == 0);
free(board987040921);
board987040921 = NULL;
assert( gamma_move(board, 15, 8, 1) == 0 );
assert( gamma_move(board, 15, 1, 7) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_golden_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_golden_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 8, 3, 5) == 1 );
assert( gamma_move(board, 9, 3, 0) == 0 );
assert( gamma_move(board, 9, 6, 5) == 1 );
assert( gamma_move(board, 10, 2, 2) == 0 );
assert( gamma_move(board, 11, 6, 5) == 0 );
assert( gamma_move(board, 11, 2, 2) == 0 );
assert( gamma_busy_fields(board, 11) == 5 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 1, 5) == 0 );
assert( gamma_move(board, 12, 3, 1) == 0 );
assert( gamma_move(board, 14, 7, 2) == 0 );
assert( gamma_move(board, 15, 8, 1) == 0 );
assert( gamma_busy_fields(board, 15) == 2 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 1, 8) == 1 );
assert( gamma_free_fields(board, 7) == 17 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 9, 9, 5) == 0 );
assert( gamma_move(board, 9, 3, 3) == 0 );
assert( gamma_golden_move(board, 9, 6, 3) == 1 );
assert( gamma_move(board, 10, 3, 0) == 0 );
assert( gamma_move(board, 11, 3, 0) == 0 );
assert( gamma_move(board, 11, 0, 10) == 0 );
assert( gamma_move(board, 12, 8, 6) == 0 );
assert( gamma_move(board, 12, 0, 4) == 0 );
assert( gamma_move(board, 13, 9, 4) == 0 );
assert( gamma_move(board, 13, 6, 7) == 0 );
assert( gamma_move(board, 14, 5, 8) == 1 );
assert( gamma_move(board, 15, 1, 5) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_free_fields(board, 4) == 16 );


gamma_delete(board);

    return 0;
}
