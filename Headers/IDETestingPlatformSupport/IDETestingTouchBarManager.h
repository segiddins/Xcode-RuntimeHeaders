//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDETestingTouchBarManager-Protocol.h"

@class NSString;

@interface IDETestingTouchBarManager : NSObject <IDETestingTouchBarManager>
{
    struct __DFRTouchBarSimulator *_touchBarSimulator;
    struct CGDisplayStream *_touchBarDisplayStream;
}

+ (BOOL)_hardwarePresent;
+ (BOOL)_hostHasTouchBarSupport;
+ (void)initialize;
- (CDUnknownBlockType)_setSimulatorServiceEnabledForIDE:(BOOL)arg1;
- (void)_stopSimulatorForXcodebuild;
- (BOOL)_startSimulatorForXcodebuild;
@property(readonly) BOOL _simulatorAllowed;
- (BOOL)simulatorRunning;
- (id)enableSimulator;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

