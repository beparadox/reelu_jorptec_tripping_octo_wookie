/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Main file of my Leeru Jopterc Application
 *
 *        Version:  1.0
 *        Created:  05/12/2015 10:23:30 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bambridge E. Peterson (bep), bambridge.peterson@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <cstdlib>
#include <iostream>
#include "firstTen.h"
using namespace std;
int main(int argc, char*argv[]) {
        cout << problemOne() << endl;
	cout << problemOneToo() << endl;
	cout << problemTwo(1, 2, 0) << endl;

	return 0;
}

