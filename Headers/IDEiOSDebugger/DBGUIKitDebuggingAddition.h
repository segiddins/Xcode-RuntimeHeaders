//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEiOSDebugger/DBGKitDebuggingAddition-Protocol.h>
#import <IDEiOSDebugger/IDEDebugOverrideDelegate-Protocol.h>

@class DVTStackBacktrace, IDELaunchSession, NSArray, NSMutableDictionary, NSString;

@interface DBGUIKitDebuggingAddition : NSObject <IDEDebugOverrideDelegate, DBGKitDebuggingAddition>
{
    BOOL _showsFramesOfAllViews;
    BOOL _showsAlignmentRectanglesOfAllViews;
    unsigned long long _numberOfEnabledDebugOverrides;
    BOOL _isEvaluatingExpressions;
    NSArray *_debugOverrides;
    IDELaunchSession *_launchSession;
    NSString *_identifier;
    NSMutableDictionary *_scheduledExpressions;
}

+ (BOOL)shouldInstantiateInLaunchSession:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) BOOL isEvaluatingExpressions; // @synthesize isEvaluatingExpressions=_isEvaluatingExpressions;
@property(retain, nonatomic) NSMutableDictionary *scheduledExpressions; // @synthesize scheduledExpressions=_scheduledExpressions;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
@property(retain, nonatomic) NSArray *debugOverrides; // @synthesize debugOverrides=_debugOverrides;
@property(nonatomic) BOOL showsAlignmentRectanglesOfAllViews; // @synthesize showsAlignmentRectanglesOfAllViews=_showsAlignmentRectanglesOfAllViews;
@property(nonatomic) BOOL showsFramesOfAllViews; // @synthesize showsFramesOfAllViews=_showsFramesOfAllViews;
- (void)primitiveInvalidate;
- (void)_evaluateExpression:(id)arg1 retriesLeft:(long long)arg2;
- (void)_evaluateExpression:(id)arg1;
- (void)_evaluateScheduledExpressions;
- (void)_scheduleExpressionEvaluationForDebugOverride:(id)arg1;
- (void)debugOverrideDidUpdate:(id)arg1;
- (void)disableAllDebugOverrides;
- (void)_recalculateNumberOfEnabledDebugOverrides;
@property(readonly, nonatomic) unsigned long long numberOfEnabledDebugOverrides;
- (id)_effectivePlatformIdentifier;
- (void)_loadAvailableOverrides;
@property(readonly, nonatomic) BOOL supportsDebugOverrides;
- (id)initInLaunchSession:(id)arg1 withAppDisplayName:(id)arg2 runDestination:(id)arg3 fromExtension:(id)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL flashesDrawingOfAllViews;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(nonatomic) BOOL showsResponsiveScrollingStatusOfAllViews;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BOOL supportsSystemAppearanceTestingOverrides;
@property(nonatomic) unsigned long long systemAppearanceTestingOverride;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

