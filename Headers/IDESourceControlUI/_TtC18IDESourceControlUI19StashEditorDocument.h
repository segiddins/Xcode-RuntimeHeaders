//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceControlUI/_TtC18IDESourceControlUI20CommitEditorDocument.h>

@class DVTSourceControlStash, NSString;

@interface _TtC18IDESourceControlUI19StashEditorDocument : _TtC18IDESourceControlUI20CommitEditorDocument
{
    // Error parsing type: , name: initialFilePath
    // Error parsing type: , name: stash
}

- (void).cxx_destruct;
- (id)init;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;
@property(nonatomic, readonly) int readOnlyStatus;
@property(nonatomic, copy) NSString *displayName;
@property(nonatomic, retain) DVTSourceControlStash *stash; // @synthesize stash;

@end

