//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DTGraphKit/DTResponsiveUISubframe.h>

@interface DTResponsiveUIRenderSubframe : DTResponsiveUISubframe
{
    struct atomic_flag _performedLoadTest;
    unsigned char _displayPressureCutOffFrame;
}

+ (BOOL)enableConcurrentActivities;
@property(nonatomic) unsigned char displayPressureCutOffFrame; // @synthesize displayPressureCutOffFrame=_displayPressureCutOffFrame;
- (void)yieldingMinorFrame:(unsigned char)arg1;
- (void)underrunMinorFrame:(unsigned char)arg1;
- (void)extendingMinorFrame:(unsigned char)arg1;
- (void)enteringMinorFrame:(unsigned char)arg1;
- (void)startingMajorFrame;
- (void)_scheduleFulfillments;
- (void)_earlyExposeProviderToMainThread:(id)arg1;
- (void)_testFrameRateLoad;
- (int)agentStopDiagnosticsTypeCode;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithRing:(id)arg1 context:(id)arg2;

@end

