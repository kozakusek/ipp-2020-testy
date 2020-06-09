#include <stdint.h>

#include <stdlib.h>

#include <assert.h>

#include <stdio.h>

#include "gamma.h"



int main()

{

gamma_t *test = gamma_new(100, 100, 8, 10000);

assert(1 == gamma_move(test, 3, 82, 96));

assert(1 == gamma_move(test, 5, 20, 47));

assert(1 == gamma_move(test, 1, 53, 67));

assert(1 == gamma_move(test, 7, 36, 50));

assert(1 == gamma_move(test, 5, 65, 16));

assert(1 == gamma_move(test, 8, 52, 67));

assert(1 == gamma_move(test, 4, 34, 84));

assert(1 == gamma_move(test, 3, 22, 89));

assert(1 == gamma_move(test, 8, 20, 46));

assert(0 == gamma_move(test, 9, 35, 84));

assert(0 == gamma_move(test, 9, 0, -1));

assert(1 == gamma_move(test, 1, 25, 32));

assert(1 == gamma_move(test, 7, 36, 49));

assert(1 == gamma_move(test, 7, 99, 21));

assert(1 == gamma_move(test, 5, 65, 17));

assert(2 == gamma_busy_fields(test, 1));

assert(9987 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(0 == gamma_busy_fields(test, 2));

assert(9987 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(2 == gamma_busy_fields(test, 3));

assert(9987 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(1 == gamma_busy_fields(test, 4));

assert(9987 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(3 == gamma_busy_fields(test, 5));

assert(9987 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(0 == gamma_busy_fields(test, 6));

assert(9987 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(3 == gamma_busy_fields(test, 7));

assert(9987 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(2 == gamma_busy_fields(test, 8));

assert(9987 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 8, 21, 89));

assert(1 == gamma_move(test, 2, 36, 84));

assert(1 == gamma_move(test, 7, 4, 70));

assert(1 == gamma_move(test, 2, 44, 55));

assert(1 == gamma_move(test, 7, 5, 70));

assert(1 == gamma_move(test, 8, 66, 16));

assert(1 == gamma_move(test, 1, 36, 83));

assert(1 == gamma_move(test, 2, 36, 48));

assert(1 == gamma_move(test, 7, 5, 69));

assert(0 == gamma_move(test, 0, 67, 16));

assert(1 == gamma_move(test, 4, 74, 94));

assert(1 == gamma_move(test, 5, 0, 27));

assert(1 == gamma_move(test, 4, 51, 67));

assert(1 == gamma_move(test, 3, 21, 90));

assert(1 == gamma_move(test, 6, 21, 46));

assert(3 == gamma_busy_fields(test, 1));

assert(9973 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(3 == gamma_busy_fields(test, 2));

assert(9973 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(3 == gamma_busy_fields(test, 3));

assert(9973 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(3 == gamma_busy_fields(test, 4));

assert(9973 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(4 == gamma_busy_fields(test, 5));

assert(9973 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(1 == gamma_busy_fields(test, 6));

assert(9973 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(6 == gamma_busy_fields(test, 7));

assert(9973 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(4 == gamma_busy_fields(test, 8));

assert(9973 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 8, 22, 3));

assert(1 == gamma_move(test, 6, 35, 83));

assert(1 == gamma_move(test, 4, 95, 21));

assert(1 == gamma_move(test, 5, 22, 90));

assert(1 == gamma_move(test, 8, 17, 37));

assert(1 == gamma_move(test, 6, 19, 94));

assert(1 == gamma_move(test, 4, 95, 22));

assert(1 == gamma_move(test, 2, 22, 86));

assert(1 == gamma_move(test, 2, 6, 69));

assert(1 == gamma_move(test, 6, 97, 95));

assert(1 == gamma_move(test, 4, 96, 22));

assert(0 == gamma_move(test, 0, 21, 90));

assert(1 == gamma_move(test, 1, 82, 95));

assert(1 == gamma_move(test, 7, 35, 48));

assert(1 == gamma_move(test, 1, 67, 17));

assert(5 == gamma_busy_fields(test, 1));

assert(9959 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 1);
assert(5 == gamma_busy_fields(test, 2));

assert(9959 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(3 == gamma_busy_fields(test, 3));

assert(9959 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(6 == gamma_busy_fields(test, 4));

assert(9959 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(5 == gamma_busy_fields(test, 5));

assert(9959 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(4 == gamma_busy_fields(test, 6));

assert(9959 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(7 == gamma_busy_fields(test, 7));

assert(9959 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(6 == gamma_busy_fields(test, 8));

assert(9959 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 1, 96, 23));

assert(1 == gamma_move(test, 1, 34, 48));

assert(1 == gamma_move(test, 3, 34, 47));

assert(1 == gamma_move(test, 6, 21, 47));

assert(1 == gamma_move(test, 3, 95, 23));

assert(1 == gamma_move(test, 3, 22, 63));

assert(1 == gamma_move(test, 5, 21, 48));

assert(0 == gamma_move(test, 9, 53, 67));

assert(1 == gamma_move(test, 3, 63, 61));

assert(1 == gamma_move(test, 1, 27, 67));

assert(1 == gamma_move(test, 2, 75, 80));

assert(1 == gamma_move(test, 3, 7, 69));

assert(1 == gamma_move(test, 2, 9, 54));

assert(1 == gamma_move(test, 1, 53, 65));

assert(1 == gamma_move(test, 6, 35, 47));

assert(1 == gamma_golden_move(test, 1, 34, 47));

assert(10 == gamma_busy_fields(test, 1));

assert(9945 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(7 == gamma_busy_fields(test, 2));

assert(9945 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(7 == gamma_busy_fields(test, 3));

assert(9945 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(6 == gamma_busy_fields(test, 4));

assert(9945 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(6 == gamma_busy_fields(test, 5));

assert(9945 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(6 == gamma_busy_fields(test, 6));

assert(9945 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(7 == gamma_busy_fields(test, 7));

assert(9945 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(6 == gamma_busy_fields(test, 8));

assert(9945 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 0, 35, 46));

assert(0 == gamma_move(test, 0, 82, 96));

assert(1 == gamma_move(test, 1, 83, 96));

assert(1 == gamma_move(test, 3, 5, 7));

assert(1 == gamma_move(test, 7, 21, 49));

assert(1 == gamma_move(test, 3, 25, 29));

assert(1 == gamma_move(test, 1, 22, 49));

assert(1 == gamma_move(test, 7, 21, 95));

assert(1 == gamma_move(test, 6, 68, 17));

assert(0 == gamma_move(test, 9, 27, 35));

assert(1 == gamma_move(test, 6, 13, 66));

assert(1 == gamma_move(test, 8, 94, 23));

assert(1 == gamma_move(test, 1, 35, 82));

assert(1 == gamma_move(test, 6, 29, 93));

assert(1 == gamma_move(test, 5, 33, 51));

assert(13 == gamma_busy_fields(test, 1));

assert(9933 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(7 == gamma_busy_fields(test, 2));

assert(9933 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(9 == gamma_busy_fields(test, 3));

assert(9933 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(6 == gamma_busy_fields(test, 4));

assert(9933 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(7 == gamma_busy_fields(test, 5));

assert(9933 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(9 == gamma_busy_fields(test, 6));

assert(9933 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(9 == gamma_busy_fields(test, 7));

assert(9933 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 1);
assert(7 == gamma_busy_fields(test, 8));

assert(9933 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 6, 36, 49));

assert(1 == gamma_move(test, 6, 95, 24));

assert(1 == gamma_move(test, 8, 94, 24));

assert(1 == gamma_move(test, 2, 93, 11));

assert(1 == gamma_move(test, 5, 95, 52));

assert(1 == gamma_move(test, 8, 53, 66));

assert(1 == gamma_move(test, 6, 48, 18));

assert(0 == gamma_move(test, 0, 67, 25));

assert(0 == gamma_move(test, 9, 83, 97));

assert(1 == gamma_move(test, 2, 53, 16));

assert(1 == gamma_move(test, 3, 2, 86));

assert(1 == gamma_move(test, 4, 23, 49));

assert(1 == gamma_move(test, 4, 20, 90));

assert(1 == gamma_move(test, 2, 19, 90));

assert(1 == gamma_move(test, 2, 5, 68));

assert(1 == gamma_golden_move(test, 7, 82, 96));

assert(13 == gamma_busy_fields(test, 1));

assert(9921 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(11 == gamma_busy_fields(test, 2));

assert(9921 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(9 == gamma_busy_fields(test, 3));

assert(9921 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(8 == gamma_busy_fields(test, 4));

assert(9921 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(8 == gamma_busy_fields(test, 5));

assert(9921 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(11 == gamma_busy_fields(test, 6));

assert(9921 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(10 == gamma_busy_fields(test, 7));

assert(9921 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(9 == gamma_busy_fields(test, 8));

assert(9921 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 6, 69, 17));

assert(1 == gamma_move(test, 4, 93, 24));

assert(1 == gamma_move(test, 2, 60, 20));

assert(0 == gamma_move(test, 9, 5, 69));

assert(1 == gamma_move(test, 6, 30, 57));

assert(1 == gamma_move(test, 8, 0, 23));

assert(1 == gamma_move(test, 4, 39, 8));

assert(1 == gamma_move(test, 7, 18, 9));

assert(1 == gamma_move(test, 3, 33, 0));

assert(0 == gamma_move(test, 9, 24, 49));

assert(1 == gamma_move(test, 7, 61, 43));

assert(0 == gamma_move(test, 0, 52, 91));

assert(1 == gamma_move(test, 4, 83, 98));

assert(1 == gamma_move(test, 8, 21, 91));

assert(1 == gamma_move(test, 3, 34, 83));

assert(13 == gamma_busy_fields(test, 1));

assert(9909 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(12 == gamma_busy_fields(test, 2));

assert(9909 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(11 == gamma_busy_fields(test, 3));

assert(9909 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(11 == gamma_busy_fields(test, 4));

assert(9909 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(8 == gamma_busy_fields(test, 5));

assert(9909 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(13 == gamma_busy_fields(test, 6));

assert(9909 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(12 == gamma_busy_fields(test, 7));

assert(9909 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(11 == gamma_busy_fields(test, 8));

assert(9909 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 5, 22, 91));

assert(0 == gamma_move(test, 0, 52, 66));

assert(1 == gamma_move(test, 6, 84, 98));

assert(0 == gamma_move(test, 9, 94, 23));

assert(1 == gamma_move(test, 3, 42, 78));

assert(0 == gamma_move(test, 0, 23, 49));

assert(1 == gamma_move(test, 3, 48, 8));

assert(1 == gamma_move(test, 4, 23, 48));

assert(1 == gamma_move(test, 3, 22, 92));

assert(1 == gamma_move(test, 5, 22, 48));

assert(1 == gamma_move(test, 3, 51, 66));

assert(1 == gamma_move(test, 1, 5, 24));

assert(0 == gamma_move(test, 9, 24, 46));

assert(0 == gamma_move(test, 9, -2, -4));

assert(1 == gamma_move(test, 1, 49, 40));

assert(15 == gamma_busy_fields(test, 1));

assert(9899 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(12 == gamma_busy_fields(test, 2));

assert(9899 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(15 == gamma_busy_fields(test, 3));

assert(9899 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(12 == gamma_busy_fields(test, 4));

assert(9899 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(10 == gamma_busy_fields(test, 5));

assert(9899 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(14 == gamma_busy_fields(test, 6));

assert(9899 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(12 == gamma_busy_fields(test, 7));

assert(9899 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(11 == gamma_busy_fields(test, 8));

assert(9899 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 6, 33, 47));

assert(1 == gamma_move(test, 3, 59, 89));

assert(1 == gamma_move(test, 2, 89, 95));

assert(1 == gamma_move(test, 1, 46, 47));

assert(0 == gamma_move(test, 0, 32, 47));

assert(0 == gamma_move(test, 9, 84, 98));

assert(1 == gamma_move(test, 1, 84, 82));

assert(1 == gamma_move(test, 6, 32, 48));

assert(0 == gamma_move(test, 3, 100, 91));

assert(1 == gamma_move(test, 5, 37, 5));

assert(0 == gamma_move(test, 0, 50, 66));

assert(1 == gamma_move(test, 2, 84, 97));

assert(1 == gamma_move(test, 1, 6, 68));

assert(1 == gamma_move(test, 7, 32, 49));

assert(0 == gamma_move(test, 9, 12, 33));

assert(18 == gamma_busy_fields(test, 1));

assert(9889 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(14 == gamma_busy_fields(test, 2));

assert(9889 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(16 == gamma_busy_fields(test, 3));

assert(9889 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(12 == gamma_busy_fields(test, 4));

assert(9889 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(11 == gamma_busy_fields(test, 5));

assert(9889 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(16 == gamma_busy_fields(test, 6));

assert(9889 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(13 == gamma_busy_fields(test, 7));

assert(9889 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(11 == gamma_busy_fields(test, 8));

assert(9889 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 5, 33, 49));

assert(1 == gamma_move(test, 8, 50, 65));

assert(0 == gamma_move(test, 0, 49, 66));

assert(1 == gamma_move(test, 2, 83, 97));

assert(1 == gamma_move(test, 3, 6, 67));

assert(1 == gamma_move(test, 2, 80, 19));

assert(0 == gamma_move(test, 9, 6, 68));

assert(0 == gamma_move(test, 9, 98, 32));

assert(1 == gamma_move(test, 5, 29, 23));

assert(1 == gamma_move(test, 3, 49, 65));

assert(1 == gamma_move(test, 2, 88, 60));

assert(1 == gamma_move(test, 4, 22, 30));

assert(0 == gamma_move(test, 9, 21, 92));

assert(1 == gamma_move(test, 7, 23, 53));

assert(1 == gamma_move(test, 6, 26, 68));

assert(18 == gamma_busy_fields(test, 1));

assert(9878 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(17 == gamma_busy_fields(test, 2));

assert(9878 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(18 == gamma_busy_fields(test, 3));

assert(9878 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(13 == gamma_busy_fields(test, 4));

assert(9878 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(13 == gamma_busy_fields(test, 5));

assert(9878 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(17 == gamma_busy_fields(test, 6));

assert(9878 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(14 == gamma_busy_fields(test, 7));

assert(9878 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(12 == gamma_busy_fields(test, 8));

assert(9878 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 7, 84, 67));

assert(0 == gamma_move(test, 0, 66, 71));

assert(1 == gamma_move(test, 1, 94, 51));

assert(0 == gamma_move(test, 0, 32, 49));

assert(0 == gamma_move(test, 9, 84, 96));

assert(1 == gamma_move(test, 7, 32, 78));

assert(0 == gamma_move(test, 9, 68, 17));

assert(0 == gamma_move(test, 9, 13, 51));

assert(1 == gamma_move(test, 3, 86, 19));

assert(1 == gamma_move(test, 2, 93, 98));

assert(1 == gamma_move(test, 8, 6, 70));

assert(1 == gamma_move(test, 5, 41, 66));

assert(1 == gamma_move(test, 6, 21, 54));

assert(1 == gamma_move(test, 2, 87, 84));

assert(1 == gamma_move(test, 1, 85, 23));

assert(20 == gamma_busy_fields(test, 1));

assert(9868 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(19 == gamma_busy_fields(test, 2));

assert(9868 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(19 == gamma_busy_fields(test, 3));

assert(9868 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(13 == gamma_busy_fields(test, 4));

assert(9868 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(14 == gamma_busy_fields(test, 5));

assert(9868 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(18 == gamma_busy_fields(test, 6));

assert(9868 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(16 == gamma_busy_fields(test, 7));

assert(9868 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(13 == gamma_busy_fields(test, 8));

assert(9868 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 7, 44, 21));

assert(1 == gamma_move(test, 4, 61, 49));

assert(0 == gamma_move(test, 0, 11, 100));

assert(1 == gamma_move(test, 2, 84, 95));

assert(1 == gamma_move(test, 4, 7, 68));

assert(0 == gamma_move(test, 9, 21, 92));

assert(0 == gamma_move(test, 7, 100, 45));

assert(1 == gamma_move(test, 7, 40, 51));

assert(1 == gamma_move(test, 7, 7, 18));

assert(1 == gamma_move(test, 4, 13, 8));

assert(1 == gamma_move(test, 7, 74, 60));

assert(1 == gamma_move(test, 3, 97, 59));

assert(0 == gamma_move(test, 0, 22, 49));

assert(1 == gamma_move(test, 6, 84, 94));

assert(1 == gamma_move(test, 3, 30, 51));

assert(20 == gamma_busy_fields(test, 1));

assert(9857 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(20 == gamma_busy_fields(test, 2));

assert(9857 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(21 == gamma_busy_fields(test, 3));

assert(9857 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(16 == gamma_busy_fields(test, 4));

assert(9857 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(14 == gamma_busy_fields(test, 5));

assert(9857 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(19 == gamma_busy_fields(test, 6));

assert(9857 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(20 == gamma_busy_fields(test, 7));

assert(9857 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(13 == gamma_busy_fields(test, 8));

assert(9857 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 2, 9, 39));

assert(1 == gamma_move(test, 1, 83, 70));

assert(1 == gamma_move(test, 6, 31, 49));

assert(1 == gamma_move(test, 4, 89, 34));

assert(1 == gamma_move(test, 7, 2, 21));

assert(1 == gamma_move(test, 1, 58, 59));

assert(1 == gamma_move(test, 4, 31, 48));

assert(0 == gamma_move(test, 9, 21, 91));

assert(1 == gamma_move(test, 6, 68, 79));

assert(1 == gamma_move(test, 1, 27, 75));

assert(1 == gamma_move(test, 1, 57, 93));

assert(1 == gamma_move(test, 4, 98, 7));

assert(1 == gamma_move(test, 2, 99, 79));

assert(1 == gamma_move(test, 6, 82, 20));

assert(1 == gamma_move(test, 6, 94, 60));

assert(24 == gamma_busy_fields(test, 1));

assert(9843 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(22 == gamma_busy_fields(test, 2));

assert(9843 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(21 == gamma_busy_fields(test, 3));

assert(9843 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(19 == gamma_busy_fields(test, 4));

assert(9843 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(14 == gamma_busy_fields(test, 5));

assert(9843 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(23 == gamma_busy_fields(test, 6));

assert(9843 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(21 == gamma_busy_fields(test, 7));

assert(9843 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(13 == gamma_busy_fields(test, 8));

assert(9843 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 3, 92, 29));

assert(1 == gamma_move(test, 2, 33, 21));

assert(1 == gamma_move(test, 2, 70, 40));

assert(0 == gamma_move(test, 0, 6, 68));

assert(0 == gamma_move(test, 9, 84, 95));

assert(1 == gamma_move(test, 6, 94, 59));

assert(1 == gamma_move(test, 8, 6, 73));

assert(0 == gamma_move(test, 0, 34, 83));

assert(1 == gamma_move(test, 4, 45, 91));

assert(1 == gamma_move(test, 2, 37, 45));

assert(1 == gamma_move(test, 4, 57, 54));

assert(1 == gamma_move(test, 7, 93, 59));

assert(0 == gamma_move(test, 0, 69, 25));

assert(1 == gamma_move(test, 2, 84, 93));

assert(1 == gamma_move(test, 6, 88, 92));

assert(24 == gamma_busy_fields(test, 1));

assert(9832 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(26 == gamma_busy_fields(test, 2));

assert(9832 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(22 == gamma_busy_fields(test, 3));

assert(9832 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(21 == gamma_busy_fields(test, 4));

assert(9832 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(14 == gamma_busy_fields(test, 5));

assert(9832 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(25 == gamma_busy_fields(test, 6));

assert(9832 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(22 == gamma_busy_fields(test, 7));

assert(9832 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(14 == gamma_busy_fields(test, 8));

assert(9832 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 9, 22, 88));

assert(1 == gamma_move(test, 2, 69, 20));

assert(1 == gamma_move(test, 3, 7, 67));

assert(1 == gamma_move(test, 6, 89, 0));

assert(1 == gamma_move(test, 7, 64, 12));

assert(1 == gamma_move(test, 5, 68, 18));

assert(1 == gamma_move(test, 7, 49, 66));

assert(1 == gamma_move(test, 2, 67, 18));

assert(0 == gamma_move(test, 0, 8, 67));

assert(0 == gamma_move(test, 9, 85, 93));

assert(1 == gamma_move(test, 7, 82, 39));

assert(1 == gamma_move(test, 5, 66, 18));

assert(1 == gamma_move(test, 5, 48, 66));

assert(1 == gamma_move(test, 5, 47, 66));

assert(1 == gamma_move(test, 6, 46, 66));

assert(24 == gamma_busy_fields(test, 1));

assert(9820 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(28 == gamma_busy_fields(test, 2));

assert(9820 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(23 == gamma_busy_fields(test, 3));

assert(9820 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(21 == gamma_busy_fields(test, 4));

assert(9820 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(18 == gamma_busy_fields(test, 5));

assert(9820 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(27 == gamma_busy_fields(test, 6));

assert(9820 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(25 == gamma_busy_fields(test, 7));

assert(9820 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(14 == gamma_busy_fields(test, 8));

assert(9820 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 4, 19, 99));

assert(0 == gamma_move(test, 0, 23, 88));

assert(0 == gamma_move(test, 9, 86, 93));

assert(0 == gamma_move(test, 0, -2, -4));

assert(1 == gamma_move(test, 5, 86, 94));

assert(1 == gamma_move(test, 6, 46, 65));

assert(1 == gamma_move(test, 1, 93, 25));

assert(1 == gamma_move(test, 7, 94, 92));

assert(1 == gamma_move(test, 2, 66, 17));

assert(1 == gamma_move(test, 1, 8, 68));

assert(1 == gamma_move(test, 7, 33, 50));

assert(0 == gamma_move(test, 0, 66, 16));

assert(1 == gamma_move(test, 4, 87, 94));

assert(1 == gamma_move(test, 5, 22, 88));

assert(1 == gamma_move(test, 5, 54, 31));

assert(26 == gamma_busy_fields(test, 1));

assert(9809 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(29 == gamma_busy_fields(test, 2));

assert(9809 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(23 == gamma_busy_fields(test, 3));

assert(9809 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(23 == gamma_busy_fields(test, 4));

assert(9809 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(21 == gamma_busy_fields(test, 5));

assert(9809 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(28 == gamma_busy_fields(test, 6));

assert(9809 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(27 == gamma_busy_fields(test, 7));

assert(9809 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(14 == gamma_busy_fields(test, 8));

assert(9809 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 7, 21, 88));

assert(1 == gamma_move(test, 4, 67, 72));

assert(0 == gamma_move(test, 9, 76, 70));

assert(1 == gamma_move(test, 3, 14, 40));

assert(1 == gamma_move(test, 8, 45, 2));

assert(1 == gamma_move(test, 3, 33, 83));

assert(1 == gamma_move(test, 6, 24, 49));

assert(1 == gamma_move(test, 4, 54, 40));

assert(1 == gamma_move(test, 5, 21, 87));

assert(1 == gamma_move(test, 5, 89, 78));

assert(1 == gamma_move(test, 2, 76, 58));

assert(1 == gamma_move(test, 6, 8, 67));

assert(1 == gamma_move(test, 5, 93, 23));

assert(1 == gamma_move(test, 4, 66, 77));

assert(1 == gamma_move(test, 5, 67, 65));

assert(26 == gamma_busy_fields(test, 1));

assert(9795 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(30 == gamma_busy_fields(test, 2));

assert(9795 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(25 == gamma_busy_fields(test, 3));

assert(9795 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(26 == gamma_busy_fields(test, 4));

assert(9795 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(25 == gamma_busy_fields(test, 5));

assert(9795 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(30 == gamma_busy_fields(test, 6));

assert(9795 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(28 == gamma_busy_fields(test, 7));

assert(9795 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(15 == gamma_busy_fields(test, 8));

assert(9795 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 6, 20, 87));

assert(1 == gamma_move(test, 7, 0, 2));

assert(1 == gamma_move(test, 3, 64, 16));

assert(1 == gamma_move(test, 4, 24, 50));

assert(1 == gamma_move(test, 8, 20, 88));

assert(1 == gamma_move(test, 7, 16, 11));

assert(0 == gamma_move(test, 9, 64, 15));

assert(1 == gamma_move(test, 5, 73, 47));

assert(0 == gamma_move(test, 0, 45, 66));

assert(1 == gamma_move(test, 2, 87, 93));

assert(0 == gamma_move(test, 9, 8, 68));

assert(1 == gamma_move(test, 2, 48, 4));

assert(1 == gamma_move(test, 2, 8, 69));

assert(0 == gamma_move(test, 0, 7, 69));

assert(1 == gamma_move(test, 5, 87, 92));

assert(26 == gamma_busy_fields(test, 1));

assert(9784 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(33 == gamma_busy_fields(test, 2));

assert(9784 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(26 == gamma_busy_fields(test, 3));

assert(9784 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(27 == gamma_busy_fields(test, 4));

assert(9784 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(27 == gamma_busy_fields(test, 5));

assert(9784 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 1);
assert(31 == gamma_busy_fields(test, 6));

assert(9784 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(30 == gamma_busy_fields(test, 7));

assert(9784 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(16 == gamma_busy_fields(test, 8));

assert(9784 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 4, 34, 50));

assert(1 == gamma_move(test, 6, 19, 88));

assert(0 == gamma_move(test, 0, 92, 24));

assert(1 == gamma_move(test, 3, 86, 92));

assert(1 == gamma_move(test, 2, 24, 51));

assert(0 == gamma_move(test, 0, 6, 69));

assert(0 == gamma_move(test, 9, 87, 92));

assert(1 == gamma_move(test, 6, 66, 46));

assert(1 == gamma_move(test, 3, 92, 23));

assert(1 == gamma_move(test, 7, 23, 51));

assert(0 == gamma_move(test, 9, 8, 61));

assert(1 == gamma_move(test, 4, 46, 64));

assert(1 == gamma_move(test, 4, 41, 4));

assert(1 == gamma_move(test, 3, 19, 87));

assert(1 == gamma_move(test, 1, 14, 28));

assert(1 == gamma_golden_move(test, 5, 94, 24));

assert(27 == gamma_busy_fields(test, 1));

assert(9773 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(34 == gamma_busy_fields(test, 2));

assert(9773 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(29 == gamma_busy_fields(test, 3));

assert(9773 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(30 == gamma_busy_fields(test, 4));

assert(9773 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(28 == gamma_busy_fields(test, 5));

assert(9773 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(33 == gamma_busy_fields(test, 6));

assert(9773 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(31 == gamma_busy_fields(test, 7));

assert(9773 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(15 == gamma_busy_fields(test, 8));

assert(9773 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 2, 45, 65));

assert(0 == gamma_move(test, 0, 33, 16));

assert(1 == gamma_move(test, 6, 43, 34));

assert(0 == gamma_move(test, 0, 91, 23));

assert(1 == gamma_move(test, 8, 55, 93));

assert(1 == gamma_move(test, 6, 33, 65));

assert(1 == gamma_move(test, 7, 91, 24));

assert(1 == gamma_move(test, 2, 65, 15));

assert(1 == gamma_move(test, 6, 61, 52));

assert(1 == gamma_move(test, 8, 92, 24));

assert(0 == gamma_move(test, 9, 33, 82));

assert(1 == gamma_move(test, 3, 63, 25));

assert(0 == gamma_move(test, 9, 24, 52));

assert(1 == gamma_move(test, 5, 54, 63));

assert(1 == gamma_move(test, 1, 44, 65));

assert(28 == gamma_busy_fields(test, 1));

assert(9762 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(36 == gamma_busy_fields(test, 2));

assert(9762 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(30 == gamma_busy_fields(test, 3));

assert(9762 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(30 == gamma_busy_fields(test, 4));

assert(9762 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(29 == gamma_busy_fields(test, 5));

assert(9762 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(36 == gamma_busy_fields(test, 6));

assert(9762 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(32 == gamma_busy_fields(test, 7));

assert(9762 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(17 == gamma_busy_fields(test, 8));

assert(9762 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 2, 79, 32));

assert(1 == gamma_move(test, 5, 13, 15));

assert(1 == gamma_move(test, 3, 44, 64));

assert(1 == gamma_move(test, 6, 5, 51));

assert(1 == gamma_move(test, 8, 92, 25));

assert(1 == gamma_move(test, 2, 58, 16));

assert(1 == gamma_move(test, 2, 33, 1));

assert(1 == gamma_move(test, 6, 54, 91));

assert(1 == gamma_move(test, 2, 92, 26));

assert(1 == gamma_move(test, 6, 83, 44));

assert(0 == gamma_move(test, 9, 91, 26));

assert(1 == gamma_move(test, 1, 79, 96));

assert(1 == gamma_move(test, 2, 99, 72));

assert(1 == gamma_move(test, 1, 8, 66));

assert(1 == gamma_move(test, 3, 32, 50));

assert(30 == gamma_busy_fields(test, 1));

assert(9748 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(41 == gamma_busy_fields(test, 2));

assert(9748 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(32 == gamma_busy_fields(test, 3));

assert(9748 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(30 == gamma_busy_fields(test, 4));

assert(9748 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(30 == gamma_busy_fields(test, 5));

assert(9748 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(39 == gamma_busy_fields(test, 6));

assert(9748 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(32 == gamma_busy_fields(test, 7));

assert(9748 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(18 == gamma_busy_fields(test, 8));

assert(9748 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 6, 32, 51));

assert(1 == gamma_move(test, 1, 72, 37));

assert(1 == gamma_move(test, 7, 24, 39));

assert(1 == gamma_move(test, 6, 69, 34));

assert(0 == gamma_move(test, 9, 91, 25));

assert(1 == gamma_move(test, 8, 76, 61));

assert(1 == gamma_move(test, 2, 33, 81));

assert(1 == gamma_move(test, 5, 99, 17));

assert(1 == gamma_move(test, 7, 45, 64));

assert(0 == gamma_move(test, 0, 63, 92));

assert(1 == gamma_move(test, 2, 94, 2));

assert(1 == gamma_move(test, 6, 54, 56));

assert(0 == gamma_move(test, 0, 90, 25));

assert(0 == gamma_move(test, 0, 88, 93));

assert(0 == gamma_move(test, 9, 100, 14));

assert(31 == gamma_busy_fields(test, 1));

assert(9738 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(43 == gamma_busy_fields(test, 2));

assert(9738 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(32 == gamma_busy_fields(test, 3));

assert(9738 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(30 == gamma_busy_fields(test, 4));

assert(9738 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(31 == gamma_busy_fields(test, 5));

assert(9738 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(42 == gamma_busy_fields(test, 6));

assert(9738 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(34 == gamma_busy_fields(test, 7));

assert(9738 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(19 == gamma_busy_fields(test, 8));

assert(9738 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 4, 64, 15));

assert(1 == gamma_move(test, 1, 9, 27));

assert(1 == gamma_move(test, 3, 3, 54));

assert(1 == gamma_move(test, 4, 96, 2));

assert(1 == gamma_move(test, 2, 8, 1));

assert(1 == gamma_move(test, 3, 9, 66));

assert(1 == gamma_move(test, 5, 66, 21));

assert(1 == gamma_move(test, 3, 75, 64));

assert(1 == gamma_move(test, 2, 2, 10));

assert(0 == gamma_move(test, 0, 9, 67));

assert(1 == gamma_move(test, 6, 84, 28));

assert(1 == gamma_move(test, 6, 5, 28));

assert(0 == gamma_move(test, 0, 89, 25));

assert(1 == gamma_move(test, 6, 3, 59));

assert(0 == gamma_move(test, 0, 89, 24));

assert(32 == gamma_busy_fields(test, 1));

assert(9726 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(45 == gamma_busy_fields(test, 2));

assert(9726 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(35 == gamma_busy_fields(test, 3));

assert(9726 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(32 == gamma_busy_fields(test, 4));

assert(9726 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(32 == gamma_busy_fields(test, 5));

assert(9726 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(45 == gamma_busy_fields(test, 6));

assert(9726 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(34 == gamma_busy_fields(test, 7));

assert(9726 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(19 == gamma_busy_fields(test, 8));

assert(9726 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 7, 18, 64));

assert(1 == gamma_move(test, 7, 38, 84));

assert(1 == gamma_move(test, 6, 59, 56));

assert(1 == gamma_move(test, 4, 89, 23));

assert(1 == gamma_move(test, 4, 47, 83));

assert(1 == gamma_move(test, 2, 10, 81));

assert(1 == gamma_move(test, 3, 89, 58));

assert(0 == gamma_move(test, 0, 24, 51));

assert(0 == gamma_move(test, 0, 86, 91));

assert(1 == gamma_move(test, 4, 59, 53));

assert(1 == gamma_move(test, 1, 19, 86));

assert(1 == gamma_move(test, 5, 5, 31));

assert(0 == gamma_move(test, 0, 45, 64));

assert(1 == gamma_move(test, 5, 6, 7));

assert(1 == gamma_move(test, 1, 45, 63));

assert(34 == gamma_busy_fields(test, 1));

assert(9714 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(46 == gamma_busy_fields(test, 2));

assert(9714 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(36 == gamma_busy_fields(test, 3));

assert(9714 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(35 == gamma_busy_fields(test, 4));

assert(9714 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(34 == gamma_busy_fields(test, 5));

assert(9714 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(46 == gamma_busy_fields(test, 6));

assert(9714 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(36 == gamma_busy_fields(test, 7));

assert(9714 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(19 == gamma_busy_fields(test, 8));

assert(9714 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 8, 64, 14));

assert(1 == gamma_move(test, 1, 33, 82));

assert(1 == gamma_move(test, 5, 35, 50));

assert(1 == gamma_move(test, 1, 44, 63));

assert(1 == gamma_move(test, 4, 35, 51));

assert(1 == gamma_move(test, 4, 20, 86));

assert(1 == gamma_move(test, 7, 20, 85));

assert(1 == gamma_move(test, 7, 95, 78));

assert(0 == gamma_move(test, 0, 63, 30));

assert(0 == gamma_move(test, 5, 98, 100));

assert(1 == gamma_move(test, 3, 5, 16));

assert(1 == gamma_move(test, 1, 64, 41));

assert(1 == gamma_move(test, 5, 35, 52));

assert(1 == gamma_move(test, 6, 31, 15));

assert(1 == gamma_move(test, 5, 89, 22));

assert(37 == gamma_busy_fields(test, 1));

assert(9701 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(46 == gamma_busy_fields(test, 2));

assert(9701 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(37 == gamma_busy_fields(test, 3));

assert(9701 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(37 == gamma_busy_fields(test, 4));

assert(9701 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(37 == gamma_busy_fields(test, 5));

assert(9701 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(47 == gamma_busy_fields(test, 6));

assert(9701 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(38 == gamma_busy_fields(test, 7));

assert(9701 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(20 == gamma_busy_fields(test, 8));

assert(9701 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 6, 23, 50));

assert(1 == gamma_move(test, 1, 13, 12));

assert(1 == gamma_move(test, 5, 26, 50));

assert(1 == gamma_move(test, 6, 43, 64));

assert(1 == gamma_move(test, 6, 88, 23));

assert(1 == gamma_move(test, 3, 88, 22));

assert(1 == gamma_move(test, 3, 37, 92));

assert(1 == gamma_move(test, 3, 60, 82));

assert(1 == gamma_move(test, 8, 41, 31));

assert(1 == gamma_move(test, 8, 55, 16));

assert(0 == gamma_move(test, 0, 32, 81));

assert(0 == gamma_move(test, 0, 88, 93));

assert(1 == gamma_move(test, 8, 75, 15));

assert(0 == gamma_move(test, 0, 33, 81));

assert(1 == gamma_move(test, 6, 88, 94));

assert(38 == gamma_busy_fields(test, 1));

assert(9689 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(46 == gamma_busy_fields(test, 2));

assert(9689 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 1);
assert(40 == gamma_busy_fields(test, 3));

assert(9689 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(37 == gamma_busy_fields(test, 4));

assert(9689 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(38 == gamma_busy_fields(test, 5));

assert(9689 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(51 == gamma_busy_fields(test, 6));

assert(9689 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(38 == gamma_busy_fields(test, 7));

assert(9689 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(23 == gamma_busy_fields(test, 8));

assert(9689 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 6, 46, 9));

assert(1 == gamma_move(test, 8, 76, 6));

assert(1 == gamma_move(test, 1, 79, 63));

assert(1 == gamma_move(test, 3, 54, 33));

assert(1 == gamma_move(test, 1, 25, 50));

assert(0 == gamma_move(test, 0, 35, 51));

assert(1 == gamma_move(test, 6, 88, 93));

assert(1 == gamma_move(test, 7, 89, 21));

assert(0 == gamma_move(test, 8, 19, 94));

assert(1 == gamma_move(test, 5, 32, 81));

assert(1 == gamma_move(test, 3, 42, 64));

assert(1 == gamma_move(test, 2, 47, 73));

assert(1 == gamma_move(test, 8, 1, 27));

assert(1 == gamma_move(test, 7, 71, 22));

assert(1 == gamma_move(test, 4, 63, 14));

assert(1 == gamma_golden_move(test, 2, 48, 8));

assert(40 == gamma_busy_fields(test, 1));

assert(9676 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(48 == gamma_busy_fields(test, 2));

assert(9676 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(41 == gamma_busy_fields(test, 3));

assert(9676 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(38 == gamma_busy_fields(test, 4));

assert(9676 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(39 == gamma_busy_fields(test, 5));

assert(9676 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(53 == gamma_busy_fields(test, 6));

assert(9676 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(40 == gamma_busy_fields(test, 7));

assert(9676 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(25 == gamma_busy_fields(test, 8));

assert(9676 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 0, 9, 67));

assert(1 == gamma_move(test, 4, 28, 28));

assert(1 == gamma_move(test, 3, 71, 26));

assert(1 == gamma_move(test, 2, 90, 40));

assert(1 == gamma_move(test, 2, 99, 74));

assert(1 == gamma_move(test, 1, 9, 65));

assert(1 == gamma_move(test, 6, 36, 51));

assert(0 == gamma_move(test, 9, 89, 20));

assert(1 == gamma_move(test, 4, 16, 86));

assert(1 == gamma_move(test, 4, 29, 22));

assert(1 == gamma_move(test, 1, 17, 4));

assert(1 == gamma_move(test, 5, 36, 52));

assert(1 == gamma_move(test, 7, 42, 63));

assert(1 == gamma_move(test, 1, 63, 15));

assert(1 == gamma_move(test, 6, 36, 59));

assert(43 == gamma_busy_fields(test, 1));

assert(9663 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(50 == gamma_busy_fields(test, 2));

assert(9663 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(42 == gamma_busy_fields(test, 3));

assert(9663 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(41 == gamma_busy_fields(test, 4));

assert(9663 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(40 == gamma_busy_fields(test, 5));

assert(9663 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(55 == gamma_busy_fields(test, 6));

assert(9663 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(41 == gamma_busy_fields(test, 7));

assert(9663 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(25 == gamma_busy_fields(test, 8));

assert(9663 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 5, 35, 53));

assert(1 == gamma_move(test, 3, 42, 62));

assert(1 == gamma_move(test, 7, 72, 42));

assert(0 == gamma_move(test, 0, 63, 16));

assert(1 == gamma_move(test, 5, 93, 21));

assert(1 == gamma_move(test, 6, 23, 12));

assert(1 == gamma_move(test, 1, 90, 17));

assert(1 == gamma_move(test, 8, 36, 53));

assert(1 == gamma_move(test, 3, 40, 91));

assert(0 == gamma_move(test, 1, 25, 32));

assert(1 == gamma_move(test, 6, 7, 9));

assert(1 == gamma_move(test, 2, 79, 46));

assert(1 == gamma_move(test, 1, 8, 65));

assert(0 == gamma_move(test, 0, 35, 52));

assert(1 == gamma_move(test, 3, 39, 69));

assert(45 == gamma_busy_fields(test, 1));

assert(9651 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(51 == gamma_busy_fields(test, 2));

assert(9651 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(45 == gamma_busy_fields(test, 3));

assert(9651 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(41 == gamma_busy_fields(test, 4));

assert(9651 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(42 == gamma_busy_fields(test, 5));

assert(9651 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(57 == gamma_busy_fields(test, 6));

assert(9651 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(42 == gamma_busy_fields(test, 7));

assert(9651 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(26 == gamma_busy_fields(test, 8));

assert(9651 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 0, 33, 82));

assert(1 == gamma_move(test, 3, 46, 45));

assert(1 == gamma_move(test, 3, 24, 99));

assert(1 == gamma_move(test, 1, 25, 51));

assert(1 == gamma_move(test, 4, 72, 33));

assert(1 == gamma_move(test, 5, 81, 50));

assert(1 == gamma_move(test, 4, 43, 63));

assert(1 == gamma_move(test, 1, 9, 41));

assert(1 == gamma_move(test, 8, 53, 38));

assert(0 == gamma_move(test, 5, 22, 3));

assert(1 == gamma_move(test, 8, 14, 1));

assert(1 == gamma_move(test, 8, 18, 61));

assert(1 == gamma_move(test, 1, 33, 80));

assert(1 == gamma_move(test, 6, 53, 1));

assert(1 == gamma_move(test, 1, 41, 75));

assert(49 == gamma_busy_fields(test, 1));

assert(9638 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(51 == gamma_busy_fields(test, 2));

assert(9638 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(47 == gamma_busy_fields(test, 3));

assert(9638 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(43 == gamma_busy_fields(test, 4));

assert(9638 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(43 == gamma_busy_fields(test, 5));

assert(9638 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(58 == gamma_busy_fields(test, 6));

assert(9638 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(42 == gamma_busy_fields(test, 7));

assert(9638 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(29 == gamma_busy_fields(test, 8));

assert(9638 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(0 == gamma_move(test, 0, 20, 84));

assert(1 == gamma_move(test, 5, 9, 36));

assert(1 == gamma_move(test, 1, 6, 96));

assert(1 == gamma_move(test, 2, 87, 62));

assert(1 == gamma_move(test, 6, 8, 64));

assert(1 == gamma_move(test, 2, 37, 86));

assert(0 == gamma_move(test, 0, 7, 64));

assert(1 == gamma_move(test, 7, 86, 93));

assert(1 == gamma_move(test, 6, 49, 64));

assert(1 == gamma_move(test, 6, 25, 17));

assert(1 == gamma_move(test, 8, 62, 84));

assert(1 == gamma_move(test, 8, 43, 22));

assert(1 == gamma_move(test, 5, 85, 18));

assert(0 == gamma_move(test, 0, 41, 63));

assert(1 == gamma_move(test, 8, 38, 59));

assert(50 == gamma_busy_fields(test, 1));

assert(9626 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(53 == gamma_busy_fields(test, 2));

assert(9626 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(47 == gamma_busy_fields(test, 3));

assert(9626 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(43 == gamma_busy_fields(test, 4));

assert(9626 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(45 == gamma_busy_fields(test, 5));

assert(9626 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(61 == gamma_busy_fields(test, 6));

assert(9626 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(43 == gamma_busy_fields(test, 7));

assert(9626 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(32 == gamma_busy_fields(test, 8));

assert(9626 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 8, 77, 1));

assert(0 == gamma_move(test, 9, 34, 82));

assert(1 == gamma_move(test, 2, 25, 77));

assert(0 == gamma_move(test, 0, 7, 65));

assert(1 == gamma_move(test, 7, 59, 97));

assert(1 == gamma_move(test, 1, 87, 23));

assert(1 == gamma_move(test, 6, 70, 60));

assert(1 == gamma_move(test, 8, 87, 22));

assert(1 == gamma_move(test, 2, 34, 81));

assert(1 == gamma_move(test, 2, 47, 30));

assert(1 == gamma_move(test, 8, 7, 66));

assert(0 == gamma_move(test, 0, 34, 80));

assert(1 == gamma_move(test, 7, 80, 72));

assert(1 == gamma_move(test, 2, 44, 17));

assert(0 == gamma_move(test, 9, 8, 66));

assert(51 == gamma_busy_fields(test, 1));

assert(9615 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(57 == gamma_busy_fields(test, 2));

assert(9615 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(47 == gamma_busy_fields(test, 3));

assert(9615 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(43 == gamma_busy_fields(test, 4));

assert(9615 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(45 == gamma_busy_fields(test, 5));

assert(9615 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(62 == gamma_busy_fields(test, 6));

assert(9615 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(45 == gamma_busy_fields(test, 7));

assert(9615 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(35 == gamma_busy_fields(test, 8));

assert(9615 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 8, 34, 79));

assert(1 == gamma_move(test, 2, 33, 79));

assert(1 == gamma_move(test, 6, 8, 61));

assert(1 == gamma_move(test, 4, 95, 93));

assert(1 == gamma_move(test, 2, 20, 83));

assert(1 == gamma_move(test, 3, 7, 65));

assert(0 == gamma_move(test, 8, 47, 66));

assert(1 == gamma_move(test, 7, 33, 78));

assert(0 == gamma_move(test, 0, 63, 15));

assert(1 == gamma_move(test, 7, 44, 37));

assert(0 == gamma_move(test, 0, 62, 15));

assert(0 == gamma_move(test, 9, 87, 94));

assert(0 == gamma_move(test, 9, 0, -1));

assert(1 == gamma_move(test, 2, 8, 60));

assert(1 == gamma_move(test, 3, 7, 64));

assert(51 == gamma_busy_fields(test, 1));

assert(9605 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(60 == gamma_busy_fields(test, 2));

assert(9605 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(49 == gamma_busy_fields(test, 3));

assert(9605 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(44 == gamma_busy_fields(test, 4));

assert(9605 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 1);
assert(45 == gamma_busy_fields(test, 5));

assert(9605 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(63 == gamma_busy_fields(test, 6));

assert(9605 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(47 == gamma_busy_fields(test, 7));

assert(9605 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(36 == gamma_busy_fields(test, 8));

assert(9605 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 8, 62, 14));

assert(0 == gamma_move(test, 0, 34, 78));

assert(1 == gamma_move(test, 3, 6, 65));

assert(1 == gamma_move(test, 8, 68, 77));

assert(1 == gamma_move(test, 8, 35, 78));

assert(1 == gamma_move(test, 6, 35, 79));

assert(1 == gamma_move(test, 4, 87, 21));

assert(1 == gamma_move(test, 7, 21, 83));

assert(1 == gamma_move(test, 4, 62, 13));

assert(1 == gamma_move(test, 3, 46, 55));

assert(1 == gamma_move(test, 6, 97, 5));

assert(1 == gamma_move(test, 6, 11, 30));

assert(0 == gamma_move(test, 0, 88, 22));

assert(1 == gamma_move(test, 2, 40, 52));

assert(1 == gamma_move(test, 3, 7, 63));

assert(1 == gamma_golden_move(test, 4, 22, 48));

assert(51 == gamma_busy_fields(test, 1));

assert(9592 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(61 == gamma_busy_fields(test, 2));

assert(9592 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(52 == gamma_busy_fields(test, 3));

assert(9592 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(47 == gamma_busy_fields(test, 4));

assert(9592 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(44 == gamma_busy_fields(test, 5));

assert(9592 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(66 == gamma_busy_fields(test, 6));

assert(9592 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(48 == gamma_busy_fields(test, 7));

assert(9592 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(39 == gamma_busy_fields(test, 8));

assert(9592 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 1, 20, 82));

assert(1 == gamma_move(test, 7, 56, 65));

assert(1 == gamma_move(test, 6, 61, 13));

assert(1 == gamma_move(test, 5, 54, 65));

assert(1 == gamma_move(test, 1, 41, 62));

assert(1 == gamma_move(test, 6, 36, 54));

assert(1 == gamma_move(test, 1, 68, 39));

assert(0 == gamma_move(test, 9, 35, 54));

assert(1 == gamma_move(test, 2, 41, 21));

assert(0 == gamma_move(test, 9, 7, 62));

assert(0 == gamma_move(test, 0, 0, 0));

assert(1 == gamma_move(test, 4, 71, 72));

assert(1 == gamma_move(test, 2, 20, 81));

assert(1 == gamma_move(test, 7, 6, 62));

assert(1 == gamma_move(test, 6, 85, 46));

assert(54 == gamma_busy_fields(test, 1));

assert(9580 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(63 == gamma_busy_fields(test, 2));

assert(9580 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(52 == gamma_busy_fields(test, 3));

assert(9580 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(48 == gamma_busy_fields(test, 4));

assert(9580 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(45 == gamma_busy_fields(test, 5));

assert(9580 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(69 == gamma_busy_fields(test, 6));

assert(9580 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(50 == gamma_busy_fields(test, 7));

assert(9580 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(39 == gamma_busy_fields(test, 8));

assert(9580 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 1);


assert(1 == gamma_move(test, 7, 5, 62));

assert(1 == gamma_move(test, 2, 41, 2));

assert(1 == gamma_move(test, 5, 4, 62));

assert(1 == gamma_move(test, 7, 61, 46));

assert(0 == gamma_move(test, 9, 21, 52));

assert(1 == gamma_move(test, 8, 0, 1));

assert(0 == gamma_move(test, 0, 35, 80));

assert(1 == gamma_move(test, 5, 15, 28));

assert(1 == gamma_move(test, 8, 42, 61));

assert(0 == gamma_move(test, 9, 34, 80));

assert(0 == gamma_move(test, 7, 100, 48));

assert(1 == gamma_move(test, 1, 25, 2));

assert(1 == gamma_move(test, 8, 34, 54));

assert(1 == gamma_move(test, 6, 35, 80));

assert(0 == gamma_move(test, 0, 86, 23));

assert(1 == gamma_golden_move(test, 8, 84, 95));

assert(55 == gamma_busy_fields(test, 1));

assert(9570 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(63 == gamma_busy_fields(test, 2));

assert(9570 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(52 == gamma_busy_fields(test, 3));

assert(9570 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(48 == gamma_busy_fields(test, 4));

assert(9570 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(47 == gamma_busy_fields(test, 5));

assert(9570 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(70 == gamma_busy_fields(test, 6));

assert(9570 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(52 == gamma_busy_fields(test, 7));

assert(9570 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(43 == gamma_busy_fields(test, 8));

assert(9570 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 3, 35, 81));

assert(1 == gamma_move(test, 3, 36, 40));

assert(0 == gamma_move(test, 0, 25, 50));

assert(1 == gamma_move(test, 4, 85, 94));

assert(1 == gamma_move(test, 7, 69, 12));

assert(0 == gamma_move(test, 9, 63, 14));

assert(1 == gamma_move(test, 1, 11, 26));

assert(1 == gamma_move(test, 8, 35, 54));

assert(0 == gamma_move(test, 9, 35, 82));

assert(0 == gamma_move(test, 9, -1, 2));

assert(1 == gamma_move(test, 8, 30, 83));

assert(1 == gamma_move(test, 1, 82, 40));

assert(1 == gamma_move(test, 1, 35, 55));

assert(0 == gamma_move(test, 9, 34, 55));

assert(1 == gamma_move(test, 5, 2, 1));

assert(58 == gamma_busy_fields(test, 1));

assert(9560 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(63 == gamma_busy_fields(test, 2));

assert(9560 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(54 == gamma_busy_fields(test, 3));

assert(9560 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(49 == gamma_busy_fields(test, 4));

assert(9560 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(48 == gamma_busy_fields(test, 5));

assert(9560 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(70 == gamma_busy_fields(test, 6));

assert(9560 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(53 == gamma_busy_fields(test, 7));

assert(9560 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(45 == gamma_busy_fields(test, 8));

assert(9560 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 4, 18, 14));

assert(0 == gamma_move(test, 9, 19, 81));

assert(1 == gamma_move(test, 4, 17, 18));

assert(1 == gamma_move(test, 2, 19, 80));

assert(1 == gamma_move(test, 7, 3, 62));

assert(1 == gamma_move(test, 5, 16, 20));

assert(0 == gamma_move(test, 0, 43, 61));

assert(1 == gamma_move(test, 2, 11, 19));

assert(0 == gamma_move(test, 0, 49, 96));

assert(0 == gamma_move(test, 0, 84, 95));

assert(1 == gamma_move(test, 6, 19, 52));

assert(1 == gamma_move(test, 4, 86, 24));

assert(1 == gamma_move(test, 8, 19, 81));

assert(1 == gamma_move(test, 5, 49, 27));

assert(1 == gamma_move(test, 8, 43, 62));

assert(58 == gamma_busy_fields(test, 1));

assert(9549 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(65 == gamma_busy_fields(test, 2));

assert(9549 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(54 == gamma_busy_fields(test, 3));

assert(9549 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(52 == gamma_busy_fields(test, 4));

assert(9549 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(50 == gamma_busy_fields(test, 5));

assert(9549 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(71 == gamma_busy_fields(test, 6));

assert(9549 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(54 == gamma_busy_fields(test, 7));

assert(9549 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(47 == gamma_busy_fields(test, 8));

assert(9549 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 4, 83, 100));

assert(1 == gamma_move(test, 5, 87, 45));

assert(1 == gamma_move(test, 6, 83, 65));

assert(1 == gamma_move(test, 4, 12, 78));

assert(1 == gamma_move(test, 3, 21, 81));

assert(1 == gamma_move(test, 8, 9, 30));

assert(1 == gamma_move(test, 8, 34, 80));

assert(1 == gamma_move(test, 3, 34, 87));

assert(0 == gamma_move(test, 8, 20, 82));

assert(1 == gamma_move(test, 1, 12, 44));

assert(1 == gamma_move(test, 3, 14, 34));

assert(1 == gamma_move(test, 4, 10, 38));

assert(0 == gamma_move(test, 0, 22, 81));

assert(1 == gamma_move(test, 8, 39, 13));

assert(0 == gamma_move(test, 9, 33, 80));

assert(59 == gamma_busy_fields(test, 1));

assert(9538 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(65 == gamma_busy_fields(test, 2));

assert(9538 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(57 == gamma_busy_fields(test, 3));

assert(9538 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(54 == gamma_busy_fields(test, 4));

assert(9538 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(51 == gamma_busy_fields(test, 5));

assert(9538 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(72 == gamma_busy_fields(test, 6));

assert(9538 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(54 == gamma_busy_fields(test, 7));

assert(9538 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(50 == gamma_busy_fields(test, 8));

assert(9538 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 6, 35, 92));

assert(1 == gamma_move(test, 5, 85, 24));

assert(1 == gamma_move(test, 3, 77, 65));

assert(0 == gamma_move(test, 0, 26, 51));

assert(1 == gamma_move(test, 2, 87, 25));

assert(1 == gamma_move(test, 1, 44, 71));

assert(1 == gamma_move(test, 6, 34, 55));

assert(0 == gamma_move(test, 0, 84, 24));

assert(1 == gamma_move(test, 2, 86, 95));

assert(1 == gamma_move(test, 8, 4, 63));

assert(1 == gamma_move(test, 4, 32, 80));

assert(0 == gamma_move(test, 0, 22, 82));

assert(1 == gamma_move(test, 7, 86, 96));

assert(1 == gamma_move(test, 5, 96, 98));

assert(0 == gamma_move(test, 0, 42, 62));

assert(60 == gamma_busy_fields(test, 1));

assert(9527 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(67 == gamma_busy_fields(test, 2));

assert(9527 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(58 == gamma_busy_fields(test, 3));

assert(9527 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(55 == gamma_busy_fields(test, 4));

assert(9527 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(53 == gamma_busy_fields(test, 5));

assert(9527 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(74 == gamma_busy_fields(test, 6));

assert(9527 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(55 == gamma_busy_fields(test, 7));

assert(9527 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(51 == gamma_busy_fields(test, 8));

assert(9527 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 8, 0, 59));

assert(0 == gamma_move(test, 9, 61, 67));

assert(1 == gamma_move(test, 2, 52, 49));

assert(1 == gamma_move(test, 6, 5, 63));

assert(1 == gamma_move(test, 1, 84, 24));

assert(1 == gamma_move(test, 4, 34, 56));

assert(0 == gamma_move(test, 0, 22, 81));

assert(1 == gamma_move(test, 5, 86, 97));

assert(1 == gamma_move(test, 3, 81, 95));

assert(1 == gamma_move(test, 5, 13, 46));

assert(1 == gamma_move(test, 7, 45, 14));

assert(0 == gamma_move(test, 9, 64, 15));

assert(1 == gamma_move(test, 6, 17, 89));

assert(0 == gamma_move(test, 9, 84, 23));

assert(1 == gamma_move(test, 7, 1, 2));

assert(61 == gamma_busy_fields(test, 1));

assert(9516 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(68 == gamma_busy_fields(test, 2));

assert(9516 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(59 == gamma_busy_fields(test, 3));

assert(9516 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(56 == gamma_busy_fields(test, 4));

assert(9516 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(55 == gamma_busy_fields(test, 5));

assert(9516 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(76 == gamma_busy_fields(test, 6));

assert(9516 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(57 == gamma_busy_fields(test, 7));

assert(9516 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(52 == gamma_busy_fields(test, 8));

assert(9516 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 3, 2, 2));

assert(1 == gamma_move(test, 8, 74, 85));

assert(0 == gamma_move(test, 0, 33, 80));

assert(0 == gamma_move(test, 9, 21, 63));

assert(0 == gamma_move(test, 0, 1, 2));

assert(1 == gamma_move(test, 2, 87, 97));

assert(1 == gamma_move(test, 1, 5, 64));

assert(1 == gamma_move(test, 8, 33, 56));

assert(1 == gamma_move(test, 4, 48, 15));

assert(0 == gamma_move(test, 0, 23, 81));

assert(1 == gamma_move(test, 4, 99, 2));

assert(1 == gamma_move(test, 6, 48, 75));

assert(1 == gamma_move(test, 7, 5, 36));

assert(0 == gamma_move(test, 9, 65, 15));

assert(1 == gamma_move(test, 7, 1, 1));

assert(62 == gamma_busy_fields(test, 1));

assert(9506 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(69 == gamma_busy_fields(test, 2));

assert(9506 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(60 == gamma_busy_fields(test, 3));

assert(9506 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(58 == gamma_busy_fields(test, 4));

assert(9506 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(55 == gamma_busy_fields(test, 5));

assert(9506 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(77 == gamma_busy_fields(test, 6));

assert(9506 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(59 == gamma_busy_fields(test, 7));

assert(9506 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(54 == gamma_busy_fields(test, 8));

assert(9506 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 4, 4, 64));

assert(1 == gamma_move(test, 6, 37, 58));

assert(1 == gamma_move(test, 2, 69, 43));

assert(1 == gamma_move(test, 5, 4, 65));

assert(1 == gamma_move(test, 6, 14, 71));

assert(1 == gamma_move(test, 2, 63, 24));

assert(1 == gamma_move(test, 5, 5, 65));

assert(0 == gamma_move(test, 0, 20, 50));

assert(1 == gamma_move(test, 1, 33, 16));

assert(0 == gamma_move(test, 0, 30, 57));

assert(1 == gamma_move(test, 5, 29, 87));

assert(1 == gamma_move(test, 5, 42, 60));

assert(0 == gamma_move(test, 9, 42, 59));

assert(0 == gamma_move(test, 9, 1, 0));

assert(1 == gamma_move(test, 1, 2, 0));

assert(64 == gamma_busy_fields(test, 1));

assert(9495 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(71 == gamma_busy_fields(test, 2));

assert(9495 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(60 == gamma_busy_fields(test, 3));

assert(9495 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(59 == gamma_busy_fields(test, 4));

assert(9495 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(59 == gamma_busy_fields(test, 5));

assert(9495 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(79 == gamma_busy_fields(test, 6));

assert(9495 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(59 == gamma_busy_fields(test, 7));

assert(9495 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(54 == gamma_busy_fields(test, 8));

assert(9495 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 9, 33, 55));

assert(1 == gamma_move(test, 4, 97, 14));

assert(1 == gamma_move(test, 7, 23, 82));

assert(0 == gamma_move(test, 0, 66, 15));

assert(1 == gamma_move(test, 6, 7, 10));

assert(1 == gamma_move(test, 8, 87, 24));

assert(1 == gamma_move(test, 5, 32, 79));

assert(1 == gamma_move(test, 7, 41, 59));

assert(1 == gamma_move(test, 1, 98, 95));

assert(0 == gamma_move(test, 9, 33, 54));

assert(1 == gamma_move(test, 4, 69, 37));

assert(0 == gamma_move(test, 9, 23, 81));

assert(1 == gamma_move(test, 6, 1, 0));

assert(0 == gamma_move(test, 8, 8, 64));

assert(1 == gamma_move(test, 2, 85, 86));

assert(65 == gamma_busy_fields(test, 1));

assert(9485 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(72 == gamma_busy_fields(test, 2));

assert(9485 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(60 == gamma_busy_fields(test, 3));

assert(9485 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(61 == gamma_busy_fields(test, 4));

assert(9485 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(60 == gamma_busy_fields(test, 5));

assert(9485 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(81 == gamma_busy_fields(test, 6));

assert(9485 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(61 == gamma_busy_fields(test, 7));

assert(9485 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(55 == gamma_busy_fields(test, 8));

assert(9485 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 4, 57, 12));

assert(1 == gamma_move(test, 2, 80, 32));

assert(1 == gamma_move(test, 6, 5, 66));

assert(1 == gamma_move(test, 3, 38, 91));

assert(1 == gamma_move(test, 8, 60, 94));

assert(1 == gamma_move(test, 2, 31, 80));

assert(1 == gamma_move(test, 6, 6, 66));

assert(1 == gamma_move(test, 2, 58, 40));

assert(1 == gamma_move(test, 4, 78, 39));

assert(1 == gamma_move(test, 5, 23, 83));

assert(1 == gamma_move(test, 1, 42, 59));

assert(1 == gamma_move(test, 6, 64, 17));

assert(1 == gamma_move(test, 7, 83, 24));

assert(1 == gamma_move(test, 8, 0, 55));

assert(0 == gamma_move(test, 9, 31, 79));

assert(66 == gamma_busy_fields(test, 1));

assert(9471 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(75 == gamma_busy_fields(test, 2));

assert(9471 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(61 == gamma_busy_fields(test, 3));

assert(9471 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(63 == gamma_busy_fields(test, 4));

assert(9471 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(61 == gamma_busy_fields(test, 5));

assert(9471 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(84 == gamma_busy_fields(test, 6));

assert(9471 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(62 == gamma_busy_fields(test, 7));

assert(9471 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(57 == gamma_busy_fields(test, 8));

assert(9471 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 5, 83, 76));

assert(0 == gamma_move(test, 1, 90, 100));

assert(0 == gamma_move(test, 9, 33, 54));

assert(1 == gamma_move(test, 7, 46, 17));

assert(1 == gamma_move(test, 7, 57, 39));

assert(0 == gamma_move(test, 9, 66, 14));

assert(1 == gamma_move(test, 2, 62, 18));

assert(1 == gamma_move(test, 3, 95, 99));

assert(1 == gamma_move(test, 2, 66, 88));

assert(1 == gamma_move(test, 2, 50, 53));

assert(1 == gamma_move(test, 1, 4, 66));

assert(1 == gamma_move(test, 1, 33, 53));

assert(1 == gamma_move(test, 7, 32, 53));

assert(0 == gamma_move(test, 0, 66, 13));

assert(1 == gamma_move(test, 3, 87, 96));

assert(68 == gamma_busy_fields(test, 1));

assert(9460 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(78 == gamma_busy_fields(test, 2));

assert(9460 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(63 == gamma_busy_fields(test, 3));

assert(9460 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(63 == gamma_busy_fields(test, 4));

assert(9460 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(62 == gamma_busy_fields(test, 5));

assert(9460 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(84 == gamma_busy_fields(test, 6));

assert(9460 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(65 == gamma_busy_fields(test, 7));

assert(9460 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(57 == gamma_busy_fields(test, 8));

assert(9460 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 2, 74, 61));

assert(1 == gamma_move(test, 6, 4, 67));

assert(0 == gamma_move(test, 9, 83, 23));

assert(0 == gamma_move(test, 9, 11, 48));

assert(1 == gamma_move(test, 8, 3, 2));

assert(1 == gamma_move(test, 7, 30, 80));

assert(1 == gamma_move(test, 6, 65, 13));

assert(0 == gamma_move(test, 9, 82, 23));

assert(1 == gamma_move(test, 1, 3, 1));

assert(1 == gamma_move(test, 4, 52, 71));

assert(1 == gamma_move(test, 5, 22, 83));

assert(1 == gamma_move(test, 6, 74, 70));

assert(0 == gamma_move(test, 9, 60, 18));

assert(1 == gamma_move(test, 3, 4, 1));

assert(1 == gamma_move(test, 6, 35, 68));

assert(69 == gamma_busy_fields(test, 1));

assert(9449 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(79 == gamma_busy_fields(test, 2));

assert(9449 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(64 == gamma_busy_fields(test, 3));

assert(9449 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(64 == gamma_busy_fields(test, 4));

assert(9449 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(63 == gamma_busy_fields(test, 5));

assert(9449 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(88 == gamma_busy_fields(test, 6));

assert(9449 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(66 == gamma_busy_fields(test, 7));

assert(9449 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(58 == gamma_busy_fields(test, 8));

assert(9449 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 3, 22, 82));

assert(1 == gamma_move(test, 6, 26, 51));

assert(1 == gamma_move(test, 3, 31, 47));

assert(1 == gamma_move(test, 5, 39, 50));

assert(1 == gamma_move(test, 6, 43, 59));

assert(1 == gamma_move(test, 3, 82, 22));

assert(0 == gamma_move(test, 9, 26, 49));

assert(1 == gamma_move(test, 3, 4, 2));

assert(1 == gamma_move(test, 4, 78, 20));

assert(1 == gamma_move(test, 2, 28, 94));

assert(1 == gamma_move(test, 8, 4, 68));

assert(0 == gamma_move(test, 9, 30, 81));

assert(1 == gamma_move(test, 6, 4, 3));

assert(0 == gamma_move(test, 0, 95, 44));

assert(1 == gamma_move(test, 2, 88, 96));

assert(69 == gamma_busy_fields(test, 1));

assert(9437 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(81 == gamma_busy_fields(test, 2));

assert(9437 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(68 == gamma_busy_fields(test, 3));

assert(9437 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(65 == gamma_busy_fields(test, 4));

assert(9437 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(64 == gamma_busy_fields(test, 5));

assert(9437 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(91 == gamma_busy_fields(test, 6));

assert(9437 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(66 == gamma_busy_fields(test, 7));

assert(9437 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(59 == gamma_busy_fields(test, 8));

assert(9437 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 7, 92, 23));

assert(1 == gamma_move(test, 4, 66, 13));

assert(1 == gamma_move(test, 6, 1, 97));

assert(0 == gamma_move(test, 0, 64, 24));

assert(1 == gamma_move(test, 1, 74, 75));

assert(1 == gamma_move(test, 3, 32, 54));

assert(1 == gamma_move(test, 7, 27, 50));

assert(1 == gamma_move(test, 8, 66, 14));

assert(0 == gamma_move(test, 9, 29, 81));

assert(1 == gamma_move(test, 6, 40, 59));

assert(0 == gamma_move(test, 0, 83, 22));

assert(1 == gamma_move(test, 4, 10, 39));

assert(1 == gamma_move(test, 7, 22, 81));

assert(1 == gamma_move(test, 4, 67, 14));

assert(0 == gamma_move(test, 7, 100, 62));

assert(70 == gamma_busy_fields(test, 1));

assert(9427 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(81 == gamma_busy_fields(test, 2));

assert(9427 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(69 == gamma_busy_fields(test, 3));

assert(9427 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(68 == gamma_busy_fields(test, 4));

assert(9427 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(64 == gamma_busy_fields(test, 5));

assert(9427 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(93 == gamma_busy_fields(test, 6));

assert(9427 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(68 == gamma_busy_fields(test, 7));

assert(9427 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(60 == gamma_busy_fields(test, 8));

assert(9427 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 6, 83, 23));

assert(1 == gamma_move(test, 8, 84, 23));

assert(1 == gamma_move(test, 7, 29, 80));

assert(1 == gamma_move(test, 7, 68, 14));

assert(1 == gamma_move(test, 7, 69, 14));

assert(1 == gamma_move(test, 4, 70, 14));

assert(1 == gamma_move(test, 4, 9, 73));

assert(1 == gamma_move(test, 7, 13, 77));

assert(1 == gamma_move(test, 3, 9, 74));

assert(1 == gamma_move(test, 5, 27, 49));

assert(1 == gamma_move(test, 4, 27, 57));

assert(1 == gamma_move(test, 8, 58, 10));

assert(0 == gamma_move(test, 7, 37, 86));

assert(1 == gamma_move(test, 6, 70, 13));

assert(1 == gamma_move(test, 2, 84, 22));

assert(70 == gamma_busy_fields(test, 1));

assert(9413 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(82 == gamma_busy_fields(test, 2));

assert(9413 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(70 == gamma_busy_fields(test, 3));

assert(9413 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(71 == gamma_busy_fields(test, 4));

assert(9413 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(65 == gamma_busy_fields(test, 5));

assert(9413 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(95 == gamma_busy_fields(test, 6));

assert(9413 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(72 == gamma_busy_fields(test, 7));

assert(9413 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(62 == gamma_busy_fields(test, 8));

assert(9413 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 6, 30, 9));

assert(0 == gamma_move(test, 0, 84, 23));

assert(1 == gamma_move(test, 5, 37, 48));

assert(0 == gamma_move(test, 0, 96, 9));

assert(1 == gamma_move(test, 6, 85, 97));

assert(1 == gamma_move(test, 4, 40, 76));

assert(1 == gamma_move(test, 2, 21, 82));

assert(0 == gamma_move(test, 9, 3, 68));

assert(0 == gamma_move(test, 0, 4, 2));

assert(1 == gamma_move(test, 6, 85, 96));

assert(1 == gamma_move(test, 7, 6, 20));

assert(0 == gamma_move(test, 0, 70, 14));

assert(1 == gamma_move(test, 5, 85, 95));

assert(0 == gamma_move(test, 0, 42, 59));

assert(1 == gamma_move(test, 7, 74, 8));

assert(70 == gamma_busy_fields(test, 1));

assert(9404 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(83 == gamma_busy_fields(test, 2));

assert(9404 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(70 == gamma_busy_fields(test, 3));

assert(9404 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(72 == gamma_busy_fields(test, 4));

assert(9404 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(67 == gamma_busy_fields(test, 5));

assert(9404 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(98 == gamma_busy_fields(test, 6));

assert(9404 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(74 == gamma_busy_fields(test, 7));

assert(9404 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(62 == gamma_busy_fields(test, 8));

assert(9404 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 3, 30, 81));

assert(1 == gamma_move(test, 5, 28, 49));

assert(1 == gamma_move(test, 1, 71, 79));

assert(1 == gamma_move(test, 7, 52, 43));

assert(1 == gamma_move(test, 3, 64, 66));

assert(1 == gamma_move(test, 4, 29, 49));

assert(1 == gamma_move(test, 8, 80, 85));

assert(1 == gamma_move(test, 3, 31, 81));

assert(1 == gamma_move(test, 7, 29, 48));

assert(1 == gamma_move(test, 2, 9, 43));

assert(1 == gamma_move(test, 3, 38, 41));

assert(1 == gamma_move(test, 8, 29, 47));

assert(1 == gamma_move(test, 3, 31, 82));

assert(1 == gamma_move(test, 2, 29, 46));

assert(1 == gamma_move(test, 6, 3, 69));

assert(71 == gamma_busy_fields(test, 1));

assert(9389 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(85 == gamma_busy_fields(test, 2));

assert(9389 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(75 == gamma_busy_fields(test, 3));

assert(9389 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(73 == gamma_busy_fields(test, 4));

assert(9389 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(68 == gamma_busy_fields(test, 5));

assert(9389 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(99 == gamma_busy_fields(test, 6));

assert(9389 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(76 == gamma_busy_fields(test, 7));

assert(9389 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(64 == gamma_busy_fields(test, 8));

assert(9389 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 1, 87, 70));

assert(1 == gamma_move(test, 8, 32, 52));

assert(0 == gamma_move(test, 9, 31, 80));

assert(1 == gamma_move(test, 3, 5, 2));

assert(1 == gamma_move(test, 6, 29, 45));

assert(1 == gamma_move(test, 4, 84, 25));

assert(1 == gamma_move(test, 8, 55, 90));

assert(1 == gamma_move(test, 6, 31, 79));

assert(1 == gamma_move(test, 4, 85, 25));

assert(0 == gamma_move(test, 9, 79, 59));

assert(1 == gamma_move(test, 1, 5, 1));

assert(1 == gamma_move(test, 1, 32, 20));

assert(0 == gamma_move(test, 7, 96, 100));

assert(1 == gamma_move(test, 8, 47, 51));

assert(1 == gamma_move(test, 7, 32, 68));

assert(74 == gamma_busy_fields(test, 1));

assert(9377 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(85 == gamma_busy_fields(test, 2));

assert(9377 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(76 == gamma_busy_fields(test, 3));

assert(9377 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(75 == gamma_busy_fields(test, 4));

assert(9377 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(68 == gamma_busy_fields(test, 5));

assert(9377 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(101 == gamma_busy_fields(test, 6));

assert(9377 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(77 == gamma_busy_fields(test, 7));

assert(9377 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(67 == gamma_busy_fields(test, 8));

assert(9377 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(0 == gamma_move(test, 9, 32, 51));

assert(1 == gamma_move(test, 1, 6, 1));

assert(1 == gamma_move(test, 3, 48, 97));

assert(1 == gamma_move(test, 3, 28, 45));

assert(0 == gamma_move(test, 0, 28, 46));

assert(1 == gamma_move(test, 4, 87, 95));

assert(1 == gamma_move(test, 3, 23, 81));

assert(1 == gamma_move(test, 4, 54, 53));

assert(1 == gamma_move(test, 4, 26, 57));

assert(0 == gamma_move(test, 9, 23, 82));

assert(1 == gamma_move(test, 5, 7, 1));

assert(1 == gamma_move(test, 5, 25, 21));

assert(1 == gamma_move(test, 8, 43, 61));

assert(1 == gamma_move(test, 4, 56, 6));

assert(1 == gamma_move(test, 6, 48, 74));

assert(75 == gamma_busy_fields(test, 1));

assert(9365 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(85 == gamma_busy_fields(test, 2));

assert(9365 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(79 == gamma_busy_fields(test, 3));

assert(9365 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(79 == gamma_busy_fields(test, 4));

assert(9365 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(70 == gamma_busy_fields(test, 5));

assert(9365 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(102 == gamma_busy_fields(test, 6));

assert(9365 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(77 == gamma_busy_fields(test, 7));

assert(9365 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(68 == gamma_busy_fields(test, 8));

assert(9365 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 3, 28, 46));

assert(1 == gamma_move(test, 1, 70, 98));

assert(0 == gamma_move(test, 0, 32, 51));

assert(1 == gamma_move(test, 1, 91, 3));

assert(0 == gamma_move(test, 9, 31, 51));

assert(0 == gamma_move(test, 0, 7, 0));

assert(0 == gamma_move(test, 6, 68, 39));

assert(0 == gamma_move(test, 0, 85, 26));

assert(1 == gamma_move(test, 3, 88, 95));

assert(1 == gamma_move(test, 1, 41, 9));

assert(1 == gamma_move(test, 1, 78, 81));

assert(1 == gamma_move(test, 5, 30, 50));

assert(0 == gamma_move(test, 9, 43, 60));

assert(1 == gamma_move(test, 8, 6, 0));

assert(1 == gamma_move(test, 1, 97, 75));

assert(80 == gamma_busy_fields(test, 1));

assert(9356 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(85 == gamma_busy_fields(test, 2));

assert(9356 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(81 == gamma_busy_fields(test, 3));

assert(9356 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(79 == gamma_busy_fields(test, 4));

assert(9356 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(71 == gamma_busy_fields(test, 5));

assert(9356 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(102 == gamma_busy_fields(test, 6));

assert(9356 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(77 == gamma_busy_fields(test, 7));

assert(9356 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(69 == gamma_busy_fields(test, 8));

assert(9356 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 6, 16, 65));

assert(1 == gamma_move(test, 5, 84, 26));

assert(1 == gamma_move(test, 3, 78, 17));

assert(1 == gamma_move(test, 5, 28, 47));

assert(0 == gamma_move(test, 0, 42, 43));

assert(1 == gamma_move(test, 4, 57, 36));

assert(1 == gamma_move(test, 5, 29, 59));

assert(1 == gamma_move(test, 4, 46, 5));

assert(0 == gamma_move(test, 0, 21, 82));

assert(1 == gamma_move(test, 6, 49, 73));

assert(0 == gamma_move(test, 0, 84, 27));

assert(0 == gamma_move(test, 3, 31, 49));

assert(1 == gamma_move(test, 6, 58, 43));

assert(1 == gamma_move(test, 8, 85, 27));

assert(0 == gamma_move(test, 0, 31, 80));

assert(80 == gamma_busy_fields(test, 1));

assert(9346 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(85 == gamma_busy_fields(test, 2));

assert(9346 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(82 == gamma_busy_fields(test, 3));

assert(9346 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(81 == gamma_busy_fields(test, 4));

assert(9346 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(74 == gamma_busy_fields(test, 5));

assert(9346 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(105 == gamma_busy_fields(test, 6));

assert(9346 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(77 == gamma_busy_fields(test, 7));

assert(9346 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(70 == gamma_busy_fields(test, 8));

assert(9346 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 1, 2, 69));

assert(1 == gamma_move(test, 3, 97, 61));

assert(1 == gamma_move(test, 5, 30, 47));

assert(1 == gamma_move(test, 6, 43, 60));

assert(1 == gamma_move(test, 8, 84, 27));

assert(1 == gamma_move(test, 3, 16, 73));

assert(1 == gamma_move(test, 3, 30, 48));

assert(1 == gamma_move(test, 4, 90, 9));

assert(1 == gamma_move(test, 6, 60, 99));

assert(1 == gamma_move(test, 5, 85, 91));

assert(1 == gamma_move(test, 5, 36, 66));

assert(0 == gamma_move(test, 9, 42, 59));

assert(1 == gamma_move(test, 3, 7, 0));

assert(1 == gamma_move(test, 2, 28, 48));

assert(1 == gamma_move(test, 8, 56, 89));

assert(81 == gamma_busy_fields(test, 1));

assert(9332 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(86 == gamma_busy_fields(test, 2));

assert(9332 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(86 == gamma_busy_fields(test, 3));

assert(9332 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(82 == gamma_busy_fields(test, 4));

assert(9332 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(77 == gamma_busy_fields(test, 5));

assert(9332 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(107 == gamma_busy_fields(test, 6));

assert(9332 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(77 == gamma_busy_fields(test, 7));

assert(9332 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(72 == gamma_busy_fields(test, 8));

assert(9332 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 1, 14, 66));

assert(1 == gamma_move(test, 4, 31, 51));

assert(1 == gamma_move(test, 4, 66, 3));

assert(1 == gamma_move(test, 4, 21, 84));

assert(1 == gamma_move(test, 7, 20, 84));

assert(0 == gamma_move(test, 0, 67, 13));

assert(1 == gamma_move(test, 1, 56, 94));

assert(1 == gamma_move(test, 4, 31, 50));

assert(1 == gamma_move(test, 5, 1, 34));

assert(0 == gamma_move(test, 0, 42, 60));

assert(1 == gamma_move(test, 3, 25, 81));

assert(0 == gamma_move(test, 0, 28, 49));

assert(1 == gamma_move(test, 2, 53, 62));

assert(1 == gamma_move(test, 3, 84, 31));

assert(1 == gamma_move(test, 4, 66, 40));

assert(83 == gamma_busy_fields(test, 1));

assert(9320 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(87 == gamma_busy_fields(test, 2));

assert(9320 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(88 == gamma_busy_fields(test, 3));

assert(9320 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(87 == gamma_busy_fields(test, 4));

assert(9320 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(78 == gamma_busy_fields(test, 5));

assert(9320 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(107 == gamma_busy_fields(test, 6));

assert(9320 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 1);
assert(78 == gamma_busy_fields(test, 7));

assert(9320 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(72 == gamma_busy_fields(test, 8));

assert(9320 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 8, 70, 57));

assert(1 == gamma_move(test, 3, 30, 79));

assert(1 == gamma_move(test, 6, 50, 23));

assert(0 == gamma_move(test, 9, 86, 27));

assert(1 == gamma_move(test, 7, 60, 78));

assert(1 == gamma_move(test, 7, 96, 83));

assert(1 == gamma_move(test, 6, 22, 18));

assert(1 == gamma_move(test, 2, 86, 28));

assert(1 == gamma_move(test, 1, 82, 71));

assert(0 == gamma_move(test, 0, 33, 3));

assert(1 == gamma_move(test, 1, 86, 68));

assert(1 == gamma_move(test, 1, 9, 59));

assert(0 == gamma_move(test, 0, 30, 50));

assert(1 == gamma_move(test, 5, 2, 48));

assert(1 == gamma_move(test, 6, 41, 60));

assert(1 == gamma_golden_move(test, 6, 89, 21));

assert(86 == gamma_busy_fields(test, 1));

assert(9308 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(88 == gamma_busy_fields(test, 2));

assert(9308 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(89 == gamma_busy_fields(test, 3));

assert(9308 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(87 == gamma_busy_fields(test, 4));

assert(9308 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(79 == gamma_busy_fields(test, 5));

assert(9308 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(111 == gamma_busy_fields(test, 6));

assert(9308 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(79 == gamma_busy_fields(test, 7));

assert(9308 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(73 == gamma_busy_fields(test, 8));

assert(9308 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


assert(1 == gamma_move(test, 4, 87, 28));

assert(1 == gamma_move(test, 1, 68, 24));

assert(1 == gamma_move(test, 1, 30, 49));

assert(0 == gamma_move(test, 0, 31, 49));

assert(0 == gamma_move(test, 7, 25, 50));

assert(1 == gamma_move(test, 8, 67, 15));

assert(1 == gamma_move(test, 7, 87, 42));

assert(1 == gamma_move(test, 6, 5, 82));

assert(1 == gamma_move(test, 6, 88, 28));

assert(1 == gamma_move(test, 5, 88, 29));

assert(0 == gamma_move(test, 9, 36, 88));

assert(1 == gamma_move(test, 3, 26, 5));

assert(0 == gamma_move(test, 7, 65, 15));

assert(0 == gamma_move(test, 9, 67, 13));

assert(1 == gamma_move(test, 8, 43, 16));

assert(88 == gamma_busy_fields(test, 1));

assert(9298 == gamma_free_fields(test, 1));

assert(gamma_golden_possible(test, 1) == 0);
assert(88 == gamma_busy_fields(test, 2));

assert(9298 == gamma_free_fields(test, 2));

assert(gamma_golden_possible(test, 2) == 0);
assert(90 == gamma_busy_fields(test, 3));

assert(9298 == gamma_free_fields(test, 3));

assert(gamma_golden_possible(test, 3) == 1);
assert(88 == gamma_busy_fields(test, 4));

assert(9298 == gamma_free_fields(test, 4));

assert(gamma_golden_possible(test, 4) == 0);
assert(80 == gamma_busy_fields(test, 5));

assert(9298 == gamma_free_fields(test, 5));

assert(gamma_golden_possible(test, 5) == 0);
assert(113 == gamma_busy_fields(test, 6));

assert(9298 == gamma_free_fields(test, 6));

assert(gamma_golden_possible(test, 6) == 0);
assert(80 == gamma_busy_fields(test, 7));

assert(9298 == gamma_free_fields(test, 7));

assert(gamma_golden_possible(test, 7) == 0);
assert(75 == gamma_busy_fields(test, 8));

assert(9298 == gamma_free_fields(test, 8));

assert(gamma_golden_possible(test, 8) == 0);


gamma_delete(test);

return 0;

}

