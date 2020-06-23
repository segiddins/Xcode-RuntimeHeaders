//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface IDERuntimeProfileInfo : NSObject
{
    NSMapTable *_pathsForBundleIDsByDevice;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)trackPath:(id)arg1 forBundleID:(id)arg2 onDevice:(id)arg3;
@property(readonly) NSMapTable *pathsForBundleIDsByDevice;
- (id)init;

@end

