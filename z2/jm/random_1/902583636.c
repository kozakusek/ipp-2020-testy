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
uuid: 902583636
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 15, 8, 5);
assert( board != NULL );


assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_move(board, 3, 3, 11) == 1 );
assert( gamma_move(board, 4, 5, 15) == 0 );
assert( gamma_free_fields(board, 4) == 208 );
assert( gamma_move(board, 5, 10, 12) == 1 );
assert( gamma_move(board, 6, 1, 12) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 13, -1) == 0 );
assert( gamma_move(board, 8, 14, 7) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 5, 4, 13) == 1 );
assert( gamma_move(board, 6, 12, 11) == 1 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_move(board, 8, 11, 9) == 1 );
assert( gamma_move(board, 3, 2, 14) == 1 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_free_fields(board, 6) == 198 );


char* board538059100 = gamma_board(board);
assert( board538059100 != NULL );
assert( strcmp(board538059100, 
"..3...........\n"
"....5.........\n"
".6........5...\n"
"...3........6.\n"
"..............\n"
"...........8..\n"
".......6......\n"
"..............\n"
"..............\n"
"..............\n"
"....7.........\n"
"..............\n"
"............1.\n"
"........2.....\n"
".3............\n") == 0);
free(board538059100);
board538059100 = NULL;
assert( gamma_move(board, 8, 1, 7) == 1 );


char* board483518490 = gamma_board(board);
assert( board483518490 != NULL );
assert( strcmp(board483518490, 
"..3...........\n"
"....5.........\n"
".6........5...\n"
"...3........6.\n"
"..............\n"
"...........8..\n"
".......6......\n"
".8............\n"
"..............\n"
"..............\n"
"....7.........\n"
"..............\n"
"............1.\n"
"........2.....\n"
".3............\n") == 0);
free(board483518490);
board483518490 = NULL;
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 13, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 15) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 14) == 0 );
assert( gamma_move(board, 8, 2, 1) == 1 );
assert( gamma_move(board, 1, 1, 15) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 12, 4) == 1 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 15) == 0 );
assert( gamma_move(board, 5, 12, 14) == 1 );
assert( gamma_move(board, 7, 8, 10) == 1 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 10, 8) == 1 );


char* board111171069 = gamma_board(board);
assert( board111171069 != NULL );
assert( strcmp(board111171069, 
"..3.........5.\n"
"....5.........\n"
".6........5...\n"
"...3........6.\n"
"........7.....\n"
"...........8..\n"
".......6..6..4\n"
".8............\n"
".4............\n"
"..............\n"
"7...7.......5.\n"
"..............\n"
"............1.\n"
"638.4...2.....\n"
".3..2..1......\n") == 0);
free(board111171069);
board111171069 = NULL;
assert( gamma_move(board, 8, 10, 10) == 1 );
assert( gamma_move(board, 1, 7, 11) == 1 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_move(board, 3, 14, 13) == 0 );
assert( gamma_free_fields(board, 3) == 181 );
assert( gamma_move(board, 4, 7, -1) == 0 );
assert( gamma_move(board, 5, 11, 10) == 1 );
assert( gamma_move(board, 7, 0, 15) == 0 );
assert( gamma_move(board, 8, 14, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 1) == 180 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 8) == 1 );


char* board307725837 = gamma_board(board);
assert( board307725837 != NULL );
assert( strcmp(board307725837, 
"..3.........5.\n"
"....5.........\n"
".6........5...\n"
"...3...1....6.\n"
"..2.....7.85..\n"
"...........8..\n"
".......6.26..4\n"
".8............\n"
".4............\n"
"..............\n"
"7...7.......5.\n"
"..............\n"
"............1.\n"
"638.4...2.....\n"
".3..2..1......\n") == 0);
free(board307725837);
board307725837 = NULL;
assert( gamma_move(board, 6, 14, 11) == 0 );
assert( gamma_move(board, 2, 13, 4) == 1 );
assert( gamma_move(board, 3, 14, 12) == 0 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 5, 14, 1) == 0 );
assert( gamma_move(board, 6, 12, -1) == 0 );
assert( gamma_free_fields(board, 6) == 17 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 13, 11) == 1 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 6, -1) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );


char* board423457265 = gamma_board(board);
assert( board423457265 != NULL );
assert( strcmp(board423457265, 
"..3.........5.\n"
"....5.........\n"
".6........5...\n"
"...3...1....61\n"
"..2.....7.85..\n"
"...........8..\n"
".......6.26..4\n"
".8............\n"
".4............\n"
"..............\n"
"7...7.......52\n"
"..............\n"
"............1.\n"
"638.4...2.....\n"
".3..2..1.4....\n") == 0);
free(board423457265);
board423457265 = NULL;
assert( gamma_move(board, 6, 1, -1) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 4, 11) == 1 );
assert( gamma_move(board, 8, -1, 15) == 0 );
assert( gamma_free_fields(board, 8) == 175 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_move(board, 7, 4, 9) == 1 );
assert( gamma_move(board, 8, 7, 6) == 1 );
assert( gamma_move(board, 1, 8, 12) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );


char* board809516457 = gamma_board(board);
assert( board809516457 != NULL );
assert( strcmp(board809516457, 
"..3.........5.\n"
"....5.........\n"
".6......1.5...\n"
"...37..1....61\n"
"..2.....7.85..\n"
"....7......8..\n"
".......6.26..4\n"
".8............\n"
".4.....8......\n"
"..............\n"
"7...73......52\n"
"..............\n"
"............1.\n"
"638.4...2.....\n"
".3..2..1.4....\n") == 0);
free(board809516457);
board809516457 = NULL;
assert( gamma_move(board, 3, 12, 14) == 0 );
assert( gamma_free_fields(board, 3) == 171 );
assert( gamma_move(board, 4, 6, 12) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 13, 3) == 1 );
assert( gamma_golden_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 4, -1, -1) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_golden_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 1, 5, 15) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 13, 5) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 4, 13) == 0 );


char* board394600556 = gamma_board(board);
assert( board394600556 != NULL );
assert( strcmp(board394600556, 
"..3.........5.\n"
"....5.........\n"
".6....4.1.5...\n"
"...37..1....61\n"
"..2.....7.85..\n"
"....7......8..\n"
".......6.26..4\n"
".8............\n"
".4.....8......\n"
".............2\n"
"7...73......52\n"
".............3\n"
"............1.\n"
"638.4...2.....\n"
".3..2..1.4....\n") == 0);
free(board394600556);
board394600556 = NULL;
assert( gamma_move(board, 5, 4, 2) == 0 );


char* board453567911 = gamma_board(board);
assert( board453567911 != NULL );
assert( strcmp(board453567911, 
"..3.........5.\n"
"....5.........\n"
".6....4.1.5...\n"
"...37..1....61\n"
"..2.....7.85..\n"
"....7......8..\n"
".......6.26..4\n"
".8............\n"
".4.....8......\n"
".............2\n"
"7...73......52\n"
".............3\n"
"............1.\n"
"638.4...2.....\n"
".3..2..1.4....\n") == 0);
free(board453567911);
board453567911 = NULL;
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 3, 14, 7) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_golden_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 11, 15) == 0 );


char* board122284192 = gamma_board(board);
assert( board122284192 != NULL );
assert( strcmp(board122284192, 
"..3.........5.\n"
"....5.........\n"
".6....4.1.5...\n"
"...37..1....61\n"
"..2.....7.85..\n"
"....7......8..\n"
".......6.26..4\n"
".8............\n"
".4.....8......\n"
".............2\n"
"7...73......52\n"
".............3\n"
"............1.\n"
"638.4...2.....\n"
".3..2..1.4....\n") == 0);
free(board122284192);
board122284192 = NULL;
assert( gamma_move(board, 1, 6, -1) == 0 );
assert( gamma_move(board, 2, 1, -1) == 0 );
assert( gamma_move(board, 3, 10, 13) == 0 );
assert( gamma_move(board, 5, 12, 15) == 0 );
assert( gamma_move(board, 6, 3, 13) == 0 );
assert( gamma_move(board, 7, 10, 4) == 0 );
assert( gamma_free_fields(board, 7) == 16 );
assert( gamma_free_fields(board, 8) == 15 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 5, 14, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 7, 12, 4) == 0 );


char* board593779940 = gamma_board(board);
assert( board593779940 != NULL );
assert( strcmp(board593779940, 
"..3.........5.\n"
"....5.........\n"
".6....4.1.5...\n"
"...37..1....61\n"
"..2.....7.85..\n"
"....7......8..\n"
".......6.26..4\n"
".8............\n"
".4.....8......\n"
".............2\n"
"7...73......52\n"
".............3\n"
"............1.\n"
"638.4...2.....\n"
".3..2..1.4....\n") == 0);
free(board593779940);
board593779940 = NULL;
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 5 );
assert( gamma_move(board, 1, 6, 11) == 1 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 9, -1) == 0 );
assert( gamma_move(board, 5, 10, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 7, 0, -1) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_free_fields(board, 7) == 16 );
assert( gamma_move(board, 8, 14, 11) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_move(board, 7, 7, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_free_fields(board, 8) == 15 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 13, -1) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );


char* board528142839 = gamma_board(board);
assert( board528142839 != NULL );
assert( strcmp(board528142839, 
"..3.........5.\n"
"....5.........\n"
".6....4.1.5...\n"
"...37.11....61\n"
"..2.....7.85..\n"
"....7......8..\n"
".......6.26..4\n"
".8............\n"
".4.....8......\n"
".............2\n"
"7...73......52\n"
".............3\n"
"............1.\n"
"638.4...2.....\n"
".3..2..1.4....\n") == 0);
free(board528142839);
board528142839 = NULL;
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 2, 12) == 0 );
assert( gamma_move(board, 1, 9, 15) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 7, 14) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 9) == 0 );
assert( gamma_move(board, 2, 11, 9) == 0 );


char* board422307916 = gamma_board(board);
assert( board422307916 != NULL );
assert( strcmp(board422307916, 
"..3.........5.\n"
"....5.........\n"
".6....4.1.5...\n"
"...37.11....61\n"
"..2.....7.85..\n"
"....7......8..\n"
".......6.26..4\n"
".8............\n"
".4.....8......\n"
".............2\n"
"7...73......52\n"
".............3\n"
"............1.\n"
"638.4...2.....\n"
".3..2..1.4....\n") == 0);
free(board422307916);
board422307916 = NULL;
assert( gamma_move(board, 3, 2, -1) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 7, 9, 6) == 0 );
assert( gamma_move(board, 8, 7, 7) == 1 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 10, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 6, 13, 0) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 13, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board262876326 = gamma_board(board);
assert( board262876326 != NULL );
assert( strcmp(board262876326, 
"..3.........5.\n"
"....5.........\n"
".6....4.1.5...\n"
"...37.11....61\n"
"..2.....7.85..\n"
"....7......8..\n"
".......6.26..4\n"
".8.....8......\n"
".4.....8......\n"
".............2\n"
"7...73......52\n"
".............3\n"
"............13\n"
"638.4...2.....\n"
".3..2..1.4....\n") == 0);
free(board262876326);
board262876326 = NULL;
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 1, -1, 2) == 0 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 3, 4) == 0 );


gamma_delete(board);

    return 0;
}
