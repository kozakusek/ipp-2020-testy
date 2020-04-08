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
uuid: 830447989
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 10, 8, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 0) == 0 );
assert( gamma_move(board, 8, 3, 3) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_free_fields(board, 5) == 60 );
assert( gamma_move(board, 6, 5, 9) == 1 );
assert( gamma_free_fields(board, 6) == 59 );
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 7, 0, 7) == 1 );
assert( gamma_move(board, 8, 3, 7) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 7, 3, 3) == 0 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_free_fields(board, 8) == 49 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 6, 9) == 1 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 8, 2, 8) == 1 );


char* board644535781 = gamma_board(board);
assert( board644535781 != NULL );
assert( strcmp(board644535781, 
".6...65.\n"
".282.2..\n"
"74183..1\n"
"436..1..\n"
"32...3.5\n"
".......2\n"
".7.83.31\n"
".8.4....\n"
".21.....\n"
".2646..7\n") == 0);
free(board644535781);
board644535781 = NULL;
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_free_fields(board, 3) == 42 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_free_fields(board, 7) == 41 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_free_fields(board, 3) == 39 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 8, 7, 6) == 1 );
assert( gamma_move(board, 8, 5, 0) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_free_fields(board, 2) == 35 );


char* board999930729 = gamma_board(board);
assert( board999930729 != NULL );
assert( strcmp(board999930729, 
".6...65.\n"
"8282.2..\n"
"741833.1\n"
"436..1.8\n"
"32...3.5\n"
".2.....2\n"
".7.83.31\n"
".8.42...\n"
".215..2.\n"
"426468.7\n") == 0);
free(board999930729);
board999930729 = NULL;
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 5, 4, 8) == 1 );


char* board922982922 = gamma_board(board);
assert( board922982922 != NULL );
assert( strcmp(board922982922, 
".6...65.\n"
"828252..\n"
"741833.1\n"
"436.51.8\n"
"32...3.5\n"
".2..4..2\n"
".7.83.31\n"
".8.42...\n"
".2153.2.\n"
"426468.7\n") == 0);
free(board922982922);
board922982922 = NULL;
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );


char* board166144169 = gamma_board(board);
assert( board166144169 != NULL );
assert( strcmp(board166144169, 
".6...65.\n"
"828252..\n"
"741833.1\n"
"436.51.8\n"
"32...3.5\n"
".2..4..2\n"
".7.83.31\n"
".8.42...\n"
".2153.2.\n"
"426468.7\n") == 0);
free(board166144169);
board166144169 = NULL;
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_golden_move(board, 1, 9, 1) == 0 );


char* board682393764 = gamma_board(board);
assert( board682393764 != NULL );
assert( strcmp(board682393764, 
".6...65.\n"
"828252..\n"
"741833.1\n"
"436.51.8\n"
"32...3.5\n"
".2..4..2\n"
".7.83.31\n"
".8.42...\n"
".2153.2.\n"
"426468.7\n") == 0);
free(board682393764);
board682393764 = NULL;
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_free_fields(board, 4) == 31 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 7, 2, 9) == 1 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_free_fields(board, 8) == 30 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 2, 5) == 0 );
assert( gamma_move(board, 8, 2, 4) == 1 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_golden_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 8, 5, 4) == 1 );


char* board623847165 = gamma_board(board);
assert( board623847165 != NULL );
assert( strcmp(board623847165, 
".67..65.\n"
"828252..\n"
"741833.1\n"
"436.5128\n"
"322.13.5\n"
".21.48.2\n"
".7.83631\n"
".87423..\n"
"8215352.\n"
"426468.7\n") == 0);
free(board623847165);
board623847165 = NULL;
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );


char* board671668623 = gamma_board(board);
assert( board671668623 != NULL );
assert( strcmp(board671668623, 
".67..65.\n"
"828252..\n"
"741833.1\n"
"436.5128\n"
"322.13.5\n"
".21.4812\n"
".7.83631\n"
".87423..\n"
"8215352.\n"
"426468.7\n") == 0);
free(board671668623);
board671668623 = NULL;
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );


char* board449047623 = gamma_board(board);
assert( board449047623 != NULL );
assert( strcmp(board449047623, 
".67..65.\n"
"828252..\n"
"741833.1\n"
"436.5128\n"
"322.13.5\n"
".21.4812\n"
".7.83631\n"
".87423..\n"
"8215352.\n"
"426468.7\n") == 0);
free(board449047623);
board449047623 = NULL;
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );


char* board813156764 = gamma_board(board);
assert( board813156764 != NULL );
assert( strcmp(board813156764, 
".67..65.\n"
"828252..\n"
"741833.1\n"
"436.5128\n"
"322.13.5\n"
".21.4812\n"
".7.83631\n"
".87423..\n"
"8215352.\n"
"426468.7\n") == 0);
free(board813156764);
board813156764 = NULL;
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_golden_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );


char* board415981417 = gamma_board(board);
assert( board415981417 != NULL );
assert( strcmp(board415981417, 
".67..65.\n"
"828252..\n"
"74183321\n"
"436.5128\n"
"322.13.5\n"
".21.4812\n"
".7.83631\n"
"187423..\n"
"8215352.\n"
"426468.7\n") == 0);
free(board415981417);
board415981417 = NULL;
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 0, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_free_fields(board, 8) == 16 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_move(board, 5, 8, 6) == 0 );


char* board596366342 = gamma_board(board);
assert( board596366342 != NULL );
assert( strcmp(board596366342, 
"667..65.\n"
"828252.4\n"
"74183321\n"
"436.5128\n"
"322.13.5\n"
".21.4812\n"
".7.83631\n"
"187423..\n"
"8215352.\n"
"426468.7\n") == 0);
free(board596366342);
board596366342 = NULL;
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 7, 3, 8) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_golden_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_golden_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_golden_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );


gamma_delete(board);

    return 0;
}
