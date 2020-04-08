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
uuid: 155990944
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 19, 11, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 7, 16) == 1 );
assert( gamma_move(board, 3, 2, 19) == 0 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_move(board, 6, 5, 16) == 1 );
assert( gamma_move(board, 7, 1, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 2, 6) == 1 );
assert( gamma_move(board, 10, 2, 18) == 1 );
assert( gamma_move(board, 11, 7, 18) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_golden_move(board, 11, 16, 5) == 0 );
assert( gamma_free_fields(board, 1) == 164 );


char* board441009535 = gamma_board(board);
assert( board441009535 != NULL );
assert( strcmp(board441009535, 
"..10....11.\n"
".........\n"
".....6.2.\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".........\n"
".7.......\n"
"..9......\n"
".........\n"
".........\n"
".........\n"
".........\n"
"........1\n"
".........\n") == 0);
free(board441009535);
board441009535 = NULL;
assert( gamma_move(board, 2, 7, 19) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 18, 2) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 15) == 1 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 6, 8, 15) == 0 );
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_move(board, 8, 5, -1) == 0 );
assert( gamma_move(board, 9, 0, 18) == 1 );
assert( gamma_move(board, 10, 4, 12) == 1 );
assert( gamma_move(board, 11, 5, 11) == 1 );


char* board959953474 = gamma_board(board);
assert( board959953474 != NULL );
assert( strcmp(board959953474, 
"9.10....11.\n"
".........\n"
".....6.2.\n"
"........4\n"
".........\n"
".........\n"
"....10....\n"
".....11...\n"
".........\n"
".........\n"
"3........\n"
".775.....\n"
"..9......\n"
".........\n"
".........\n"
".........\n"
".........\n"
"........1\n"
".........\n") == 0);
free(board959953474);
board959953474 = NULL;
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 8, 13) == 1 );
assert( gamma_move(board, 8, -1, 15) == 0 );


char* board310073954 = gamma_board(board);
assert( board310073954 != NULL );
assert( strcmp(board310073954, 
"9.10....11.\n"
".........\n"
".....6.2.\n"
"........4\n"
".........\n"
"........7\n"
"....10....\n"
".....11...\n"
".........\n"
"1........\n"
"34.......\n"
".775.....\n"
"..9......\n"
".........\n"
".........\n"
".........\n"
".........\n"
"6.......1\n"
".........\n") == 0);
free(board310073954);
board310073954 = NULL;
assert( gamma_move(board, 9, 8, 13) == 0 );
assert( gamma_move(board, 10, 6, 7) == 1 );
assert( gamma_move(board, 11, 8, 17) == 1 );
assert( gamma_golden_move(board, 11, 13, 8) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_free_fields(board, 4) == 148 );
assert( gamma_move(board, 5, 1, 10) == 1 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_move(board, 7, -1, -1) == 0 );
assert( gamma_move(board, 8, 3, 14) == 1 );


char* board735065637 = gamma_board(board);
assert( board735065637 != NULL );
assert( strcmp(board735065637, 
"9.10....11.\n"
"........11\n"
".....6.2.\n"
"........4\n"
"...8.....\n"
"........7\n"
"....10....\n"
".....11...\n"
".5.......\n"
"1...3....\n"
"34.......\n"
".775..10..\n"
"..9......\n"
".........\n"
"...4.....\n"
".........\n"
"....2....\n"
"6.......1\n"
".........\n") == 0);
free(board735065637);
board735065637 = NULL;
assert( gamma_move(board, 9, 9, 13) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_busy_fields(board, 10) == 3 );
assert( gamma_move(board, 11, 4, 2) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 3, 12) == 1 );
assert( gamma_free_fields(board, 4) == 144 );


char* board298138045 = gamma_board(board);
assert( board298138045 != NULL );
assert( strcmp(board298138045, 
"9.10....11.\n"
"........11\n"
".....6.2.\n"
"........4\n"
"...8.....\n"
"........7\n"
"...310....\n"
".....11...\n"
".5.......\n"
"1...3....\n"
"34.......\n"
".775..10..\n"
"..9......\n"
".........\n"
"...4.....\n"
"..1......\n"
"....2....\n"
"6.......1\n"
".........\n") == 0);
free(board298138045);
board298138045 = NULL;
assert( gamma_move(board, 5, 7, 11) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 8, 4, 0) == 1 );
assert( gamma_move(board, 9, 9, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 10, 1, 1) == 1 );
assert( gamma_move(board, 11, 1, 13) == 1 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_golden_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 5, 17) == 1 );
assert( gamma_move(board, 6, 4, 14) == 1 );
assert( gamma_move(board, 7, 0, 15) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 4, 12) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 6, 8) == 1 );
assert( gamma_move(board, 10, 9, 15) == 0 );
assert( gamma_free_fields(board, 10) == 134 );
assert( gamma_move(board, 11, 3, 5) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );


char* board242830464 = gamma_board(board);
assert( board242830464 != NULL );
assert( strcmp(board242830464, 
"9.10....11.\n"
".....5..11\n"
".....6.2.\n"
"7.......4\n"
"...86....\n"
".11......7\n"
"...310....\n"
".....11.5.\n"
".5.......\n"
"1...3....\n"
"34....9..\n"
".775..10..\n"
"..9......\n"
"3..11.....\n"
"...4.....\n"
"..1......\n"
"....2....\n"
"610.....21\n"
"....8....\n") == 0);
free(board242830464);
board242830464 = NULL;
assert( gamma_move(board, 2, 8, 11) == 1 );
assert( gamma_move(board, 3, 5, 12) == 1 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 7, 3, 16) == 1 );
assert( gamma_move(board, 8, 6, 14) == 1 );
assert( gamma_move(board, 9, 8, 3) == 1 );
assert( gamma_golden_move(board, 9, 1, 0) == 0 );
assert( gamma_move(board, 10, 4, 14) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, -1, 13) == 0 );
assert( gamma_free_fields(board, 3) == 126 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_free_fields(board, 4) == 126 );
assert( gamma_move(board, 5, 2, 18) == 0 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 8, 7, 8) == 1 );
assert( gamma_move(board, 9, 3, 8) == 1 );
assert( gamma_move(board, 10, 5, 15) == 1 );
assert( gamma_busy_fields(board, 10) == 5 );
assert( gamma_move(board, 11, 5, 11) == 0 );
assert( gamma_free_fields(board, 11) == 122 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_free_fields(board, 2) == 122 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 0, 13) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 0, 18) == 0 );
assert( gamma_move(board, 6, 0, 11) == 1 );
assert( gamma_move(board, 7, 4, 18) == 1 );
assert( gamma_move(board, 8, 0, 17) == 1 );
assert( gamma_free_fields(board, 8) == 117 );
assert( gamma_move(board, 9, 3, 11) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 3, 17) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 7, 9) == 1 );
assert( gamma_free_fields(board, 11) == 114 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 0, 19) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 15) == 1 );
assert( gamma_free_fields(board, 5) == 111 );
assert( gamma_move(board, 6, 9, 16) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 7, 11, 0) == 0 );
assert( gamma_move(board, 8, 7, 13) == 1 );
assert( gamma_move(board, 9, 4, 16) == 1 );
assert( gamma_move(board, 10, 5, 4) == 1 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_move(board, 11, 8, 1) == 0 );
assert( gamma_free_fields(board, 11) == 108 );
assert( gamma_move(board, 1, 0, 18) == 0 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_free_fields(board, 6) == 106 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 2, 9, -1) == 0 );


char* board444090234 = gamma_board(board);
assert( board444090234 != NULL );
assert( strcmp(board444090234, 
"9.10.7..11.\n"
"8..10.5..11\n"
"...796.2.\n"
"7...510..4\n"
"...86.8..\n"
"411.....87\n"
"...3103...\n"
"6..9.11.52\n"
".5..4....\n"
"1...3..11.\n"
"34.9..98.\n"
".775..102.\n"
"..9......\n"
"3.611..3..\n"
"...4.10...\n"
"7.1.....9\n"
"...82....\n"
"610..21.21\n"
"....8..2.\n") == 0);
free(board444090234);
board444090234 = NULL;
assert( gamma_move(board, 4, 6, 16) == 1 );
assert( gamma_golden_move(board, 4, 17, 8) == 0 );
assert( gamma_move(board, 5, 7, 17) == 1 );
assert( gamma_move(board, 8, 6, 4) == 1 );
assert( gamma_free_fields(board, 8) == 102 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 10, 8, 7) == 1 );
assert( gamma_busy_fields(board, 11) == 6 );
assert( gamma_free_fields(board, 11) == 101 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_free_fields(board, 1) == 100 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 6, 2) == 0 );
assert( gamma_free_fields(board, 2) == 100 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 14) == 1 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );


char* board379538892 = gamma_board(board);
assert( board379538892 != NULL );
assert( strcmp(board379538892, 
"9.10.7..11.\n"
"8..10.5.511\n"
"...79642.\n"
"7...510..4\n"
"3..86.8..\n"
"411.....87\n"
"...3103...\n"
"6..9.11.52\n"
".5..4....\n"
"15..3..11.\n"
"34.9..98.\n"
".775..10210\n"
"..9....4.\n"
"3.611..3..\n"
"...4.108..\n"
"7.1...1.9\n"
"...82....\n"
"610..21621\n"
"....8..2.\n") == 0);
free(board379538892);
board379538892 = NULL;
assert( gamma_move(board, 8, 1, 12) == 1 );
assert( gamma_move(board, 9, 5, 4) == 0 );
assert( gamma_free_fields(board, 9) == 95 );
assert( gamma_golden_move(board, 10, 15, 5) == 0 );
assert( gamma_move(board, 11, 6, 10) == 1 );
assert( gamma_move(board, 1, 9, 10) == 0 );


char* board677985685 = gamma_board(board);
assert( board677985685 != NULL );
assert( strcmp(board677985685, 
"9.10.7..11.\n"
"8..10.5.511\n"
"...79642.\n"
"7...510..4\n"
"3..86.8..\n"
"411.....87\n"
".8.3103...\n"
"6..9.11.52\n"
".5..4.11..\n"
"15..3..11.\n"
"34.9..98.\n"
".775..10210\n"
"..9....4.\n"
"3.611..3..\n"
"...4.108..\n"
"7.1...1.9\n"
"...82....\n"
"610..21621\n"
"....8..2.\n") == 0);
free(board677985685);
board677985685 = NULL;
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 7, 16) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 8, 4, 15) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 10, 3, -1) == 0 );
assert( gamma_golden_move(board, 10, 5, 6) == 0 );
assert( gamma_move(board, 11, 5, 8) == 1 );
assert( gamma_golden_move(board, 11, 13, 8) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 3, 19) == 0 );
assert( gamma_move(board, 5, 1, 15) == 1 );
assert( gamma_move(board, 6, 6, 14) == 0 );
assert( gamma_free_fields(board, 10) == 90 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 9, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 15) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 12) == 1 );
assert( gamma_free_fields(board, 3) == 89 );
assert( gamma_move(board, 5, 9, 18) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );


gamma_delete(board);

    return 0;
}
