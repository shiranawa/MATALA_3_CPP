/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Yoni
 *
 * Created on April 8, 2018, 1:23 PM
 */

#include <cstdlib>
#include "Member.h"
#include <iostream>
using namespace std;




Member avi, beni, chana;

void test1() {
	Member dana;
	chana.follow(dana);
	dana.follow(avi);
	cout << "  " << chana.numFollowers() << " " <<  chana.numFollowing();
	cout << endl; // 0 1
	cout << "  " << avi.numFollowers() << " " <<  avi.numFollowing();
	cout<< endl; // 1 0
	cout << "  " << Member::count();
	cout<< endl; // 4
}

int main() {

	cout << avi.numFollowers() << " " << avi.numFollowing();
	cout << endl; // 0 0
	avi.follow(beni);
	cout << avi.numFollowers() << " " << avi.numFollowing();
	cout << endl; // 0 1
	cout << beni.numFollowers() << " " << beni.numFollowing();
	cout << endl; // 1 0
	cout << Member::count();
	cout << endl; // 3
	cout << endl;

	avi.follow(beni); // duplicate follow has no effect
	cout << avi.numFollowers() << " " << avi.numFollowing(); cout << endl; // 0 1
	avi.unfollow(beni);
	cout << avi.numFollowers() << " " << avi.numFollowing(); cout << endl; // 0 0
	cout << endl;

	cout << chana.numFollowers() << " " <<  chana.numFollowing(); cout << endl; // 0 0
	test1();
	cout << chana.numFollowers() << " " <<  chana.numFollowing(); cout << endl; // 0 0
	cout << avi.numFollowers() << " " <<  avi.numFollowing(); cout << endl; // 0 0
	cout << Member::count(); cout << endl; // 3
}

