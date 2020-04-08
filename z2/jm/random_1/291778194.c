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
uuid: 291778194
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(18, 19, 10, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 15, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 6) == 1 );
assert( gamma_free_fields(board, 2) == 340 );
assert( gamma_move(board, 3, 17, 2) == 1 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_move(board, 5, -1, 9) == 0 );
assert( gamma_golden_move(board, 5, 4, 15) == 0 );
assert( gamma_move(board, 6, 9, 10) == 1 );
assert( gamma_free_fields(board, 7) == 337 );
assert( gamma_move(board, 8, 11, 17) == 1 );
assert( gamma_move(board, 9, 12, 5) == 1 );
assert( gamma_busy_fields(board, 9) == 1 );
assert( gamma_move(board, 10, 11, 9) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_free_fields(board, 1) == 333 );
assert( gamma_golden_move(board, 1, 17, 11) == 0 );
assert( gamma_move(board, 2, 18, 18) == 0 );
assert( gamma_move(board, 4, 12, 0) == 1 );
assert( gamma_move(board, 5, 16, 0) == 1 );
assert( gamma_move(board, 6, 4, 11) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board816725928 = gamma_board(board);
assert( board816725928 != NULL );
assert( strcmp(board816725928, 
"..................\n"
"...........8......\n"
"..................\n"
"..................\n"
"..................\n"
"..................\n"
"..................\n"
"....6.............\n"
".........6........\n"
"...........10......\n"
"..................\n"
"..................\n"
"..............2...\n"
"............9.....\n"
"............4..1..\n"
".....1............\n"
".................3\n"
"..................\n"
"............4...5.\n") == 0);
free(board816725928);
board816725928 = NULL;
assert( gamma_move(board, 8, 7, 1) == 1 );
assert( gamma_free_fields(board, 8) == 329 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 16, 15) == 1 );
assert( gamma_busy_fields(board, 9) == 2 );
assert( gamma_move(board, 10, 10, 0) == 1 );
assert( gamma_free_fields(board, 10) == 327 );
assert( gamma_free_fields(board, 1) == 327 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_move(board, 3, 6, 18) == 1 );
assert( gamma_move(board, 4, -1, 19) == 0 );
assert( gamma_free_fields(board, 4) == 325 );
assert( gamma_move(board, 5, 6, 14) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 18, 5) == 0 );
assert( gamma_move(board, 8, 10, 11) == 1 );
assert( gamma_move(board, 9, 12, 10) == 1 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 10, 13) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 4, -1, 14) == 0 );
assert( gamma_free_fields(board, 4) == 320 );
assert( gamma_move(board, 7, 15, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 8, 18, 6) == 0 );
assert( gamma_free_fields(board, 8) == 319 );
assert( gamma_move(board, 9, 0, 1) == 1 );


char* board706451423 = gamma_board(board);
assert( board706451423 != NULL );
assert( strcmp(board706451423, 
"......3...........\n"
"...........8......\n"
"..................\n"
"................9.\n"
"......5...........\n"
"..........1.......\n"
"..................\n"
"....6.....8.......\n"
".........6..9.....\n"
"...........10......\n"
"..................\n"
"..................\n"
"..............27..\n"
"............9.....\n"
".........2..4..1..\n"
".....1......2.....\n"
".................3\n"
"9......8..........\n"
"..........10.4...5.\n") == 0);
free(board706451423);
board706451423 = NULL;
assert( gamma_move(board, 10, 16, 5) == 1 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 18, 12) == 0 );
assert( gamma_move(board, 4, 15, 12) == 1 );
assert( gamma_move(board, 6, 17, 9) == 1 );
assert( gamma_move(board, 7, 6, 14) == 0 );
assert( gamma_move(board, 8, 10, 17) == 1 );
assert( gamma_busy_fields(board, 8) == 4 );
assert( gamma_move(board, 9, 14, 13) == 1 );
assert( gamma_move(board, 10, 9, 15) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_free_fields(board, 1) == 310 );
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_move(board, 3, 12, 7) == 1 );
assert( gamma_move(board, 5, 10, -1) == 0 );
assert( gamma_move(board, 6, 0, 16) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board681108690 = gamma_board(board);
assert( board681108690 != NULL );
assert( strcmp(board681108690, 
"......3...........\n"
"..........88......\n"
"6.................\n"
".........10......9.\n"
"......5...........\n"
"..........1...9...\n"
"...............4..\n"
"....6.....8.......\n"
".........6..9.....\n"
"...........10.....6\n"
"..................\n"
"1.........2.3.....\n"
"..............27..\n"
"............9...10.\n"
".........2..4..1..\n"
".....1......2.....\n"
".......2.........3\n"
"9......8..........\n"
"..........10.4...5.\n") == 0);
free(board681108690);
board681108690 = NULL;
assert( gamma_move(board, 7, 6, 9) == 1 );
assert( gamma_free_fields(board, 7) == 306 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, -1, 15) == 0 );
assert( gamma_move(board, 9, 3, 6) == 1 );
assert( gamma_move(board, 10, 0, 8) == 1 );
assert( gamma_move(board, 1, 17, 11) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 4, 18, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_free_fields(board, 5) == 303 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 7, 7, 12) == 1 );


char* board340273891 = gamma_board(board);
assert( board340273891 != NULL );
assert( strcmp(board340273891, 
"......3...........\n"
"..........88......\n"
"6.................\n"
".........10......9.\n"
"......5...........\n"
"..........1...9...\n"
".......7.......4..\n"
"....6.....8......1\n"
".........6..9.....\n"
"......7....10.....6\n"
"10.................\n"
"1.........2.3.....\n"
"...9..........27..\n"
"............9...10.\n"
".........2..4..1..\n"
".....1......2.....\n"
".......2.........3\n"
"9......8..........\n"
"..........10.4...5.\n") == 0);
free(board340273891);
board340273891 = NULL;
assert( gamma_move(board, 8, 16, 3) == 1 );
assert( gamma_move(board, 9, 15, -1) == 0 );
assert( gamma_busy_fields(board, 9) == 6 );
assert( gamma_move(board, 10, 10, 15) == 1 );
assert( gamma_free_fields(board, 10) == 300 );
assert( gamma_golden_possible(board, 10) == 1 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_free_fields(board, 2) == 298 );
assert( gamma_move(board, 3, 16, 16) == 1 );
assert( gamma_move(board, 5, 15, 2) == 1 );
assert( gamma_move(board, 6, 2, 17) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 11, 5) == 1 );
assert( gamma_move(board, 8, 4, -1) == 0 );
assert( gamma_move(board, 9, 14, 10) == 1 );
assert( gamma_move(board, 10, 6, 4) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, 13, 14) == 1 );
assert( gamma_move(board, 3, 0, 18) == 1 );
assert( gamma_move(board, 4, 14, 18) == 1 );
assert( gamma_move(board, 5, 13, 9) == 1 );
assert( gamma_move(board, 6, 14, 18) == 0 );
assert( gamma_move(board, 7, 12, 14) == 1 );
assert( gamma_move(board, 8, 14, 9) == 1 );
assert( gamma_move(board, 9, 16, 11) == 1 );
assert( gamma_move(board, 10, 14, 7) == 1 );
assert( gamma_move(board, 3, 4, 12) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 11, 1) == 1 );
assert( gamma_move(board, 6, 1, 19) == 0 );
assert( gamma_move(board, 7, 12, 5) == 0 );


char* board589772190 = gamma_board(board);
assert( board589772190 != NULL );
assert( strcmp(board589772190, 
"3.....3.......4...\n"
"..6.......88......\n"
"6...............3.\n"
".........1010.....9.\n"
"......5.....72....\n"
"..........1...9...\n"
"....3..7.......4..\n"
"....6.....8.....91\n"
"...1.....6..9.9...\n"
"......7....10.58..6\n"
"10.................\n"
"1.........2.3.10...\n"
"...9..........27..\n"
"......1....79...10.\n"
"......10..2..4..1..\n"
".....1......2...8.\n"
".......2.......5.3\n"
"9..4...8..25......\n"
"..........10.4...5.\n") == 0);
free(board589772190);
board589772190 = NULL;
assert( gamma_move(board, 8, 11, 10) == 1 );
assert( gamma_golden_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 9, 11, -1) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, -1) == 0 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 16, 1) == 1 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_move(board, 8, 16, 13) == 1 );
assert( gamma_move(board, 9, 0, -1) == 0 );


char* board401240926 = gamma_board(board);
assert( board401240926 != NULL );
assert( strcmp(board401240926, 
"3.....3.......4...\n"
"..6.......88......\n"
"6...............3.\n"
".........1010.....9.\n"
"......5.....72....\n"
"..........1...9.8.\n"
"....3..7.......4..\n"
"....6.....8.....91\n"
"...1.....6.89.9...\n"
"......7....10.58..6\n"
"10.................\n"
"15........2.3.10...\n"
"...9....3.....27..\n"
"..2...1....79...10.\n"
"......10..2..4..1..\n"
".....1......2...8.\n"
".......2.......5.3\n"
"9..4...8..25....6.\n"
"..........10.4...5.\n") == 0);
free(board401240926);
board401240926 = NULL;
assert( gamma_move(board, 10, 10, 1) == 0 );
assert( gamma_free_fields(board, 10) == 274 );
assert( gamma_move(board, 1, 13, 8) == 1 );
assert( gamma_move(board, 2, 17, 11) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_golden_move(board, 5, 4, 6) == 0 );
assert( gamma_free_fields(board, 6) == 271 );
assert( gamma_golden_move(board, 6, 7, 1) == 1 );


char* board112035327 = gamma_board(board);
assert( board112035327 != NULL );
assert( strcmp(board112035327, 
"3.....3.......4...\n"
"..6.......88......\n"
"6...............3.\n"
".........1010.....9.\n"
"......5.....72....\n"
"..........1...9.8.\n"
"....3..7.......4..\n"
"....6.....8.....91\n"
"...1.....6.89.9...\n"
"......7....10.58..6\n"
"10............1....\n"
"15........2.3.10...\n"
"...9....3.....27..\n"
"..2...1....79...10.\n"
"......10..2..4..1..\n"
".....1......2...8.\n"
".......2.......5.3\n"
"93.4...6..25....6.\n"
".4........10.4...5.\n") == 0);
free(board112035327);
board112035327 = NULL;
assert( gamma_move(board, 8, 15, 3) == 1 );
assert( gamma_move(board, 10, 9, 4) == 0 );
assert( gamma_move(board, 1, 18, 14) == 0 );
assert( gamma_move(board, 2, 17, 8) == 1 );
assert( gamma_free_fields(board, 2) == 269 );
assert( gamma_move(board, 3, 12, -1) == 0 );
assert( gamma_move(board, 5, 5, 13) == 1 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 14, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 16, 12) == 1 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_move(board, 9, 5, 12) == 1 );
assert( gamma_move(board, 10, 14, 15) == 1 );
assert( gamma_move(board, 1, 17, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );


char* board670625200 = gamma_board(board);
assert( board670625200 != NULL );
assert( strcmp(board670625200, 
"3.....3.......4...\n"
"..6.......88......\n"
"6...............3.\n"
".........1010...10.9.\n"
"......5.....72....\n"
".....5....1...9.8.\n"
"....39.7.......48.\n"
"....6.....8.....91\n"
"...1.....6.89.9...\n"
"......7....10.58..6\n"
"10............1...2\n"
"15........2.3.10...\n"
"...9....3.....27..\n"
"..2...1....79...10.\n"
"......10..2..4..1..\n"
".....1......2.788.\n"
".......2.......5.3\n"
"93.4...6..25....6.\n"
".4........10.4...51\n") == 0);
free(board670625200);
board670625200 = NULL;
assert( gamma_free_fields(board, 2) == 263 );
assert( gamma_golden_move(board, 2, 4, 12) == 1 );


char* board450981976 = gamma_board(board);
assert( board450981976 != NULL );
assert( strcmp(board450981976, 
"3.....3.......4...\n"
"..6.......88......\n"
"6...............3.\n"
".........1010...10.9.\n"
"......5.....72....\n"
".....5....1...9.8.\n"
"....29.7.......48.\n"
"....6.....8.....91\n"
"...1.....6.89.9...\n"
"......7....10.58..6\n"
"10............1...2\n"
"15........2.3.10...\n"
"...9....3.....27..\n"
"..2...1....79...10.\n"
"......10..2..4..1..\n"
".....1......2.788.\n"
".......2.......5.3\n"
"93.4...6..25....6.\n"
".4........10.4...51\n") == 0);
free(board450981976);
board450981976 = NULL;
assert( gamma_move(board, 3, 14, 14) == 1 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 6, 11, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_free_fields(board, 6) == 260 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 8, 14, 19) == 0 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_golden_move(board, 8, 12, 5) == 1 );
assert( gamma_move(board, 10, 7, 18) == 1 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 2, 13, 0) == 1 );
assert( gamma_move(board, 3, 10, 12) == 1 );
assert( gamma_move(board, 4, 7, 11) == 1 );


char* board620653297 = gamma_board(board);
assert( board620653297 != NULL );
assert( strcmp(board620653297, 
"3.....310......4...\n"
"..6.......88......\n"
"6...............3.\n"
".........1010...10.9.\n"
"......5.....723...\n"
".....5....1...9.8.\n"
"....29.7..3....48.\n"
"....6..4..8.....91\n"
"...1.....6.89.9...\n"
"...1..7....10.58..6\n"
"10............1...2\n"
"15........2.3.10...\n"
"...9....3.....27..\n"
"..2...1....78...10.\n"
"......10..2..4..1..\n"
"....41.....62.788.\n"
".......2.......5.3\n"
"93.4...6..25....6.\n"
".4........10.42..51\n") == 0);
free(board620653297);
board620653297 = NULL;
assert( gamma_move(board, 5, 18, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 8, 14, 6) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 16, 7) == 1 );
assert( gamma_move(board, 1, 17, 19) == 0 );
assert( gamma_move(board, 2, 14, 15) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 6, 8, 2) == 1 );


char* board459936388 = gamma_board(board);
assert( board459936388 != NULL );
assert( strcmp(board459936388, 
"3.....310......4...\n"
"..6.......88......\n"
"6...............3.\n"
".........1010...10.9.\n"
"......5.....723...\n"
".....5....1...9.8.\n"
"....29.7..3....48.\n"
"....6..4..8.....91\n"
"...1.....6.89.9...\n"
"...1..7....10.58..6\n"
"10............1...2\n"
"15........2.3.10.10.\n"
"...9....3.....27..\n"
"..2...1....78...10.\n"
"......10..2..4..1..\n"
"....41.....62.788.\n"
"...3...26......5.3\n"
"93.4...6..25....6.\n"
".4........10.42..51\n") == 0);
free(board459936388);
board459936388 = NULL;
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_busy_fields(board, 9) == 8 );
assert( gamma_move(board, 10, 13, 8) == 0 );
assert( gamma_move(board, 1, -1, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 16, 11) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );


char* board495166219 = gamma_board(board);
assert( board495166219 != NULL );
assert( strcmp(board495166219, 
"3.....310......4...\n"
"..6.......88......\n"
"6...............3.\n"
".........1010...10.9.\n"
"......5.....723...\n"
".....5....1...9.8.\n"
"....29.7..3....48.\n"
"....6..4..8.....91\n"
"...1.....6.89.9...\n"
"...1..7....10.58..6\n"
"10............1...2\n"
"15........2.3.10.10.\n"
"..79....3.....27..\n"
"..2...1....78...10.\n"
"......10..2..4..1..\n"
"....41.....62.788.\n"
"...3...26......5.3\n"
"93.4...6..25....6.\n"
".4........10.42..51\n") == 0);
free(board495166219);
board495166219 = NULL;
assert( gamma_move(board, 6, 17, 7) == 1 );
assert( gamma_move(board, 7, 18, -1) == 0 );
assert( gamma_move(board, 8, 13, 17) == 1 );
assert( gamma_golden_move(board, 8, 2, 15) == 0 );
assert( gamma_move(board, 9, 3, 18) == 1 );
assert( gamma_busy_fields(board, 9) == 9 );
assert( gamma_move(board, 10, 12, 4) == 0 );
assert( gamma_free_fields(board, 10) == 248 );
assert( gamma_golden_move(board, 10, 2, 17) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 8, 16) == 1 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 5, 17, 1) == 1 );
assert( gamma_move(board, 8, 3, 11) == 1 );
assert( gamma_move(board, 10, 10, 1) == 0 );
assert( gamma_busy_fields(board, 10) == 12 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 2, 14) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 4, 1, -1) == 0 );
assert( gamma_move(board, 5, 16, 1) == 0 );
assert( gamma_move(board, 6, -1, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 7, 14, 0) == 1 );
assert( gamma_move(board, 9, 1, 13) == 1 );
assert( gamma_move(board, 2, 9, 17) == 1 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_golden_move(board, 4, 12, 15) == 0 );


char* board751404183 = gamma_board(board);
assert( board751404183 != NULL );
assert( strcmp(board751404183, 
"3..9..310......4...\n"
"..10......288.8....\n"
"6.......3.......3.\n"
".........1010...10.9.\n"
"..2...5.....723...\n"
".9...5....1...9.8.\n"
"....29.7..3....48.\n"
"...86..4..8.....91\n"
"...1.....6.89.9...\n"
"...1..7....10.58..6\n"
"10............1...2\n"
"15........2.3.10.106\n"
"..79....3.....27..\n"
"..2...1....78...10.\n"
"......10..2..4..1..\n"
"2...41.....62.788.\n"
"...3...26......5.3\n"
"93.411.6..25....65\n"
".4........10.427.51\n") == 0);
free(board751404183);
board751404183 = NULL;
assert( gamma_move(board, 5, 16, 8) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 14, 10) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, -1, 13) == 0 );
assert( gamma_free_fields(board, 8) == 237 );


char* board798466580 = gamma_board(board);
assert( board798466580 != NULL );
assert( strcmp(board798466580, 
"3..9..310......4...\n"
"..10......288.8....\n"
"6.......3.......3.\n"
".........1010...10.9.\n"
"..2...5.....723...\n"
".9...5....1...9.8.\n"
"....29.7..3....48.\n"
"...86..4..8.....91\n"
"...1.....6.89.9...\n"
"...1..7....10.58..6\n"
"10............1..52\n"
"15........2.3.10.106\n"
"..79....3.....27..\n"
"..2...1....78...10.\n"
"......10..2..4..1..\n"
"2...41.....62.788.\n"
"...3...26......5.3\n"
"93.411.6..25....65\n"
".4........10.427.51\n") == 0);
free(board798466580);
board798466580 = NULL;
assert( gamma_move(board, 9, 4, 15) == 1 );
assert( gamma_move(board, 10, 9, 1) == 1 );
assert( gamma_move(board, 1, 8, 16) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_free_fields(board, 2) == 235 );
assert( gamma_move(board, 3, 1, 11) == 1 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 5, 2, 16) == 1 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 7, 4, 8) == 1 );
assert( gamma_move(board, 8, 17, 7) == 0 );
assert( gamma_move(board, 9, 14, 15) == 0 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 4, 18) == 1 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, -1, 3) == 0 );
assert( gamma_move(board, 5, 18, 9) == 0 );
assert( gamma_free_fields(board, 5) == 229 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 8, 6, 0) == 1 );


char* board947135598 = gamma_board(board);
assert( board947135598 != NULL );
assert( strcmp(board947135598, 
"3..93.310......4...\n"
"..10......288.8....\n"
"6.5.....3.......3.\n"
"....9....1010...10.9.\n"
"..2...5.....723...\n"
".9...5....1...9.8.\n"
"....29.7..3....48.\n"
".3.86..4..8.....91\n"
"...1.....6.89.9...\n"
"...1..7....10.58..6\n"
"10...7........1..52\n"
"15........2.3.10.106\n"
"..79....3.....27..\n"
"..2...1....78...10.\n"
"......10..2..4..1..\n"
"22..41.....62.788.\n"
"...3...26......5.3\n"
"93.411.6.1025....65\n"
".4....8..110.427.51\n") == 0);
free(board947135598);
board947135598 = NULL;
assert( gamma_move(board, 9, 1, 5) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, -1, 1) == 0 );
assert( gamma_move(board, 1, 4, -1) == 0 );
assert( gamma_move(board, 2, 10, 18) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 17, 1) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_move(board, 7, 14, 0) == 0 );
assert( gamma_move(board, 8, 16, 18) == 1 );
assert( gamma_move(board, 9, 16, 1) == 0 );
assert( gamma_move(board, 10, 16, 7) == 0 );
assert( gamma_move(board, 1, 13, 13) == 1 );
assert( gamma_move(board, 2, 18, 17) == 0 );
assert( gamma_move(board, 4, 13, 2) == 1 );
assert( gamma_move(board, 5, 15, 16) == 1 );
assert( gamma_move(board, 7, 3, 9) == 0 );
assert( gamma_move(board, 8, 8, 4) == 1 );
assert( gamma_move(board, 9, 13, 18) == 1 );
assert( gamma_move(board, 10, 0, 1) == 0 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 14, 19) == 0 );
assert( gamma_free_fields(board, 3) == 217 );
assert( gamma_move(board, 4, 15, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 14) == 1 );
assert( gamma_move(board, 7, 15, 14) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 14) == 1 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 5, 7) == 1 );
assert( gamma_move(board, 10, 14, 10) == 0 );
assert( gamma_move(board, 2, 10, 14) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_golden_move(board, 2, 14, 12) == 0 );
assert( gamma_move(board, 3, 12, 16) == 1 );
assert( gamma_move(board, 4, 13, 1) == 1 );
assert( gamma_move(board, 5, 11, 15) == 1 );
assert( gamma_free_fields(board, 5) == 210 );
assert( gamma_move(board, 6, 11, 0) == 1 );
assert( gamma_move(board, 7, 10, -1) == 0 );
assert( gamma_move(board, 8, 10, 5) == 1 );
assert( gamma_move(board, 9, 16, 9) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 8, 18) == 1 );


char* board151360804 = gamma_board(board);
assert( board151360804 != NULL );
assert( strcmp(board151360804, 
"3..93.3103.2..94.8.\n"
"..10......288.8....\n"
"6.5.....3...3..53.\n"
"....9....10105..10.9.\n"
".82...5.6...7237..\n"
".9...5....1..19.8.\n"
"....29.7..3....48.\n"
".3.86..4..8.....91\n"
"...1.....6.89.9...\n"
"...1..7....10.58.96\n"
"10...7........1..52\n"
"15...9....2.3.10.106\n"
"..79....3.....27..\n"
".92...1...878...10.\n"
"......10.82..4..1..\n"
"22..41.....62.788.\n"
"2..3...26....4.5.3\n"
"93.41146.1025.4..65\n"
".4..6.8..1106427.51\n") == 0);
free(board151360804);
board151360804 = NULL;
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 6, 16) == 1 );
assert( gamma_golden_move(board, 6, 15, 10) == 0 );
assert( gamma_move(board, 7, 13, 4) == 1 );
assert( gamma_golden_move(board, 7, 15, 9) == 0 );
assert( gamma_move(board, 8, 18, 2) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 10, 5, 10) == 1 );


char* board326624966 = gamma_board(board);
assert( board326624966 != NULL );
assert( strcmp(board326624966, 
"3..93.3103.2..94.8.\n"
"..10......288.8....\n"
"6.5...5.3...3..53.\n"
"....9....10105..10.9.\n"
".82...5.6...7237..\n"
".9...5....1..19.8.\n"
"....29.7..3....48.\n"
".3.86..4..8.....91\n"
"...1.10...6.89.9...\n"
"...1..7....10.58.96\n"
"10...7........1..52\n"
"15...9....2.3.10.106\n"
"..79....3.....27..\n"
".92...1...878...10.\n"
"......10.82..47.1..\n"
"22..41.....62.788.\n"
"2..3...26....4.5.3\n"
"93.41146.1025.4..65\n"
".4..6.8..1106427.51\n") == 0);
free(board326624966);
board326624966 = NULL;
assert( gamma_move(board, 1, 8, 16) == 0 );
assert( gamma_move(board, 2, 18, 4) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 18, 16) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_free_fields(board, 5) == 203 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_busy_fields(board, 8) == 17 );
assert( gamma_free_fields(board, 8) == 202 );
assert( gamma_move(board, 9, 15, 15) == 1 );
assert( gamma_move(board, 10, 17, 11) == 0 );
assert( gamma_busy_fields(board, 10) == 14 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 2, 18) == 0 );
assert( gamma_move(board, 4, 10, 4) == 1 );
assert( gamma_move(board, 6, 6, 19) == 0 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_move(board, 9, 2, 3) == 0 );
assert( gamma_move(board, 10, 16, 9) == 0 );
assert( gamma_move(board, 1, 10, 15) == 0 );


char* board885394599 = gamma_board(board);
assert( board885394599 != NULL );
assert( strcmp(board885394599, 
"3..93.3103.2..94.8.\n"
"..10......288.8....\n"
"6.5...5.3...3..53.\n"
"....9....10105..1099.\n"
".82...5.6...7237..\n"
".9...5....1..19.8.\n"
"....29.7..3....48.\n"
".3.86..4..8.....91\n"
"...1.10...6.89.9...\n"
"...1..7....10.58.96\n"
"10...7........1..52\n"
"15...9....2.3.10.106\n"
"..79....3.....27..\n"
"892...1.7.878...10.\n"
"......10.824.47.1..\n"
"22..41.....62.788.\n"
"2..37..26....4.5.3\n"
"93.41146.1025.4..65\n"
".4..6.8..1106427.51\n") == 0);
free(board885394599);
board885394599 = NULL;
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 6, 17) == 1 );
assert( gamma_move(board, 5, 1, 14) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 8, 17, 9) == 0 );
assert( gamma_golden_possible(board, 10) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );


char* board834803571 = gamma_board(board);
assert( board834803571 != NULL );
assert( strcmp(board834803571, 
"3..93.3103.2..94.8.\n"
"..10...3..288.8....\n"
"6.5...5.3...3..53.\n"
"....9....10105..1099.\n"
".82...5.6...7237..\n"
".9...5....1..19.8.\n"
"....29.7..3....48.\n"
".3.86..4..8.....91\n"
"...1.10...6.89.9...\n"
"...1..7....10.58.96\n"
"10...7........1..52\n"
"15...9....2.3.10.106\n"
"..79...13.....27..\n"
"892...1.7.878...10.\n"
"......10.824.47.1..\n"
"22..41.....62.788.\n"
"2..37..26....4.5.3\n"
"93.41146.1025.4..65\n"
".4..6.8..1106427.51\n") == 0);
free(board834803571);
board834803571 = NULL;
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 5, 9, 16) == 1 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_free_fields(board, 6) == 195 );
assert( gamma_move(board, 7, 9, 15) == 0 );
assert( gamma_move(board, 8, 9, 9) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 10, 2, 18) == 1 );


char* board434341932 = gamma_board(board);
assert( board434341932 != NULL );
assert( strcmp(board434341932, 
"3.1093.3103.2..94.8.\n"
"..10...3..288.8....\n"
"6.5...5.35..3..53.\n"
"....9....10105..1099.\n"
".82...5.6...7237..\n"
".9...5....1..19.8.\n"
"....29.7..3....48.\n"
".3.86..4..8.....91\n"
"...1.10...6.89.9...\n"
"...1..7....10.58.96\n"
"10...7........1..52\n"
"15...9....2.3.10.106\n"
"..79...13.....27..\n"
"892...1.7.878...10.\n"
"......10.824.47.1..\n"
"22..41.....62.788.\n"
"2..37..26....4.5.3\n"
"93.41146.1025.4..65\n"
".4..6.8..1106427.51\n") == 0);
free(board434341932);
board434341932 = NULL;
assert( gamma_move(board, 1, 10, 17) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_free_fields(board, 2) == 28 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 9, 18) == 0 );
assert( gamma_move(board, 10, 14, -1) == 0 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_move(board, 2, 5, 17) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_move(board, 4, 14, -1) == 0 );
assert( gamma_move(board, 8, 13, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );


char* board641212078 = gamma_board(board);
assert( board641212078 != NULL );
assert( strcmp(board641212078, 
"3.1093.3103.2..94.8.\n"
"..10...3..288.8....\n"
"6.5...5.35..3..53.\n"
"....9....10105..1099.\n"
".82...5.6...7237..\n"
".9...5....1..19.8.\n"
"....29.7..3....48.\n"
".3.86..4..8.....91\n"
"...1.10...6.89.9...\n"
"...1..7....10.58.96\n"
"10...7........1..52\n"
"15...9....2.3.10.106\n"
"..79...13.....27..\n"
"892...1.7.878...10.\n"
"......10.824.47.1..\n"
"22..41.....62.788.\n"
"2..37..26....4.5.3\n"
"93.41146.1025.4..65\n"
".4..6.8..1106427.51\n") == 0);
free(board641212078);
board641212078 = NULL;
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 6, 19) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 6, 0, 14) == 1 );
assert( gamma_move(board, 7, 12, 3) == 0 );


char* board347331997 = gamma_board(board);
assert( board347331997 != NULL );
assert( strcmp(board347331997, 
"3.1093.3103.2..94.8.\n"
"..10...3..288.8....\n"
"6.5...5.35..3..53.\n"
"....9....10105..1099.\n"
"682...5.6...7237..\n"
".9...5....1..19.8.\n"
"....29.7..3....48.\n"
".3.86..4..8.....91\n"
"...1.10...6.89.9...\n"
"...1..7....10.58.96\n"
"10...7........1..52\n"
"15...9....2.3.10.106\n"
"..79...13.....27..\n"
"892...1.7.878...10.\n"
"......10.824.47.1..\n"
"22..41.....62.788.\n"
"2..37..26....4.5.3\n"
"93.41146.1025.4..65\n"
".4..618..1106427.51\n") == 0);
free(board347331997);
board347331997 = NULL;
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 9, 2, 14) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 10, 2, 16) == 0 );
assert( gamma_move(board, 2, 2, 15) == 1 );
assert( gamma_free_fields(board, 2) == 29 );


gamma_delete(board);

    return 0;
}
