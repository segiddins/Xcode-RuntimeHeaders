//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESourceControlUI/_TtC18IDESourceControlUI20CommitEditorDocument.h>

@class DVTSourceControlStash, MISSING_TYPE, NSString;

@interface _TtC18IDESourceControlUI19StashEditorDocument : _TtC18IDESourceControlUI20CommitEditorDocument
{
    MISSING_TYPE *initialFilePath;
    MISSING_TYPE *stash;
}

- (void).cxx_destruct;
- (id)init;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;
@property(nonatomic, readonly) int readOnlyStatus;
@property(nonatomic, copy) NSString *displayName;
@property(nonatomic, retain) DVTSourceControlStash *stash; // @synthesize stash;

@end

