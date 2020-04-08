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
uuid: 620518191
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 6, 8, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_free_fields(board, 4) == 70 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 11, 2) == 1 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 11, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_golden_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 7, 5, 4) == 1 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 8, 6, 0) == 1 );
assert( gamma_move(board, 8, 4, 2) == 1 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_golden_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );


char* board552704140 = gamma_board(board);
assert( board552704140 != NULL );
assert( strcmp(board552704140, 
".14....1....\n"
"..5.776.....\n"
"14.5........\n"
"4...8......5\n"
"....2......3\n"
"......8.....\n") == 0);
free(board552704140);
board552704140 = NULL;
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );


char* board442374224 = gamma_board(board);
assert( board442374224 != NULL );
assert( strcmp(board442374224, 
".14....1....\n"
"..5.776.....\n"
"14.5.7......\n"
"4...8......5\n"
"....2......3\n"
"....6.8.....\n") == 0);
free(board442374224);
board442374224 = NULL;
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 8, 4, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );


char* board401259057 = gamma_board(board);
assert( board401259057 != NULL );
assert( strcmp(board401259057, 
".14....1....\n"
"..5.776.....\n"
"14.5.7....5.\n"
"4...8......5\n"
".4..2......3\n"
"....6.84....\n") == 0);
free(board401259057);
board401259057 = NULL;
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 11, 5) == 1 );
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 8, 0, 1) == 1 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 3, 5) == 0 );


char* board175283151 = gamma_board(board);
assert( board175283151 != NULL );
assert( strcmp(board175283151, 
".14....1...6\n"
".85.7761....\n"
"14.5.7....5.\n"
"4...8......5\n"
"84..2......3\n"
".7..6.84....\n") == 0);
free(board175283151);
board175283151 = NULL;
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_golden_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_free_fields(board, 3) == 42 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_free_fields(board, 5) == 40 );
assert( gamma_move(board, 6, 11, 0) == 1 );
assert( gamma_golden_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 8, 5, 2) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_free_fields(board, 4) == 38 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_free_fields(board, 7) == 35 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 9, 1) == 1 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_free_fields(board, 4) == 30 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 5, 4) == 0 );
assert( gamma_move(board, 8, 3, 2) == 0 );
assert( gamma_move(board, 8, 11, 3) == 1 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 7, 11, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 11, 2) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );


char* board689881263 = gamma_board(board);
assert( board689881263 != NULL );
assert( strcmp(board689881263, 
".14..431...6\n"
".856776164..\n"
"14.5.7....58\n"
"425885.3...5\n"
"845.22..51.3\n"
"47..6384...6\n") == 0);
free(board689881263);
board689881263 = NULL;
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 1, 10) == 0 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_free_fields(board, 7) == 27 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board244774366 = gamma_board(board);
assert( board244774366 != NULL );
assert( strcmp(board244774366, 
".14..4317..6\n"
".856776164..\n"
"14.5.7....58\n"
"425885.3...5\n"
"845.22..51.3\n"
"47..6384...6\n") == 0);
free(board244774366);
board244774366 = NULL;
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_free_fields(board, 6) == 27 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_free_fields(board, 6) == 24 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 7, 6, 2) == 1 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_free_fields(board, 6) == 22 );
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 8, 10, 3) == 0 );


char* board895301135 = gamma_board(board);
assert( board895301135 != NULL );
assert( strcmp(board895301135, 
".14..43173.6\n"
".8567761643.\n"
"14.5.7..1.58\n"
"42588573...5\n"
"845.226.51.3\n"
"47..6384...6\n") == 0);
free(board895301135);
board895301135 = NULL;
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 7) == 0 );


char* board345887092 = gamma_board(board);
assert( board345887092 != NULL );
assert( strcmp(board345887092, 
".142.43173.6\n"
".8567761643.\n"
"14.5.7..1.58\n"
"42588573...5\n"
"845.226.51.3\n"
"47..6384...6\n") == 0);
free(board345887092);
board345887092 = NULL;
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_move(board, 7, 7, 5) == 0 );
assert( gamma_move(board, 8, 10, 3) == 0 );
assert( gamma_move(board, 8, 8, 4) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 8, 0) == 1 );


char* board206991660 = gamma_board(board);
assert( board206991660 != NULL );
assert( strcmp(board206991660, 
".142.43173.6\n"
".8567761643.\n"
"14.5.7..1.58\n"
"425885736..5\n"
"845.226.5113\n"
"47..63842..6\n") == 0);
free(board206991660);
board206991660 = NULL;
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 7, 11, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 2, 10) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_golden_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 10, 5) == 1 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 8, 2, 2) == 0 );


gamma_delete(board);

    return 0;
}
