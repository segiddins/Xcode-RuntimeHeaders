//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEIssueProvider, NSArray, NSMutableArray;

@interface IDEIssueTypeGroup : NSObject
{
    NSMutableArray *_issues;
    unsigned long long _testFailureCount;
    unsigned long long _errorCount;
    unsigned long long _warningCount;
    unsigned long long _noticeCount;
    unsigned long long _analyzerResultCount;
    unsigned long long _runtimeCount;
    IDEIssueProvider *_issueProvider;
    id _issueTypeIdentifier;
    unsigned long long _issueType;
}

@property(readonly) unsigned long long issueType; // @synthesize issueType=_issueType;
@property(readonly) id issueTypeIdentifier; // @synthesize issueTypeIdentifier=_issueTypeIdentifier;
@property(readonly) IDEIssueProvider *issueProvider; // @synthesize issueProvider=_issueProvider;
@property(readonly) NSArray *issues; // @synthesize issues=_issues;
- (void).cxx_destruct;
- (void)_removeIssues:(id)arg1;
- (void)_addIssues:(id)arg1;
- (void)_updateIssueType;
- (id)_initWithIssueProvider:(id)arg1 issueTypeIdentifier:(id)arg2;
- (id)init;

@end

