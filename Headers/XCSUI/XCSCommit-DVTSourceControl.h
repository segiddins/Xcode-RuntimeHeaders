//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSCore/XCSCommit.h>

@class DVTSourceControlAuthor, DVTSourceControlRevision, NSArray;

@interface XCSCommit (DVTSourceControl)
@property(readonly, copy, nonatomic) NSArray *fileStatuses;
@property(readonly, copy, nonatomic) DVTSourceControlRevision *revision;
@property(readonly, copy, nonatomic) DVTSourceControlAuthor *author;
- (id)logItemWithWorkspace:(id)arg1;
@end

