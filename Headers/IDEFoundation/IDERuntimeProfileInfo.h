//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IDERuntimeProfileInfo : NSObject
{
    NSMutableDictionary *_pathsForBundleIDs;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)trackPath:(id)arg1 forBundleID:(id)arg2;
@property(readonly) NSDictionary *pathsForBundleIDs;
- (id)init;

@end

