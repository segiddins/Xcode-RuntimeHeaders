//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSString, NSURL, NSURLConnection, PSFeed;

__attribute__((visibility("hidden")))
@interface DSASubscription : NSObject
{
    NSURL *_feedURL;
    PSFeed *_feed;
    NSString *_uid;
    NSURLConnection *_feedConnection;
    NSMutableData *_feedData;
}

+ (void)_periodicRefresh:(id)arg1;
+ (void)refreshAll;
+ (void)setRefreshInterval:(double)arg1;
+ (void)_removeSubscription:(id)arg1;
+ (void)_addSubscription:(id)arg1;
+ (id)subscriptionIfExistsWithURL:(id)arg1;
+ (id)subscriptionWithFeed:(id)arg1;
+ (id)subscriptionWithURL:(id)arg1;
+ (id)subscriptions;
+ (void)_flushSubscriptions;
+ (void)_flushRefreshInterval;
+ (void)_initGlobals;
@property(copy) NSString *uid; // @synthesize uid=_uid;
@property(retain) NSURLConnection *feedConnection; // @synthesize feedConnection=_feedConnection;
@property(retain) NSMutableData *feedData; // @synthesize feedData=_feedData;
@property(retain) NSURL *feedURL; // @synthesize feedURL=_feedURL;
@property(retain) PSFeed *feed; // @synthesize feed=_feed;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)_refreshCompleted;
- (void)refresh;
- (id)_getCachedURLData;
- (BOOL)_parseFeedData:(id)arg1 saveToCache:(BOOL)arg2;
- (void)_deleteFeedDataFromCache;
- (void)_saveFeedDataToCache:(id)arg1;
- (void)_loadFeedDataFromCache;
- (id)_cacheFilePath;
- (void)unsubscribe;
- (id)description;
- (void)dealloc;
- (id)initWithFeed:(id)arg1;
- (id)initWithURL:(id)arg1 uid:(id)arg2;
- (id)_generateUIDString;

@end

