//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSourceControl/_TtC15XCSourceControl31XCSourceControlPullRequestEvent.h>

@class MISSING_TYPE, NSArray;

@interface _TtC15XCSourceControl37XCSourceControlPullRequestCommitEvent : _TtC15XCSourceControl31XCSourceControlPullRequestEvent
{
    MISSING_TYPE *commitsAdded;
    MISSING_TYPE *commitsRemoved;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) NSArray *commitsRemoved;
@property(nonatomic, readonly) NSArray *commitsAdded;

@end
