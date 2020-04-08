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
uuid: 627420530
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 6, 14, 16);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_free_fields(board, 1) == 89 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_free_fields(board, 4) == 86 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_move(board, 5, 13, 4) == 1 );
assert( gamma_free_fields(board, 5) == 84 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 7, 13, 0) == 1 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 8, 2, 5) == 1 );
assert( gamma_move(board, 8, 7, 1) == 1 );
assert( gamma_move(board, 9, 3, 13) == 0 );
assert( gamma_move(board, 10, 1, 3) == 1 );
assert( gamma_move(board, 10, 5, 0) == 1 );
assert( gamma_move(board, 11, 1, 14) == 0 );
assert( gamma_move(board, 12, 0, 7) == 0 );
assert( gamma_move(board, 12, 10, 5) == 0 );
assert( gamma_move(board, 13, 1, 0) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 1, 11) == 0 );
assert( gamma_move(board, 14, 8, 2) == 1 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 5, 14, 0) == 1 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_free_fields(board, 8) == 71 );
assert( gamma_move(board, 9, 0, 9) == 0 );
assert( gamma_move(board, 9, 8, 3) == 1 );
assert( gamma_move(board, 10, 12, 1) == 1 );
assert( gamma_move(board, 10, 2, 3) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 14, 4) == 1 );
assert( gamma_move(board, 12, 9, 4) == 1 );
assert( gamma_busy_fields(board, 12) == 1 );
assert( gamma_move(board, 13, 3, 14) == 0 );
assert( gamma_free_fields(board, 13) == 66 );
assert( gamma_move(board, 14, 5, 1) == 1 );
assert( gamma_free_fields(board, 1) == 65 );
assert( gamma_move(board, 2, 14, 2) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_golden_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 6, 10, 4) == 1 );
assert( gamma_move(board, 6, 12, 4) == 1 );
assert( gamma_free_fields(board, 6) == 61 );
assert( gamma_move(board, 7, 5, 12) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 4, 5) == 1 );
assert( gamma_move(board, 9, 14, 2) == 0 );
assert( gamma_move(board, 10, 3, 10) == 0 );
assert( gamma_move(board, 11, 2, 12) == 0 );
assert( gamma_move(board, 11, 9, 2) == 1 );
assert( gamma_move(board, 12, 4, 11) == 0 );
assert( gamma_free_fields(board, 12) == 59 );
assert( gamma_move(board, 13, 5, 0) == 0 );
assert( gamma_move(board, 13, 5, 3) == 1 );
assert( gamma_move(board, 14, 14, 2) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_free_fields(board, 3) == 55 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 10, 4, 7) == 0 );
assert( gamma_move(board, 10, 10, 1) == 1 );


char* board600897627 = gamma_board(board);
assert( board600897627 != NULL );
assert( strcmp(board600897627, 
"2.8.9.4...5....\n"
"21..3....126.6511\n"
"310104.13..9......\n"
"779.3..11411....2\n"
".....14.8..10.10..\n"
".13.6710.5.....75\n") == 0);
free(board600897627);
board600897627 = NULL;
assert( gamma_move(board, 11, 1, 4) == 0 );
assert( gamma_move(board, 12, 1, 4) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 1, 14) == 0 );
assert( gamma_move(board, 13, 8, 3) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 13, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 12, 5) == 1 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 14, 3) == 1 );
assert( gamma_free_fields(board, 6) == 47 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 9, 2, 0) == 1 );
assert( gamma_move(board, 10, 5, 5) == 1 );
assert( gamma_move(board, 11, 14, 3) == 0 );
assert( gamma_move(board, 12, 4, 3) == 1 );
assert( gamma_move(board, 13, 1, 4) == 0 );
assert( gamma_move(board, 14, 3, 7) == 0 );
assert( gamma_move(board, 14, 8, 0) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );


char* board485441961 = gamma_board(board);
assert( board485441961 != NULL );
assert( strcmp(board485441961, 
"2.8.91043..5.4..\n"
"21..3....126.6511\n"
"3101041213..9.4...6\n"
"779.3..11411....2\n"
".....14.8..10.102.\n"
".1396710.514....75\n") == 0);
free(board485441961);
board485441961 = NULL;
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 7, 11, 0) == 1 );
assert( gamma_free_fields(board, 7) == 42 );
assert( gamma_move(board, 8, 5, 13) == 0 );
assert( gamma_move(board, 9, 5, 14) == 0 );
assert( gamma_move(board, 10, 2, 6) == 0 );
assert( gamma_move(board, 11, 10, 0) == 1 );
assert( gamma_move(board, 12, 2, 6) == 0 );
assert( gamma_move(board, 13, 1, 14) == 0 );
assert( gamma_move(board, 13, 8, 3) == 0 );
assert( gamma_golden_move(board, 13, 2, 7) == 0 );


char* board898320997 = gamma_board(board);
assert( board898320997 != NULL );
assert( strcmp(board898320997, 
"2.8.91043..5.4..\n"
"21..3....126.6511\n"
"3101041213..9.4...6\n"
"779.3..11411....2\n"
".....14.8..10.102.\n"
".1396710.514.117.75\n") == 0);
free(board898320997);
board898320997 = NULL;
assert( gamma_move(board, 14, 5, 13) == 0 );


char* board555412936 = gamma_board(board);
assert( board555412936 != NULL );
assert( strcmp(board555412936, 
"2.8.91043..5.4..\n"
"21..3....126.6511\n"
"3101041213..9.4...6\n"
"779.3..11411....2\n"
".....14.8..10.102.\n"
".1396710.514.117.75\n") == 0);
free(board555412936);
board555412936 = NULL;
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_free_fields(board, 4) == 38 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 5, 13) == 0 );
assert( gamma_move(board, 6, 13, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 8, 1) == 1 );


char* board332654732 = gamma_board(board);
assert( board332654732 != NULL );
assert( strcmp(board332654732, 
"2.8.91043..5.46.\n"
"21..34...126.6511\n"
"3101041213.39.4...6\n"
"779.3..11411.2..2\n"
".....14.88.10.102.\n"
".1396710.514.117.75\n") == 0);
free(board332654732);
board332654732 = NULL;
assert( gamma_move(board, 9, 5, 8) == 0 );


char* board573323281 = gamma_board(board);
assert( board573323281 != NULL );
assert( strcmp(board573323281, 
"2.8.91043..5.46.\n"
"21..34...126.6511\n"
"3101041213.39.4...6\n"
"779.3..11411.2..2\n"
".....14.88.10.102.\n"
".1396710.514.117.75\n") == 0);
free(board573323281);
board573323281 = NULL;
assert( gamma_move(board, 10, 1, 14) == 0 );
assert( gamma_move(board, 10, 3, 4) == 1 );
assert( gamma_move(board, 11, 2, 5) == 0 );
assert( gamma_move(board, 11, 12, 1) == 0 );
assert( gamma_busy_fields(board, 11) == 3 );
assert( gamma_move(board, 12, 1, 0) == 0 );
assert( gamma_move(board, 13, 0, 9) == 0 );
assert( gamma_golden_move(board, 13, 2, 7) == 0 );


char* board578438227 = gamma_board(board);
assert( board578438227 != NULL );
assert( strcmp(board578438227, 
"2.8.91043..5.46.\n"
"21.1034...126.6511\n"
"3101041213.39.4...6\n"
"779.3..11411.2..2\n"
".....14.88.10.102.\n"
".1396710.514.117.75\n") == 0);
free(board578438227);
board578438227 = NULL;
assert( gamma_move(board, 14, 9, 3) == 1 );
assert( gamma_move(board, 14, 8, 4) == 1 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );


char* board763962585 = gamma_board(board);
assert( board763962585 != NULL );
assert( strcmp(board763962585, 
"2.8191043..5.46.\n"
"21.1034..14126.6511\n"
"3101041213.39144...6\n"
"779.3..11411.2..2\n"
".....14.88.10.102.\n"
".1396710.514.117.75\n") == 0);
free(board763962585);
board763962585 = NULL;
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 14) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 2, 10) == 0 );


char* board497487742 = gamma_board(board);
assert( board497487742 != NULL );
assert( strcmp(board497487742, 
"2.8191043..5.46.\n"
"21.1034..14126.6511\n"
"3101041213.39144...6\n"
"779.3.311411.2..2\n"
"...6.14.88.10.102.\n"
".1396710.514.117.75\n") == 0);
free(board497487742);
board497487742 = NULL;
assert( gamma_move(board, 8, 1, 4) == 0 );
assert( gamma_free_fields(board, 8) == 30 );
assert( gamma_move(board, 9, 3, 13) == 0 );
assert( gamma_move(board, 10, 4, 2) == 0 );
assert( gamma_move(board, 10, 0, 5) == 0 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_move(board, 11, 2, 13) == 0 );
assert( gamma_move(board, 11, 1, 4) == 0 );
assert( gamma_move(board, 12, 1, 11) == 0 );
assert( gamma_move(board, 12, 10, 1) == 0 );
assert( gamma_busy_fields(board, 12) == 2 );
assert( gamma_move(board, 13, 0, 12) == 0 );
assert( gamma_move(board, 13, 3, 3) == 0 );
assert( gamma_move(board, 14, 11, 1) == 1 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 7, 5, 11) == 0 );
assert( gamma_move(board, 7, 6, 4) == 1 );
assert( gamma_move(board, 9, 3, 6) == 0 );
assert( gamma_move(board, 9, 6, 2) == 0 );
assert( gamma_free_fields(board, 9) == 28 );
assert( gamma_move(board, 10, 4, 2) == 0 );
assert( gamma_move(board, 10, 6, 3) == 1 );
assert( gamma_busy_fields(board, 10) == 8 );
assert( gamma_move(board, 12, 5, 0) == 0 );
assert( gamma_move(board, 13, 5, 0) == 0 );
assert( gamma_free_fields(board, 13) == 27 );
assert( gamma_move(board, 14, 4, 11) == 0 );
assert( gamma_move(board, 14, 11, 3) == 1 );
assert( gamma_golden_move(board, 14, 4, 1) == 0 );


char* board150519451 = gamma_board(board);
assert( board150519451 != NULL );
assert( strcmp(board150519451, 
"2.8191043..5.46.\n"
"21.10347.14126.6511\n"
"3101041213103914414..6\n"
"779.3.311411.2..2\n"
"...6.14.88.1014102.\n"
".1396710.514.117.75\n") == 0);
free(board150519451);
board150519451 = NULL;
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );


char* board400315999 = gamma_board(board);
assert( board400315999 != NULL );
assert( strcmp(board400315999, 
"2.8191043..5.46.\n"
"21.10347.14126.6511\n"
"3101041213103914414..6\n"
"779.3.311411.21.2\n"
"...6.14.88.1014102.\n"
".1396710.514.117.75\n") == 0);
free(board400315999);
board400315999 = NULL;
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 5, 0, 12) == 0 );


char* board385650249 = gamma_board(board);
assert( board385650249 != NULL );
assert( strcmp(board385650249, 
"2.8191043..5.46.\n"
"21.10347.14126.6511\n"
"3101041213103914414..6\n"
"779.3.311411.21.2\n"
".4.6.14.88.1014102.\n"
".1396710.514.117.75\n") == 0);
free(board385650249);
board385650249 = NULL;
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 7, 12, 0) == 1 );
assert( gamma_move(board, 8, 5, 8) == 0 );


char* board475637210 = gamma_board(board);
assert( board475637210 != NULL );
assert( strcmp(board475637210, 
"2.8191043..5.46.\n"
"21.10347.14126.6511\n"
"3101041213103914414..6\n"
"779.3.311411.21.2\n"
".4.6.14.88.1014102.\n"
".1396710.514.117775\n") == 0);
free(board475637210);
board475637210 = NULL;
assert( gamma_move(board, 9, 9, 2) == 0 );
assert( gamma_move(board, 10, 9, 4) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 6, 1) == 1 );
assert( gamma_move(board, 11, 6, 2) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );


char* board942286903 = gamma_board(board);
assert( board942286903 != NULL );
assert( strcmp(board942286903, 
"2.8191043..5.46.\n"
"21.10347.14126.6511\n"
"3101041213103914414..6\n"
"779.3.311411.21.2\n"
".4.6.141188.1014102.\n"
".1396710.514.117775\n") == 0);
free(board942286903);
board942286903 = NULL;
assert( gamma_move(board, 12, 0, 0) == 1 );
assert( gamma_move(board, 12, 1, 5) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_golden_move(board, 12, 3, 5) == 1 );
assert( gamma_move(board, 14, 12, 0) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_free_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 5, 9) == 0 );
assert( gamma_golden_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 8, 3, 13) == 0 );
assert( gamma_move(board, 9, 5, 14) == 0 );
assert( gamma_move(board, 10, 5, 8) == 0 );
assert( gamma_move(board, 10, 11, 2) == 0 );
assert( gamma_move(board, 11, 1, 9) == 0 );
assert( gamma_move(board, 12, 8, 0) == 0 );
assert( gamma_move(board, 13, 1, 2) == 0 );
assert( gamma_move(board, 13, 13, 1) == 0 );
assert( gamma_move(board, 14, 1, 0) == 0 );
assert( gamma_move(board, 14, 0, 5) == 0 );
assert( gamma_busy_fields(board, 14) == 7 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 1, 14, 1) == 1 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 5, 9) == 0 );
assert( gamma_move(board, 8, 6, 0) == 1 );
assert( gamma_move(board, 9, 5, 9) == 0 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 10, 12, 4) == 0 );
assert( gamma_move(board, 10, 10, 1) == 0 );
assert( gamma_move(board, 11, 5, 11) == 0 );
assert( gamma_move(board, 11, 3, 2) == 0 );
assert( gamma_move(board, 12, 4, 7) == 0 );
assert( gamma_move(board, 12, 4, 1) == 1 );
assert( gamma_move(board, 13, 5, 8) == 0 );
assert( gamma_move(board, 13, 1, 5) == 0 );
assert( gamma_move(board, 14, 5, 8) == 0 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 8, 5) == 1 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_free_fields(board, 8) == 13 );
assert( gamma_move(board, 9, 1, 2) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 2, 6) == 0 );
assert( gamma_move(board, 10, 1, 2) == 0 );
assert( gamma_golden_move(board, 10, 2, 11) == 0 );
assert( gamma_move(board, 11, 1, 2) == 0 );
assert( gamma_move(board, 12, 3, 12) == 0 );
assert( gamma_golden_possible(board, 12) == 0 );


gamma_delete(board);

    return 0;
}
