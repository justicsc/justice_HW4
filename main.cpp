#include<iostream>
#include<string>
//#include"SocialMediaAccount.h"
#include"SocialMediaAccount.cpp"
#include"Twitter.cpp"


//https://github.com/justicsc/justice_HW4/tree/main

using namespace std;

struct Profile
{
    int userId;
    string username;
};

int main()
{
    Profile start={1, "Adam"};
    SocialMediaAccount<string> SS;
    Twitter<string> TS;
    Twitter<Profile> TP;
    Twitter<string> TS2("John");
    Twitter<Profile> Tp2(start);



}
