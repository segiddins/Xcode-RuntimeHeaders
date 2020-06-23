//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIODebugGaugesUI/IDEGFXGaugeDebuggingAdditionUIController.h>

#import <IDEIODebugGaugesUI/IDEGaugeCollectedDataListeners-Protocol.h>

@class IDESpriteKitGaugeDebuggingAddition, NSString;

@interface IDESpriteKitGaugeDebuggingAdditionUIController : IDEGFXGaugeDebuggingAdditionUIController <IDEGaugeCollectedDataListeners>
{
    long long _frameCount;
    BOOL _isActive;
    IDESpriteKitGaugeDebuggingAddition *_debuggingAddition;
}

@property(retain, nonatomic) IDESpriteKitGaugeDebuggingAddition *debuggingAddition; // @synthesize debuggingAddition=_debuggingAddition;
- (void).cxx_destruct;
- (void)debuggingAdditionDidUpdateCollectedQueryResults:(id)arg1;
- (id)frameIntervalColors;
- (id)frameIntervalTitles;
- (BOOL)isActive;
- (void)primitiveInvalidate;
- (id)initWithWorkspaceTabController:(id)arg1 withDebuggingAddition:(id)arg2 forExtension:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

