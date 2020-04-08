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
uuid: 997021472
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 9, 5, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 12, 8) == 1 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_golden_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 3, -1, -1) == 0 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_golden_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_free_fields(board, 5) == 112 );
assert( gamma_move(board, 1, 8, 6) == 1 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 0 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 12, -1) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 6) == 1 );
assert( gamma_free_fields(board, 5) == 107 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 12, 3) == 1 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 1) == 102 );
assert( gamma_move(board, 2, 8, 4) == 0 );


char* board703133817 = gamma_board(board);
assert( board703133817 != NULL );
assert( strcmp(board703133817, 
"............1\n"
"...2..2......\n"
"1.......1.55.\n"
".............\n"
"........2....\n"
".4.........25\n"
".......2.....\n"
".......4..4..\n"
"........3....\n") == 0);
free(board703133817);
board703133817 = NULL;
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 1, 8, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );


char* board573307937 = gamma_board(board);
assert( board573307937 != NULL );
assert( strcmp(board573307937, 
"3...........1\n"
"...2..2......\n"
"1.......1.55.\n"
".............\n"
"........2....\n"
".4...5.....25\n"
".......2.....\n"
"..4....4..4..\n"
"........3....\n") == 0);
free(board573307937);
board573307937 = NULL;
assert( gamma_move(board, 1, 13, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_free_fields(board, 3) == 99 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 2, 3, -1) == 0 );
assert( gamma_move(board, 3, -1, 3) == 0 );


char* board289988296 = gamma_board(board);
assert( board289988296 != NULL );
assert( strcmp(board289988296, 
"3...........1\n"
"...2..2......\n"
"1......41.55.\n"
".............\n"
"........2....\n"
".4...5...1.25\n"
".......2.....\n"
"..4....4..4..\n"
"........3....\n") == 0);
free(board289988296);
board289988296 = NULL;
assert( gamma_move(board, 4, 11, 4) == 0 );


char* board999491047 = gamma_board(board);
assert( board999491047 != NULL );
assert( strcmp(board999491047, 
"3...........1\n"
"...2..2......\n"
"1......41.55.\n"
".............\n"
"........2....\n"
".4...5...1.25\n"
".......2.....\n"
"..4....4..4..\n"
"........3....\n") == 0);
free(board999491047);
board999491047 = NULL;
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_golden_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );


char* board528883025 = gamma_board(board);
assert( board528883025 != NULL );
assert( strcmp(board528883025, 
"3...........1\n"
"...2..2......\n"
"1..2...41.55.\n"
".............\n"
".....1..2....\n"
".4...5..11.25\n"
".......2.....\n"
"..4....4..4..\n"
".5......3....\n") == 0);
free(board528883025);
board528883025 = NULL;
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_golden_move(board, 4, 4, 8) == 0 );


char* board556480484 = gamma_board(board);
assert( board556480484 != NULL );
assert( strcmp(board556480484, 
"3...........1\n"
"...2..2......\n"
"1..2...41.55.\n"
".............\n"
".....1..2....\n"
".4...5..11.25\n"
".4.....2.....\n"
"..4....4..4..\n"
".5......3....\n") == 0);
free(board556480484);
board556480484 = NULL;
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 1, 2, -1) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 7, 5) == 1 );


char* board522950793 = gamma_board(board);
assert( board522950793 != NULL );
assert( strcmp(board522950793, 
"3...........1\n"
"...2..2......\n"
"1..2...41.55.\n"
".......5.....\n"
".....1..2....\n"
".4...5..11.25\n"
".4.....2.....\n"
"..4....4..4..\n"
".5......3....\n") == 0);
free(board522950793);
board522950793 = NULL;
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 11, 8) == 1 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, -1, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 3, 12, 2) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_golden_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_golden_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 1, 1, -1) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );


gamma_delete(board);

    return 0;
}
