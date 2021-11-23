
#include "SocialMediaAccount.h"
#include<iostream>

using namespace std;

template<class T>
SocialMediaAccount<T>::SocialMediaAccount(): followerCount(0), followedCount(0), privacy(false){}


template<class T>
SocialMediaAccount<T>::SocialMediaAccount(T user):handler(user), followerCount(0), followedCount(0), privacy(false){}

template<class T>
int SocialMediaAccount<T>::getFollowerCount(){
    return followerCount;

};
template<class T>
int SocialMediaAccount<T>::getFollowedCount(){
    return followedCount;
};
template<class T>
int SocialMediaAccount<T>::setFollowerCount(int follCount){
    int followerCount = follCount;
    return follCount;
};
template<class T>
int SocialMediaAccount<T>::setFollowedCount(int foledCount){
    int followedCount = foledCount;
    return foledCount;

};

template<class T>
T addFollower (T user){
   T followers[maxFollowers] = user;
   user++;
};

template<class T>
T addFollowed (T user){
    T followed[maxFollowed] =  user;
    user++;
};
template<class T>
void SocialMediaAccount<T>::displayFollowers(){
   if(privacy= false){
       cout<<followers<<endl;
   }else{
       cout<<"Account is Protected and we can't see the requested information"<<endl;
   }
};

template<class T>
void SocialMediaAccount<T>::displayFollowed(){
    if(privacy= false){
        cout<<followed<<endl;
    }else{
        cout<<"Account is Protected and we can't see the requested information"<<endl;
    }

};