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
uuid: 680613636
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 10, 5, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 4, -1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 3, -1, 7) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 5, 1, -1) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, -1, 9) == 0 );
assert( gamma_free_fields(board, 5) == 83 );
assert( gamma_golden_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 1, -1, 3) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_golden_move(board, 1, 3, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 3, 7) == 1 );


char* board322769723 = gamma_board(board);
assert( board322769723 != NULL );
assert( strcmp(board322769723, 
".........\n"
"2.2...1..\n"
"...3.....\n"
".........\n"
"...3.....\n"
"......2..\n"
"...4.....\n"
"1........\n"
"4....25..\n"
".........\n") == 0);
free(board322769723);
board322769723 = NULL;
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 7, 10) == 0 );
assert( gamma_move(board, 1, 0, -1) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_golden_move(board, 3, 5, 1) == 1 );


char* board447380862 = gamma_board(board);
assert( board447380862 != NULL );
assert( strcmp(board447380862, 
".........\n"
"2.2...1..\n"
"...3.....\n"
".........\n"
".3.3.....\n"
"..4...2..\n"
"...4.....\n"
"1........\n"
"4....35..\n"
".........\n") == 0);
free(board447380862);
board447380862 = NULL;
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_golden_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_golden_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 5, 2, -1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_free_fields(board, 2) == 72 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_free_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board114916385 = gamma_board(board);
assert( board114916385 != NULL );
assert( strcmp(board114916385, 
".4.......\n"
"252...1..\n"
"...3..1..\n"
"5........\n"
".3.3.....\n"
"..4...2..\n"
"...4.....\n"
"1........\n"
"451..35..\n"
".........\n") == 0);
free(board114916385);
board114916385 = NULL;
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_golden_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 4, 0) == 1 );


char* board847831049 = gamma_board(board);
assert( board847831049 != NULL );
assert( strcmp(board847831049, 
".4.......\n"
"252...1..\n"
"..13..1..\n"
"5........\n"
".3.3.....\n"
"..4...2..\n"
"...4.....\n"
"1........\n"
"451..35..\n"
"....2....\n") == 0);
free(board847831049);
board847831049 = NULL;
assert( gamma_move(board, 3, -1, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, -1, 8) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );


char* board270144117 = gamma_board(board);
assert( board270144117 != NULL );
assert( strcmp(board270144117, 
".4.......\n"
"252...1..\n"
"..13..1..\n"
"5........\n"
".3.3.....\n"
"..4...2..\n"
"...4.....\n"
"1........\n"
"451..35..\n"
"....2....\n") == 0);
free(board270144117);
board270144117 = NULL;
assert( gamma_move(board, 4, 5, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_golden_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_free_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 5) == 1 );


gamma_delete(board);

    return 0;
}
