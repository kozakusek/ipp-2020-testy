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
uuid: 152314799
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 8, 6, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_free_fields(board, 3) == 94 );


char* board361332741 = gamma_board(board);
assert( board361332741 != NULL );
assert( strcmp(board361332741, 
"........1...\n"
"............\n"
"3...........\n"
"............\n"
"............\n"
"............\n"
"............\n"
"............\n") == 0);
free(board361332741);
board361332741 = NULL;
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 3, 2) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 11, 7) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 11, 0) == 1 );


char* board712572738 = gamma_board(board);
assert( board712572738 != NULL );
assert( strcmp(board712572738, 
"........1..2\n"
"............\n"
"3..2....5...\n"
"....64......\n"
"...5........\n"
"...6......2.\n"
"..4.434.....\n"
"....1......3\n") == 0);
free(board712572738);
board712572738 = NULL;
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 1, 8) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_free_fields(board, 6) == 73 );


char* board520681324 = gamma_board(board);
assert( board520681324 != NULL );
assert( strcmp(board520681324, 
".....3..1..2\n"
"............\n"
"3..2....5.5.\n"
"...464......\n"
".1.5........\n"
"...6..2...2.\n"
"..4.434.....\n"
".6.41......3\n") == 0);
free(board520681324);
board520681324 = NULL;
assert( gamma_move(board, 1, 11, 1) == 1 );


char* board167389427 = gamma_board(board);
assert( board167389427 != NULL );
assert( strcmp(board167389427, 
".....3..1..2\n"
"............\n"
"3..2....5.5.\n"
"...464......\n"
".1.5........\n"
"...6..2...2.\n"
"..4.434....1\n"
".6.41......3\n") == 0);
free(board167389427);
board167389427 = NULL;
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );


char* board561839987 = gamma_board(board);
assert( board561839987 != NULL );
assert( strcmp(board561839987, 
".....3..1..2\n"
"............\n"
"3..2....5.5.\n"
"...464......\n"
".1.5........\n"
"...6..2...2.\n"
".24.434....1\n"
".6.41......3\n") == 0);
free(board561839987);
board561839987 = NULL;
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_free_fields(board, 6) == 67 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_free_fields(board, 3) == 65 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_free_fields(board, 1) == 56 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_free_fields(board, 3) == 56 );


char* board188021960 = gamma_board(board);
assert( board188021960 != NULL );
assert( strcmp(board188021960, 
".1...3..1.12\n"
"....35.6.4..\n"
"35.2....5.5.\n"
"...414...4..\n"
".1.5.6......\n"
"...6..226.2.\n"
".24.43412..1\n"
".6641.4....3\n") == 0);
free(board188021960);
board188021960 = NULL;
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_golden_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_free_fields(board, 5) == 51 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );


char* board588499066 = gamma_board(board);
assert( board588499066 != NULL );
assert( strcmp(board588499066, 
"61..43..1.12\n"
"....3516.4..\n"
"35.2....5.5.\n"
"...414...4..\n"
".1.5.6......\n"
"...6..226.22\n"
".24643412..1\n"
".664114.4.23\n") == 0);
free(board588499066);
board588499066 = NULL;
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_free_fields(board, 5) == 44 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_free_fields(board, 6) == 35 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );


char* board109072896 = gamma_board(board);
assert( board109072896 != NULL );
assert( strcmp(board109072896, 
"61.243..1.12\n"
".1.33516.4.4\n"
"35.2.3.3545.\n"
"..24141..4.3\n"
".1.556..2...\n"
"..3636226.22\n"
"124643412..1\n"
".66411454.23\n") == 0);
free(board109072896);
board109072896 = NULL;
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_free_fields(board, 6) == 31 );
assert( gamma_golden_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_free_fields(board, 5) == 29 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_free_fields(board, 5) == 29 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_golden_move(board, 1, 7, 6) == 0 );


char* board903687512 = gamma_board(board);
assert( board903687512 != NULL );
assert( strcmp(board903687512, 
"61.243..1.12\n"
".1.3351654.4\n"
"35.2.3.3545.\n"
"..24641.24.3\n"
".1.5565.2...\n"
"..3636226.22\n"
"124643412..1\n"
"266411454.23\n") == 0);
free(board903687512);
board903687512 = NULL;
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_golden_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 5, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_free_fields(board, 3) == 24 );


char* board552028031 = gamma_board(board);
assert( board552028031 != NULL );
assert( strcmp(board552028031, 
"61.243..1.12\n"
".1.3351654.4\n"
"3522.3.3545.\n"
"..24441.2423\n"
".1.5565.2...\n"
"..3636226.22\n"
"124643412.41\n"
"266411454.23\n") == 0);
free(board552028031);
board552028031 = NULL;
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );


char* board285954872 = gamma_board(board);
assert( board285954872 != NULL );
assert( strcmp(board285954872, 
"61.243..1.12\n"
".1.3351654.4\n"
"3522.3.3545.\n"
"..24441.2423\n"
".1.5565.2...\n"
"..3636226.22\n"
"124643412.41\n"
"266411454.23\n") == 0);
free(board285954872);
board285954872 = NULL;
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );


char* board635242157 = gamma_board(board);
assert( board635242157 != NULL );
assert( strcmp(board635242157, 
"61.243..1.12\n"
".1.3351654.4\n"
"3522.3.3545.\n"
"..24441.2423\n"
".1.5565.2...\n"
"..3636226.22\n"
"124643412.41\n"
"266411454.23\n") == 0);
free(board635242157);
board635242157 = NULL;
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );


char* board831839005 = gamma_board(board);
assert( board831839005 != NULL );
assert( strcmp(board831839005, 
"611243..1.12\n"
".1.3351654.4\n"
"3522.3.3545.\n"
"..24441.2423\n"
".1.5565.2...\n"
"..3636226.22\n"
"124643412.41\n"
"266411454.23\n") == 0);
free(board831839005);
board831839005 = NULL;
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 11, 5) == 1 );
assert( gamma_free_fields(board, 6) == 22 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );


char* board241121646 = gamma_board(board);
assert( board241121646 != NULL );
assert( strcmp(board241121646, 
"611243..1.12\n"
".1.3351654.4\n"
"3522.3.35456\n"
"..24441.2423\n"
".1.5565.2...\n"
"..3636226.22\n"
"124643412.41\n"
"266411454.23\n") == 0);
free(board241121646);
board241121646 = NULL;
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_golden_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_free_fields(board, 2) == 18 );


char* board282330140 = gamma_board(board);
assert( board282330140 != NULL );
assert( strcmp(board282330140, 
"611243.31.12\n"
".1.3351654.4\n"
"3522.3635456\n"
"4.24441.2423\n"
".1.5565.2...\n"
"3.3636226.22\n"
"124643412.41\n"
"266411454.23\n") == 0);
free(board282330140);
board282330140 = NULL;
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_free_fields(board, 1) == 18 );


char* board417506798 = gamma_board(board);
assert( board417506798 != NULL );
assert( strcmp(board417506798, 
"611243.31.12\n"
".1.3351654.4\n"
"3522.3635456\n"
"4.24441.2423\n"
".1.5565.2...\n"
"3.3636226.22\n"
"124643412.41\n"
"266411454.23\n") == 0);
free(board417506798);
board417506798 = NULL;
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_free_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_free_fields(board, 6) == 17 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_golden_move(board, 6, 2, 3) == 0 );


gamma_delete(board);

    return 0;
}
