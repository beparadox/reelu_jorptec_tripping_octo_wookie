/*
 * =====================================================================================
 *
 *       Filename:  firstTen.h
 *
 *    Description:  First ten problems
 *
 *        Version:  1.0
 *        Created:  05/12/2015 10:27:21 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bambridge E. Peterson (bep), bambridge.peterson@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <cstdlib>
#include <cstdio>
#include <cassert>
using namespace std;

int problemOne(int limit=1000) {
	int i;
	int sum = 0;

	for (i = 3; i < limit; i += 3) {
		sum += i;
	}
	cout << sum << endl;

	for (i = 5; i < limit; i += 5) {
		sum += i;
	}

	for (i = 15; i < limit; i += 15) {
		sum -= i;
	}

	return sum;
}

int problemOneToo(int limit=1000) {
	int i;
	int sum = 0;

	for (i = 3; i < limit; i += 1) {
		if ( (i % 3) == 0) {
			sum += i;
		}

		if ( (i % 5) == 0 && (i % 3) != 0) {
			sum += i;
		}
	}

	return sum;
}

int problemTwo(int n1, int n2, int cumul) {
	if (n2 >= 4000000) return cumul;
	if ((n2 % 2) == 0) cumul +=  n2;
	int n3 = n1 + n2;
	return problemTwo(n2, n3, cumul);
}
