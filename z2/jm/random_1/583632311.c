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
uuid: 583632311
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 14, 8, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 11, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 14) == 0 );
assert( gamma_golden_move(board, 4, 12, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 13) == 1 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 8, 11, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 13, 14) == 0 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 10, 13) == 1 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_free_fields(board, 7) == 202 );
assert( gamma_move(board, 8, 11, 7) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_free_fields(board, 6) == 196 );
assert( gamma_move(board, 7, 8, 3) == 1 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 2, 13, 5) == 1 );
assert( gamma_move(board, 3, 6, 13) == 1 );
assert( gamma_move(board, 5, 2, 1) == 1 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 8, 9, -1) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_free_fields(board, 2) == 189 );
assert( gamma_move(board, 3, 14, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 7, 10, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 2) == 185 );
assert( gamma_move(board, 3, 12, 11) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 6, 10, 9) == 1 );
assert( gamma_free_fields(board, 6) == 181 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 8, 13, 1) == 1 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 12, 8) == 1 );


char* board398387658 = gamma_board(board);
assert( board398387658 != NULL );
assert( strcmp(board398387658, 
".....63...5....\n"
"...............\n"
"...........83..\n"
"4..........1...\n"
".4........6....\n"
"............6..\n"
"...........8...\n"
"..1.57..4......\n"
"2..3......3..2.\n"
".4..6....1.....\n"
"...5....7.....3\n"
".8.............\n"
"..5..7......58.\n"
"74.6.7.........\n") == 0);
free(board398387658);
board398387658 = NULL;
assert( gamma_move(board, 8, 2, -1) == 0 );
assert( gamma_free_fields(board, 8) == 176 );
assert( gamma_free_fields(board, 1) == 176 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 11, 5) == 1 );
assert( gamma_move(board, 1, 13, -1) == 0 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_move(board, 5, 12, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 9) == 1 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_free_fields(board, 8) == 15 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, -1, -1) == 0 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_free_fields(board, 6) == 19 );
assert( gamma_move(board, 7, 11, 10) == 0 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 8, 5, 14) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );


char* board905496940 = gamma_board(board);
assert( board905496940 != NULL );
assert( strcmp(board905496940, 
".....63...5....\n"
"...............\n"
"...........83..\n"
"4..........1...\n"
".4...1...66....\n"
"............6..\n"
"...........8...\n"
"..1.57..4......\n"
"2..3......38.2.\n"
".4..6....17....\n"
"...5....72....3\n"
".8...7.........\n"
"..5..7......58.\n"
"74.6.7.........\n") == 0);
free(board905496940);
board905496940 = NULL;
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_move(board, 7, 15, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );


char* board729251841 = gamma_board(board);
assert( board729251841 != NULL );
assert( strcmp(board729251841, 
".....63...5....\n"
"...............\n"
"...........83..\n"
"4..........1...\n"
".4...1...66....\n"
"............6..\n"
"...........8...\n"
"..1.57..4......\n"
"2..3......38.2.\n"
".4..6....17....\n"
"...5....72....3\n"
".8...7.........\n"
"..5..7......58.\n"
"74.6.7.........\n") == 0);
free(board729251841);
board729251841 = NULL;


char* board769321266 = gamma_board(board);
assert( board769321266 != NULL );
assert( strcmp(board769321266, 
".....63...5....\n"
"...............\n"
"...........83..\n"
"4..........1...\n"
".4...1...66....\n"
"............6..\n"
"...........8...\n"
"..1.57..4......\n"
"2..3......38.2.\n"
".4..6....17....\n"
"...5....72....3\n"
".8...7.........\n"
"..5..7......58.\n"
"74.6.7.........\n") == 0);
free(board769321266);
board769321266 = NULL;
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_golden_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 15, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 12) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_free_fields(board, 7) == 16 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 2, 4, 6) == 0 );


char* board907840030 = gamma_board(board);
assert( board907840030 != NULL );
assert( strcmp(board907840030, 
".....63...5....\n"
"2..............\n"
"...........83..\n"
"4..........1...\n"
".4...1...66....\n"
"............6..\n"
"...........8...\n"
"..1.57..4......\n"
"2..3......38.2.\n"
".4..6....17....\n"
"...5....72....3\n"
".8...7.........\n"
"..5..7......58.\n"
"74.6.7.........\n") == 0);
free(board907840030);
board907840030 = NULL;
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 5, 10, -1) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 2, 15, 9) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board617989041 = gamma_board(board);
assert( board617989041 != NULL );
assert( strcmp(board617989041, 
".....63...5....\n"
"2..............\n"
"...........83..\n"
"4..........1...\n"
".4...1...66....\n"
"............6..\n"
"..........28...\n"
"..1.57..4......\n"
"2..3......38.2.\n"
".4..6....17....\n"
"...5....72....3\n"
".8...7.........\n"
"..5..7......58.\n"
"74.6.7.........\n") == 0);
free(board617989041);
board617989041 = NULL;
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 7, 5, 3) == 1 );
assert( gamma_free_fields(board, 8) == 13 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 1, 1) == 0 );


char* board778773138 = gamma_board(board);
assert( board778773138 != NULL );
assert( strcmp(board778773138, 
".....63...5....\n"
"2..............\n"
"...........83..\n"
"4..........1...\n"
".4...1...66....\n"
"............6..\n"
"....1.....28...\n"
"..1.57..4......\n"
"2..3......38.2.\n"
".4..6....17....\n"
"...5.7..72....3\n"
".85..7.........\n"
"..5..7......58.\n"
"74.6.7.........\n") == 0);
free(board778773138);
board778773138 = NULL;
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 5, 5, 14) == 0 );
assert( gamma_move(board, 6, 9, 8) == 1 );
assert( gamma_move(board, 7, 5, 14) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 11, 13) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 15, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_golden_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 15, 9) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_golden_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 11) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 8, 15, 0) == 0 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 3) == 1 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 7, 9, 14) == 0 );
assert( gamma_golden_move(board, 8, 11, 12) == 0 );
assert( gamma_move(board, 1, 12, 10) == 1 );


char* board626696360 = gamma_board(board);
assert( board626696360 != NULL );
assert( strcmp(board626696360, 
".....63...5....\n"
"2..............\n"
"...........83..\n"
"4..........11..\n"
".4...1...66....\n"
".........6..6..\n"
"....1.....28...\n"
"..1.57.44......\n"
"2..3......38.2.\n"
".4..6....17....\n"
"...5.7..72...33\n"
".85..7.........\n"
"..5..7......58.\n"
"74.6.7.........\n") == 0);
free(board626696360);
board626696360 = NULL;
assert( gamma_move(board, 3, 12, 10) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_move(board, 5, 15, 8) == 0 );
assert( gamma_move(board, 6, 3, 14) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 12, 10) == 0 );
assert( gamma_move(board, 3, 0, 14) == 0 );
assert( gamma_move(board, 4, -1, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 2, 8, -1) == 0 );
assert( gamma_golden_move(board, 2, 5, 10) == 0 );


char* board741385784 = gamma_board(board);
assert( board741385784 != NULL );
assert( strcmp(board741385784, 
".....63...5....\n"
"2..............\n"
"...........83..\n"
"4..........11..\n"
".4...1...66....\n"
".........6..6..\n"
"....1.....28...\n"
"..1.57.44......\n"
"2..3......38.2.\n"
".4..6....17....\n"
"...5.7..72...33\n"
".85..7.........\n"
"..5..7......58.\n"
"74.6.7.........\n") == 0);
free(board741385784);
board741385784 = NULL;
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 4, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 14, 9) == 0 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 7, 11, 1) == 0 );
assert( gamma_move(board, 8, 5, 13) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_free_fields(board, 2) == 15 );


gamma_delete(board);

    return 0;
}
