//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface XCOperationArbitrator : NSObject
{
    NSMutableArray *_runningOperations;
    NSMutableArray *_pendingOperations;
}

+ (id)sharedOperationArbitrator;
- (void)operationDidStop:(id)arg1;
- (void)unregisterPendingOperation:(id)arg1;
- (void)registerPendingOperation:(id)arg1;
- (void)registerRunningOperation:(id)arg1;
- (void)dealloc;
- (id)init;

@end

