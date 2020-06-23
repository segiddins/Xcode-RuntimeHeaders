//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTTestDeviceCloneCreator-Protocol.h>

@protocol DVTTestDeviceCloneCreator, OS_dispatch_queue;

@interface DVTTestDeviceClonePoolCreatorAsyncProxy : NSObject <DVTTestDeviceCloneCreator>
{
    id <DVTTestDeviceCloneCreator> _creator;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedCreator;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) id <DVTTestDeviceCloneCreator> creator; // @synthesize creator=_creator;
- (void).cxx_destruct;
- (id)destroyClone:(id)arg1;
- (id)shutdownClone:(id)arg1;
- (id)cloneDevice:(id)arg1;
- (BOOL)canCloneDevice:(id)arg1;
- (id)finishInitialization;
- (id)initWithCreator:(id)arg1 queue:(id)arg2;

@end

