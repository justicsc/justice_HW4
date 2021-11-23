
#include "SocialMediaAccount.h"

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

