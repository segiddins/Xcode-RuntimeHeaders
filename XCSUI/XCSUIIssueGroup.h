//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface XCSUIIssueGroup : NSObject
{
    NSString *_groupIdentifier;
    NSArray *_distributedIssues;
    NSArray *_allIssues;
}

@property(copy) NSArray *allIssues; // @synthesize allIssues=_allIssues;
@property(copy) NSArray *distributedIssues; // @synthesize distributedIssues=_distributedIssues;
@property(copy) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (void).cxx_destruct;
- (void)addIssue:(id)arg1;

@end

