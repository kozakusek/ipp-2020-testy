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
uuid: 158465225
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 13, 6, 8);
assert( board != NULL );


assert( gamma_move(board, 2, 8, 12) == 1 );
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_move(board, 4, -1, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 10) == 1 );
assert( gamma_free_fields(board, 5) == 140 );
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_golden_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 3, -1) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );


char* board191064854 = gamma_board(board);
assert( board191064854 != NULL );
assert( strcmp(board191064854, 
"........2..\n"
"......3....\n"
"5..........\n"
"...........\n"
"...........\n"
"......2....\n"
"...........\n"
"...........\n"
"......1....\n"
"..6........\n"
".4.....2...\n"
"...........\n"
"...........\n") == 0);
free(board191064854);
board191064854 = NULL;
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_golden_move(board, 6, 9, 1) == 0 );


char* board229746161 = gamma_board(board);
assert( board229746161 != NULL );
assert( strcmp(board229746161, 
"........2..\n"
"......3....\n"
"5..........\n"
"...........\n"
"...........\n"
"....3.2....\n"
"...........\n"
"...........\n"
"......1....\n"
"..6........\n"
".4.4...2...\n"
"...........\n"
"...........\n") == 0);
free(board229746161);
board229746161 = NULL;
assert( gamma_golden_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );


char* board275801375 = gamma_board(board);
assert( board275801375 != NULL );
assert( strcmp(board275801375, 
"........2..\n"
"......3....\n"
"5..........\n"
"...........\n"
"...........\n"
"....3.2....\n"
"...........\n"
"...........\n"
"......1....\n"
"..6........\n"
".4.4...2...\n"
"..5........\n"
"...........\n") == 0);
free(board275801375);
board275801375 = NULL;
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, -1, 6) == 0 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_free_fields(board, 6) == 130 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, -1, 2) == 0 );
assert( gamma_free_fields(board, 5) == 128 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_golden_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 9, 12) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 11) == 0 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, -1, 12) == 0 );
assert( gamma_move(board, 3, 10, 8) == 1 );


char* board964098893 = gamma_board(board);
assert( board964098893 != NULL );
assert( strcmp(board964098893, 
"........25.\n"
"......3....\n"
"52.........\n"
".....43....\n"
"..........3\n"
"2...3.2....\n"
".....6.....\n"
"..2........\n"
"......1..1.\n"
"..6........\n"
".4.4...2...\n"
"..5..3.....\n"
"...........\n") == 0);
free(board964098893);
board964098893 = NULL;
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 7, 12) == 1 );
assert( gamma_free_fields(board, 6) == 120 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_free_fields(board, 1) == 120 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );


char* board697154856 = gamma_board(board);
assert( board697154856 != NULL );
assert( strcmp(board697154856, 
".......625.\n"
"......3....\n"
"52.........\n"
".....43....\n"
"..........3\n"
"2...3.2....\n"
".2...6.....\n"
"..2........\n"
"......1..1.\n"
"..6........\n"
".4.4...2...\n"
"..5.53.....\n"
"...........\n") == 0);
free(board697154856);
board697154856 = NULL;
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 6, 10, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_golden_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_free_fields(board, 5) == 110 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, -1) == 0 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 3, 9) == 1 );


char* board258220039 = gamma_board(board);
assert( board258220039 != NULL );
assert( strcmp(board258220039, 
".......625.\n"
"......33...\n"
"52.6.......\n"
".4.44432...\n"
".........43\n"
"2...3.2....\n"
"52...6.....\n"
"..21.......\n"
"...1..1..1.\n"
"..6........\n"
".4.4..52...\n"
"5.5.53....6\n"
".....3.3...\n") == 0);
free(board258220039);
board258220039 = NULL;
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 5, 11) == 1 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 2, 11) == 1 );
assert( gamma_move(board, 5, 11, -1) == 0 );
assert( gamma_golden_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_free_fields(board, 1) == 100 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 3) == 0 );


char* board560165939 = gamma_board(board);
assert( board560165939 != NULL );
assert( strcmp(board560165939, 
".......625.\n"
"..4..433...\n"
"52.6.......\n"
".4.44432...\n"
".........43\n"
"2...3.2...4\n"
"52...6.....\n"
"..21.......\n"
".1.1..1..1.\n"
"..6.......5\n"
".4.4..52...\n"
"5.5.53....6\n"
".....3.3...\n") == 0);
free(board560165939);
board560165939 = NULL;
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 5, 9, 13) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board219063221 = gamma_board(board);
assert( board219063221 != NULL );
assert( strcmp(board219063221, 
".......625.\n"
"..4..433...\n"
"52.6.......\n"
".4.44432...\n"
".........43\n"
"2...3.2...4\n"
"52...6.3...\n"
"..21.......\n"
".1.1..1..1.\n"
"..6.......5\n"
".4.4..52...\n"
"5.5.53....6\n"
".....3.3...\n") == 0);
free(board219063221);
board219063221 = NULL;
assert( gamma_move(board, 6, 2, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 4, 8, -1) == 0 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_free_fields(board, 6) == 96 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_golden_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 4, 8) == 1 );


char* board472249214 = gamma_board(board);
assert( board472249214 != NULL );
assert( strcmp(board472249214, 
".......625.\n"
"..4..433...\n"
"52.6.......\n"
"64.44432...\n"
"....4....43\n"
"2.6.3.2...4\n"
"52...6.3...\n"
"..21.......\n"
".1.1..1..1.\n"
"..6.......5\n"
".4.4..52...\n"
"5.5.53....6\n"
".....3.3...\n") == 0);
free(board472249214);
board472249214 = NULL;
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_free_fields(board, 1) == 94 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_golden_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 1, 4, 11) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_golden_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_golden_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 6, 10, 10) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_free_fields(board, 5) == 16 );


gamma_delete(board);

    return 0;
}
