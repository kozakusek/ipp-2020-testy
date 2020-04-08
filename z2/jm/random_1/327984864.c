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
uuid: 327984864
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 16, 5, 17);
assert( board != NULL );


assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 5, 11, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_free_fields(board, 1) == 202 );


char* board817086951 = gamma_board(board);
assert( board817086951 != NULL );
assert( strcmp(board817086951, 
".............\n"
".............\n"
".............\n"
".............\n"
".............\n"
".............\n"
".............\n"
".......3.....\n"
".............\n"
".1.........5.\n"
".4...........\n"
".............\n"
".3...........\n"
".............\n"
".............\n"
".....2.......\n") == 0);
free(board817086951);
board817086951 = NULL;
assert( gamma_move(board, 2, 6, 14) == 1 );
assert( gamma_move(board, 3, 3, 11) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );


char* board740586751 = gamma_board(board);
assert( board740586751 != NULL );
assert( strcmp(board740586751, 
".............\n"
"......2......\n"
".............\n"
".............\n"
"...3.........\n"
".............\n"
".............\n"
".......3.....\n"
"....2........\n"
"51.........5.\n"
".4...........\n"
".............\n"
".3...........\n"
".............\n"
".............\n"
".....2.......\n") == 0);
free(board740586751);
board740586751 = NULL;
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 2, 11, 9) == 1 );
assert( gamma_move(board, 3, 4, 15) == 1 );
assert( gamma_free_fields(board, 3) == 195 );


char* board805794748 = gamma_board(board);
assert( board805794748 != NULL );
assert( strcmp(board805794748, 
"....3........\n"
"......2......\n"
".............\n"
".............\n"
"...3.........\n"
".............\n"
"...........2.\n"
".......3.....\n"
"....2........\n"
"51.........5.\n"
".4.......1...\n"
".............\n"
".3...........\n"
".............\n"
".............\n"
".....2.......\n") == 0);
free(board805794748);
board805794748 = NULL;
assert( gamma_free_fields(board, 5) == 195 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_free_fields(board, 3) == 193 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_free_fields(board, 5) == 191 );
assert( gamma_move(board, 2, 12, 1) == 1 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_free_fields(board, 3) == 189 );
assert( gamma_move(board, 4, 10, 10) == 1 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_free_fields(board, 5) == 187 );
assert( gamma_move(board, 1, 12, 4) == 1 );
assert( gamma_move(board, 2, 7, 12) == 1 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 8, 15) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 14) == 1 );
assert( gamma_move(board, 2, -1, 14) == 0 );
assert( gamma_free_fields(board, 2) == 183 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 5, 13, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 5, 16) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 1, 12, 10) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 3, 3, 16) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 3, -1, 15) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 7, 10) == 1 );
assert( gamma_move(board, 1, 1, 15) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 2, -1) == 0 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 16) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 5, 10) == 1 );
assert( gamma_move(board, 5, -1, 10) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 5, -1, 4) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_golden_move(board, 1, 15, 4) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_golden_move(board, 4, 4, 3) == 0 );
assert( gamma_golden_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 1, 5, 11) == 1 );


char* board765832209 = gamma_board(board);
assert( board765832209 != NULL );
assert( strcmp(board765832209, 
".1..3...5....\n"
".....12......\n"
".............\n"
"..1....2.....\n"
"...3.1.......\n"
"....44.5..4.1\n"
"...........2.\n"
".323...3.3...\n"
"4...2.13.....\n"
"51...4.....5.\n"
".4.12..1.15..\n"
"...3........1\n"
".3........5..\n"
"...4..21..3..\n"
"..5.2...5...2\n"
".....2.......\n") == 0);
free(board765832209);
board765832209 = NULL;
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 5, 13, 10) == 0 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 4, 0, 11) == 1 );
assert( gamma_free_fields(board, 4) == 156 );
assert( gamma_move(board, 5, 12, -1) == 0 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board138304039 = gamma_board(board);
assert( board138304039 != NULL );
assert( strcmp(board138304039, 
".1..3...5....\n"
".....12......\n"
".............\n"
"..1....2.....\n"
"4..3.1.......\n"
"4...44.5..4.1\n"
".......1...2.\n"
".323...3.3...\n"
"4.2.2.13.....\n"
"512..4.....5.\n"
".4.12..1.15..\n"
"...3...3....1\n"
".3........5..\n"
"...4..21.13..\n"
"..5.2...5...2\n"
".....2.2.....\n") == 0);
free(board138304039);
board138304039 = NULL;
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 2, 13, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_free_fields(board, 2) == 153 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 12, 6) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 1, 7, 16) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 12, -1) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 1, 13, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 4, 9, 10) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );


char* board739149968 = gamma_board(board);
assert( board739149968 != NULL );
assert( strcmp(board739149968, 
".1..3...5....\n"
".....12......\n"
".............\n"
"..1....2.....\n"
"4..3.1.......\n"
"4...44.5.44.1\n"
".......1...2.\n"
".323...3.3...\n"
"4.2.2.13.....\n"
"512.54.....54\n"
"54.12..1.15..\n"
"...32..3....1\n"
".3........5..\n"
"...4..21.13..\n"
"..5.2...5...2\n"
".....2.2.....\n") == 0);
free(board739149968);
board739149968 = NULL;
assert( gamma_move(board, 3, -1, 11) == 0 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, -1) == 0 );
assert( gamma_golden_move(board, 1, 11, 9) == 1 );
assert( gamma_move(board, 2, -1, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 13) == 1 );
assert( gamma_move(board, 5, 0, 14) == 1 );
assert( gamma_move(board, 1, 12, 13) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_free_fields(board, 3) == 140 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 5, 12, 10) == 0 );
assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_free_fields(board, 1) == 38 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 1, 10, 14) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 9, 14) == 1 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_free_fields(board, 4) == 136 );
assert( gamma_free_fields(board, 5) == 136 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_move(board, 4, 7, 15) == 1 );
assert( gamma_free_fields(board, 4) == 134 );
assert( gamma_free_fields(board, 5) == 134 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 12, 5) == 1 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_golden_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 3, 7, 14) == 1 );
assert( gamma_golden_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 4, 11, 7) == 1 );
assert( gamma_move(board, 5, 5, 8) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_golden_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 14) == 0 );
assert( gamma_move(board, 2, 5, 12) == 1 );
assert( gamma_move(board, 3, 11, 15) == 1 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, -1, 0) == 0 );
assert( gamma_move(board, 1, -1, -1) == 0 );


char* board407249959 = gamma_board(board);
assert( board407249959 != NULL );
assert( strcmp(board407249959, 
".1..3..45..3.\n"
"5....123.3...\n"
".....4......1\n"
"..1..2.2.....\n"
"4..341.......\n"
"4...44.5.44.1\n"
"2.....31...1.\n"
".323.5.3.31..\n"
"412.2.132..4.\n"
"512554.....54\n"
"54.12..1415.4\n"
".2432.43.3..1\n"
".3........5..\n"
"...4..21.13..\n"
"..5.2...34..2\n"
".....2.2..2..\n") == 0);
free(board407249959);
board407249959 = NULL;
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_move(board, 5, 10, 13) == 1 );
assert( gamma_move(board, 1, 12, 14) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 9, -1) == 0 );
assert( gamma_move(board, 4, 3, 15) == 1 );
assert( gamma_move(board, 1, 13, 15) == 0 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 7, 15) == 0 );
assert( gamma_free_fields(board, 4) == 119 );
assert( gamma_golden_move(board, 4, 5, 12) == 1 );


char* board714704153 = gamma_board(board);
assert( board714704153 != NULL );
assert( strcmp(board714704153, 
".1.43..45..3.\n"
"5....123.3..1\n"
".....4....5.1\n"
"..1..4.2.....\n"
"4..341.......\n"
"4...44.5.44.1\n"
"2.....31...1.\n"
".323.5.3.31..\n"
"412.2.132..4.\n"
"512554.....54\n"
"54.12..1415.4\n"
".2432.43.3..1\n"
".3........52.\n"
"...4..21.13..\n"
"..5.2...34..2\n"
".....2.2..2..\n") == 0);
free(board714704153);
board714704153 = NULL;
assert( gamma_move(board, 2, -1, 9) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 6, 14) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board242822684 = gamma_board(board);
assert( board242822684 != NULL );
assert( strcmp(board242822684, 
".1.43..45..3.\n"
"5....123.3..1\n"
".....4....5.1\n"
"..1..4.2.....\n"
"4..341.......\n"
"4...44.5.44.1\n"
"2.....31...1.\n"
".323.5.3.31..\n"
"412.2.132..4.\n"
"512554.....54\n"
"54.12..1415.4\n"
".2432.43.3..1\n"
".3........52.\n"
"...4..21.13..\n"
"..5.2...34..2\n"
".....2.2..2..\n") == 0);
free(board242822684);
board242822684 = NULL;
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 11, 10) == 1 );
assert( gamma_free_fields(board, 2) == 118 );
assert( gamma_free_fields(board, 3) == 118 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 5, 6, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_free_fields(board, 5) == 116 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, -1, 11) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 5, 13, 1) == 0 );


char* board450360735 = gamma_board(board);
assert( board450360735 != NULL );
assert( strcmp(board450360735, 
".1.43..45..3.\n"
"5....123.3..1\n"
".....4....5.1\n"
"..1..452.....\n"
"4..341.......\n"
"4...44.5.4421\n"
"2.....31...1.\n"
".32345.3.31..\n"
"412.2.132..4.\n"
"512554.....54\n"
"54.12..1415.4\n"
".2432.43.3..1\n"
".3........52.\n"
"...4..21.13..\n"
"..5.2...34..2\n"
".....2.2..2..\n") == 0);
free(board450360735);
board450360735 = NULL;
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_move(board, 5, 0, 16) == 0 );
assert( gamma_move(board, 1, -1, 9) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 5, 10, 7) == 1 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 3, 0, 16) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board792637163 = gamma_board(board);
assert( board792637163 != NULL );
assert( strcmp(board792637163, 
".1.43..45..3.\n"
"5....123.3..1\n"
".....4....5.1\n"
"..1..452.....\n"
"4..341.......\n"
"4...44.5.4421\n"
"2.....31...1.\n"
".32345.3.31..\n"
"412.2.132.54.\n"
"512554..3..54\n"
"54.12..1415.4\n"
".2432.43.3..1\n"
".3........52.\n"
"...4..21.13..\n"
"..5.2...34..2\n"
".....2.2..2..\n") == 0);
free(board792637163);
board792637163 = NULL;
assert( gamma_move(board, 1, 7, 16) == 0 );
assert( gamma_move(board, 2, 12, 12) == 1 );
assert( gamma_free_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_free_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_free_fields(board, 5) == 113 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 5, 1) == 0 );


char* board834394320 = gamma_board(board);
assert( board834394320 != NULL );
assert( strcmp(board834394320, 
".1.43..45..3.\n"
"5....123.3..1\n"
".....4....5.1\n"
"..1..452....2\n"
"4..341.......\n"
"4...44.5.4421\n"
"2.....31...1.\n"
".32345.3.31..\n"
"412.2.132.54.\n"
"512554..3..54\n"
"54.12..1415.4\n"
".2432.43.3..1\n"
".3........52.\n"
"...4..21.13..\n"
"..5.2...34..2\n"
".....2.2..2..\n") == 0);
free(board834394320);
board834394320 = NULL;
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_move(board, 3, 2, 16) == 0 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_free_fields(board, 5) == 112 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 3, 13, 12) == 0 );
assert( gamma_move(board, 4, 11, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_golden_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 6, 0) == 1 );


char* board540145893 = gamma_board(board);
assert( board540145893 != NULL );
assert( strcmp(board540145893, 
".1.43..45..3.\n"
"5....123.3..1\n"
".....4....5.1\n"
"..1..452....2\n"
"4..341.......\n"
"4...44.5.4421\n"
"25....31...1.\n"
".32345.3.31..\n"
"412.2.132.54.\n"
"512554..3..54\n"
"54.12..1415.4\n"
".2432.43.3..1\n"
".3.....5..52.\n"
"...4..21.13..\n"
"..5.2...34..2\n"
".....222..2..\n") == 0);
free(board540145893);
board540145893 = NULL;
assert( gamma_move(board, 3, 8, -1) == 0 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 5, 7, 14) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );


char* board400290048 = gamma_board(board);
assert( board400290048 != NULL );
assert( strcmp(board400290048, 
".1.43..45..3.\n"
"5....123.3..1\n"
".....4....5.1\n"
"..1..452....2\n"
"4..341.......\n"
"4...44.5.4421\n"
"25....31...1.\n"
".32345.3.31..\n"
"412.2.132.54.\n"
"512554..3..54\n"
"54.12..1415.4\n"
".2432.43.3..1\n"
".3.....5..52.\n"
"...4..21.13..\n"
"..5.2...34..2\n"
".....222..2..\n") == 0);
free(board400290048);
board400290048 = NULL;
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_golden_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 24 );
assert( gamma_free_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 1, 0, 16) == 0 );
assert( gamma_free_fields(board, 2) == 107 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 11, 8) == 1 );
assert( gamma_free_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_free_fields(board, 4) == 35 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 1, -1, 12) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, -1, 0) == 0 );
assert( gamma_move(board, 4, -1, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_free_fields(board, 5) == 38 );
assert( gamma_move(board, 1, 10, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_golden_move(board, 2, 8, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 15) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_free_fields(board, 2) == 35 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 5, 11, 10) == 0 );


char* board288437649 = gamma_board(board);
assert( board288437649 != NULL );
assert( strcmp(board288437649, 
".1.43.445..3.\n"
"5....123.3..1\n"
".....4....5.1\n"
"..1..452....2\n"
"4..341.......\n"
"4...44.5.4421\n"
"25...431...1.\n"
".32345.3.314.\n"
"412.2.132.54.\n"
"512554..3..54\n"
"54.12..1415.4\n"
".2432543.3..1\n"
"23.....5..52.\n"
"..54..21.13..\n"
".55.2...34.52\n"
".....222..2..\n") == 0);
free(board288437649);
board288437649 = NULL;
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_free_fields(board, 3) == 34 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 12, 8) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );


char* board134036929 = gamma_board(board);
assert( board134036929 != NULL );
assert( strcmp(board134036929, 
".1.43.445..3.\n"
"5....123.3..1\n"
".....4....5.1\n"
"..1..452....2\n"
"4..341.......\n"
"4...44.5.4421\n"
"255..431...1.\n"
"432345.3.314.\n"
"412.2.132.54.\n"
"512554..3..54\n"
"54.12..1415.4\n"
".2432543.3..1\n"
"23.....5..52.\n"
"..54..21.13..\n"
".55.2...34.52\n"
".....222..2..\n") == 0);
free(board134036929);
board134036929 = NULL;
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 5, 2, 15) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_golden_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_free_fields(board, 3) == 33 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board765400018 = gamma_board(board);
assert( board765400018 != NULL );
assert( strcmp(board765400018, 
".1.43.445..3.\n"
"5....123.3..1\n"
".....4....5.1\n"
"..1..452....2\n"
"4..341.......\n"
"4...44.5.4421\n"
"255..431...1.\n"
"432345.3.314.\n"
"412.2.132.54.\n"
"512554..3..54\n"
"54.12..1415.4\n"
".2432543.3..1\n"
"23.....5..52.\n"
"..54..21.13..\n"
".55.2...34.52\n"
".....222..2..\n") == 0);
free(board765400018);
board765400018 = NULL;
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, -1, 15) == 0 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 8, 16) == 0 );
assert( gamma_move(board, 4, 11, 14) == 0 );
assert( gamma_move(board, 5, 4, 9) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 4, 13) == 1 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 1, -1, 14) == 0 );
assert( gamma_move(board, 2, 8, 16) == 0 );
assert( gamma_golden_move(board, 2, 4, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_free_fields(board, 5) == 39 );
assert( gamma_move(board, 1, 1, 16) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_golden_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, -1, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_move(board, 3, 12, 15) == 1 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 11, 14) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 22 );
assert( gamma_free_fields(board, 2) == 33 );


char* board341022562 = gamma_board(board);
assert( board341022562 != NULL );
assert( strcmp(board341022562, 
".1.43.445..33\n"
"5....123.3..1\n"
"....44....5.1\n"
"..1..452....2\n"
"4..341.......\n"
"4...44.5.4421\n"
"255..431...1.\n"
"432345.3.314.\n"
"412.2.132.54.\n"
"512554..3..54\n"
"54.12..1415.4\n"
".2432543.3..1\n"
"23.....5..52.\n"
"..54..21.13..\n"
".55.2...34.52\n"
".....222..2..\n") == 0);
free(board341022562);
board341022562 = NULL;
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 5, 11, 5) == 1 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 7, 13) == 1 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 11, 13) == 1 );
assert( gamma_golden_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, -1, 12) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, -1, 2) == 0 );
assert( gamma_move(board, 3, -1, 15) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 11, 14) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 29 );
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_move(board, 1, 13, 10) == 0 );
assert( gamma_move(board, 2, 3, 15) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 2, -1, 14) == 0 );
assert( gamma_golden_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 5, 5, 16) == 0 );
assert( gamma_busy_fields(board, 5) == 26 );
assert( gamma_move(board, 1, -1, 8) == 0 );
assert( gamma_free_fields(board, 1) == 28 );


gamma_delete(board);

    return 0;
}
