/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Member.h
 * Author: Yoni
 *
 * Created on April 8, 2018, 1:47 PM
 */


#include <iostream>
#include <vector>


using namespace std;

class Member{

public:
	string _name;
	int Followers;
	int Following;
	vector <Member> TheFollowers;
	vector <Member> TheFollowings;
	int id;
	static int count1;

        
        int getFollowers(){
            return Followers;
        }
         int getFollowing(){
            return Following;
        }
         void setFollowers(int);
         void setFollowing(int);
         void addFollowers();
         void addFollwing(Member &member);
         void removeFollowers();
         void removeFollowing();
         void follow(Member &member);
         void unfollow(Member &member);
         int numFollowing();
         int numFollowers();
         static int count();
         
         Member(){
		_name="";
		Followers=0;
		Following=0;   
        count1++;
        id=count1;
	}
};
