//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <XCSUI/DVTRadar_AttachmentDownloadDelegate-Protocol.h>

@class NSMutableArray, NSString, XCSIntegration, _XCSUIIssueSelectionManager;

@interface _XCSUIIssuesSummaryView : NSView <DVTRadar_AttachmentDownloadDelegate>
{
    NSMutableArray *_radarIssuesQueue;
    _XCSUIIssueSelectionManager *_selectionManager;
    XCSIntegration *_integration;
    CDUnknownBlockType _refreshIssuesCallback;
}

@property(copy) CDUnknownBlockType refreshIssuesCallback; // @synthesize refreshIssuesCallback=_refreshIssuesCallback;
@property(retain) XCSIntegration *integration; // @synthesize integration=_integration;
@property(retain) _XCSUIIssueSelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
- (void).cxx_destruct;
- (void)unassignIssue:(id)arg1;
- (void)assignIssueToMe:(id)arg1;
- (void)stopSilencingIssue:(id)arg1;
- (void)silenceIssue:(id)arg1;
- (void)removeRadarAssociationForIssues:(id)arg1;
- (void)unassignRadarsForIssues:(id)arg1;
- (void)unassignRadarForIssue:(id)arg1;
- (void)assignExistingRadarToIssues:(id)arg1;
- (void)assignExistingRadarToIssue:(id)arg1;
- (void)fileRadarForIssues:(id)arg1;
- (void)_fileRadarForIssueViews:(id)arg1 componentName:(id)arg2 componentVersion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)fileRadarForIssue:(id)arg1;
- (void)_fileRadarForIssueView:(id)arg1 componentName:(id)arg2 componentVersion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_fileRadarForNextBatchOfIssuesForPaths:(id)arg1;
- (void)_fileRadarsForIssues:(id)arg1;
- (void)fileRadarsForAllIssues:(id)arg1;
- (void)fileRadarsForSelectedIssues:(id)arg1;
- (id)_bestGroupForPath:(id)arg1 inGroups:(id)arg2;
- (void)_validateRadarComponents:(id)arg1 foundComponents:(id)arg2 startingIndex:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)fetchAttachmentsCompletionBlock:(CDUnknownBlockType)arg1;
- (void)removeAssociationFromIssues:(id)arg1 withProblemID:(unsigned long long)arg2;
- (void)associateIssues:(id)arg1 withProblemID:(unsigned long long)arg2;
- (void)openAssociatedOriginalRadar:(id)arg1;
- (void)openAssociatedRadars:(id)arg1;
- (void)openAssociatedRadar:(id)arg1;
- (void)copyIssues:(id)arg1;
- (void)copyIssue:(id)arg1;
- (void)jumpToIntegration:(id)arg1;
- (id)menu;
- (BOOL)isFlipped;
- (BOOL)wantsLayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

