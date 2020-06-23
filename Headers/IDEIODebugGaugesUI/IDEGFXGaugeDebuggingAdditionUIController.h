//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEIODebugGaugesUI/IDEDebuggingAdditionUIController-Protocol.h>

@class DVTExtension, DVTObservingToken, DVTStackBacktrace, IDEDebugGaugeReportSection, IDEGFXGaugeFrameBreakdownReportSection, IDELaunchSession, IDEWorkspaceTabController, NSString;
@protocol IDEGFXGaugeReportItemProvider;

@interface IDEGFXGaugeDebuggingAdditionUIController : NSObject <IDEDebuggingAdditionUIController>
{
    IDEDebugGaugeReportSection *_frameBreakdownReportSection;
    IDEGFXGaugeFrameBreakdownReportSection *_frameBreakdownController;
    DVTObservingToken *_debugStateKVOToken;
    double _sampleTimeStartOffset;
    double _lastSampleTime;
    double _lastSampleTimeOffset;
    BOOL _reportMode;
    BOOL _paused;
    double _appFrameRate;
    double _appTargetFrameRate;
    id <IDEGFXGaugeReportItemProvider> _reportItemProvider;
    DVTExtension *_extension;
    IDEWorkspaceTabController *_workspaceTabController;
    IDELaunchSession *_launchSession;
}

+ (id)debuggingAdditionForLaunchSession:(id)arg1 inWorkspaceTabController:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)initialize;
@property(retain, nonatomic) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
@property(retain, nonatomic) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(retain, nonatomic) DVTExtension *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) id <IDEGFXGaugeReportItemProvider> reportItemProvider; // @synthesize reportItemProvider=_reportItemProvider;
- (void).cxx_destruct;
@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(readonly) double appTargetFrameRate; // @synthesize appTargetFrameRate=_appTargetFrameRate;
- (void)setAppTargetFrameRate:(double)arg1;
@property(readonly) double appFrameRate; // @synthesize appFrameRate=_appFrameRate;
- (void)setAppFrameRate:(double)arg1;
@property(readonly, nonatomic) BOOL isActive;
@property(nonatomic, getter=isReportMode) BOOL reportMode; // @synthesize reportMode=_reportMode;
- (void)updateReportData:(id)arg1;
- (void)addCPUFrameTimeBreakdown:(id)arg1 gpuFrameTime:(float)arg2 atSampleTime:(double)arg3;
- (id)frameIntervalColors;
- (id)frameIntervalTitles;
- (void)_setupDebugStateObserver;
- (id)frameBreakdownController;
- (void)_createFrameBreakdownReportSection;
@property(readonly, nonatomic) IDEDebugGaugeReportSection *frameBreakdownReportSection;
- (BOOL)frameBreakdownReportSectionReady;
- (void)primitiveInvalidate;
- (id)initWithWorkspaceTabController:(id)arg1 withDebuggingAddition:(id)arg2 forExtension:(id)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

