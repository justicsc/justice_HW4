#include"Twitter.h"
template<class T>
Twitter<T>::Twitter():SocialMediaAccount<T>(){}

template<class T>
Twitter<T>::Twitter(T user):SocialMediaAccount<T>(user){}


template<class T>
int Twitter<T>::getRetweetCount(){
    return retweetCount;

};

template<class T>
int Twitter<T>::setRetweetCount(int RTCO){
    retweetCount = RTCO;
    return RTCO;

};

template<class T>
        void Twitter<T>::RT(){
                 retweetCount++;

};