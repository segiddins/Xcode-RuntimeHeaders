//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XcodeEdit/XCTextAnnotation.h>

@class NSMutableArray;

@interface XCBuildMessageTextAnnotation : XCTextAnnotation
{
    NSMutableArray *_buildMessages;
    unsigned short _numBuildNotices;
    unsigned short _numBuildWarnings;
    unsigned short _numBuildAnalyzerWarnings;
    unsigned short _numBuildAnalyzerResults;
    unsigned short _numBuildAnalyzerEventSteps;
    unsigned short _numBuildAnalyzerControlFlowSteps;
    unsigned short _numBuildErrors;
    struct _XCBuildMessageTextAnnotationFlags _bmtaFlags;
}

+ (unsigned long long)_defaultAnnotationStyle;
+ (unsigned long long)_defaultSidebarMarkerAlignment;
+ (id)buildNoticeSidebarIcon;
+ (id)buildAnalyzerControlFlowStepSidebarIcon;
+ (id)buildAnalyzerEventStepSidebarIcon;
+ (id)buildAnalyzerResultSidebarIcon;
+ (id)buildAnalyzerWarningSidebarIcon;
+ (id)buildWarningSidebarIcon;
+ (id)buildErrorSidebarIcon;
- (BOOL)isBuildAnalyzerControlFlowStep;
- (BOOL)isBuildAnalyzerEventStep;
- (BOOL)isBuildAnalyzerResult;
- (BOOL)isBuildAnalyzerWarning;
- (BOOL)isBuildWarning;
- (BOOL)isBuildError;
- (BOOL)causesSidebarAnnotationDisplacement;
- (long long)precedence;
- (id)sidebarMarkerIconImage;
- (struct CGSize)calculateAnnotationViewSizeForBounds:(struct CGRect)arg1;
- (id)createAnnotationViewForTextView:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)noteThatDesiredSizeMayHaveChanged;
- (BOOL)canCollapseOrExpand;
- (BOOL)isCollapsed;
- (void)setCollapsed:(BOOL)arg1;
@property(nonatomic) BOOL showsWarnings;
- (void)merge:(id)arg1;
- (BOOL)canMerge:(id)arg1;
- (id)buildMessagesToShow;
@property(readonly, nonatomic) unsigned long long numberOfBuildAnalyzerControlFlowSteps;
@property(readonly, nonatomic) unsigned long long numberOfBuildAnalyzerEventSteps;
@property(readonly, nonatomic) unsigned long long numberOfBuildAnalyzerResults;
@property(readonly, nonatomic) unsigned long long numberOfBuildAnalyzerWarnings;
@property(readonly, nonatomic) unsigned long long numberOfBuildErrors;
@property(readonly, nonatomic) unsigned long long numberOfBuildWarnings;
@property(readonly, nonatomic) unsigned long long numberOfBuildNotices;
- (void)removeBuildMessage:(id)arg1;
- (void)addBuildMessage:(id)arg1;
- (void)setTextStorage:(id)arg1;
- (void)_updateHighlightedRanges;
- (id)buildMessages;
- (void)dealloc;
- (id)init;

@end

