//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEProductsUI/DVTReplacementViewDelegate-Protocol.h>

@class DVTAnalyticsLogRecord, DVTAnalyticsPointAbstractClass, DVTCrashLogViewController, DVTReplacementView, IDEAnalyticsPointDetailViewController, NSString, _TtC13IDEProductsUI31ProcessorUsageLogViewController;

@interface IDEAnalyticsPointLogViewController : IDEViewController <DVTReplacementViewDelegate>
{
    DVTAnalyticsLogRecord *_analyticsLogRecord;
    DVTAnalyticsPointAbstractClass *_analyticsPoint;
    IDEAnalyticsPointDetailViewController *_analyticsPointDetailViewController;
    DVTReplacementView *_replacementView;
    DVTCrashLogViewController *_crashLogViewController;
    _TtC13IDEProductsUI31ProcessorUsageLogViewController *_processorUsageLogViewController;
}

@property(retain, nonatomic) _TtC13IDEProductsUI31ProcessorUsageLogViewController *processorUsageLogViewController; // @synthesize processorUsageLogViewController=_processorUsageLogViewController;
@property(retain, nonatomic) DVTCrashLogViewController *crashLogViewController; // @synthesize crashLogViewController=_crashLogViewController;
@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property(nonatomic) __weak IDEAnalyticsPointDetailViewController *analyticsPointDetailViewController; // @synthesize analyticsPointDetailViewController=_analyticsPointDetailViewController;
@property(retain, nonatomic) DVTAnalyticsPointAbstractClass *analyticsPoint; // @synthesize analyticsPoint=_analyticsPoint;
@property(retain, nonatomic) DVTAnalyticsLogRecord *analyticsLogRecord; // @synthesize analyticsLogRecord=_analyticsLogRecord;
- (void).cxx_destruct;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)_updateInstalledViewController;
@property(readonly) BOOL isLogViewVisible;
@property(readonly) BOOL supportsLowSampleCountFrameCompression;
- (void)toggleLowSampleCountFrameCompression;
@property(readonly) BOOL compressLowSampleCountFrames;
- (void)toggleLibraryFrameCompression;
@property(readonly) BOOL compressLibraryFrames;
- (id)logViewController;
- (void)_updateLogView;
- (void)loadView;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

