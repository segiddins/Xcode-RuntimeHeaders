//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DVTFuture;
@protocol DVTTestDevice, DVTTestDeviceCloneCreator;

@protocol DVTTestDeviceCloneCreator
+ (id <DVTTestDeviceCloneCreator>)sharedCreator;
- (DVTFuture *)destroyClone:(id <DVTTestDevice>)arg1;
- (DVTFuture *)shutdownClone:(id <DVTTestDevice>)arg1;
- (DVTFuture *)cloneDevice:(id <DVTTestDevice>)arg1;
- (BOOL)canCloneDevice:(id <DVTTestDevice>)arg1;
- (DVTFuture *)finishInitialization;
@end

