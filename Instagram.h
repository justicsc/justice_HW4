#ifndef HW4_INSTAGRAM_H
#define HW4_INSTAGRAM_H
#include"SocialMediaAccount.h"
template<class T>
class Instagram:public SocialMediaAccount<T>{

public:
    Instagram();
    Instagram(T user);
    void Like();
    int getLikeCount();
    int setLikeCount(int LICO);
private:
    int likeCount;

};
#endif //HW4_INSTAGRAM_H
