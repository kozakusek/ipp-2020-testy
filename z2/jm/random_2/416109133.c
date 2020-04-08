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
uuid: 416109133
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 15, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_free_fields(board, 2) == 68 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 9, 3, 5) == 1 );
assert( gamma_move(board, 10, 4, 6) == 0 );


char* board823853083 = gamma_board(board);
assert( board823853083 != NULL );
assert( strcmp(board823853083, 
"........2\n"
"..361....\n"
".4.9.....\n"
".........\n"
"..2......\n"
"5...57...\n"
".......1.\n"
"..4......\n") == 0);
free(board823853083);
board823853083 = NULL;
assert( gamma_move(board, 11, 5, 6) == 1 );
assert( gamma_move(board, 11, 4, 1) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 3, 4) == 1 );
assert( gamma_move(board, 12, 3, 0) == 1 );
assert( gamma_move(board, 13, 3, 6) == 0 );
assert( gamma_move(board, 14, 8, 7) == 0 );
assert( gamma_move(board, 15, 3, 1) == 1 );
assert( gamma_move(board, 15, 3, 4) == 0 );
assert( gamma_busy_fields(board, 15) == 1 );


char* board477608079 = gamma_board(board);
assert( board477608079 != NULL );
assert( strcmp(board477608079, 
"........2\n"
"..36111...\n"
".4.9.....\n"
"...12.....\n"
"..2......\n"
"5...57...\n"
"...1511..1.\n"
"..412.....\n") == 0);
free(board477608079);
board477608079 = NULL;
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_golden_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );


char* board522930949 = gamma_board(board);
assert( board522930949 != NULL );
assert( strcmp(board522930949, 
".....2..2\n"
"..361113..\n"
".4.95....\n"
"...12.....\n"
"..2....4.\n"
"5...57.5.\n"
"...1511..1.\n"
"3.412...2.\n") == 0);
free(board522930949);
board522930949 = NULL;
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 8, 8, 1) == 1 );
assert( gamma_move(board, 9, 5, 0) == 1 );
assert( gamma_free_fields(board, 9) == 45 );
assert( gamma_move(board, 10, 5, 7) == 0 );
assert( gamma_busy_fields(board, 10) == 0 );


char* board480148529 = gamma_board(board);
assert( board480148529 != NULL );
assert( strcmp(board480148529, 
".....2..2\n"
"..361113.7\n"
".4.95....\n"
"...12.....\n"
"..2....4.\n"
"5...57.5.\n"
"...1511..18\n"
"3.412.9.2.\n") == 0);
free(board480148529);
board480148529 = NULL;
assert( gamma_move(board, 11, 6, 4) == 1 );
assert( gamma_move(board, 11, 4, 3) == 1 );
assert( gamma_busy_fields(board, 11) == 4 );
assert( gamma_free_fields(board, 11) == 43 );
assert( gamma_move(board, 12, 1, 1) == 1 );
assert( gamma_move(board, 13, 7, 2) == 0 );
assert( gamma_move(board, 14, 5, 6) == 0 );
assert( gamma_move(board, 14, 0, 2) == 0 );
assert( gamma_move(board, 15, 3, 1) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_free_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_golden_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_free_fields(board, 6) == 38 );
assert( gamma_golden_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 8, 6, 7) == 1 );
assert( gamma_move(board, 8, 1, 1) == 0 );
assert( gamma_move(board, 9, 4, 6) == 0 );
assert( gamma_move(board, 9, 3, 7) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 6, 1) == 1 );
assert( gamma_busy_fields(board, 10) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 3, 8) == 0 );
assert( gamma_move(board, 11, 2, 3) == 0 );
assert( gamma_move(board, 12, 2, 3) == 0 );


char* board676108539 = gamma_board(board);
assert( board676108539 != NULL );
assert( strcmp(board676108539, 
"...9128.2\n"
"..366113.7\n"
"64.95....\n"
"...123.11..\n"
".52.11..4.\n"
"5.7.57.5.\n"
".12.1511.1018\n"
"3.412.9.2.\n") == 0);
free(board676108539);
board676108539 = NULL;
assert( gamma_move(board, 13, 0, 5) == 0 );
assert( gamma_move(board, 14, 4, 5) == 0 );
assert( gamma_free_fields(board, 14) == 34 );
assert( gamma_move(board, 15, 4, 5) == 0 );
assert( gamma_move(board, 15, 8, 3) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_golden_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 9, 6, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 4, 8) == 0 );
assert( gamma_move(board, 10, 0, 1) == 1 );
assert( gamma_move(board, 11, 5, 0) == 0 );
assert( gamma_move(board, 11, 4, 4) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 5, 4) == 1 );
assert( gamma_move(board, 12, 3, 3) == 0 );
assert( gamma_busy_fields(board, 12) == 4 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_golden_move(board, 12, 2, 5) == 0 );
assert( gamma_move(board, 13, 1, 5) == 0 );
assert( gamma_move(board, 14, 0, 1) == 0 );
assert( gamma_move(board, 14, 3, 0) == 0 );
assert( gamma_move(board, 15, 2, 6) == 0 );
assert( gamma_move(board, 15, 7, 1) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_free_fields(board, 4) == 29 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_free_fields(board, 5) == 29 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 7, 5, 0) == 0 );
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 9, 4, 0) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 5, 2) == 0 );
assert( gamma_move(board, 11, 3, 0) == 0 );
assert( gamma_move(board, 11, 0, 5) == 0 );
assert( gamma_move(board, 12, 0, 6) == 0 );
assert( gamma_move(board, 13, 4, 2) == 0 );
assert( gamma_move(board, 13, 4, 1) == 0 );
assert( gamma_free_fields(board, 13) == 28 );
assert( gamma_move(board, 14, 7, 2) == 0 );
assert( gamma_move(board, 14, 6, 3) == 1 );
assert( gamma_free_fields(board, 14) == 27 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 4, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 9, 1, 3) == 0 );
assert( gamma_move(board, 10, 3, 0) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 0, 6) == 0 );
assert( gamma_move(board, 11, 0, 3) == 1 );
assert( gamma_move(board, 12, 0, 6) == 0 );
assert( gamma_move(board, 12, 6, 4) == 0 );
assert( gamma_move(board, 13, 4, 4) == 0 );
assert( gamma_move(board, 13, 2, 2) == 0 );
assert( gamma_move(board, 14, 2, 6) == 0 );
assert( gamma_free_fields(board, 14) == 24 );
assert( gamma_move(board, 15, 6, 7) == 0 );
assert( gamma_move(board, 15, 6, 6) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 8, 1, 5) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 10, 3, 0) == 0 );
assert( gamma_move(board, 11, 4, 0) == 0 );
assert( gamma_busy_fields(board, 11) == 5 );
assert( gamma_move(board, 12, 7, 0) == 0 );
assert( gamma_move(board, 12, 2, 1) == 0 );
assert( gamma_move(board, 13, 2, 1) == 0 );
assert( gamma_move(board, 13, 6, 4) == 0 );
assert( gamma_move(board, 14, 7, 1) == 0 );
assert( gamma_move(board, 14, 5, 4) == 0 );
assert( gamma_move(board, 15, 4, 1) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 6, 7) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 8, 0, 8) == 0 );
assert( gamma_move(board, 9, 6, 0) == 1 );
assert( gamma_move(board, 10, 3, 5) == 0 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 4, 2) == 0 );
assert( gamma_move(board, 11, 1, 3) == 0 );
assert( gamma_golden_move(board, 11, 1, 1) == 1 );
assert( gamma_move(board, 12, 1, 4) == 0 );
assert( gamma_golden_move(board, 12, 5, 0) == 1 );
assert( gamma_move(board, 14, 6, 1) == 0 );
assert( gamma_free_fields(board, 14) == 18 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 7, 0) == 0 );
assert( gamma_move(board, 15, 5, 1) == 1 );
assert( gamma_golden_move(board, 15, 1, 3) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_golden_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 8, 7, 3) == 0 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_move(board, 9, 0, 1) == 0 );
assert( gamma_move(board, 10, 6, 7) == 0 );
assert( gamma_move(board, 11, 0, 8) == 0 );
assert( gamma_move(board, 11, 1, 1) == 0 );
assert( gamma_move(board, 12, 2, 5) == 0 );
assert( gamma_move(board, 13, 8, 0) == 1 );
assert( gamma_move(board, 14, 7, 1) == 0 );
assert( gamma_move(board, 15, 2, 3) == 0 );
assert( gamma_move(board, 15, 3, 7) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );


char* board770641341 = gamma_board(board);
assert( board770641341 != NULL );
assert( strcmp(board770641341, 
"...9128.2\n"
"1.366113.7\n"
"642957.1.\n"
".3.123121162\n"
"11152311.14415\n"
"5.7.57656\n"
"101151511151018\n"
"3.4129129213\n") == 0);
free(board770641341);
board770641341 = NULL;
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_golden_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_free_fields(board, 6) == 13 );


char* board843352471 = gamma_board(board);
assert( board843352471 != NULL );
assert( strcmp(board843352471, 
"...9128.2\n"
"1.366113.7\n"
"632957.1.\n"
".3.123121162\n"
"11152311.14415\n"
"547.57656\n"
"101151511151018\n"
"3.4129129213\n") == 0);
free(board843352471);
board843352471 = NULL;
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_golden_move(board, 8, 7, 4) == 1 );
assert( gamma_move(board, 9, 5, 8) == 0 );


gamma_delete(board);

    return 0;
}
