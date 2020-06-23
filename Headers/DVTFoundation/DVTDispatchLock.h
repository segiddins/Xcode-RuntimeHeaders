//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTLocking-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface DVTDispatchLock : NSObject <DVTLocking>
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)readWriteDispatchLockWithDebugName:(id)arg1;
+ (id)recursiveDispatchLockWithDebugName:(id)arg1;
+ (id)dispatchLockWithDebugName:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)performLockedBlockAsyncUnlessRecursing:(CDUnknownBlockType)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)afterTimeInterval:(double)arg1 asyncPerformLockedBlock:(CDUnknownBlockType)arg2;
- (void)asyncPerformLockedWriterBlock:(CDUnknownBlockType)arg1;
- (void)asyncPerformLockedReaderBlock:(CDUnknownBlockType)arg1;
- (void)performLockedWriterBlock:(CDUnknownBlockType)arg1;
- (void)performLockedReaderBlock:(CDUnknownBlockType)arg1;
- (void)asyncPerformLockedBlock:(CDUnknownBlockType)arg1;
- (void)performLockedBlock:(CDUnknownBlockType)arg1;
@property(readonly) NSString *debugName;
- (void)dealloc;
- (id)initWithDebugName:(id)arg1;
- (id)initWithDebugName:(id)arg1 isRecursive:(BOOL)arg2;
- (void)dvt_asyncPerformLockedBlock:(CDUnknownBlockType)arg1;
- (void)dvt_performLockedBlock:(CDUnknownBlockType)arg1;

@end

