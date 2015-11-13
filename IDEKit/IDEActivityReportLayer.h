//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, IDEActivityActionButtonLayer, IDEActivityProgressIndicatorLayer, IDEActivityReport, IDEActivityScrollingTextLayer, NSMutableArray, NSString;

@interface IDEActivityReportLayer : CALayer <DVTInvalidation>
{
    IDEActivityProgressIndicatorLayer *_progressIndicatorLayer;
    IDEActivityScrollingTextLayer *_scrollingTextLayer;
    IDEActivityActionButtonLayer *_cancelButtonLayer;
    long long _displayStyle;
    IDEActivityReport *_activityReport;
    CALayer *_imageLayer;
    NSMutableArray *_stringSegments;
    BOOL _paused;
    DVTObservingToken *_kvoActivityReportTitleSegmentsToken;
    DVTObservingToken *_kvoActivityReportProgressToken;
    DVTObservingToken *_kvoActivityReportTitleToken;
    DVTObservingToken *_kvoActivityReportThrottleFactorToken;
    BOOL _isActiveWindowStyle;
    double _spaceNeededForMultiActionIndicator;
    double _spaceNeededForStatusLayers;
}

+ (id)activityReportLayerForDisplayStyle:(long long)arg1;
+ (struct CGSize)defaultSizeForPopUpStyle;
+ (void)initialize;
@property(nonatomic) double spaceNeededForStatusLayers; // @synthesize spaceNeededForStatusLayers=_spaceNeededForStatusLayers;
@property(nonatomic) double spaceNeededForMultiActionIndicator; // @synthesize spaceNeededForMultiActionIndicator=_spaceNeededForMultiActionIndicator;
@property(nonatomic) BOOL isActiveWindowStyle; // @synthesize isActiveWindowStyle=_isActiveWindowStyle;
@property(nonatomic) long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(retain, nonatomic) IDEActivityReport *activityReport; // @synthesize activityReport=_activityReport;
- (void).cxx_destruct;
- (double)spaceNeededForCancelButtonLayer;
- (BOOL)shouldShowCancelButtonLayer;
@property(readonly) BOOL indeterminateReportInProgress;
- (id)keyPathsForValuesAffectingIndeterminateReportInProgress;
- (void)updateVisibilityForCancelButtonAndAdjustLayoutIfNeeded;
- (void)updateVisibilityForTextFieldAndAdjustLayoutIfNeeded;
- (BOOL)shouldHideProgress;
- (void)_startObservingActivityReport;
- (void)_stopObservingActivityReport;
- (void)updateScrollingTextFieldStringValue;
- (id)_workspace;
- (void)_updatePaused:(BOOL)arg1;
- (void)_updateStringSegments:(id)arg1;
- (void)_removePausedSegment;
- (void)_addPausedSegment;
- (id)_pausedAttributes;
- (id)defaultIdleActionString;
- (id)nonFailedBuildTextAttributes;
- (id)defaultIdleTitle;
- (id)defaultReportTitle;
- (id)defaultCompletionSummary;
- (void)sizeToFit;
- (void)layoutSublayers;
- (void)updateConstraints;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

