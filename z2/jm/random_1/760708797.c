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
uuid: 760708797
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(19, 9, 6, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_free_fields(board, 2) == 170 );
assert( gamma_move(board, 3, 1, -1) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 14, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 6, 10, -1) == 0 );
assert( gamma_move(board, 1, 16, 7) == 1 );
assert( gamma_move(board, 4, 11, -1) == 0 );
assert( gamma_move(board, 6, -1, 8) == 0 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_move(board, 4, 12, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_free_fields(board, 5) == 159 );
assert( gamma_move(board, 1, 17, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, -1) == 0 );
assert( gamma_free_fields(board, 2) == 158 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 19, 2) == 0 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_golden_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 13, 5) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );


char* board561863873 = gamma_board(board);
assert( board561863873 != NULL );
assert( strcmp(board561863873, 
".....3.............\n"
"..5..5.1........11.\n"
"4.........3........\n"
"..6..1.......3.....\n"
"..............2....\n"
"...4.6.............\n"
"...1...............\n"
"......4.....4......\n"
"...................\n") == 0);
free(board561863873);
board561863873 = NULL;
assert( gamma_move(board, 5, 17, -1) == 0 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 1, 19, 3) == 0 );
assert( gamma_golden_move(board, 1, 7, 17) == 0 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 16, 4) == 1 );
assert( gamma_move(board, 4, 12, 7) == 1 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 6, 17, 5) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 19, 8) == 0 );
assert( gamma_move(board, 2, 11, 5) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );


char* board387559482 = gamma_board(board);
assert( board387559482 != NULL );
assert( strcmp(board387559482, 
".....3.............\n"
"..5..5.1....4...11.\n"
"4.........3........\n"
"..6..1.....2.3...6.\n"
"3.......2.....2.3..\n"
"...4.6..5..........\n"
"...1.6.............\n"
"....2.4.....4......\n"
"........1..........\n") == 0);
free(board387559482);
board387559482 = NULL;
assert( gamma_move(board, 4, 14, 8) == 1 );
assert( gamma_golden_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 2, 2, -1) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 5, 17, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 19, 4) == 0 );
assert( gamma_move(board, 4, 14, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_move(board, 1, -1, 4) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 16, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 16, 4) == 0 );
assert( gamma_golden_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 6, 11, 4) == 1 );
assert( gamma_free_fields(board, 6) == 133 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_free_fields(board, 1) == 133 );
assert( gamma_move(board, 2, 19, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_move(board, 6, 11, 7) == 1 );
assert( gamma_move(board, 3, 18, 3) == 1 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 6, 17, 9) == 0 );
assert( gamma_move(board, 1, 13, 1) == 1 );
assert( gamma_move(board, 2, 13, 4) == 1 );
assert( gamma_move(board, 3, 12, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 17, 4) == 1 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_move(board, 2, 19, 1) == 0 );


char* board530383211 = gamma_board(board);
assert( board530383211 != NULL );
assert( strcmp(board530383211, 
".....3........4....\n"
"..5..5.1...64.4.11.\n"
"4...5...6.31.......\n"
"3.6..1...2.233..36.\n"
"3.......2..6.22.35.\n"
"...4.6..5.........3\n"
"...1.6.55..........\n"
"..2.2.4.....41...5.\n"
"........5..........\n") == 0);
free(board530383211);
board530383211 = NULL;
assert( gamma_move(board, 3, 19, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 4, 5) == 1 );


char* board667529864 = gamma_board(board);
assert( board667529864 != NULL );
assert( strcmp(board667529864, 
".....3........4....\n"
"..5..5.1...64.4.11.\n"
"4...5...6.31.......\n"
"3.6.51...2.233..36.\n"
"3.......2..6.22.35.\n"
"...4.6..5.........3\n"
"...1.6.55..........\n"
"..2.2.4.....41...5.\n"
"........5..........\n") == 0);
free(board667529864);
board667529864 = NULL;
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 3, 11, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_golden_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 1, 18, 9) == 0 );
assert( gamma_move(board, 2, -1, 1) == 0 );
assert( gamma_free_fields(board, 2) == 121 );
assert( gamma_move(board, 3, 16, 2) == 1 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 5, 11, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 11, 3) == 1 );


char* board633455549 = gamma_board(board);
assert( board633455549 != NULL );
assert( strcmp(board633455549, 
".....3.....5..4....\n"
"..5..5.1...64.4.11.\n"
"4...5...6.31.......\n"
"3.6.51...2.233..36.\n"
"3.......2..6.22.35.\n"
"...4.6..5..3......3\n"
".5.1.6.45.......3..\n"
"..2.2.4.6..341...5.\n"
".......65..........\n") == 0);
free(board633455549);
board633455549 = NULL;
assert( gamma_move(board, 4, 3, -1) == 0 );
assert( gamma_move(board, 5, 14, 3) == 1 );
assert( gamma_golden_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 12, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 13, 5) == 0 );


char* board495795436 = gamma_board(board);
assert( board495795436 != NULL );
assert( strcmp(board495795436, 
".....3.....5..4....\n"
"..5..5.1...64.4.11.\n"
"4...5...6.31.......\n"
"3.6.51...2.233..36.\n"
"3.......2..6.22.35.\n"
"...4.6..5..3..5...3\n"
".5.1.6.45.......3..\n"
"..2.2.4.6..341...5.\n"
".......65...6......\n") == 0);
free(board495795436);
board495795436 = NULL;
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 3, 16, -1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 18, 0) == 1 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 3, 19, 0) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_golden_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 13, 7) == 1 );
assert( gamma_move(board, 6, 12, 6) == 1 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, 5, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, -1, 0) == 0 );
assert( gamma_move(board, 5, 18, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 14, 6) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 10, -1) == 0 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_free_fields(board, 2) == 103 );
assert( gamma_move(board, 3, 7, -1) == 0 );
assert( gamma_move(board, 4, 14, 2) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_golden_move(board, 5, 2, 3) == 0 );


char* board216386913 = gamma_board(board);
assert( board216386913 != NULL );
assert( strcmp(board216386913, 
".....3.....5..4....\n"
"..5..5.12..6454.11.\n"
"4.3.5..16.316.6....\n"
"3.6.51..12.233..36.\n"
"3.......2..6.22.355\n"
"...4.6..5..3..5...3\n"
".5.1.6.45.....4.3..\n"
"1.2.2.446..341...5.\n"
"....6..65...6.....5\n") == 0);
free(board216386913);
board216386913 = NULL;
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );


char* board373673842 = gamma_board(board);
assert( board373673842 != NULL );
assert( strcmp(board373673842, 
".....3.....5..4....\n"
"..5..5.12..6454.11.\n"
"4.3.5..16.316.6....\n"
"3.6.51..12.233..36.\n"
"3.3..2..2..6.22.355\n"
"...4.6..5..3..5...3\n"
".5.1.6.45.....4.3..\n"
"1.2.2.446..341...5.\n"
"....6..65...6.....5\n") == 0);
free(board373673842);
board373673842 = NULL;
assert( gamma_move(board, 6, 12, 4) == 1 );
assert( gamma_move(board, 1, 17, 5) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_free_fields(board, 2) == 99 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_move(board, 4, 12, 3) == 1 );
assert( gamma_move(board, 5, 15, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 1, 17, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board709855599 = gamma_board(board);
assert( board709855599 != NULL );
assert( strcmp(board709855599, 
".....3.....5..4....\n"
"..5..5.12..6454.11.\n"
"4.3.5..16.316.6....\n"
"3.6.51..12.233..36.\n"
"3.3..2..2..6622.355\n"
"...4.6..5..34.5...3\n"
".5.1.6.45.....4.3..\n"
"1.2.2.446..341...5.\n"
"....6..65...6....15\n") == 0);
free(board709855599);
board709855599 = NULL;
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 19, -1) == 0 );


gamma_delete(board);

    return 0;
}
