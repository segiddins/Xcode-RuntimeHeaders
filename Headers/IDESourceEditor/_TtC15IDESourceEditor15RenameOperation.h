//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC15IDESourceEditor15RenameOperation : _TtCs12_SwiftObject
{
    MISSING_TYPE *queue;
    MISSING_TYPE *editor;
    MISSING_TYPE *workspaceDocument;
    MISSING_TYPE *sourceRange;
    MISSING_TYPE *action;
    MISSING_TYPE *processEditsQueued;
    MISSING_TYPE *refactorIsFinished;
    MISSING_TYPE *openedFirstDocument;
    MISSING_TYPE *gotSomeRanges;
    MISSING_TYPE *gotRangesForFirstDocument;
    MISSING_TYPE *originalURL;
    MISSING_TYPE *gotAFailure;
    MISSING_TYPE *resultsDelegate;
    MISSING_TYPE *results;
}

- (void)renameRangesFound:(id)arg1;
- (void)unhandledURL:(id)arg1 symbols:(id)arg2;
- (void)fileChanged:(id)arg1;
- (void)started;
- (void)finished;

@end

