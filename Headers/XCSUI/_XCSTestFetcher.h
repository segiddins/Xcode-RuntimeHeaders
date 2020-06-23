//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_semaphore;

@interface _XCSTestFetcher : NSObject
{
    NSOperationQueue *_fetchQueue;
    NSObject<OS_dispatch_semaphore> *_fetchSemaphore;
}

+ (id)sharedTestFetcher;
- (void).cxx_destruct;
- (void)fetchTestsForPlaceholder:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

