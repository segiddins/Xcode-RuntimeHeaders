//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTSourceControlBranch, DVTSourceControlRemoteRepository, DVTSourceControlWorkingCopy, MISSING_TYPE;

@interface _TtC6IDEKit33IDESourceControlCommitAndPushInfo : NSObject
{
    MISSING_TYPE *workingCopy;
    MISSING_TYPE *selectedBranch;
    MISSING_TYPE *selectedRemote;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithWorkingCopy:(id)arg1 branch:(id)arg2 remote:(id)arg3;
@property(nonatomic, readonly) DVTSourceControlRemoteRepository *selectedRemote; // @synthesize selectedRemote;
@property(nonatomic, readonly) DVTSourceControlBranch *selectedBranch; // @synthesize selectedBranch;
@property(nonatomic, readonly) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy;

@end

