//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/DVTInvalidation-Protocol.h>

@class IDEActivityLogSection;

@protocol IDEIssueLogDataSource <DVTInvalidation>
@property(nonatomic, readonly) IDEActivityLogSection *issueLog;
- (void)analyzeModelForIssues;
@end

