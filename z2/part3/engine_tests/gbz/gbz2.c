#include <stdint.h>

#include <stdlib.h>

#include <assert.h>

#include <stdio.h>

#include "gamma.h"



int main()

{

gamma_t *test = gamma_new(50, 25, 8, 10);

assert(1 == gamma_move(test, 2, 12, 14));

assert(1 == gamma_move(test, 7, 41, 7));

assert(0 == gamma_move(test, 9, 49, 12));

assert(1 == gamma_move(test, 3, 0, 1));

assert(1 == gamma_move(test, 2, 6, 8));

assert(0 == gamma_move(test, 0, 19, 19));

assert(1 == gamma_move(test, 5, 12, 15));

assert(1 == gamma_move(test, 3, 35, 19));

assert(1 == gamma_move(test, 7, 7, 8));

assert(1 == gamma_move(test, 8, 25, 4));

assert(1 == gamma_move(test, 8, 0, 11));

assert(1 == gamma_move(test, 5, 0, 10));

assert(0 == gamma_move(test, 9, 23, 11));

assert(1 == gamma_move(test, 4, 0, 18));

assert(1 == gamma_move(test, 8, 34, 20));

assert(0 == gamma_busy_fields(test, 1));

assert(1238 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(2 == gamma_busy_fields(test, 2));

assert(1238 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(2 == gamma_busy_fields(test, 3));

assert(1238 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(1 == gamma_busy_fields(test, 4));

assert(1238 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(2 == gamma_busy_fields(test, 5));

assert(1238 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(0 == gamma_busy_fields(test, 6));

assert(1238 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(2 == gamma_busy_fields(test, 7));

assert(1238 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(3 == gamma_busy_fields(test, 8));

assert(1238 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 9, 32, 0));

assert(0 == gamma_move(test, 9, 3, 18));

assert(1 == gamma_move(test, 4, 1, 2));

assert(1 == gamma_move(test, 8, 34, 19));

assert(1 == gamma_move(test, 1, 26, 14));

assert(1 == gamma_move(test, 8, 12, 22));

assert(1 == gamma_move(test, 2, 26, 16));

assert(1 == gamma_move(test, 5, 42, 8));

assert(0 == gamma_move(test, 0, 21, 9));

assert(1 == gamma_move(test, 8, 27, 24));

assert(1 == gamma_move(test, 2, 33, 19));

assert(1 == gamma_move(test, 6, 42, 7));

assert(1 == gamma_move(test, 4, 2, 4));

assert(1 == gamma_move(test, 1, 13, 19));

assert(0 == gamma_move(test, 9, 17, 22));

assert(2 == gamma_busy_fields(test, 1));

assert(1227 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(4 == gamma_busy_fields(test, 2));

assert(1227 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(2 == gamma_busy_fields(test, 3));

assert(1227 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(3 == gamma_busy_fields(test, 4));

assert(1227 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(3 == gamma_busy_fields(test, 5));

assert(1227 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(1 == gamma_busy_fields(test, 6));

assert(1227 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(2 == gamma_busy_fields(test, 7));

assert(1227 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(6 == gamma_busy_fields(test, 8));

assert(1227 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 5, 1, 3));

assert(1 == gamma_move(test, 2, 35, 20));

assert(1 == gamma_move(test, 4, 3, 12));

assert(1 == gamma_move(test, 2, 36, 19));

assert(0 == gamma_move(test, 9, 27, 11));

assert(1 == gamma_move(test, 8, 49, 17));

assert(0 == gamma_move(test, 9, 4, 16));

assert(1 == gamma_move(test, 4, 35, 6));

assert(1 == gamma_move(test, 2, 36, 20));

assert(1 == gamma_move(test, 2, 39, 7));

assert(1 == gamma_move(test, 1, 40, 7));

assert(1 == gamma_move(test, 7, 6, 2));

assert(1 == gamma_move(test, 1, 25, 5));

assert(0 == gamma_move(test, 9, 32, 20));

assert(1 == gamma_move(test, 1, 2, 3));

assert(5 == gamma_busy_fields(test, 1));

assert(1215 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(8 == gamma_busy_fields(test, 2));

assert(1215 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(2 == gamma_busy_fields(test, 3));

assert(1215 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(5 == gamma_busy_fields(test, 4));

assert(1215 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(4 == gamma_busy_fields(test, 5));

assert(1215 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(1 == gamma_busy_fields(test, 6));

assert(1215 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(3 == gamma_busy_fields(test, 7));

assert(1215 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(7 == gamma_busy_fields(test, 8));

assert(1215 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 8, 10, 23));

assert(1 == gamma_move(test, 2, 1, 9));

assert(1 == gamma_move(test, 4, 40, 6));

assert(1 == gamma_move(test, 7, 37, 20));

assert(1 == gamma_move(test, 1, 26, 5));

assert(1 == gamma_move(test, 7, 10, 22));

assert(1 == gamma_move(test, 3, 26, 4));

assert(1 == gamma_move(test, 4, 12, 0));

assert(0 == gamma_move(test, 9, 25, 7));

assert(1 == gamma_move(test, 5, 2, 2));

assert(1 == gamma_move(test, 3, 41, 13));

assert(0 == gamma_move(test, 0, 43, 24));

assert(1 == gamma_move(test, 7, 13, 15));

assert(1 == gamma_move(test, 3, 27, 4));

assert(1 == gamma_move(test, 3, 7, 9));

assert(6 == gamma_busy_fields(test, 1));

assert(1202 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(9 == gamma_busy_fields(test, 2));

assert(1202 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(6 == gamma_busy_fields(test, 3));

assert(1202 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(7 == gamma_busy_fields(test, 4));

assert(1202 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(5 == gamma_busy_fields(test, 5));

assert(1202 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(1 == gamma_busy_fields(test, 6));

assert(1202 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(6 == gamma_busy_fields(test, 7));

assert(1202 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(8 == gamma_busy_fields(test, 8));

assert(1202 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 2, 37, 3));

assert(1 == gamma_move(test, 2, 39, 6));

assert(1 == gamma_move(test, 4, 21, 0));

assert(1 == gamma_move(test, 7, 36, 21));

assert(1 == gamma_move(test, 5, 27, 5));

assert(0 == gamma_move(test, 9, 9, 14));

assert(0 == gamma_move(test, 9, 11, 5));

assert(1 == gamma_move(test, 4, 2, 0));

assert(1 == gamma_move(test, 2, 32, 19));

assert(1 == gamma_move(test, 7, 39, 8));

assert(1 == gamma_move(test, 3, 27, 6));

assert(1 == gamma_move(test, 7, 21, 21));

assert(0 == gamma_move(test, 9, 22, 2));

assert(0 == gamma_move(test, 9, 40, 21));

assert(0 == gamma_move(test, 0, 40, 4));

assert(6 == gamma_busy_fields(test, 1));

assert(1192 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(12 == gamma_busy_fields(test, 2));

assert(1192 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(7 == gamma_busy_fields(test, 3));

assert(1192 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(9 == gamma_busy_fields(test, 4));

assert(1192 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(6 == gamma_busy_fields(test, 5));

assert(1192 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(1 == gamma_busy_fields(test, 6));

assert(1192 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(9 == gamma_busy_fields(test, 7));

assert(1192 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(8 == gamma_busy_fields(test, 8));

assert(1192 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 8, 13, 16));

assert(1 == gamma_move(test, 7, 1, 10));

assert(1 == gamma_move(test, 4, 27, 7));

assert(1 == gamma_move(test, 7, 36, 22));

assert(0 == gamma_move(test, 9, 26, 18));

assert(1 == gamma_move(test, 4, 1, 0));

assert(1 == gamma_move(test, 8, 26, 6));

assert(1 == gamma_move(test, 8, 2, 10));

assert(1 == gamma_move(test, 6, 2, 9));

assert(1 == gamma_move(test, 6, 1, 4));

assert(1 == gamma_move(test, 5, 1, 5));

assert(1 == gamma_move(test, 5, 49, 12));

assert(1 == gamma_move(test, 1, 37, 19));

assert(0 == gamma_move(test, 8, 3, 0));

assert(0 == gamma_move(test, 7, 26, 11));

assert(7 == gamma_busy_fields(test, 1));

assert(1180 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(12 == gamma_busy_fields(test, 2));

assert(1180 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(7 == gamma_busy_fields(test, 3));

assert(1180 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(29 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(8 == gamma_busy_fields(test, 5));

assert(1180 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(3 == gamma_busy_fields(test, 6));

assert(1180 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(11 == gamma_busy_fields(test, 7));

assert(27 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 1, 29, 7));

assert(1 == gamma_move(test, 2, 8, 22));

assert(1 == gamma_move(test, 3, 38, 8));

assert(1 == gamma_move(test, 5, 7, 10));

assert(1 == gamma_move(test, 3, 37, 18));

assert(1 == gamma_move(test, 5, 6, 10));

assert(1 == gamma_move(test, 6, 28, 3));

assert(1 == gamma_move(test, 6, 1, 6));

assert(0 == gamma_move(test, 4, 48, 18));

assert(1 == gamma_move(test, 6, 13, 0));

assert(1 == gamma_move(test, 6, 44, 7));

assert(0 == gamma_move(test, 9, 8, 15));

assert(1 == gamma_move(test, 2, 47, 18));

assert(1 == gamma_move(test, 3, 38, 9));

assert(0 == gamma_move(test, 8, 25, 4));

assert(8 == gamma_busy_fields(test, 1));

assert(1168 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(14 == gamma_busy_fields(test, 2));

assert(34 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(10 == gamma_busy_fields(test, 3));

assert(1168 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(28 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(10 == gamma_busy_fields(test, 5));

assert(1168 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(7 == gamma_busy_fields(test, 6));

assert(1168 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(11 == gamma_busy_fields(test, 7));

assert(26 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 8, 10, 2));

assert(0 == gamma_move(test, 8, 24, 22));

assert(0 == gamma_move(test, 4, 11, 13));

assert(0 == gamma_move(test, 9, 14, 0));

assert(0 == gamma_move(test, 8, 38, 18));

assert(0 == gamma_move(test, 9, 12, 17));

assert(0 == gamma_move(test, 7, 29, 19));

assert(1 == gamma_move(test, 6, 28, 7));

assert(1 == gamma_move(test, 5, 21, 11));

assert(0 == gamma_move(test, 8, 6, 25));

assert(1 == gamma_move(test, 3, 23, 12));

assert(0 == gamma_move(test, 2, 17, 9));

assert(0 == gamma_move(test, 4, 8, 9));

assert(0 == gamma_move(test, 5, 15, 6));

assert(0 == gamma_move(test, 7, 47, 16));

assert(8 == gamma_busy_fields(test, 1));

assert(1165 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(14 == gamma_busy_fields(test, 2));

assert(34 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(11 == gamma_busy_fields(test, 3));

assert(1165 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(27 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(24 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(8 == gamma_busy_fields(test, 6));

assert(1165 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(11 == gamma_busy_fields(test, 7));

assert(26 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 4, 23, 20));

assert(1 == gamma_move(test, 7, 35, 21));

assert(0 == gamma_move(test, 2, 18, 4));

assert(1 == gamma_move(test, 1, 42, 6));

assert(0 == gamma_move(test, 2, 19, 17));

assert(0 == gamma_move(test, 7, 45, 3));

assert(0 == gamma_move(test, 8, 41, 24));

assert(0 == gamma_move(test, 0, 15, 4));

assert(0 == gamma_move(test, 2, 50, 21));

assert(0 == gamma_move(test, 5, 20, 9));

assert(0 == gamma_move(test, 5, 11, 1));

assert(0 == gamma_move(test, 5, 41, 11));

assert(1 == gamma_move(test, 3, 38, 19));

assert(1 == gamma_move(test, 2, 6, 9));

assert(0 == gamma_move(test, 5, 29, 13));

assert(9 == gamma_busy_fields(test, 1));

assert(1161 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(15 == gamma_busy_fields(test, 2));

assert(33 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(12 == gamma_busy_fields(test, 3));

assert(27 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(27 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(23 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(8 == gamma_busy_fields(test, 6));

assert(1161 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(12 == gamma_busy_fields(test, 7));

assert(26 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 0, 46, 6));

assert(0 == gamma_move(test, 5, 32, 3));

assert(1 == gamma_move(test, 6, 48, 23));

assert(0 == gamma_move(test, 5, 16, 4));

assert(0 == gamma_move(test, 7, 3, 6));

assert(0 == gamma_move(test, 0, 45, 10));

assert(0 == gamma_move(test, 7, 7, 15));

assert(1 == gamma_move(test, 6, 31, 6));

assert(0 == gamma_move(test, 5, 11, 25));

assert(1 == gamma_move(test, 3, 36, 18));

assert(0 == gamma_move(test, 4, 30, 5));

assert(1 == gamma_move(test, 1, 27, 17));

assert(1 == gamma_move(test, 1, 8, 21));

assert(0 == gamma_move(test, 9, 6, 13));

assert(0 == gamma_move(test, 7, 44, 7));

assert(11 == gamma_busy_fields(test, 1));

assert(25 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(15 == gamma_busy_fields(test, 2));

assert(31 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(13 == gamma_busy_fields(test, 3));

assert(27 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(27 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(23 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(10 == gamma_busy_fields(test, 6));

assert(26 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(12 == gamma_busy_fields(test, 7));

assert(26 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 8, 32, 21));

assert(0 == gamma_move(test, 2, 7, 21));

assert(0 == gamma_move(test, 6, 33, 13));

assert(0 == gamma_move(test, 1, 27, 5));

assert(0 == gamma_move(test, 2, 42, 13));

assert(0 == gamma_move(test, 0, 36, 24));

assert(0 == gamma_move(test, 1, 22, 6));

assert(0 == gamma_move(test, 2, 23, 8));

assert(0 == gamma_move(test, 1, 26, 18));

assert(0 == gamma_move(test, 8, 15, 12));

assert(0 == gamma_move(test, 8, 16, 6));

assert(0 == gamma_move(test, 1, 20, 23));

assert(0 == gamma_move(test, 8, 19, 20));

assert(0 == gamma_move(test, 1, 33, 17));

assert(0 == gamma_move(test, 7, 25, 12));

assert(11 == gamma_busy_fields(test, 1));

assert(25 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(15 == gamma_busy_fields(test, 2));

assert(31 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(13 == gamma_busy_fields(test, 3));

assert(27 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(27 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(23 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(10 == gamma_busy_fields(test, 6));

assert(26 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(12 == gamma_busy_fields(test, 7));

assert(26 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 3, 46, 23));

assert(0 == gamma_move(test, 5, 0, 19));

assert(0 == gamma_move(test, 7, 23, 21));

assert(0 == gamma_move(test, 0, 37, 7));

assert(0 == gamma_move(test, 4, 27, 4));

assert(0 == gamma_move(test, 1, 49, 1));

assert(1 == gamma_move(test, 3, 23, 13));

assert(0 == gamma_move(test, 1, 26, 24));

assert(0 == gamma_move(test, 8, 25, 8));

assert(0 == gamma_move(test, 5, 6, 24));

assert(0 == gamma_move(test, 6, 2, 11));

assert(0 == gamma_move(test, 2, 41, 0));

assert(0 == gamma_move(test, 4, 50, 1));

assert(0 == gamma_move(test, 9, 44, 24));

assert(0 == gamma_move(test, 7, 23, 6));

assert(11 == gamma_busy_fields(test, 1));

assert(25 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(15 == gamma_busy_fields(test, 2));

assert(31 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(14 == gamma_busy_fields(test, 3));

assert(29 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(27 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(23 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(10 == gamma_busy_fields(test, 6));

assert(26 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(12 == gamma_busy_fields(test, 7));

assert(26 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 4, 18, 5));

assert(0 == gamma_move(test, 8, 48, 3));

assert(0 == gamma_move(test, 4, 21, 16));

assert(0 == gamma_move(test, 3, 19, 4));

assert(0 == gamma_move(test, 1, 11, 15));

assert(0 == gamma_move(test, 6, 12, 5));

assert(0 == gamma_move(test, 9, 6, 17));

assert(0 == gamma_move(test, 7, 30, 9));

assert(0 == gamma_move(test, 7, 20, 0));

assert(0 == gamma_move(test, 8, 31, 21));

assert(0 == gamma_move(test, 7, 44, 18));

assert(0 == gamma_move(test, 6, 11, 14));

assert(0 == gamma_move(test, 9, 23, 0));

assert(0 == gamma_move(test, 2, 5, 2));

assert(0 == gamma_move(test, 0, 16, 10));

assert(11 == gamma_busy_fields(test, 1));

assert(25 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(15 == gamma_busy_fields(test, 2));

assert(31 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(14 == gamma_busy_fields(test, 3));

assert(29 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(27 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(23 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(10 == gamma_busy_fields(test, 6));

assert(26 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(12 == gamma_busy_fields(test, 7));

assert(26 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 1, 42, 23));

assert(0 == gamma_move(test, 9, 4, 15));

assert(0 == gamma_move(test, 8, 28, 4));

assert(0 == gamma_move(test, 1, 0, 7));

assert(0 == gamma_move(test, 2, 9, 14));

assert(0 == gamma_move(test, 7, 10, 13));

assert(0 == gamma_move(test, 4, 17, 10));

assert(0 == gamma_move(test, 8, 48, 19));

assert(1 == gamma_move(test, 2, 37, 4));

assert(0 == gamma_move(test, 0, 45, 4));

assert(0 == gamma_move(test, 5, 50, 18));

assert(0 == gamma_move(test, 4, 46, 15));

assert(0 == gamma_move(test, 8, 20, 18));

assert(0 == gamma_move(test, 8, 46, 1));

assert(0 == gamma_move(test, 2, 7, 4));

assert(11 == gamma_busy_fields(test, 1));

assert(25 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(33 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(14 == gamma_busy_fields(test, 3));

assert(29 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(27 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(23 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(10 == gamma_busy_fields(test, 6));

assert(26 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(12 == gamma_busy_fields(test, 7));

assert(26 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 0, 40, 3));

assert(0 == gamma_move(test, 1, 7, 5));

assert(0 == gamma_move(test, 7, 29, 6));

assert(0 == gamma_move(test, 4, 18, 17));

assert(0 == gamma_move(test, 0, 48, 7));

assert(0 == gamma_move(test, 8, 21, 7));

assert(0 == gamma_move(test, 3, 16, 5));

assert(0 == gamma_move(test, 0, 5, 20));

assert(0 == gamma_move(test, 6, 18, 17));

assert(0 == gamma_move(test, 7, 24, 5));

assert(0 == gamma_move(test, 9, 42, 4));

assert(0 == gamma_move(test, 8, 18, 24));

assert(0 == gamma_move(test, 7, 26, 5));

assert(0 == gamma_move(test, 5, 32, 13));

assert(0 == gamma_move(test, 2, 44, 1));

assert(11 == gamma_busy_fields(test, 1));

assert(25 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(33 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(14 == gamma_busy_fields(test, 3));

assert(29 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(27 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(23 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(10 == gamma_busy_fields(test, 6));

assert(26 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(12 == gamma_busy_fields(test, 7));

assert(26 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 8, 17, 10));

assert(0 == gamma_move(test, 9, 34, 25));

assert(0 == gamma_move(test, 5, 31, 13));

assert(0 == gamma_move(test, 8, 30, 21));

assert(0 == gamma_move(test, 2, 4, 9));

assert(0 == gamma_move(test, 0, 6, 2));

assert(0 == gamma_move(test, 9, 25, 5));

assert(0 == gamma_move(test, 5, 36, 13));

assert(0 == gamma_move(test, 7, 47, 3));

assert(0 == gamma_move(test, 3, 23, 23));

assert(0 == gamma_move(test, 0, 0, 4));

assert(0 == gamma_move(test, 2, 3, 22));

assert(0 == gamma_move(test, 7, 3, 21));

assert(0 == gamma_move(test, 7, 7, 25));

assert(0 == gamma_move(test, 8, 36, 7));

assert(11 == gamma_busy_fields(test, 1));

assert(25 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(33 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(14 == gamma_busy_fields(test, 3));

assert(29 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(27 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(23 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(10 == gamma_busy_fields(test, 6));

assert(26 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(12 == gamma_busy_fields(test, 7));

assert(26 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 9, 37, 11));

assert(0 == gamma_move(test, 2, 34, 3));

assert(0 == gamma_move(test, 5, 47, 15));

assert(0 == gamma_move(test, 9, 23, 23));

assert(0 == gamma_move(test, 5, 18, 16));

assert(0 == gamma_move(test, 0, 24, 3));

assert(0 == gamma_move(test, 6, 33, 3));

assert(0 == gamma_move(test, 6, 11, 12));

assert(0 == gamma_move(test, 2, 34, 21));

assert(0 == gamma_move(test, 5, 30, 25));

assert(0 == gamma_move(test, 0, 24, 13));

assert(0 == gamma_move(test, 8, 21, 20));

assert(0 == gamma_move(test, 6, 45, 5));

assert(0 == gamma_move(test, 6, 36, 8));

assert(0 == gamma_move(test, 3, 19, 6));

assert(11 == gamma_busy_fields(test, 1));

assert(25 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(33 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(14 == gamma_busy_fields(test, 3));

assert(29 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(27 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(23 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(10 == gamma_busy_fields(test, 6));

assert(26 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(12 == gamma_busy_fields(test, 7));

assert(26 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 7, 29, 25));

assert(0 == gamma_move(test, 0, 27, 14));

assert(0 == gamma_move(test, 2, 21, 18));

assert(0 == gamma_move(test, 8, 16, 14));

assert(0 == gamma_move(test, 1, 7, 22));

assert(0 == gamma_move(test, 3, 23, 2));

assert(0 == gamma_move(test, 1, 10, 4));

assert(0 == gamma_move(test, 6, 13, 24));

assert(0 == gamma_move(test, 0, 45, 5));

assert(0 == gamma_move(test, 4, 17, 17));

assert(0 == gamma_move(test, 6, 23, 18));

assert(0 == gamma_move(test, 5, 32, 18));

assert(0 == gamma_move(test, 4, 39, 25));

assert(0 == gamma_move(test, 5, 32, 6));

assert(0 == gamma_move(test, 8, 25, 16));

assert(11 == gamma_busy_fields(test, 1));

assert(25 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(33 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(14 == gamma_busy_fields(test, 3));

assert(29 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(27 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(23 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(10 == gamma_busy_fields(test, 6));

assert(26 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(12 == gamma_busy_fields(test, 7));

assert(26 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 0, 23, 0));

assert(1 == gamma_move(test, 7, 36, 23));

assert(0 == gamma_move(test, 5, 27, 3));

assert(0 == gamma_move(test, 4, 10, 3));

assert(0 == gamma_move(test, 4, 35, 4));

assert(1 == gamma_move(test, 1, 26, 17));

assert(0 == gamma_move(test, 1, 35, 16));

assert(1 == gamma_move(test, 1, 8, 20));

assert(0 == gamma_move(test, 5, 33, 10));

assert(0 == gamma_move(test, 8, 21, 3));

assert(0 == gamma_move(test, 0, 19, 14));

assert(0 == gamma_move(test, 3, 13, 5));

assert(0 == gamma_move(test, 4, 30, 3));

assert(0 == gamma_move(test, 6, 35, 12));

assert(0 == gamma_move(test, 6, 12, 23));

assert(13 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(32 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(14 == gamma_busy_fields(test, 3));

assert(29 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(27 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(23 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(10 == gamma_busy_fields(test, 6));

assert(26 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(13 == gamma_busy_fields(test, 7));

assert(28 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 7, 36, 17));

assert(0 == gamma_move(test, 2, 25, 2));

assert(0 == gamma_move(test, 2, 49, 1));

assert(0 == gamma_move(test, 4, 24, 25));

assert(0 == gamma_move(test, 0, 11, 2));

assert(0 == gamma_move(test, 4, 50, 1));

assert(0 == gamma_move(test, 4, 28, 11));

assert(0 == gamma_move(test, 0, 48, 4));

assert(0 == gamma_move(test, 7, 0, 25));

assert(0 == gamma_move(test, 4, 8, 3));

assert(0 == gamma_move(test, 2, 33, 4));

assert(0 == gamma_move(test, 3, 27, 5));

assert(0 == gamma_move(test, 7, 46, 17));

assert(0 == gamma_move(test, 7, 41, 17));

assert(0 == gamma_move(test, 1, 6, 19));

assert(13 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(32 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(14 == gamma_busy_fields(test, 3));

assert(29 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(27 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(23 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(10 == gamma_busy_fields(test, 6));

assert(26 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(13 == gamma_busy_fields(test, 7));

assert(28 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 4, 13, 5));

assert(0 == gamma_move(test, 1, 18, 17));

assert(0 == gamma_move(test, 9, 34, 5));

assert(0 == gamma_move(test, 6, 13, 5));

assert(0 == gamma_move(test, 5, 29, 4));

assert(0 == gamma_move(test, 1, 3, 16));

assert(0 == gamma_move(test, 2, 9, 0));

assert(0 == gamma_move(test, 0, 24, 16));

assert(0 == gamma_move(test, 9, 43, 19));

assert(0 == gamma_move(test, 5, 0, 13));

assert(1 == gamma_move(test, 7, 37, 21));

assert(0 == gamma_move(test, 8, 19, 8));

assert(0 == gamma_move(test, 9, 22, 1));

assert(0 == gamma_move(test, 1, 28, 19));

assert(1 == gamma_move(test, 7, 43, 8));

assert(13 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(32 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(14 == gamma_busy_fields(test, 3));

assert(29 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(27 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(22 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(10 == gamma_busy_fields(test, 6));

assert(26 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(15 == gamma_busy_fields(test, 7));

assert(31 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 0, 42, 25));

assert(0 == gamma_move(test, 4, 26, 25));

assert(0 == gamma_move(test, 0, 9, 8));

assert(0 == gamma_move(test, 3, 5, 1));

assert(0 == gamma_move(test, 0, 36, 1));

assert(0 == gamma_move(test, 6, 19, 13));

assert(0 == gamma_move(test, 9, 44, 2));

assert(0 == gamma_move(test, 3, 41, 11));

assert(0 == gamma_move(test, 6, 23, 10));

assert(0 == gamma_move(test, 6, 24, 5));

assert(0 == gamma_move(test, 1, 43, 24));

assert(0 == gamma_move(test, 4, 21, 18));

assert(0 == gamma_move(test, 8, 44, 12));

assert(1 == gamma_move(test, 5, 2, 5));

assert(0 == gamma_move(test, 8, 22, 1));

assert(13 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(32 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(14 == gamma_busy_fields(test, 3));

assert(29 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(26 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(12 == gamma_busy_fields(test, 5));

assert(23 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(10 == gamma_busy_fields(test, 6));

assert(26 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(15 == gamma_busy_fields(test, 7));

assert(31 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 8, 42, 2));

assert(0 == gamma_move(test, 9, 4, 15));

assert(0 == gamma_move(test, 1, 16, 4));

assert(0 == gamma_move(test, 3, 12, 10));

assert(0 == gamma_move(test, 5, 35, 17));

assert(0 == gamma_move(test, 6, 5, 1));

assert(0 == gamma_move(test, 4, 46, 3));

assert(0 == gamma_move(test, 0, 45, 18));

assert(0 == gamma_move(test, 2, 35, 13));

assert(0 == gamma_move(test, 3, 33, 8));

assert(0 == gamma_move(test, 0, 25, 13));

assert(0 == gamma_move(test, 0, 30, 3));

assert(0 == gamma_move(test, 0, 5, 13));

assert(0 == gamma_move(test, 1, 26, 19));

assert(0 == gamma_move(test, 0, 21, 4));

assert(13 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(32 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(14 == gamma_busy_fields(test, 3));

assert(29 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(26 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(12 == gamma_busy_fields(test, 5));

assert(23 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(10 == gamma_busy_fields(test, 6));

assert(26 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(15 == gamma_busy_fields(test, 7));

assert(31 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 3, 37, 6));

assert(0 == gamma_move(test, 8, 40, 5));

assert(0 == gamma_move(test, 7, 48, 6));

assert(0 == gamma_move(test, 7, 30, 2));

assert(0 == gamma_move(test, 1, 28, 12));

assert(0 == gamma_move(test, 1, 34, 16));

assert(0 == gamma_move(test, 0, 17, 6));

assert(0 == gamma_move(test, 6, 33, 25));

assert(0 == gamma_move(test, 2, 29, 9));

assert(0 == gamma_move(test, 5, 31, 17));

assert(0 == gamma_move(test, 9, 44, 8));

assert(0 == gamma_move(test, 9, 44, 25));

assert(0 == gamma_move(test, 2, 18, 17));

assert(0 == gamma_move(test, 5, 5, 11));

assert(1 == gamma_move(test, 3, 24, 13));

assert(13 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(32 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(15 == gamma_busy_fields(test, 3));

assert(30 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(26 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(12 == gamma_busy_fields(test, 5));

assert(23 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(10 == gamma_busy_fields(test, 6));

assert(26 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(15 == gamma_busy_fields(test, 7));

assert(31 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 8, 44, 7));

assert(0 == gamma_move(test, 0, 17, 23));

assert(1 == gamma_move(test, 7, 21, 20));

assert(0 == gamma_move(test, 7, 47, 10));

assert(0 == gamma_move(test, 6, 13, 11));

assert(0 == gamma_move(test, 5, 3, 18));

assert(1 == gamma_move(test, 3, 38, 18));

assert(0 == gamma_move(test, 5, 7, 21));

assert(0 == gamma_move(test, 9, 16, 8));

assert(0 == gamma_move(test, 7, 27, 1));

assert(0 == gamma_move(test, 0, 14, 16));

assert(0 == gamma_move(test, 8, 44, 4));

assert(1 == gamma_move(test, 3, 14, 24));

assert(0 == gamma_move(test, 9, 39, 12));

assert(0 == gamma_move(test, 6, 50, 0));

assert(13 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(32 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(17 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(26 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(12 == gamma_busy_fields(test, 5));

assert(23 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(10 == gamma_busy_fields(test, 6));

assert(26 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(16 == gamma_busy_fields(test, 7));

assert(33 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 1, 38, 15));

assert(0 == gamma_move(test, 9, 0, 1));

assert(0 == gamma_move(test, 6, 32, 9));

assert(0 == gamma_move(test, 2, 4, 18));

assert(0 == gamma_move(test, 2, 5, 12));

assert(0 == gamma_move(test, 6, 16, 6));

assert(0 == gamma_move(test, 5, 26, 0));

assert(0 == gamma_move(test, 0, 16, 5));

assert(0 == gamma_move(test, 6, 22, 23));

assert(0 == gamma_move(test, 2, 5, 14));

assert(0 == gamma_move(test, 6, 18, 20));

assert(0 == gamma_move(test, 6, 26, 6));

assert(0 == gamma_move(test, 7, 21, 4));

assert(0 == gamma_move(test, 9, 23, 24));

assert(0 == gamma_move(test, 9, 21, 11));

assert(13 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(32 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(17 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(26 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(12 == gamma_busy_fields(test, 5));

assert(23 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(10 == gamma_busy_fields(test, 6));

assert(26 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(16 == gamma_busy_fields(test, 7));

assert(33 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 6, 28, 8));

assert(0 == gamma_move(test, 3, 31, 10));

assert(0 == gamma_move(test, 3, 42, 16));

assert(0 == gamma_move(test, 6, 10, 17));

assert(0 == gamma_move(test, 5, 42, 23));

assert(0 == gamma_move(test, 1, 16, 12));

assert(0 == gamma_move(test, 7, 17, 12));

assert(0 == gamma_move(test, 4, 2, 9));

assert(0 == gamma_move(test, 6, 6, 16));

assert(0 == gamma_move(test, 7, 44, 17));

assert(0 == gamma_move(test, 4, 18, 23));

assert(0 == gamma_move(test, 9, 37, 17));

assert(0 == gamma_move(test, 5, 35, 11));

assert(0 == gamma_move(test, 5, 27, 1));

assert(0 == gamma_move(test, 6, 33, 14));

assert(13 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(32 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(17 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(26 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(12 == gamma_busy_fields(test, 5));

assert(23 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(11 == gamma_busy_fields(test, 6));

assert(28 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(16 == gamma_busy_fields(test, 7));

assert(33 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 8, 2, 24));

assert(0 == gamma_move(test, 4, 26, 8));

assert(0 == gamma_move(test, 4, 22, 22));

assert(0 == gamma_move(test, 0, 50, 21));

assert(0 == gamma_move(test, 6, 45, 13));

assert(0 == gamma_move(test, 9, 4, 6));

assert(0 == gamma_move(test, 7, 15, 12));

assert(0 == gamma_move(test, 3, 33, 2));

assert(0 == gamma_move(test, 6, 0, 2));

assert(0 == gamma_move(test, 8, 26, 15));

assert(0 == gamma_move(test, 6, 41, 14));

assert(0 == gamma_move(test, 1, 34, 13));

assert(0 == gamma_move(test, 4, 29, 18));

assert(0 == gamma_move(test, 5, 34, 1));

assert(0 == gamma_move(test, 0, 40, 25));

assert(13 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(32 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(17 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(26 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(12 == gamma_busy_fields(test, 5));

assert(23 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(11 == gamma_busy_fields(test, 6));

assert(28 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(16 == gamma_busy_fields(test, 7));

assert(33 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 3, 6, 1));

assert(0 == gamma_move(test, 5, 44, 17));

assert(0 == gamma_move(test, 2, 0, 21));

assert(0 == gamma_move(test, 9, 20, 1));

assert(0 == gamma_move(test, 7, 25, 13));

assert(0 == gamma_move(test, 2, 42, 19));

assert(0 == gamma_move(test, 7, 30, 23));

assert(0 == gamma_move(test, 5, 29, 6));

assert(0 == gamma_move(test, 0, 15, 8));

assert(0 == gamma_move(test, 9, 31, 6));

assert(0 == gamma_move(test, 1, 37, 18));

assert(0 == gamma_move(test, 3, 32, 7));

assert(0 == gamma_move(test, 2, 1, 21));

assert(0 == gamma_move(test, 4, 48, 6));

assert(0 == gamma_move(test, 7, 21, 12));

assert(13 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(32 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(17 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(26 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(12 == gamma_busy_fields(test, 5));

assert(23 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(11 == gamma_busy_fields(test, 6));

assert(28 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(16 == gamma_busy_fields(test, 7));

assert(33 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 3, 10, 10));

assert(0 == gamma_move(test, 7, 27, 10));

assert(0 == gamma_move(test, 2, 41, 1));

assert(0 == gamma_move(test, 4, 37, 17));

assert(0 == gamma_move(test, 0, 11, 23));

assert(0 == gamma_move(test, 8, 26, 8));

assert(0 == gamma_move(test, 8, 27, 12));

assert(1 == gamma_move(test, 5, 41, 8));

assert(0 == gamma_move(test, 8, 2, 13));

assert(0 == gamma_move(test, 0, 8, 4));

assert(0 == gamma_move(test, 8, 23, 10));

assert(0 == gamma_move(test, 8, 42, 14));

assert(0 == gamma_move(test, 3, 11, 5));

assert(0 == gamma_move(test, 1, 29, 0));

assert(0 == gamma_move(test, 3, 46, 2));

assert(13 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(32 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(17 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(26 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(13 == gamma_busy_fields(test, 5));

assert(24 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(11 == gamma_busy_fields(test, 6));

assert(28 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(16 == gamma_busy_fields(test, 7));

assert(32 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 8, 6, 15));

assert(0 == gamma_move(test, 8, 37, 0));

assert(0 == gamma_move(test, 7, 5, 8));

assert(0 == gamma_move(test, 3, 1, 0));

assert(0 == gamma_move(test, 2, 32, 11));

assert(0 == gamma_move(test, 4, 43, 6));

assert(0 == gamma_move(test, 7, 1, 15));

assert(0 == gamma_move(test, 2, 12, 22));

assert(0 == gamma_move(test, 9, 38, 8));

assert(0 == gamma_move(test, 2, 13, 19));

assert(0 == gamma_move(test, 8, 10, 9));

assert(0 == gamma_move(test, 2, 18, 15));

assert(0 == gamma_move(test, 6, 42, 12));

assert(0 == gamma_move(test, 7, 8, 17));

assert(0 == gamma_move(test, 0, 22, 11));

assert(13 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(32 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(17 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(26 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(13 == gamma_busy_fields(test, 5));

assert(24 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(11 == gamma_busy_fields(test, 6));

assert(28 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(16 == gamma_busy_fields(test, 7));

assert(32 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 9, 36, 12));

assert(0 == gamma_move(test, 2, 19, 23));

assert(0 == gamma_move(test, 0, 24, 20));

assert(0 == gamma_move(test, 6, 44, 5));

assert(0 == gamma_move(test, 1, 1, 5));

assert(0 == gamma_move(test, 5, 40, 25));

assert(0 == gamma_move(test, 5, 32, 3));

assert(0 == gamma_move(test, 1, 34, 17));

assert(0 == gamma_move(test, 8, 49, 19));

assert(0 == gamma_move(test, 6, 46, 1));

assert(0 == gamma_move(test, 9, 1, 24));

assert(0 == gamma_move(test, 8, 13, 18));

assert(0 == gamma_move(test, 7, 45, 11));

assert(0 == gamma_move(test, 9, 22, 25));

assert(0 == gamma_move(test, 9, 18, 9));

assert(13 == gamma_busy_fields(test, 1));

assert(28 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(32 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(17 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(26 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(13 == gamma_busy_fields(test, 5));

assert(24 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(11 == gamma_busy_fields(test, 6));

assert(28 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(16 == gamma_busy_fields(test, 7));

assert(32 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 8, 18, 2));

assert(0 == gamma_move(test, 6, 26, 14));

assert(0 == gamma_move(test, 2, 0, 25));

assert(0 == gamma_move(test, 6, 24, 25));

assert(0 == gamma_move(test, 1, 0, 2));

assert(0 == gamma_move(test, 8, 24, 8));

assert(0 == gamma_move(test, 3, 34, 22));

assert(0 == gamma_move(test, 1, 19, 2));

assert(0 == gamma_move(test, 7, 22, 10));

assert(0 == gamma_move(test, 7, 26, 0));

assert(0 == gamma_move(test, 7, 48, 9));

assert(0 == gamma_move(test, 0, 13, 5));

assert(1 == gamma_move(test, 1, 14, 19));

assert(0 == gamma_move(test, 2, 32, 24));

assert(0 == gamma_move(test, 4, 10, 10));

assert(14 == gamma_busy_fields(test, 1));

assert(30 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(32 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(17 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(26 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(13 == gamma_busy_fields(test, 5));

assert(24 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(11 == gamma_busy_fields(test, 6));

assert(28 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(16 == gamma_busy_fields(test, 7));

assert(32 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(11 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 3, 9, 24));

assert(0 == gamma_move(test, 0, 27, 15));

assert(1 == gamma_move(test, 8, 11, 22));

assert(0 == gamma_move(test, 2, 12, 16));

assert(0 == gamma_move(test, 5, 24, 18));

assert(0 == gamma_move(test, 2, 27, 18));

assert(0 == gamma_move(test, 7, 17, 3));

assert(0 == gamma_move(test, 1, 19, 18));

assert(0 == gamma_move(test, 1, 35, 12));

assert(0 == gamma_move(test, 4, 26, 5));

assert(0 == gamma_move(test, 3, 30, 11));

assert(1 == gamma_move(test, 4, 3, 13));

assert(0 == gamma_move(test, 9, 34, 18));

assert(0 == gamma_move(test, 6, 18, 7));

assert(0 == gamma_move(test, 9, 35, 2));

assert(14 == gamma_busy_fields(test, 1));

assert(30 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(32 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(17 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(12 == gamma_busy_fields(test, 4));

assert(28 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(13 == gamma_busy_fields(test, 5));

assert(24 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(11 == gamma_busy_fields(test, 6));

assert(28 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(16 == gamma_busy_fields(test, 7));

assert(31 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(12 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 0, 21, 25));

assert(0 == gamma_move(test, 2, 1, 24));

assert(0 == gamma_move(test, 2, 17, 22));

assert(0 == gamma_move(test, 7, 36, 20));

assert(0 == gamma_move(test, 4, 15, 22));

assert(0 == gamma_move(test, 6, 17, 8));

assert(0 == gamma_move(test, 3, 30, 14));

assert(0 == gamma_move(test, 4, 42, 7));

assert(0 == gamma_move(test, 1, 17, 2));

assert(0 == gamma_move(test, 4, 30, 11));

assert(0 == gamma_move(test, 3, 9, 1));

assert(0 == gamma_move(test, 6, 14, 7));

assert(0 == gamma_move(test, 2, 45, 13));

assert(1 == gamma_move(test, 4, 40, 5));

assert(0 == gamma_move(test, 4, 19, 20));

assert(14 == gamma_busy_fields(test, 1));

assert(30 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(32 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(17 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(13 == gamma_busy_fields(test, 4));

assert(30 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(13 == gamma_busy_fields(test, 5));

assert(24 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(11 == gamma_busy_fields(test, 6));

assert(28 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(16 == gamma_busy_fields(test, 7));

assert(31 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(12 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 4, 30, 6));

assert(0 == gamma_move(test, 7, 21, 5));

assert(0 == gamma_move(test, 8, 44, 3));

assert(0 == gamma_move(test, 9, 4, 17));

assert(0 == gamma_move(test, 5, 32, 20));

assert(0 == gamma_move(test, 2, 23, 9));

assert(0 == gamma_move(test, 0, 18, 1));

assert(0 == gamma_move(test, 8, 37, 25));

assert(0 == gamma_move(test, 9, 40, 7));

assert(0 == gamma_move(test, 2, 32, 7));

assert(0 == gamma_move(test, 1, 48, 23));

assert(0 == gamma_move(test, 8, 5, 5));

assert(0 == gamma_move(test, 5, 15, 9));

assert(0 == gamma_move(test, 0, 25, 0));

assert(0 == gamma_move(test, 0, 50, 6));

assert(14 == gamma_busy_fields(test, 1));

assert(30 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(32 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(17 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(13 == gamma_busy_fields(test, 4));

assert(30 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(13 == gamma_busy_fields(test, 5));

assert(24 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(11 == gamma_busy_fields(test, 6));

assert(28 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(16 == gamma_busy_fields(test, 7));

assert(31 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(12 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 5, 15, 7));

assert(0 == gamma_move(test, 1, 3, 7));

assert(0 == gamma_move(test, 1, 15, 10));

assert(0 == gamma_move(test, 0, 21, 22));

assert(0 == gamma_move(test, 8, 6, 0));

assert(0 == gamma_move(test, 4, 17, 12));

assert(0 == gamma_move(test, 9, 2, 16));

assert(0 == gamma_move(test, 3, 14, 13));

assert(0 == gamma_move(test, 5, 18, 0));

assert(0 == gamma_move(test, 1, 28, 10));

assert(0 == gamma_move(test, 8, 2, 6));

assert(0 == gamma_move(test, 1, 32, 10));

assert(0 == gamma_move(test, 1, 49, 16));

assert(0 == gamma_move(test, 5, 22, 5));

assert(0 == gamma_move(test, 9, 13, 2));

assert(14 == gamma_busy_fields(test, 1));

assert(30 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(32 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(17 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(13 == gamma_busy_fields(test, 4));

assert(30 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(13 == gamma_busy_fields(test, 5));

assert(24 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(11 == gamma_busy_fields(test, 6));

assert(28 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(16 == gamma_busy_fields(test, 7));

assert(31 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(12 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 1, 2, 1));

assert(0 == gamma_move(test, 5, 20, 1));

assert(0 == gamma_move(test, 5, 9, 22));

assert(0 == gamma_move(test, 3, 21, 16));

assert(0 == gamma_move(test, 3, 25, 10));

assert(0 == gamma_move(test, 7, 5, 24));

assert(0 == gamma_move(test, 8, 36, 1));

assert(0 == gamma_move(test, 8, 17, 15));

assert(0 == gamma_move(test, 9, 11, 16));

assert(0 == gamma_move(test, 0, 38, 16));

assert(0 == gamma_move(test, 3, 38, 25));

assert(0 == gamma_move(test, 5, 7, 25));

assert(0 == gamma_move(test, 4, 29, 5));

assert(0 == gamma_move(test, 5, 20, 24));

assert(0 == gamma_move(test, 2, 34, 18));

assert(14 == gamma_busy_fields(test, 1));

assert(30 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(32 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(17 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(13 == gamma_busy_fields(test, 4));

assert(30 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(13 == gamma_busy_fields(test, 5));

assert(24 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(11 == gamma_busy_fields(test, 6));

assert(28 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(16 == gamma_busy_fields(test, 7));

assert(31 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(12 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 2, 32, 21));

assert(0 == gamma_move(test, 0, 34, 17));

assert(0 == gamma_move(test, 3, 44, 20));

assert(0 == gamma_move(test, 8, 21, 14));

assert(0 == gamma_move(test, 0, 6, 1));

assert(0 == gamma_move(test, 3, 42, 14));

assert(0 == gamma_move(test, 4, 2, 17));

assert(0 == gamma_move(test, 7, 30, 25));

assert(0 == gamma_move(test, 6, 24, 2));

assert(0 == gamma_move(test, 5, 2, 21));

assert(0 == gamma_move(test, 2, 18, 19));

assert(0 == gamma_move(test, 7, 27, 20));

assert(0 == gamma_move(test, 6, 41, 15));

assert(0 == gamma_move(test, 2, 46, 20));

assert(0 == gamma_move(test, 3, 30, 4));

assert(14 == gamma_busy_fields(test, 1));

assert(30 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(32 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(17 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(13 == gamma_busy_fields(test, 4));

assert(30 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(13 == gamma_busy_fields(test, 5));

assert(24 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(11 == gamma_busy_fields(test, 6));

assert(28 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(16 == gamma_busy_fields(test, 7));

assert(31 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(12 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 7, 1, 12));

assert(0 == gamma_move(test, 8, 15, 7));

assert(0 == gamma_move(test, 8, 29, 13));

assert(1 == gamma_move(test, 5, 0, 9));

assert(0 == gamma_move(test, 0, 42, 11));

assert(0 == gamma_move(test, 5, 39, 7));

assert(0 == gamma_move(test, 3, 33, 6));

assert(0 == gamma_move(test, 7, 36, 13));

assert(0 == gamma_move(test, 4, 46, 9));

assert(0 == gamma_move(test, 4, 29, 15));

assert(0 == gamma_move(test, 7, 7, 25));

assert(0 == gamma_move(test, 9, 32, 1));

assert(0 == gamma_move(test, 1, 26, 4));

assert(0 == gamma_move(test, 3, 40, 14));

assert(0 == gamma_move(test, 6, 1, 12));

assert(14 == gamma_busy_fields(test, 1));

assert(30 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(16 == gamma_busy_fields(test, 2));

assert(31 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(17 == gamma_busy_fields(test, 3));

assert(34 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(13 == gamma_busy_fields(test, 4));

assert(30 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(14 == gamma_busy_fields(test, 5));

assert(24 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(11 == gamma_busy_fields(test, 6));

assert(28 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(16 == gamma_busy_fields(test, 7));

assert(31 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(12 == gamma_busy_fields(test, 8));

assert(27 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


gamma_delete(test);

return 0;

}

