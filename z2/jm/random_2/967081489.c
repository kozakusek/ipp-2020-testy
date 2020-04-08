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
uuid: 967081489
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 11, 8, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_free_fields(board, 4) == 83 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 6, 0, 10) == 1 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_move(board, 7, 1, 9) == 1 );
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 7, 1, 8) == 1 );
assert( gamma_move(board, 8, 2, 7) == 1 );
assert( gamma_move(board, 8, 4, 10) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_free_fields(board, 4) == 63 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 6, 4, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 4, 8) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_golden_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_golden_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 4, 7, 10) == 1 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 5) == 1 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_free_fields(board, 1) == 51 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_free_fields(board, 2) == 51 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 7, 6) == 1 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_move(board, 7, 1, 1) == 1 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 8, 6, 2) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 8, 6, 10) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_golden_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 7, 0, 3) == 1 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );


char* board389053897 = gamma_board(board);
assert( board389053897 != NULL );
assert( strcmp(board389053897, 
"61.68.84\n"
".7...4..\n"
".7.48...\n"
"1.8625.6\n"
"..2.7155\n"
".2..7345\n"
"81114.7.\n"
"761..72.\n"
"..1...8.\n"
"375.4.64\n"
"...4.251\n") == 0);
free(board389053897);
board389053897 = NULL;
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_free_fields(board, 5) == 36 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 6, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_free_fields(board, 1) == 33 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );


char* board568582359 = gamma_board(board);
assert( board568582359 != NULL );
assert( strcmp(board568582359, 
"61.68.84\n"
".7.6.4..\n"
".7.48...\n"
"1.862586\n"
"..2.7155\n"
".2..7345\n"
"81114.7.\n"
"761..72.\n"
"..1..287\n"
"375.4.64\n"
"..64.251\n") == 0);
free(board568582359);
board568582359 = NULL;
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_free_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_golden_move(board, 6, 8, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );


char* board418868711 = gamma_board(board);
assert( board418868711 != NULL );
assert( strcmp(board418868711, 
"61.68.84\n"
"47.6.44.\n"
".7.48...\n"
"1.862586\n"
"..2.7155\n"
".2..7345\n"
"81114.7.\n"
"761..72.\n"
"5.1.5287\n"
"375.4664\n"
"5.64.251\n") == 0);
free(board418868711);
board418868711 = NULL;
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_free_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );


char* board125637815 = gamma_board(board);
assert( board125637815 != NULL );
assert( strcmp(board125637815, 
"61.68.84\n"
"47.6.44.\n"
".7.48...\n"
"1.862586\n"
"..2.7155\n"
".2..7345\n"
"81114.7.\n"
"7616.72.\n"
"5.1.5287\n"
"375.4664\n"
"5.64.251\n") == 0);
free(board125637815);
board125637815 = NULL;
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_move(board, 8, 7, 3) == 1 );
assert( gamma_golden_move(board, 8, 1, 0) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 2, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 1) == 0 );


char* board893347975 = gamma_board(board);
assert( board893347975 != NULL );
assert( strcmp(board893347975, 
"61.68.84\n"
"4766.44.\n"
".7.48...\n"
"1.862586\n"
"4.2.7155\n"
".2..7345\n"
"81114.7.\n"
"7616.728\n"
"5.1.5287\n"
"375.4664\n"
"5.64.251\n") == 0);
free(board893347975);
board893347975 = NULL;
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_free_fields(board, 2) == 23 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_golden_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_golden_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );


char* board103503535 = gamma_board(board);
assert( board103503535 != NULL );
assert( strcmp(board103503535, 
"61568.84\n"
"4766.44.\n"
".7348...\n"
"1.862586\n"
"4.2.7155\n"
".2..7345\n"
"81114.7.\n"
"7616.728\n"
"5.1.5287\n"
"375.4664\n"
"5.64.251\n") == 0);
free(board103503535);
board103503535 = NULL;
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 4, 7) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );


char* board838692572 = gamma_board(board);
assert( board838692572 != NULL );
assert( strcmp(board838692572, 
"61568.84\n"
"4766.44.\n"
".7348...\n"
"1.862586\n"
"4.2.7155\n"
".2..7345\n"
"81114.7.\n"
"7616.728\n"
"5.1.5287\n"
"375.4664\n"
"5.64.251\n") == 0);
free(board838692572);
board838692572 = NULL;
assert( gamma_move(board, 8, 1, 3) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 7, 1, 6) == 1 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 5) == 1 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_golden_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );


char* board995997142 = gamma_board(board);
assert( board995997142 != NULL );
assert( strcmp(board995997142, 
"61568.84\n"
"4766.445\n"
".7348...\n"
"1.862586\n"
"472.7155\n"
"628.7345\n"
"81114.7.\n"
"7616.728\n"
"5.125287\n"
"375.4664\n"
"5.64.251\n") == 0);
free(board995997142);
board995997142 = NULL;
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 5, 10) == 1 );
assert( gamma_free_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 8, 0, 4) == 0 );
assert( gamma_free_fields(board, 8) == 13 );
assert( gamma_golden_possible(board, 8) == 1 );


gamma_delete(board);

    return 0;
}
