
#include "Instagram.h"
template<class T>
Instagram<T>::Instagram():SocialMediaAccount<T>(){}

template<class T>
Instagram<T>::Instagram(T user):SocialMediaAccount<T>(user){}


template<class T>
void Instagram<T>::Like(){
    likeCount++;
};
template<class T>
int Instagram<T>::getLikeCount(){
    return likeCount;
};
template<class T>
int Instagram<T>::setLikeCount(int LICO){
     likeCount = LICO;
     return LICO;

};
