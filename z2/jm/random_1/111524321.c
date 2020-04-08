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
uuid: 111524321
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(16, 20, 15, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 12, 8) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 13, 14) == 1 );
assert( gamma_free_fields(board, 3) == 317 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 11, 14) == 1 );
assert( gamma_move(board, 6, 11, 14) == 0 );
assert( gamma_free_fields(board, 6) == 315 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 13) == 1 );
assert( gamma_free_fields(board, 7) == 314 );
assert( gamma_move(board, 8, 1, 18) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 9, 5, 20) == 0 );
assert( gamma_busy_fields(board, 9) == 0 );
assert( gamma_move(board, 10, 16, 2) == 0 );
assert( gamma_busy_fields(board, 10) == 0 );


char* board299862667 = gamma_board(board);
assert( board299862667 != NULL );
assert( strcmp(board299862667, 
"................\n"
".8..............\n"
"................\n"
"................\n"
"................\n"
"...........5.3..\n"
"...7............\n"
"................\n"
"................\n"
"................\n"
"................\n"
"............1...\n"
"................\n"
"................\n"
"................\n"
"................\n"
"................\n"
"................\n"
"..24............\n"
"................\n") == 0);
free(board299862667);
board299862667 = NULL;
assert( gamma_move(board, 12, 1, 3) == 1 );
assert( gamma_free_fields(board, 12) == 312 );
assert( gamma_move(board, 13, 3, 13) == 0 );
assert( gamma_move(board, 14, 16, 19) == 0 );
assert( gamma_busy_fields(board, 14) == 0 );
assert( gamma_move(board, 15, 2, 2) == 1 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 5, 14, 1) == 1 );
assert( gamma_free_fields(board, 5) == 309 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 12, 20) == 0 );
assert( gamma_move(board, 9, -1, 4) == 0 );
assert( gamma_move(board, 10, -1, 11) == 0 );
assert( gamma_move(board, 11, 4, 5) == 1 );
assert( gamma_golden_move(board, 11, 8, 12) == 0 );
assert( gamma_move(board, 12, 6, 9) == 1 );
assert( gamma_busy_fields(board, 12) == 2 );
assert( gamma_move(board, 14, 2, 9) == 1 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 16, 3) == 0 );
assert( gamma_move(board, 2, 0, -1) == 0 );
assert( gamma_free_fields(board, 2) == 306 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 5, 13, 2) == 1 );
assert( gamma_move(board, 6, 10, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_free_fields(board, 8) == 303 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 11, -1, 1) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );


char* board572161437 = gamma_board(board);
assert( board572161437 != NULL );
assert( strcmp(board572161437, 
"................\n"
".8..............\n"
"................\n"
"................\n"
"................\n"
"...........5.3..\n"
"...7............\n"
"................\n"
"................\n"
"................\n"
"..14...12.........\n"
"......3.1...1...\n"
"................\n"
"................\n"
"....11...........\n"
"................\n"
".12........6.....\n"
"..15..........5..\n"
"..24..........5.\n"
"................\n") == 0);
free(board572161437);
board572161437 = NULL;
assert( gamma_move(board, 12, 10, 16) == 1 );
assert( gamma_free_fields(board, 12) == 302 );
assert( gamma_free_fields(board, 13) == 302 );
assert( gamma_move(board, 14, 3, 18) == 1 );
assert( gamma_move(board, 15, 4, 18) == 1 );
assert( gamma_move(board, 1, 8, 18) == 1 );
assert( gamma_move(board, 3, 16, 11) == 0 );
assert( gamma_move(board, 4, 12, 18) == 1 );
assert( gamma_move(board, 5, 12, 14) == 1 );
assert( gamma_move(board, 6, 11, 4) == 1 );
assert( gamma_move(board, 7, 16, 9) == 0 );
assert( gamma_move(board, 8, 8, 4) == 1 );
assert( gamma_free_fields(board, 8) == 295 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 8, 19) == 1 );
assert( gamma_move(board, 10, 11, 8) == 1 );
assert( gamma_move(board, 11, 4, 16) == 1 );
assert( gamma_move(board, 12, 2, 15) == 1 );


char* board281425145 = gamma_board(board);
assert( board281425145 != NULL );
assert( strcmp(board281425145, 
"........9.......\n"
".8.1415...1...4...\n"
"................\n"
"....11.....12.....\n"
"..12.............\n"
"...........553..\n"
"...7............\n"
"................\n"
"................\n"
"................\n"
"..14...12.........\n"
"......3.1..101...\n"
"................\n"
"................\n"
"....11...........\n"
"........8..6....\n"
".12........6.....\n"
"..15..........5..\n"
"..24..........5.\n"
"................\n") == 0);
free(board281425145);
board281425145 = NULL;
assert( gamma_move(board, 13, 1, 20) == 0 );
assert( gamma_move(board, 14, 8, 11) == 1 );
assert( gamma_move(board, 15, 14, 20) == 0 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 14, 9) == 1 );
assert( gamma_free_fields(board, 1) == 289 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 8, 18) == 0 );
assert( gamma_move(board, 6, 10, 14) == 1 );
assert( gamma_free_fields(board, 7) == 288 );
assert( gamma_move(board, 9, 14, 9) == 0 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 10, -1, 4) == 0 );
assert( gamma_move(board, 11, 8, 19) == 0 );
assert( gamma_move(board, 13, 14, 9) == 0 );
assert( gamma_busy_fields(board, 13) == 0 );
assert( gamma_move(board, 14, -1, 5) == 0 );
assert( gamma_move(board, 15, 13, -1) == 0 );


char* board240580052 = gamma_board(board);
assert( board240580052 != NULL );
assert( strcmp(board240580052, 
"........9.......\n"
".8.1415...1...4...\n"
"................\n"
"....11.....12.....\n"
"..12.............\n"
"..........6553..\n"
"...7............\n"
"................\n"
"........14.......\n"
"................\n"
"..14...12.......1.\n"
"......3.1..101...\n"
"................\n"
"................\n"
"....11...........\n"
"........8..6....\n"
".12........6.....\n"
"..15..........5..\n"
"..24..........5.\n"
"................\n") == 0);
free(board240580052);
board240580052 = NULL;
assert( gamma_move(board, 1, 2, 13) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 14, 20) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_move(board, 5, 8, 15) == 1 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 7, 15, 20) == 0 );
assert( gamma_move(board, 8, 6, 18) == 1 );
assert( gamma_golden_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 10, -1, 4) == 0 );
assert( gamma_move(board, 11, 11, -1) == 0 );
assert( gamma_move(board, 13, 16, 15) == 0 );
assert( gamma_move(board, 14, 16, -1) == 0 );
assert( gamma_move(board, 1, 13, 13) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 5, -1) == 0 );
assert( gamma_move(board, 7, 7, 18) == 1 );
assert( gamma_move(board, 8, 10, 7) == 1 );
assert( gamma_move(board, 9, 0, 6) == 1 );
assert( gamma_move(board, 11, 1, 5) == 1 );
assert( gamma_free_fields(board, 11) == 276 );
assert( gamma_move(board, 12, 13, 20) == 0 );
assert( gamma_move(board, 14, 13, 13) == 0 );
assert( gamma_free_fields(board, 14) == 276 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_free_fields(board, 2) == 275 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 10, 20) == 0 );


char* board885833039 = gamma_board(board);
assert( board885833039 != NULL );
assert( strcmp(board885833039, 
"........9.......\n"
".8.1415.871...4...\n"
"................\n"
"....11.....12.....\n"
"..12.....5.......\n"
"..........6553..\n"
"..17.........1..\n"
"................\n"
"........14.......\n"
"................\n"
"..14...12.......1.\n"
"......3.1..101...\n"
"..4.......8.....\n"
"9...............\n"
".11..11...........\n"
"........8..6....\n"
"612...4....6.....\n"
"..15...2...4..5..\n"
"..24........3.5.\n"
"................\n") == 0);
free(board885833039);
board885833039 = NULL;
assert( gamma_move(board, 7, 16, 16) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );


char* board657871578 = gamma_board(board);
assert( board657871578 != NULL );
assert( strcmp(board657871578, 
"........9.......\n"
".8.1415.871...4...\n"
"................\n"
"....11.....12.....\n"
"..12.....5.......\n"
"..........6553..\n"
"..17.........1..\n"
"................\n"
"........14.......\n"
"................\n"
"..14...12.......1.\n"
"......3.1..101...\n"
"..4.......8.....\n"
"9...............\n"
".11..11...........\n"
"........8..6....\n"
"612...4....6.....\n"
"..15...2...4..5..\n"
"..24........3.5.\n"
"................\n") == 0);
free(board657871578);
board657871578 = NULL;
assert( gamma_move(board, 8, 7, 16) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );


char* board112704446 = gamma_board(board);
assert( board112704446 != NULL );
assert( strcmp(board112704446, 
"........9.......\n"
".8.1415.871...4...\n"
"................\n"
"....11..8..12.....\n"
"..12.....5.......\n"
"..........6553..\n"
"..17.........1..\n"
"................\n"
"........14.......\n"
"................\n"
"..14...12.......1.\n"
"......3.1..101...\n"
"..4.......8.....\n"
"9...............\n"
".11..11...........\n"
"........8..6....\n"
"612...4....6.....\n"
"..15...2...4..5..\n"
"..24........3.5.\n"
"................\n") == 0);
free(board112704446);
board112704446 = NULL;
assert( gamma_move(board, 10, 4, 5) == 0 );
assert( gamma_move(board, 11, 2, 7) == 0 );
assert( gamma_move(board, 12, 3, 16) == 1 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_busy_fields(board, 13) == 0 );
assert( gamma_move(board, 1, 7, 15) == 1 );
assert( gamma_move(board, 2, 0, 17) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 14, 9) == 0 );
assert( gamma_move(board, 6, 12, 18) == 0 );
assert( gamma_move(board, 7, 15, 19) == 1 );
assert( gamma_golden_move(board, 7, 10, 6) == 0 );
assert( gamma_move(board, 9, 4, 6) == 1 );
assert( gamma_move(board, 10, 13, 13) == 0 );
assert( gamma_move(board, 11, 1, 4) == 1 );
assert( gamma_busy_fields(board, 11) == 4 );
assert( gamma_move(board, 12, 12, 12) == 1 );
assert( gamma_move(board, 13, 1, 13) == 1 );


char* board261162946 = gamma_board(board);
assert( board261162946 != NULL );
assert( strcmp(board261162946, 
"........9......7\n"
".8.1415.871...4...\n"
"2...............\n"
"...1211..8..12.....\n"
"..12....15.......\n"
"..........6553..\n"
".1317.........1..\n"
"............12...\n"
"........14.......\n"
"................\n"
"..14...12.......1.\n"
"......3.1..101...\n"
"..4.......8.....\n"
"9...9...........\n"
".11..11...........\n"
".11......8..6....\n"
"612..34....6.....\n"
"..15...2...4..5..\n"
"..24........3.5.\n"
"................\n") == 0);
free(board261162946);
board261162946 = NULL;
assert( gamma_move(board, 14, 1, -1) == 0 );
assert( gamma_free_fields(board, 14) == 264 );
assert( gamma_move(board, 15, 0, 15) == 1 );
assert( gamma_move(board, 1, 10, 17) == 1 );
assert( gamma_free_fields(board, 1) == 262 );
assert( gamma_move(board, 2, 14, 11) == 1 );
assert( gamma_move(board, 3, 4, 12) == 1 );
assert( gamma_free_fields(board, 3) == 260 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_move(board, 6, 3, 10) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 13, 17) == 1 );
assert( gamma_busy_fields(board, 8) == 5 );


char* board331891228 = gamma_board(board);
assert( board331891228 != NULL );
assert( strcmp(board331891228, 
"........9......7\n"
".8.1415.871...4...\n"
"2.........1..7..\n"
"...1211..8..12.....\n"
"15.12....15.......\n"
"..........6553..\n"
".1317.........1..\n"
"....3.......12...\n"
"........14.....2.\n"
"...6............\n"
"..14...12.......1.\n"
"......3.1..101...\n"
"..4.......8.....\n"
"9...9....4......\n"
".11..11...........\n"
".11......8..6....\n"
"612..34....6.....\n"
"..15...2...4..5..\n"
"..24........3.5.\n"
"................\n") == 0);
free(board331891228);
board331891228 = NULL;
assert( gamma_move(board, 9, 4, 16) == 0 );
assert( gamma_move(board, 10, 1, 1) == 1 );
assert( gamma_busy_fields(board, 10) == 2 );


char* board554047792 = gamma_board(board);
assert( board554047792 != NULL );
assert( strcmp(board554047792, 
"........9......7\n"
".8.1415.871...4...\n"
"2.........1..7..\n"
"...1211..8..12.....\n"
"15.12....15.......\n"
"..........6553..\n"
".1317.........1..\n"
"....3.......12...\n"
"........14.....2.\n"
"...6............\n"
"..14...12.......1.\n"
"......3.1..101...\n"
"..4.......8.....\n"
"9...9....4......\n"
".11..11...........\n"
".11......8..6....\n"
"612..34....6.....\n"
"..15...2...4..5..\n"
".1024........3.5.\n"
"................\n") == 0);
free(board554047792);
board554047792 = NULL;
assert( gamma_move(board, 11, 7, 6) == 1 );
assert( gamma_busy_fields(board, 11) == 5 );


char* board309915033 = gamma_board(board);
assert( board309915033 != NULL );
assert( strcmp(board309915033, 
"........9......7\n"
".8.1415.871...4...\n"
"2.........1..7..\n"
"...1211..8..12.....\n"
"15.12....15.......\n"
"..........6553..\n"
".1317.........1..\n"
"....3.......12...\n"
"........14.....2.\n"
"...6............\n"
"..14...12.......1.\n"
"......3.1..101...\n"
"..4.......8.....\n"
"9...9..11.4......\n"
".11..11...........\n"
".11......8..6....\n"
"612..34....6.....\n"
"..15...2...4..5..\n"
".1024........3.5.\n"
"................\n") == 0);
free(board309915033);
board309915033 = NULL;
assert( gamma_move(board, 13, 11, 1) == 1 );
assert( gamma_move(board, 14, 3, 2) == 1 );
assert( gamma_move(board, 15, 8, 13) == 1 );
assert( gamma_move(board, 1, 8, 12) == 1 );
assert( gamma_move(board, 3, 3, 11) == 1 );
assert( gamma_move(board, 6, 0, 14) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 9, 13) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 16, 14) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 9, 9, 8) == 1 );
assert( gamma_move(board, 10, 7, 0) == 1 );
assert( gamma_free_fields(board, 11) == 246 );


char* board299879711 = gamma_board(board);
assert( board299879711 != NULL );
assert( strcmp(board299879711, 
"........9......7\n"
".8.1415.871...4...\n"
"2.........1..7..\n"
"...1211..8..12.....\n"
"15.12....15.......\n"
"6.........6553..\n"
".1317....157...1..\n"
"....3...1...12...\n"
"...3....14.....2.\n"
"...6............\n"
"..14...12.......1.\n"
"......3.19.101...\n"
"..4.......8.....\n"
"9...9..11.4......\n"
".11..11...........\n"
".11......8..6....\n"
"612..34....6.....\n"
"..1514..2...4..5..\n"
".1024.......133.5.\n"
".......10........\n") == 0);
free(board299879711);
board299879711 = NULL;
assert( gamma_move(board, 12, 16, 12) == 0 );
assert( gamma_move(board, 13, 0, 11) == 1 );
assert( gamma_move(board, 14, 12, 6) == 1 );
assert( gamma_move(board, 15, -1, 16) == 0 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 13, 13) == 0 );
assert( gamma_move(board, 2, -1, 13) == 0 );
assert( gamma_free_fields(board, 2) == 244 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, -1) == 0 );
assert( gamma_move(board, 9, 5, 14) == 1 );
assert( gamma_move(board, 10, 12, 17) == 1 );
assert( gamma_move(board, 11, 14, 15) == 1 );
assert( gamma_move(board, 12, 7, -1) == 0 );
assert( gamma_move(board, 13, 10, 6) == 1 );
assert( gamma_move(board, 14, 13, 15) == 1 );


char* board925754281 = gamma_board(board);
assert( board925754281 != NULL );
assert( strcmp(board925754281, 
"........9......7\n"
".8.1415.871...4...\n"
"2.........1.107..\n"
"...1211..8..12.....\n"
"15.12....15....1411.\n"
"6....9....6553..\n"
".1317....157...1..\n"
"....3...1...12...\n"
"13..3....14.....2.\n"
"...6............\n"
"..14...12.......1.\n"
"......3.19.101...\n"
"..43......8.....\n"
"9...9..11.413.14...\n"
".11..11...........\n"
".11......8..6....\n"
"612..34..5.6.....\n"
"..1514..2...4..5..\n"
".1024.......133.5.\n"
".......10........\n") == 0);
free(board925754281);
board925754281 = NULL;
assert( gamma_move(board, 15, 12, 18) == 0 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 4, 16, 5) == 0 );
assert( gamma_move(board, 6, 2, 14) == 1 );
assert( gamma_move(board, 7, 6, 14) == 1 );
assert( gamma_move(board, 8, 4, 15) == 1 );
assert( gamma_move(board, 9, 14, 1) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 11, 8) == 0 );
assert( gamma_move(board, 11, 1, 1) == 0 );
assert( gamma_move(board, 12, -1, 12) == 0 );
assert( gamma_busy_fields(board, 12) == 6 );
assert( gamma_move(board, 14, 8, 12) == 0 );
assert( gamma_move(board, 15, 3, 11) == 0 );
assert( gamma_move(board, 1, 16, -1) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 9, 20) == 0 );
assert( gamma_free_fields(board, 4) == 234 );
assert( gamma_move(board, 5, 12, 5) == 1 );
assert( gamma_move(board, 7, 9, -1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 6 );


char* board348450812 = gamma_board(board);
assert( board348450812 != NULL );
assert( strcmp(board348450812, 
"........9......7\n"
".8.1415.871...4...\n"
"2.........1.107..\n"
"...1211..8..12.....\n"
"15.12.8..15....1411.\n"
"6.6..97...6553..\n"
".1317....157...1..\n"
"....3...1...12...\n"
"13..3....14.....2.\n"
"...6............\n"
"..14...12.......1.\n"
"......3.19.101...\n"
"..43......8.....\n"
"9...9..11.413.14...\n"
".11..11.......5...\n"
".11......8..6....\n"
"612..34..5.6.....\n"
"..1514..2...4..5..\n"
".1024.......133.5.\n"
".......10........\n") == 0);
free(board348450812);
board348450812 = NULL;
assert( gamma_move(board, 9, 13, 5) == 1 );
assert( gamma_move(board, 10, 1, 3) == 0 );
assert( gamma_busy_fields(board, 10) == 4 );
assert( gamma_move(board, 11, 10, 0) == 1 );
assert( gamma_move(board, 12, 2, 17) == 1 );
assert( gamma_free_fields(board, 12) == 230 );
assert( gamma_move(board, 13, 12, 14) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 15, 2, 6) == 1 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 16, 20) == 0 );
assert( gamma_move(board, 3, 16, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 6, 11) == 1 );
assert( gamma_free_fields(board, 4) == 227 );
assert( gamma_move(board, 5, 12, 4) == 1 );
assert( gamma_move(board, 6, 9, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 15, 8) == 1 );
assert( gamma_move(board, 8, 0, -1) == 0 );
assert( gamma_move(board, 9, 11, 17) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 15, 13) == 1 );
assert( gamma_move(board, 11, -1, 9) == 0 );
assert( gamma_move(board, 1, 10, -1) == 0 );
assert( gamma_move(board, 2, -1, 16) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 16, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 10) == 1 );
assert( gamma_move(board, 5, 0, 7) == 1 );
assert( gamma_move(board, 6, 8, 18) == 0 );
assert( gamma_move(board, 7, 12, 12) == 0 );
assert( gamma_move(board, 9, 1, 0) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 6, 16) == 1 );
assert( gamma_move(board, 11, 0, 4) == 1 );
assert( gamma_busy_fields(board, 12) == 7 );
assert( gamma_move(board, 13, 4, 20) == 0 );
assert( gamma_move(board, 14, 14, 2) == 1 );
assert( gamma_move(board, 1, 12, 17) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );


char* board885044970 = gamma_board(board);
assert( board885044970 != NULL );
assert( strcmp(board885044970, 
"........9......7\n"
".8.1415.871...4...\n"
"2.12.......19107..\n"
"...1211.108..12.....\n"
"15.12.8..15....1411.\n"
"6.6..97...6553..\n"
".1317....157...1.10\n"
"....3...1...12...\n"
"13..3..4.14.....2.\n"
"...6...4........\n"
"..14...12..6....1.\n"
".1....3.19.101..7\n"
"5.43......8.....\n"
"9.15.9..11.413.14...\n"
".11..11.......59..\n"
"1111......8..65...\n"
"612..34..5.6.....\n"
"..1514..2...4..514.\n"
".1024.......133.5.\n"
".9.....10..11.....\n") == 0);
free(board885044970);
board885044970 = NULL;
assert( gamma_move(board, 3, 4, 16) == 0 );
assert( gamma_move(board, 4, 12, 17) == 0 );
assert( gamma_golden_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 5, 14, 3) == 1 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 6, -1) == 0 );
assert( gamma_free_fields(board, 7) == 215 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_free_fields(board, 8) == 215 );
assert( gamma_move(board, 9, 1, -1) == 0 );
assert( gamma_free_fields(board, 9) == 215 );
assert( gamma_move(board, 10, 16, 5) == 0 );
assert( gamma_move(board, 12, 13, 11) == 1 );
assert( gamma_busy_fields(board, 12) == 8 );
assert( gamma_move(board, 13, 16, 2) == 0 );
assert( gamma_move(board, 14, 5, -1) == 0 );
assert( gamma_move(board, 15, 6, -1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 16) == 1 );
assert( gamma_move(board, 4, 9, 16) == 1 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_free_fields(board, 7) == 212 );
assert( gamma_move(board, 8, 10, 19) == 1 );
assert( gamma_free_fields(board, 8) == 211 );
assert( gamma_move(board, 9, 11, 3) == 1 );
assert( gamma_move(board, 11, 11, 7) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 7, 18) == 0 );
assert( gamma_move(board, 13, 12, 10) == 1 );
assert( gamma_move(board, 14, 3, 11) == 0 );
assert( gamma_free_fields(board, 14) == 208 );
assert( gamma_busy_fields(board, 15) == 5 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 16, 2) == 0 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_move(board, 3, 15, 19) == 0 );
assert( gamma_free_fields(board, 3) == 207 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 16, 1) == 0 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 6, 10, 4) == 1 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 8, 16, 10) == 0 );
assert( gamma_move(board, 9, 9, 17) == 1 );
assert( gamma_move(board, 11, 3, -1) == 0 );
assert( gamma_golden_move(board, 11, 5, 5) == 0 );
assert( gamma_move(board, 12, 7, 18) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 0, 2) == 1 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 6, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_free_fields(board, 2) == 202 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 11) == 0 );
assert( gamma_move(board, 4, 11, 12) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 12, 2) == 1 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 8, 10, 16) == 0 );
assert( gamma_move(board, 9, 6, -1) == 0 );
assert( gamma_move(board, 11, 11, -1) == 0 );
assert( gamma_busy_fields(board, 11) == 9 );
assert( gamma_move(board, 13, 14, 8) == 1 );
assert( gamma_move(board, 14, -1, 9) == 0 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_free_fields(board, 1) == 197 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 13, 8) == 0 );
assert( gamma_move(board, 3, 16, 13) == 0 );
assert( gamma_golden_move(board, 3, 16, 7) == 0 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 5, 9, 20) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 10, 14, 1) == 0 );
assert( gamma_move(board, 11, 16, 10) == 0 );
assert( gamma_move(board, 12, 2, 4) == 1 );
assert( gamma_busy_fields(board, 12) == 9 );
assert( gamma_move(board, 13, 11, 16) == 1 );
assert( gamma_move(board, 14, 7, 14) == 1 );
assert( gamma_free_fields(board, 14) == 192 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 2, 16) == 1 );
assert( gamma_golden_move(board, 2, 9, 6) == 1 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 6, 13, 17) == 0 );
assert( gamma_free_fields(board, 6) == 191 );
assert( gamma_golden_move(board, 6, 5, 13) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_move(board, 10, 13, 14) == 0 );
assert( gamma_move(board, 11, 12, 13) == 1 );
assert( gamma_move(board, 13, 2, 18) == 1 );
assert( gamma_move(board, 14, 2, 9) == 0 );
assert( gamma_move(board, 15, 4, 2) == 1 );
assert( gamma_move(board, 1, 16, 16) == 0 );
assert( gamma_move(board, 2, -1, 16) == 0 );
assert( gamma_move(board, 3, 8, 19) == 0 );
assert( gamma_move(board, 4, 15, 5) == 1 );
assert( gamma_move(board, 5, 3, 18) == 0 );
assert( gamma_golden_move(board, 7, 16, 2) == 0 );
assert( gamma_move(board, 8, 11, 13) == 1 );
assert( gamma_move(board, 9, 12, 12) == 0 );
assert( gamma_move(board, 11, 13, 2) == 0 );
assert( gamma_move(board, 12, 1, 0) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 16, 13) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 12, 11) == 1 );
assert( gamma_move(board, 15, 0, 14) == 0 );
assert( gamma_free_fields(board, 15) == 185 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 7, 13) == 1 );
assert( gamma_move(board, 3, 14, 14) == 1 );
assert( gamma_move(board, 4, 1, 18) == 0 );
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 7, 2, -1) == 0 );
assert( gamma_move(board, 8, -1, 19) == 0 );
assert( gamma_move(board, 9, 15, 18) == 1 );
assert( gamma_move(board, 10, 15, 20) == 0 );
assert( gamma_move(board, 11, 13, 20) == 0 );
assert( gamma_busy_fields(board, 13) == 8 );
assert( gamma_free_fields(board, 13) == 182 );
assert( gamma_move(board, 14, 4, 10) == 1 );
assert( gamma_busy_fields(board, 15) == 6 );
assert( gamma_free_fields(board, 15) == 181 );
assert( gamma_move(board, 1, 7, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 12) == 1 );
assert( gamma_free_fields(board, 3) == 180 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_move(board, 7, 5, 9) == 1 );
assert( gamma_golden_move(board, 7, 10, 12) == 0 );
assert( gamma_move(board, 8, 9, 10) == 1 );
assert( gamma_golden_move(board, 8, 13, 12) == 0 );
assert( gamma_move(board, 9, 14, 8) == 0 );
assert( gamma_move(board, 10, 10, 1) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 6, 2) == 0 );
assert( gamma_move(board, 12, 13, 14) == 0 );
assert( gamma_move(board, 13, 1, 12) == 1 );
assert( gamma_move(board, 14, 0, 2) == 0 );


char* board163545707 = gamma_board(board);
assert( board163545707 != NULL );
assert( strcmp(board163545707, 
"........9.8....7\n"
".8131415.871...4..9\n"
"2.12......919107..\n"
".321211.108.41213....\n"
"15.12.8..15....1411.\n"
"6.6..9714..65533.\n"
".1317...2157.8111.10\n"
".13323...1..412...\n"
"13..3..4.14...14122.\n"
"...614..4.8..13...\n"
".2144.7121.6....1.\n"
".1....3.19.101.137\n"
"5.43......811....\n"
"4.15.9.511.213.14...\n"
".11..11.......59.4\n"
"111112.....8.665...\n"
"612..34..5.69..5.\n"
"14.151415.2...426514.\n"
".1024......10133.5.\n"
".9.7...10..11.....\n") == 0);
free(board163545707);
board163545707 = NULL;
assert( gamma_move(board, 15, 5, 8) == 1 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_move(board, 1, 6, 12) == 1 );
assert( gamma_move(board, 2, -1, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 9, 11) == 1 );
assert( gamma_move(board, 6, 5, 7) == 1 );
assert( gamma_move(board, 8, 5, 20) == 0 );
assert( gamma_move(board, 9, 4, 20) == 0 );
assert( gamma_busy_fields(board, 10) == 7 );
assert( gamma_move(board, 11, 10, -1) == 0 );
assert( gamma_busy_fields(board, 11) == 10 );
assert( gamma_move(board, 13, 16, 6) == 0 );
assert( gamma_move(board, 14, 1, -1) == 0 );
assert( gamma_move(board, 15, -1, 11) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 3, 12, -1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 7, 11, -1) == 0 );
assert( gamma_move(board, 9, 8, 16) == 1 );
assert( gamma_move(board, 10, 0, 6) == 0 );
assert( gamma_move(board, 11, 5, -1) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 7, 2) == 1 );
assert( gamma_move(board, 15, 1, 19) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );


char* board512043265 = gamma_board(board);
assert( board512043265 != NULL );
assert( strcmp(board512043265, 
".15......9.8....7\n"
".8131415.871...4..9\n"
"2.12......919107..\n"
".321211.108941213....\n"
"15.12.8..15....1411.\n"
"6.6..9714..65533.\n"
".1317...2157.8111.10\n"
".13323.1.1..412...\n"
"13..3..4.145..14122.\n"
"...614..4.8..13...\n"
".2144.7121.6....1.\n"
".1...153.19.101.137\n"
"5.43.6....811....\n"
"4.15.9.511.213.14...\n"
".11..11.......59.4\n"
"111112.....8.665...\n"
"612..34..5.69..5.\n"
"14.151415.212..426514.\n"
".1024......10133.5.\n"
".9.7...10..11.....\n") == 0);
free(board512043265);
board512043265 = NULL;
assert( gamma_move(board, 4, 15, 0) == 0 );
assert( gamma_move(board, 5, 1, 18) == 0 );
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_golden_move(board, 6, 19, 8) == 0 );
assert( gamma_move(board, 8, 16, 16) == 0 );
assert( gamma_move(board, 9, -1, 6) == 0 );
assert( gamma_busy_fields(board, 9) == 11 );
assert( gamma_free_fields(board, 9) == 169 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 0, 13) == 1 );
assert( gamma_move(board, 11, 16, 20) == 0 );
assert( gamma_move(board, 12, 1, 19) == 0 );
assert( gamma_move(board, 14, -1, 9) == 0 );
assert( gamma_move(board, 15, -1, 0) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 3, 15, 15) == 1 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 6, -1) == 0 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 11, 16, 7) == 0 );
assert( gamma_golden_move(board, 11, 19, 10) == 0 );
assert( gamma_move(board, 12, 0, 13) == 0 );
assert( gamma_move(board, 13, 9, 5) == 1 );
assert( gamma_busy_fields(board, 13) == 10 );
assert( gamma_move(board, 14, 12, 2) == 0 );
assert( gamma_move(board, 15, 12, 13) == 0 );
assert( gamma_move(board, 2, 6, 19) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, -1, 19) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_move(board, 7, 10, 8) == 1 );
assert( gamma_free_fields(board, 7) == 163 );
assert( gamma_move(board, 8, 4, 20) == 0 );
assert( gamma_move(board, 9, 0, 9) == 1 );
assert( gamma_free_fields(board, 10) == 162 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 11, 16, 12) == 0 );
assert( gamma_busy_fields(board, 11) == 10 );
assert( gamma_move(board, 12, 8, 8) == 0 );
assert( gamma_move(board, 13, 6, 19) == 0 );
assert( gamma_free_fields(board, 13) == 162 );
assert( gamma_move(board, 14, 12, 15) == 1 );
assert( gamma_move(board, 15, 7, 12) == 1 );
assert( gamma_golden_possible(board, 15) == 1 );
assert( gamma_golden_move(board, 1, 16, 3) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 12, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_golden_move(board, 5, 5, 12) == 0 );
assert( gamma_move(board, 7, 3, 19) == 1 );
assert( gamma_busy_fields(board, 7) == 11 );
assert( gamma_free_fields(board, 7) == 159 );
assert( gamma_move(board, 8, 8, 7) == 1 );
assert( gamma_move(board, 9, -1, 15) == 0 );
assert( gamma_move(board, 10, 2, 20) == 0 );
assert( gamma_move(board, 11, 0, 5) == 1 );
assert( gamma_move(board, 12, 14, -1) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 4, 14) == 1 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 0, 4) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 12, 19) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 4, -1, 5) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 15, 13) == 0 );
assert( gamma_move(board, 7, 11, -1) == 0 );
assert( gamma_move(board, 8, 11, 11) == 1 );
assert( gamma_free_fields(board, 8) == 153 );
assert( gamma_move(board, 9, 7, 15) == 0 );
assert( gamma_busy_fields(board, 9) == 12 );
assert( gamma_golden_move(board, 9, 11, 11) == 0 );
assert( gamma_move(board, 10, 3, 17) == 1 );
assert( gamma_move(board, 11, 2, 2) == 0 );


char* board931754949 = gamma_board(board);
assert( board931754949 != NULL );
assert( strcmp(board931754949, 
".15.7..2.9.8.15..7\n"
".8131415.871...4..9\n"
"2.1210.....919107..\n"
".321211.108941213....\n"
"15.12.8..15...1414113\n"
"6.6.139714..65533.\n"
"101317...2157.8111.10\n"
".13323.1151..412...\n"
"13..3..4.145.814122.\n"
"...614..4.8..13...\n"
"92144.7121.6....1.\n"
".1...153.197101.137\n"
"5.43.66.8.811....\n"
"4.15.9.511.213.14...\n"
"1111..11....13..59.4\n"
"111112.....8.665...\n"
"612..34..5.69..5.\n"
"14.151415.212..426514.\n"
".1024.5....10133.5.\n"
".9.7...10..11.....\n") == 0);
free(board931754949);
board931754949 = NULL;
assert( gamma_move(board, 12, 0, 11) == 0 );
assert( gamma_golden_possible(board, 12) == 1 );
assert( gamma_move(board, 13, 16, 17) == 0 );
assert( gamma_move(board, 14, 0, 12) == 1 );
assert( gamma_free_fields(board, 14) == 18 );
assert( gamma_move(board, 15, 6, 2) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 16, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 14, 8) == 0 );
assert( gamma_free_fields(board, 7) == 151 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 13, 6) == 1 );
assert( gamma_golden_move(board, 8, 16, 3) == 0 );
assert( gamma_move(board, 9, 1, 16) == 0 );
assert( gamma_free_fields(board, 9) == 20 );
assert( gamma_busy_fields(board, 10) == 9 );
assert( gamma_move(board, 11, 2, -1) == 0 );
assert( gamma_move(board, 12, 9, 16) == 0 );
assert( gamma_move(board, 13, 4, 17) == 1 );
assert( gamma_busy_fields(board, 13) == 12 );
assert( gamma_move(board, 14, 5, 7) == 0 );
assert( gamma_move(board, 15, 5, 15) == 1 );
assert( gamma_move(board, 1, -1, 5) == 0 );
assert( gamma_move(board, 2, 11, 6) == 1 );
assert( gamma_move(board, 3, -1, 18) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 15, 3) == 1 );
assert( gamma_move(board, 6, 13, 15) == 0 );
assert( gamma_golden_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 8, 5, 18) == 1 );
assert( gamma_move(board, 10, 13, 12) == 1 );
assert( gamma_busy_fields(board, 10) == 10 );
assert( gamma_move(board, 12, 10, 16) == 0 );
assert( gamma_free_fields(board, 12) == 144 );
assert( gamma_golden_move(board, 12, 7, 10) == 1 );
assert( gamma_move(board, 13, 0, 13) == 0 );
assert( gamma_move(board, 1, 13, 18) == 0 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 3, 14, 16) == 1 );
assert( gamma_move(board, 5, 6, 18) == 0 );
assert( gamma_move(board, 6, 14, 0) == 1 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_free_fields(board, 7) == 24 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_golden_move(board, 9, 8, 12) == 0 );
assert( gamma_move(board, 10, 14, -1) == 0 );
assert( gamma_move(board, 13, 15, 10) == 1 );
assert( gamma_busy_fields(board, 13) == 13 );
assert( gamma_move(board, 14, 13, 20) == 0 );
assert( gamma_move(board, 15, 15, 12) == 1 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 11) == 1 );
assert( gamma_move(board, 5, 14, 3) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 7, 13, -1) == 0 );
assert( gamma_move(board, 8, 15, 15) == 0 );
assert( gamma_move(board, 9, 7, 13) == 0 );


char* board736080466 = gamma_board(board);
assert( board736080466 != NULL );
assert( strcmp(board736080466, 
".15.7..2.9.8.15..7\n"
".81314158871...4..9\n"
"2.121013....919107..\n"
".321211.108941213..3.\n"
"15.12.815.15...1414113\n"
"6.6.139714..65533.\n"
"101317...2157.8111.10\n"
"1413323.1151..41210.15\n"
"13..3..4.1454814122.\n"
"...614..12.8..13..13\n"
"92144.7121.6....1.\n"
".1...153.197101.137\n"
"5.43.66.8.811....\n"
"4.15.9.511.2132148..\n"
"1111..11...713..59.4\n"
"111112.....8.665...\n"
"612..34..5.69..55\n"
"14.151415.212..426514.\n"
".1024.5....10133.5.\n"
".9.7...10..11...6.\n") == 0);
free(board736080466);
board736080466 = NULL;
assert( gamma_move(board, 12, 3, 13) == 0 );
assert( gamma_move(board, 13, 4, 6) == 0 );
assert( gamma_move(board, 14, 13, 14) == 0 );
assert( gamma_move(board, 15, 4, 15) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 3, -1, 8) == 0 );
assert( gamma_golden_move(board, 3, 18, 6) == 0 );
assert( gamma_move(board, 4, 16, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 13, 8) == 1 );
assert( gamma_move(board, 6, 10, 14) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, -1, 15) == 0 );
assert( gamma_move(board, 11, 8, -1) == 0 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 14, 15) == 0 );
assert( gamma_move(board, 13, 13, 16) == 0 );
assert( gamma_move(board, 14, -1, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 14) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 5, -1, 5) == 0 );
assert( gamma_free_fields(board, 7) == 24 );
assert( gamma_move(board, 8, 12, 19) == 0 );
assert( gamma_move(board, 9, 11, 11) == 0 );
assert( gamma_busy_fields(board, 9) == 12 );
assert( gamma_busy_fields(board, 10) == 10 );
assert( gamma_move(board, 11, 4, 8) == 1 );
assert( gamma_move(board, 13, 5, 13) == 0 );
assert( gamma_move(board, 14, 10, 3) == 0 );
assert( gamma_free_fields(board, 14) == 16 );
assert( gamma_move(board, 15, 15, 20) == 0 );
assert( gamma_move(board, 1, 14, 18) == 0 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 3, 14, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 16, 1) == 0 );
assert( gamma_move(board, 6, 0, 18) == 1 );
assert( gamma_move(board, 7, 5, 20) == 0 );
assert( gamma_move(board, 9, 0, -1) == 0 );
assert( gamma_move(board, 10, 7, 14) == 0 );
assert( gamma_move(board, 12, 5, 7) == 0 );
assert( gamma_free_fields(board, 12) == 135 );
assert( gamma_move(board, 13, 9, 14) == 0 );
assert( gamma_golden_possible(board, 13) == 1 );
assert( gamma_move(board, 14, 14, 6) == 0 );
assert( gamma_golden_possible(board, 14) == 1 );
assert( gamma_move(board, 15, 8, 13) == 0 );


char* board426691257 = gamma_board(board);
assert( board426691257 != NULL );
assert( strcmp(board426691257, 
".15.7..2.9.8.15..7\n"
"681314158871...4..9\n"
"2.121013....919107..\n"
".321211.108941213..3.\n"
"15.12.815.15...1414113\n"
"6.6.139714..65533.\n"
"101317...2157.8111.10\n"
"1413323.1151..41210.15\n"
"13..3..4.1454814122.\n"
"...614..12.8..13..13\n"
"92144.7121.6....1.\n"
".1..11153.1971015137\n"
"5.43.66.8.811....\n"
"4.15.9.511.2132148..\n"
"1111..11...713..59.4\n"
"111112.....8.665...\n"
"612..34..5.69..55\n"
"14.151415.212..426514.\n"
".1024.5....10133.5.\n"
".9.7...10..11...6.\n") == 0);
free(board426691257);
board426691257 = NULL;
assert( gamma_move(board, 2, 2, 19) == 0 );
assert( gamma_golden_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 4, 5, 19) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 7, 13, -1) == 0 );


char* board361580798 = gamma_board(board);
assert( board361580798 != NULL );
assert( strcmp(board361580798, 
".15.7..2.9.8.15..7\n"
"681314158871...4..9\n"
"2.121013....919107..\n"
".321211.108941213..3.\n"
"15.12.815.15...1414113\n"
"6.6.139714..65533.\n"
"101317...2157.8111.10\n"
"1413323.1151..41210.15\n"
"13..3..4.1454814122.\n"
"...614..12.8..13..13\n"
"92144.7121.6....1.\n"
".1..11153.1971015137\n"
"5.43.66.8.811....\n"
"4.15.9.511.2132148..\n"
"1111..11...713..59.4\n"
"111112.....8.665...\n"
"612..34..5.69..55\n"
"14.151415.212..426514.\n"
".1024.5....10133.5.\n"
".9.7...10..11...6.\n") == 0);
free(board361580798);
board361580798 = NULL;
assert( gamma_move(board, 8, 15, 9) == 0 );


char* board959999545 = gamma_board(board);
assert( board959999545 != NULL );
assert( strcmp(board959999545, 
".15.7..2.9.8.15..7\n"
"681314158871...4..9\n"
"2.121013....919107..\n"
".321211.108941213..3.\n"
"15.12.815.15...1414113\n"
"6.6.139714..65533.\n"
"101317...2157.8111.10\n"
"1413323.1151..41210.15\n"
"13..3..4.1454814122.\n"
"...614..12.8..13..13\n"
"92144.7121.6....1.\n"
".1..11153.1971015137\n"
"5.43.66.8.811....\n"
"4.15.9.511.2132148..\n"
"1111..11...713..59.4\n"
"111112.....8.665...\n"
"612..34..5.69..55\n"
"14.151415.212..426514.\n"
".1024.5....10133.5.\n"
".9.7...10..11...6.\n") == 0);
free(board959999545);
board959999545 = NULL;
assert( gamma_move(board, 9, 15, 15) == 0 );
assert( gamma_busy_fields(board, 10) == 10 );
assert( gamma_free_fields(board, 10) == 135 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 12, 4, 15) == 0 );
assert( gamma_move(board, 13, 7, 15) == 0 );
assert( gamma_move(board, 14, 8, 17) == 0 );
assert( gamma_move(board, 15, 11, 20) == 0 );
assert( gamma_free_fields(board, 15) == 20 );
assert( gamma_move(board, 1, 7, 20) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 5, 4, 14) == 0 );
assert( gamma_move(board, 7, 10, 19) == 0 );
assert( gamma_move(board, 8, 12, 5) == 0 );
assert( gamma_move(board, 9, 3, -1) == 0 );
assert( gamma_busy_fields(board, 9) == 12 );
assert( gamma_move(board, 10, 12, 14) == 0 );
assert( gamma_move(board, 11, 8, 3) == 0 );
assert( gamma_move(board, 12, 12, 20) == 0 );
assert( gamma_move(board, 13, 14, 1) == 0 );
assert( gamma_move(board, 14, 6, 11) == 0 );
assert( gamma_free_fields(board, 14) == 16 );
assert( gamma_free_fields(board, 15) == 20 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 14, 5) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 5, 15, 12) == 0 );
assert( gamma_move(board, 6, 12, 17) == 0 );
assert( gamma_free_fields(board, 6) == 135 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 12, 8) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 9, 3) == 0 );
assert( gamma_free_fields(board, 10) == 135 );
assert( gamma_move(board, 11, 0, 1) == 1 );
assert( gamma_golden_possible(board, 11) == 1 );
assert( gamma_move(board, 12, 12, 20) == 0 );
assert( gamma_move(board, 13, 13, 16) == 0 );
assert( gamma_busy_fields(board, 13) == 13 );
assert( gamma_move(board, 14, 4, 20) == 0 );
assert( gamma_free_fields(board, 14) == 15 );


char* board189461854 = gamma_board(board);
assert( board189461854 != NULL );
assert( strcmp(board189461854, 
".15.7..2.9.8.15..7\n"
"681314158871...4..9\n"
"2.121013....919107..\n"
".321211.108941213..3.\n"
"15.12.815.15...1414113\n"
"6.6.139714..65533.\n"
"101317...2157.8111.10\n"
"1413323.1151..41210.15\n"
"13..3..4.1454814122.\n"
"...614..12.8..13..13\n"
"92144.7121.6....1.\n"
".1..11153.1971015137\n"
"5.43.66.8.811....\n"
"4.15.9.511.2132148..\n"
"1111..11...713..59.4\n"
"111112.....8.665...\n"
"612..34..5.69..55\n"
"14.151415.212..426514.\n"
"111024.5....10133.5.\n"
".9.7...10..11...6.\n") == 0);
free(board189461854);
board189461854 = NULL;
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_golden_move(board, 4, 19, 15) == 0 );
assert( gamma_move(board, 5, 1, 17) == 0 );
assert( gamma_move(board, 6, 10, 20) == 0 );
assert( gamma_move(board, 7, 2, -1) == 0 );
assert( gamma_move(board, 8, 16, 20) == 0 );
assert( gamma_move(board, 10, 14, 8) == 0 );


gamma_delete(board);

    return 0;
}
