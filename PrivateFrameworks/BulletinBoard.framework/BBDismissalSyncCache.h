/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBDismissalSyncCache : NSObject {
    NSMutableDictionary * _cache;
    NSDate * _timeToCheck;
}

@property (nonatomic, retain) NSMutableDictionary *cache;
@property (nonatomic, retain) NSDate *timeToCheck;

- (void).cxx_destruct;
- (void)_checkCache;
- (bool)_isTimeToCheck;
- (id)cache;
- (void)cacheDismissalDictionaries:(id)arg1 dismissalIDs:(id)arg2 inSection:(id)arg3 forFeeds:(unsigned long long)arg4;
- (id)description;
- (id)findBulletinMatch:(id)arg1;
- (id)init;
- (void)removeBulletinMatch:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setTimeToCheck:(id)arg1;
- (id)timeToCheck;

@end