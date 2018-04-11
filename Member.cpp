/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Member.cpp
 * Author: Yoni
 * 
 * Created on April 8, 2018, 1:51 PM
 */

#include <valarray>

#include "Member.h"

void Member::setFollowers(int x){
    Followers = x;  
}

void Member::setFollowing(int x){
    Following = x;  
}

void Member::addFollowers(){
    Followers++;
}

void Member::addFollwing(Member &member){
    Following++;
}
void Member::removeFollowers(){
    Followers--;
}
void Member::removeFollowing(){
    Following--;
}
void Member::follow(Member &member){
for(int i=0;i<Following;i++){
	if(TheFollowings[i].id==member.id)
		return;
}
	TheFollowings.push_back(member);
    member.addFollowers();
    //member.TheFollowers.push_back(*this);
    Following++;

}
void Member::unfollow(Member &member){
	for(int i=0;i<Following;i++){
		if(TheFollowings[i].id==member.id)
			TheFollowings.erase(TheFollowers.begin()+i);
	}
	Following--;
	member.removeFollowing();
}
int Member::numFollowing(){
    return this->Following;
}
int Member::numFollowers(){
    return this->Followers;
}


  int Member::count(){
      return count1;
}
  int Member::count1=0;
