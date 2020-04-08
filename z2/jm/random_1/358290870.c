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
uuid: 358290870
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 15, 8, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 14, 4) == 1 );
assert( gamma_move(board, 2, 14, 12) == 1 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_free_fields(board, 3) == 222 );
assert( gamma_move(board, 4, 14, 11) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 14, 2) == 1 );
assert( gamma_move(board, 8, 6, 11) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 15, 8) == 0 );
assert( gamma_move(board, 2, 5, 11) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 7, 14, 14) == 1 );
assert( gamma_free_fields(board, 7) == 214 );
assert( gamma_move(board, 1, 10, 9) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );


char* board721258959 = gamma_board(board);
assert( board721258959 != NULL );
assert( strcmp(board721258959, 
"..............7\n"
"...............\n"
"..............2\n"
".....28.......4\n"
"...............\n"
"..........1....\n"
"...............\n"
".........3.....\n"
"...............\n"
"...............\n"
"..............1\n"
".5.............\n"
"..3...........6\n"
"..5............\n"
".......2.......\n") == 0);
free(board721258959);
board721258959 = NULL;
assert( gamma_move(board, 3, 0, -1) == 0 );


char* board932198954 = gamma_board(board);
assert( board932198954 != NULL );
assert( strcmp(board932198954, 
"..............7\n"
"...............\n"
"..............2\n"
".....28.......4\n"
"...............\n"
"..........1....\n"
"...............\n"
".........3.....\n"
"...............\n"
"...............\n"
"..............1\n"
".5.............\n"
"..3...........6\n"
"..5............\n"
".......2.......\n") == 0);
free(board932198954);
board932198954 = NULL;
assert( gamma_move(board, 4, 11, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 14, 9) == 1 );
assert( gamma_move(board, 7, 10, 5) == 1 );
assert( gamma_golden_move(board, 7, 2, 14) == 0 );
assert( gamma_move(board, 8, 10, 7) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 12, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 6) == 1 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 15) == 0 );
assert( gamma_golden_move(board, 4, 5, 10) == 0 );


char* board926671416 = gamma_board(board);
assert( board926671416 != NULL );
assert( strcmp(board926671416, 
"..............7\n"
"...............\n"
"..1...........2\n"
".....28.......4\n"
"...............\n"
"..........1...5\n"
"...............\n"
".........38....\n"
".............5.\n"
"..........74...\n"
".........2....1\n"
"35.............\n"
"..3.........3.6\n"
".65............\n"
".......2.......\n") == 0);
free(board926671416);
board926671416 = NULL;
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_move(board, 6, -1, 4) == 0 );
assert( gamma_golden_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_golden_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 8, 14, 11) == 0 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 2, 9, 14) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 6, 12, 12) == 1 );
assert( gamma_free_fields(board, 6) == 197 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 13, -1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 13, 1) == 1 );
assert( gamma_move(board, 3, 11, 11) == 1 );
assert( gamma_move(board, 4, 5, 15) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 3, 14) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_free_fields(board, 7) == 194 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_free_fields(board, 2) == 193 );
assert( gamma_move(board, 3, 12, 7) == 1 );
assert( gamma_move(board, 4, 15, 7) == 0 );
assert( gamma_move(board, 5, 6, 12) == 1 );
assert( gamma_free_fields(board, 5) == 191 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 14, 10) == 1 );
assert( gamma_free_fields(board, 1) == 190 );
assert( gamma_golden_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 15, 7) == 0 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 6, 14, 2) == 0 );
assert( gamma_move(board, 7, 6, 6) == 1 );
assert( gamma_move(board, 8, 13, 2) == 1 );
assert( gamma_move(board, 1, 15, 5) == 0 );
assert( gamma_golden_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 2, 11, -1) == 0 );
assert( gamma_move(board, 3, 14, 14) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 5, -1, 6) == 0 );
assert( gamma_move(board, 6, 11, 14) == 1 );
assert( gamma_free_fields(board, 6) == 186 );
assert( gamma_golden_move(board, 7, 11, 11) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_free_fields(board, 1) == 185 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_free_fields(board, 2) == 184 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board468703346 = gamma_board(board);
assert( board468703346 != NULL );
assert( strcmp(board468703346, 
"...7.....2.6..7\n"
"...............\n"
"..1...5.....6.2\n"
".....28....7..4\n"
"..............7\n"
"..1.......1...5\n"
"...............\n"
"....5....38.3..\n"
"......7......5.\n"
"..........74...\n"
".......3.2....1\n"
"35.............\n"
"7.3..3......386\n"
".65....1.....1.\n"
"1..2...2.......\n") == 0);
free(board468703346);
board468703346 = NULL;
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_move(board, 5, 12, 4) == 1 );
assert( gamma_move(board, 6, 12, 3) == 1 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 5, 10) == 1 );
assert( gamma_free_fields(board, 8) == 178 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 3, 7, 12) == 1 );
assert( gamma_free_fields(board, 3) == 176 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 5, 15, 14) == 0 );
assert( gamma_golden_move(board, 5, 1, 13) == 0 );
assert( gamma_move(board, 6, 13, 3) == 1 );
assert( gamma_move(board, 7, 10, 13) == 1 );
assert( gamma_move(board, 8, 14, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 7, 10) == 1 );
assert( gamma_move(board, 6, 3, 14) == 0 );
assert( gamma_move(board, 7, 15, 12) == 0 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 6, 13, 6) == 0 );
assert( gamma_move(board, 7, 12, 11) == 1 );
assert( gamma_move(board, 8, 6, 9) == 1 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 14, 10) == 0 );
assert( gamma_move(board, 5, 6, 10) == 1 );
assert( gamma_move(board, 6, 14, 7) == 1 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 8, -1, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_free_fields(board, 8) == 163 );
assert( gamma_move(board, 1, 13, 14) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 12, 13) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_move(board, 8, 13, 12) == 1 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_move(board, 3, 10, -1) == 0 );
assert( gamma_free_fields(board, 3) == 157 );
assert( gamma_move(board, 4, 13, 7) == 1 );
assert( gamma_free_fields(board, 4) == 156 );
assert( gamma_free_fields(board, 5) == 156 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_golden_move(board, 6, 12, 14) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_free_fields(board, 7) == 156 );
assert( gamma_move(board, 8, -1, 7) == 0 );
assert( gamma_move(board, 1, 3, 15) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, -1, 5) == 0 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_move(board, 8, 0, 15) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 4, 10, 2) == 1 );


char* board834594322 = gamma_board(board);
assert( board834594322 != NULL );
assert( strcmp(board834594322, 
"...7.....2.6.17\n"
"..........7.3..\n"
"..1...53....682\n"
".....28....77.4\n"
"....1855......7\n"
"4.1..18...1...5\n"
"4.3............\n"
".2..5....38.346\n"
"......7644...5.\n"
"...7..7..274...\n"
".......3.22.5.1\n"
"35..........66.\n"
"7.3..3...54.386\n"
".65....12....1.\n"
"12.2...2.......\n") == 0);
free(board834594322);
board834594322 = NULL;
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 13) == 1 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 8, 8, 14) == 1 );
assert( gamma_move(board, 1, 14, 12) == 0 );
assert( gamma_move(board, 2, 10, 14) == 1 );
assert( gamma_golden_move(board, 2, 14, 14) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_free_fields(board, 3) == 147 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 6, 0, 11) == 1 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 14, 15) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 0, 10) == 1 );
assert( gamma_move(board, 8, 15, 13) == 0 );
assert( gamma_move(board, 1, 15, 0) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );


char* board741554398 = gamma_board(board);
assert( board741554398 != NULL );
assert( strcmp(board741554398, 
"...7....8226.12\n"
"....7.....7.3..\n"
"..1...53....682\n"
"6....28....77.4\n"
"7...1855......7\n"
"4.1..18...1...5\n"
"4.3............\n"
".2..5..5.38.346\n"
"......7644...5.\n"
"...7..7..274...\n"
".......3.22.5.1\n"
"35..3.......66.\n"
"7.3..3...54.386\n"
".65....12....1.\n"
"12.2...2.......\n") == 0);
free(board741554398);
board741554398 = NULL;
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 15, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 14, 10) == 0 );
assert( gamma_move(board, 6, 14, 3) == 1 );
assert( gamma_move(board, 7, 15, 6) == 0 );
assert( gamma_move(board, 8, 14, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 11) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 9, 15) == 0 );
assert( gamma_move(board, 7, 10, 1) == 1 );
assert( gamma_move(board, 8, 14, 4) == 0 );
assert( gamma_move(board, 1, 4, 11) == 1 );
assert( gamma_move(board, 2, 10, 5) == 0 );


char* board379803723 = gamma_board(board);
assert( board379803723 != NULL );
assert( strcmp(board379803723, 
"...7....8226.12\n"
"....7.....7.3..\n"
"..1...53....682\n"
"6...1282...77.4\n"
"7...1855......7\n"
"4.1..18...1...5\n"
"4.3............\n"
".2..5..5.38.346\n"
"......7644...5.\n"
"...7..7..274...\n"
".......3.22.5.1\n"
"355.3.......666\n"
"7.3..3...54.386\n"
".65....12.7..1.\n"
"12.2...2.......\n") == 0);
free(board379803723);
board379803723 = NULL;
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_free_fields(board, 5) == 137 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 14, 3) == 0 );
assert( gamma_free_fields(board, 7) == 137 );
assert( gamma_move(board, 8, 1, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_free_fields(board, 1) == 136 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 5, 14, 6) == 1 );
assert( gamma_move(board, 7, 10, 0) == 1 );
assert( gamma_move(board, 8, 3, 11) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 10, 12) == 1 );
assert( gamma_free_fields(board, 2) == 131 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_golden_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 5, 11, 0) == 1 );
assert( gamma_move(board, 6, 12, -1) == 0 );
assert( gamma_move(board, 7, 13, 1) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 1, 4, 12) == 1 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 3, 2, 14) == 1 );
assert( gamma_free_fields(board, 3) == 128 );


char* board501103803 = gamma_board(board);
assert( board501103803 != NULL );
assert( strcmp(board501103803, 
"..37....8226.12\n"
"....7.....7.3..\n"
"..1.1.53..2.682\n"
"6..81282...77.4\n"
"78..1855......7\n"
"4.1..14..31...5\n"
"4.3............\n"
".2..5..5.38.346\n"
"......7644...55\n"
"...7..7..274...\n"
".......3.22.5.1\n"
"355.3.......666\n"
"7.3..3...54.386\n"
".65....12.7.51.\n"
"12.2...21.75...\n") == 0);
free(board501103803);
board501103803 = NULL;
assert( gamma_move(board, 4, 0, 14) == 1 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_free_fields(board, 1) == 126 );
assert( gamma_move(board, 2, -1, 7) == 0 );
assert( gamma_move(board, 3, 10, 10) == 1 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 6, 15, 12) == 0 );
assert( gamma_free_fields(board, 6) == 125 );
assert( gamma_move(board, 8, 8, 13) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


gamma_delete(board);

    return 0;
}
