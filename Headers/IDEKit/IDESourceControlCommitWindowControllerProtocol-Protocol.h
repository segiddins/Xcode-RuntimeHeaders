//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEWorkspace, NSArray, NSWindow;

@protocol IDESourceControlCommitWindowControllerProtocol <NSObject>
@property(copy) CDUnknownBlockType commitWindowCompletionBlock;
@property(copy) NSArray *workingTrees;
@property(retain) IDEWorkspace *workspace;
@property(retain) NSArray *forcedPushInfos;
- (void)beginSheetForWindow:(NSWindow *)arg1;
@end

