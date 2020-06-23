//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEIssueProvider, NSArray, NSMutableArray, NSMutableDictionary;

@interface IDEIssueTypeGroup : NSObject
{
    NSMutableArray *_issues;
    NSMutableArray *_subgroups;
    unsigned long long _testFailureCount;
    unsigned long long _errorCount;
    unsigned long long _warningCount;
    unsigned long long _noticeCount;
    unsigned long long _analyzerResultCount;
    unsigned long long _runtimeCount;
    NSMutableDictionary *_displayNameForRuntimeIssueTypeIdentifierTable;
    IDEIssueProvider *_issueProvider;
    id _issueTypeIdentifier;
    unsigned long long _issueType;
}

@property unsigned long long issueType; // @synthesize issueType=_issueType;
@property(readonly) id issueTypeIdentifier; // @synthesize issueTypeIdentifier=_issueTypeIdentifier;
@property(readonly) IDEIssueProvider *issueProvider; // @synthesize issueProvider=_issueProvider;
@property(readonly) NSMutableDictionary *displayNameForRuntimeIssueTypeIdentifierTable; // @synthesize displayNameForRuntimeIssueTypeIdentifierTable=_displayNameForRuntimeIssueTypeIdentifierTable;
@property(copy, nonatomic) NSMutableArray *subgroups; // @synthesize subgroups=_subgroups;
@property(readonly) NSArray *issues; // @synthesize issues=_issues;
- (void).cxx_destruct;
- (void)_removeIssues:(id)arg1;
- (void)_addIssues:(id)arg1;
- (void)_updateIssueType;
- (id)_initWithIssueProvider:(id)arg1 issueTypeIdentifier:(id)arg2;
- (id)init;

@end

