//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSUI/DVTRadar_AttachmentDownloadDelegate-Protocol.h>

@class NSResponder, NSString, NSWindow, XCSIntegration;
@protocol XCSUIIntegrationSummaryIssuesOutlineSelectionDelegate;

@interface XCSUIIntegrationSummaryIssuesOutlineContextMenuActions : NSObject <DVTRadar_AttachmentDownloadDelegate>
{
    XCSIntegration *_integration;
    NSWindow *_hostWindow;
    id <XCSUIIntegrationSummaryIssuesOutlineSelectionDelegate> _selectionDelegate;
    CDUnknownBlockType _refreshIssuesCallback;
    NSResponder *_errorPresenter;
}

@property(retain, nonatomic) NSResponder *errorPresenter; // @synthesize errorPresenter=_errorPresenter;
@property(copy) CDUnknownBlockType refreshIssuesCallback; // @synthesize refreshIssuesCallback=_refreshIssuesCallback;
@property(retain, nonatomic) id <XCSUIIntegrationSummaryIssuesOutlineSelectionDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
@property(retain, nonatomic) NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
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
- (void)_fileRadarForIssues:(id)arg1 componentName:(id)arg2 componentVersion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)fileRadarForIssue:(id)arg1;
- (id)_defaultKeywords;
- (void)_fileRadarForIssue:(id)arg1 componentName:(id)arg2 componentVersion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_fileRadarForNextBatchOfIssuesForPaths:(id)arg1;
- (void)_fileRadarsForIssues:(id)arg1;
- (void)fileRadarsForAllIssues:(id)arg1;
- (void)fileRadarsForSelectedIssues:(id)arg1;
- (id)_bestGroupForPath:(id)arg1 inGroups:(id)arg2;
- (void)_validateRadarComponents:(id)arg1 foundComponents:(id)arg2 startingIndex:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)fetchAttachmentsCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cancelFetchAttachments:(id)arg1;
- (void)removeAssociationFromIssues:(id)arg1 withProblemID:(unsigned long long)arg2;
- (void)associateIssues:(id)arg1 withProblemID:(unsigned long long)arg2;
- (void)openAssociatedOriginalRadar:(id)arg1;
- (void)openAssociatedRadars:(id)arg1;
- (void)openAssociatedRadar:(id)arg1;
- (void)openAssociatedRadarForIssue:(id)arg1;
- (void)copyProblemURL:(id)arg1;
- (id)_radarURLForProblemIDs:(id)arg1;
- (id)_radarURLForIssues:(id)arg1;
- (void)copyIssues:(id)arg1;
- (void)copyIssue:(id)arg1;
- (void)jumpToIntegration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

