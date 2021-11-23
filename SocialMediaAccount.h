#ifndef Social
#define Social
const int maxFollowers=10;
const int maxFollowed=10;
template<class T>
class SocialMediaAccount{

public:
    SocialMediaAccount();
    SocialMediaAccount(T user);
    int getFollowerCount();
    int getFollowedCount();
    int setFollowerCount(int follCount);
    int setFollowedCount(int foledCount);
    const T& getHandler() {return handler;}
private:
    T handler;
    int followerCount, followedCount;
    T followers[maxFollowers];
    T followed[maxFollowed];
    bool privacy;



};

#endif

/*

• T handler (this represents the account owner)
• T followers[maxFollowers ]
• T followed[ maxFollowed]
• int followerCount to keep track of your current number of followers.
• int followedCount to keep track of your current number of followed accounts.
*/
