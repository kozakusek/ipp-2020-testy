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
uuid: 509307629
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 20, 10, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_free_fields(board, 1) == 199 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_free_fields(board, 3) == 197 );


char* board870880917 = gamma_board(board);
assert( board870880917 != NULL );
assert( strcmp(board870880917, 
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
".........1\n"
"..........\n"
"..........\n"
"..........\n"
"......3...\n"
"..........\n"
"..........\n"
"..........\n"
"..........\n"
"2.........\n") == 0);
free(board870880917);
board870880917 = NULL;
assert( gamma_move(board, 4, 5, 12) == 1 );
assert( gamma_golden_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 6, 1, 15) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, 4, 9) == 1 );
assert( gamma_free_fields(board, 8) == 193 );
assert( gamma_move(board, 9, 5, 9) == 1 );
assert( gamma_move(board, 10, 1, 8) == 1 );
assert( gamma_move(board, 1, 9, 18) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_free_fields(board, 2) == 190 );
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 19) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 6, 12) == 1 );
assert( gamma_move(board, 7, 2, 13) == 1 );
assert( gamma_move(board, 8, 0, 20) == 0 );
assert( gamma_move(board, 9, 10, 12) == 0 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 10, 16) == 0 );
assert( gamma_move(board, 4, 9, 10) == 1 );
assert( gamma_free_fields(board, 4) == 185 );
assert( gamma_move(board, 5, 1, 10) == 1 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_move(board, 7, 7, 11) == 1 );
assert( gamma_move(board, 8, 8, 0) == 1 );
assert( gamma_move(board, 10, 6, 4) == 1 );
assert( gamma_free_fields(board, 10) == 180 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 14) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 8, 6, 20) == 0 );
assert( gamma_move(board, 9, 7, 7) == 1 );
assert( gamma_move(board, 10, 3, 17) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 11) == 1 );
assert( gamma_move(board, 5, 1, 14) == 1 );
assert( gamma_move(board, 6, -1, 12) == 0 );
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_golden_move(board, 7, 10, 9) == 0 );
assert( gamma_free_fields(board, 8) == 172 );
assert( gamma_move(board, 9, 4, 15) == 1 );
assert( gamma_move(board, 10, 5, 14) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_move(board, 3, 0, 17) == 1 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_golden_move(board, 4, 9, 5) == 0 );


char* board225122912 = gamma_board(board);
assert( board225122912 != NULL );
assert( strcmp(board225122912, 
"...5......\n"
".........1\n"
"3..10......\n"
"..........\n"
".6..9.....\n"
".5...10.2..\n"
"..7.......\n"
".....46...\n"
".....4.7..\n"
".53......4\n"
"....89...1\n"
".10........\n"
".35..6.9..\n"
"......4...\n"
"......3...\n"
"......10...\n"
".......6..\n"
".......3..\n"
"..........\n"
"2.......8.\n") == 0);
free(board225122912);
board225122912 = NULL;
assert( gamma_move(board, 5, 9, 20) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 10) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_golden_move(board, 6, 15, 1) == 0 );
assert( gamma_move(board, 7, 3, 10) == 1 );
assert( gamma_move(board, 8, 6, 19) == 1 );
assert( gamma_move(board, 9, 10, 13) == 0 );
assert( gamma_move(board, 10, 0, -1) == 0 );
assert( gamma_move(board, 1, 9, 16) == 1 );
assert( gamma_move(board, 2, 6, 19) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_free_fields(board, 4) == 163 );
assert( gamma_move(board, 6, 0, 11) == 1 );
assert( gamma_free_fields(board, 6) == 162 );
assert( gamma_free_fields(board, 7) == 162 );
assert( gamma_move(board, 8, 1, 16) == 1 );
assert( gamma_move(board, 9, 0, 8) == 1 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 1, 17) == 1 );
assert( gamma_free_fields(board, 10) == 159 );
assert( gamma_move(board, 1, 7, 15) == 1 );
assert( gamma_move(board, 2, 6, 20) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board529479375 = gamma_board(board);
assert( board529479375 != NULL );
assert( strcmp(board529479375, 
"...5..8...\n"
".........1\n"
"310.10......\n"
".8.......1\n"
".6..9..1..\n"
".5...10.2..\n"
"..7.......\n"
".....46...\n"
"6....4.7..\n"
".537....64\n"
"....89...1\n"
"910........\n"
".35..6.9..\n"
"......4...\n"
"......3...\n"
"......10...\n"
"..3....6..\n"
".......3..\n"
"..........\n"
"2.......8.\n") == 0);
free(board529479375);
board529479375 = NULL;
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_free_fields(board, 6) == 157 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 8, -1, 11) == 0 );
assert( gamma_move(board, 9, 10, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 2, 0, 17) == 0 );
assert( gamma_move(board, 3, 9, 4) == 1 );


char* board723585545 = gamma_board(board);
assert( board723585545 != NULL );
assert( strcmp(board723585545, 
"...5..8...\n"
".........1\n"
"310.10......\n"
".8.......1\n"
".6..9..1..\n"
".5...10.2..\n"
"..7.......\n"
".....46...\n"
"6....4.7..\n"
".537....64\n"
"....89...1\n"
"910........\n"
".35..6.9..\n"
"......4...\n"
"......3...\n"
"......10..3\n"
"..3....6..\n"
".......3..\n"
"..........\n"
"2.......86\n") == 0);
free(board723585545);
board723585545 = NULL;
assert( gamma_move(board, 4, 5, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 6, 2, 15) == 1 );
assert( gamma_free_fields(board, 6) == 154 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, -1, 12) == 0 );
assert( gamma_busy_fields(board, 9) == 4 );
assert( gamma_move(board, 10, 4, 19) == 1 );
assert( gamma_busy_fields(board, 10) == 6 );
assert( gamma_free_fields(board, 10) == 153 );
assert( gamma_move(board, 1, 9, 11) == 1 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_golden_move(board, 7, 2, 7) == 1 );
assert( gamma_move(board, 10, 0, 1) == 1 );
assert( gamma_move(board, 1, 8, 18) == 1 );
assert( gamma_free_fields(board, 1) == 146 );


char* board633628294 = gamma_board(board);
assert( board633628294 != NULL );
assert( strcmp(board633628294, 
"...510.8...\n"
"........11\n"
"310.10......\n"
".8.......1\n"
".66.9..1..\n"
".5...10.2..\n"
"..7.......\n"
".....46...\n"
"6....4.7.1\n"
".537.4..64\n"
"....89...1\n"
"910........\n"
".37..6.9..\n"
"......44..\n"
"......3...\n"
"......10..3\n"
".63..2.6..\n"
".......3..\n"
"10.........\n"
"2......586\n") == 0);
free(board633628294);
board633628294 = NULL;
assert( gamma_move(board, 2, 9, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_move(board, 5, -1, 10) == 0 );
assert( gamma_free_fields(board, 5) == 144 );
assert( gamma_move(board, 8, 7, 20) == 0 );
assert( gamma_move(board, 9, 3, 4) == 1 );
assert( gamma_move(board, 10, 10, 7) == 0 );
assert( gamma_move(board, 3, 3, 17) == 0 );
assert( gamma_free_fields(board, 3) == 143 );
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 7, 9, -1) == 0 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_move(board, 9, 4, 10) == 1 );
assert( gamma_move(board, 10, 3, 7) == 1 );


char* board236583371 = gamma_board(board);
assert( board236583371 != NULL );
assert( strcmp(board236583371, 
"...510.8...\n"
"........11\n"
"310.10......\n"
".8.......1\n"
".66.9..1..\n"
".5...10.2..\n"
"..7.......\n"
".....46...\n"
"6....4.7.1\n"
".53794..64\n"
"....89...1\n"
"910........\n"
".3710.6.9.2\n"
"......44..\n"
"......3...\n"
".6.9..10..3\n"
".63..2.6..\n"
".......3..\n"
"10.38......\n"
"2......586\n") == 0);
free(board236583371);
board236583371 = NULL;
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_free_fields(board, 3) == 138 );


char* board681390854 = gamma_board(board);
assert( board681390854 != NULL );
assert( strcmp(board681390854, 
"...510.8...\n"
"........11\n"
"310.10......\n"
".8.......1\n"
".66.9..1..\n"
".5...10.2..\n"
"..7.......\n"
".....46...\n"
"6....4.7.1\n"
".53794..64\n"
"....89.2.1\n"
"910........\n"
".3710.6.9.2\n"
"......44..\n"
"......3...\n"
".6.9..10..3\n"
".63..2.6..\n"
".......3..\n"
"10.38......\n"
"2......586\n") == 0);
free(board681390854);
board681390854 = NULL;
assert( gamma_move(board, 4, 10, 18) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_free_fields(board, 6) == 138 );
assert( gamma_move(board, 8, 5, 6) == 1 );
assert( gamma_golden_move(board, 8, 17, 1) == 0 );
assert( gamma_move(board, 9, 10, 7) == 0 );
assert( gamma_move(board, 10, -1, 12) == 0 );
assert( gamma_golden_move(board, 10, 11, 9) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 6, 16) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 5, 15) == 1 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 9, 1, 12) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_golden_move(board, 1, 19, 6) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_golden_move(board, 4, 19, 4) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 7, 14) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 8, 7, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 7, 0) == 0 );
assert( gamma_free_fields(board, 9) == 129 );
assert( gamma_free_fields(board, 10) == 129 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_golden_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 5, 15) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 5, 9, 14) == 1 );
assert( gamma_move(board, 6, 1, 16) == 0 );
assert( gamma_move(board, 7, 8, 1) == 1 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, -1, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 4, 0, 12) == 1 );
assert( gamma_move(board, 5, -1, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 10, 16) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 8, -1, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 7 );
assert( gamma_golden_move(board, 9, 0, 8) == 0 );
assert( gamma_move(board, 10, 2, 17) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_move(board, 2, 9, 17) == 1 );
assert( gamma_golden_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 7, 3, 10) == 0 );
assert( gamma_free_fields(board, 7) == 123 );
assert( gamma_move(board, 8, 0, 7) == 1 );
assert( gamma_move(board, 10, 1, 10) == 0 );
assert( gamma_move(board, 1, 1, 20) == 0 );
assert( gamma_free_fields(board, 1) == 122 );
assert( gamma_move(board, 2, 3, 16) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_free_fields(board, 3) == 121 );
assert( gamma_move(board, 4, 9, 16) == 0 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 7, 1, 15) == 0 );
assert( gamma_free_fields(board, 7) == 121 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 9, 8, 2) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 13) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 15, 1) == 0 );
assert( gamma_move(board, 5, 2, 15) == 0 );
assert( gamma_move(board, 7, 0, 18) == 1 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_free_fields(board, 9) == 116 );
assert( gamma_busy_fields(board, 10) == 9 );


gamma_delete(board);

    return 0;
}
