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
uuid: 704104678
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 18, 4, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 12, 17) == 0 );
assert( gamma_move(board, 2, 6, 9) == 1 );


char* board348850663 = gamma_board(board);
assert( board348850663 != NULL );
assert( strcmp(board348850663, 
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"......2.....\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n") == 0);
free(board348850663);
board348850663 = NULL;
assert( gamma_free_fields(board, 3) == 215 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 1, 5, -1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 8, 14) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );


char* board700528366 = gamma_board(board);
assert( board700528366 != NULL );
assert( strcmp(board700528366, 
"............\n"
"............\n"
"............\n"
"........3...\n"
"............\n"
"............\n"
"............\n"
"............\n"
"......2.....\n"
"............\n"
"............\n"
"...........4\n"
".2..........\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n") == 0);
free(board700528366);
board700528366 = NULL;
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_golden_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 1, 10, 1) == 1 );


char* board249362427 = gamma_board(board);
assert( board249362427 != NULL );
assert( strcmp(board249362427, 
"............\n"
"............\n"
"............\n"
"........3...\n"
"............\n"
"............\n"
"............\n"
"............\n"
"......2.....\n"
"............\n"
"............\n"
"........4..4\n"
".2..........\n"
"............\n"
"............\n"
"............\n"
"..........1.\n"
"............\n") == 0);
free(board249362427);
board249362427 = NULL;
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, -1, 13) == 0 );
assert( gamma_move(board, 4, 7, 16) == 1 );
assert( gamma_move(board, 1, 4, 10) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 6, 15) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 1, 17) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board580684963 = gamma_board(board);
assert( board580684963 != NULL );
assert( strcmp(board580684963, 
".2..........\n"
".......4....\n"
"......3.....\n"
"........3...\n"
"............\n"
"............\n"
"............\n"
"....1.......\n"
"......2.....\n"
"..4.........\n"
"............\n"
"........4..4\n"
".2..........\n"
"............\n"
"......2.2...\n"
"............\n"
"..........1.\n"
"1...........\n") == 0);
free(board580684963);
board580684963 = NULL;
assert( gamma_move(board, 3, 7, 17) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );


char* board192391471 = gamma_board(board);
assert( board192391471 != NULL );
assert( strcmp(board192391471, 
".2.....3....\n"
".......4....\n"
"......3.....\n"
"........3...\n"
"............\n"
"............\n"
"............\n"
"....1.......\n"
"......2.....\n"
"..4.........\n"
"............\n"
"........4..4\n"
".2..........\n"
"............\n"
"......2.2...\n"
"............\n"
"..........1.\n"
"1...........\n") == 0);
free(board192391471);
board192391471 = NULL;
assert( gamma_move(board, 1, 6, 18) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 1) == 201 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_free_fields(board, 2) == 201 );
assert( gamma_move(board, 4, 3, 13) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 5, 13) == 1 );
assert( gamma_free_fields(board, 4) == 198 );
assert( gamma_move(board, 1, 5, 11) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, -1, 9) == 0 );


char* board230016952 = gamma_board(board);
assert( board230016952 != NULL );
assert( strcmp(board230016952, 
".2.....3....\n"
".......4....\n"
"......3.....\n"
"........3...\n"
"...4.3......\n"
"............\n"
".....1......\n"
"....1.......\n"
"......2.....\n"
"..42........\n"
"............\n"
"........4..4\n"
".2..........\n"
"............\n"
"..2...2.2...\n"
"............\n"
"..........1.\n"
"1...........\n") == 0);
free(board230016952);
board230016952 = NULL;
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );


char* board391506964 = gamma_board(board);
assert( board391506964 != NULL );
assert( strcmp(board391506964, 
".2.....3....\n"
".......4....\n"
"......3.....\n"
"........3...\n"
"...4.3......\n"
"............\n"
".....1......\n"
"....1.......\n"
"......2.....\n"
"..42.....4..\n"
"............\n"
"........4..4\n"
".2..........\n"
"............\n"
"..2...2.2...\n"
"............\n"
"......1...1.\n"
"1...........\n") == 0);
free(board391506964);
board391506964 = NULL;
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_free_fields(board, 3) == 188 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_free_fields(board, 1) == 187 );
assert( gamma_golden_move(board, 1, 17, 1) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 10, 12) == 1 );
assert( gamma_golden_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_free_fields(board, 4) == 186 );
assert( gamma_move(board, 2, 6, 11) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 4, 12, 14) == 0 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_free_fields(board, 3) == 179 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 13) == 1 );
assert( gamma_move(board, 1, 11, 11) == 1 );
assert( gamma_free_fields(board, 1) == 177 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 16) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 11, 12) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_free_fields(board, 4) == 174 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 16) == 0 );
assert( gamma_move(board, 3, 3, 15) == 1 );
assert( gamma_move(board, 4, 5, 17) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 1, 10, -1) == 0 );
assert( gamma_golden_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 12, 17) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_free_fields(board, 1) == 166 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 2, 6, 13) == 1 );
assert( gamma_move(board, 3, 9, 17) == 1 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 14) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 2, 4, 14) == 0 );
assert( gamma_golden_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_free_fields(board, 4) == 159 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 2, 4, 16) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 7, 15) == 1 );
assert( gamma_move(board, 1, 12, -1) == 0 );
assert( gamma_move(board, 3, 6, 17) == 1 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 10, 13) == 1 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_move(board, 4, 9, 9) == 1 );
assert( gamma_move(board, 1, 0, 13) == 1 );
assert( gamma_move(board, 3, 6, 18) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 17) == 0 );
assert( gamma_move(board, 4, 3, 16) == 0 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_golden_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 1, 15) == 1 );
assert( gamma_busy_fields(board, 2) == 17 );


char* board428632980 = gamma_board(board);
assert( board428632980 != NULL );
assert( strcmp(board428632980, 
".2...433.3..\n"
"...4...4....\n"
".4.3..34....\n"
"........3..3\n"
"1..4.324..1.\n"
"...2......33\n"
"....4123...1\n"
"...41.......\n"
"..4..12..4..\n"
"..422.2..4..\n"
".12......1..\n"
"3.4.1...4..4\n"
"42..32.32...\n"
"..3..1......\n"
"..21..2.2.12\n"
"....3.......\n"
"1.....1...11\n"
"1..2....34..\n") == 0);
free(board428632980);
board428632980 = NULL;
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_golden_move(board, 3, 12, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 1, 2, 15) == 0 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, -1, 16) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 2, 11, 11) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, -1, -1) == 0 );
assert( gamma_golden_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 1, 15) == 0 );
assert( gamma_move(board, 4, 4, 12) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 12, -1) == 0 );
assert( gamma_move(board, 1, 2, 18) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 19 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_free_fields(board, 2) == 36 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_free_fields(board, 3) == 42 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, 17) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );


char* board587299946 = gamma_board(board);
assert( board587299946 != NULL );
assert( strcmp(board587299946, 
".2...433.3..\n"
"...4...4....\n"
".4.3..34....\n"
"........3..3\n"
"1..4.324..1.\n"
"...24.....33\n"
"....4123...1\n"
"...41.......\n"
"..4..12..4..\n"
"..422.2..4..\n"
".12......1..\n"
"3.4.1...41.4\n"
"42..32.32...\n"
"..3..1......\n"
"..21..2.2.12\n"
"....333.....\n"
"1.....1...11\n"
"1..2....34..\n") == 0);
free(board587299946);
board587299946 = NULL;
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 10, 17) == 0 );
assert( gamma_move(board, 3, -1, 17) == 0 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 1, 10, 18) == 0 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board234163197 = gamma_board(board);
assert( board234163197 != NULL );
assert( strcmp(board234163197, 
".2...433.3..\n"
"...4...4....\n"
".4.3..34....\n"
"........3..3\n"
"1..4.324..1.\n"
"...24.....33\n"
"....4123...1\n"
"...41.......\n"
"..4..12..4..\n"
"..422.2..4..\n"
".12......1..\n"
"3.4.1...41.4\n"
"42..32.32...\n"
"..3..1......\n"
"..21..2.2.12\n"
"....333.....\n"
"1.....1..111\n"
"1..2....34..\n") == 0);
free(board234163197);
board234163197 = NULL;
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 11, 13) == 1 );
assert( gamma_move(board, 4, 10, 16) == 0 );


char* board869871659 = gamma_board(board);
assert( board869871659 != NULL );
assert( strcmp(board869871659, 
".2...433.3..\n"
"...4...4....\n"
".4.3..34....\n"
"........3..3\n"
"1..4.324..13\n"
"...24.....33\n"
"....4123...1\n"
"...41.......\n"
"..4..12..4..\n"
"..422.2..4..\n"
".12......1..\n"
"3.4.1...41.4\n"
"42..32.32...\n"
"..3..1......\n"
"..21..2.2.12\n"
"....333.....\n"
"1.....1..111\n"
"1..2....34..\n") == 0);
free(board869871659);
board869871659 = NULL;
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_golden_move(board, 1, 17, 1) == 0 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 0, 16) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 1, 1, 17) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_free_fields(board, 3) == 141 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 19 );


gamma_delete(board);

    return 0;
}
