//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEContainer, IDEIssueProvider, IDEIssueProviderSession, NSArray, NSMapTable, NSMutableArray;
@protocol IDEBlueprint, IDEIssueRuntimeGroupingObject;

@interface _IDEIssueProvisionInfo : NSObject
{
    NSMutableArray *_issues;
    id <IDEBlueprint> _blueprint;
    IDEContainer *_container;
    id <IDEIssueRuntimeGroupingObject> _runtimeGroupingObject;
    NSMapTable *_issueToGroupingObjectsMap;
    IDEIssueProviderSession *_session;
}

- (void).cxx_destruct;
@property(readonly) IDEIssueProviderSession *session; // @synthesize session=_session;
@property(copy) NSMapTable *issueToGroupingObjectsMap; // @synthesize issueToGroupingObjectsMap=_issueToGroupingObjectsMap;
@property(readonly) __weak id <IDEIssueRuntimeGroupingObject> runtimeGroupingObject; // @synthesize runtimeGroupingObject=_runtimeGroupingObject;
@property(readonly) __weak IDEContainer *container; // @synthesize container=_container;
@property(readonly) __weak id <IDEBlueprint> blueprint; // @synthesize blueprint=_blueprint;
@property(readonly) NSMutableArray *_mutableIssues; // @synthesize _mutableIssues=_issues;
- (void)removeIssues:(id)arg1;
- (void)addIssues:(id)arg1;
@property(readonly) NSArray *issues;
@property(readonly) IDEIssueProvider *issueProvider;
- (id)initWithBlueprint:(id)arg1 container:(id)arg2 runtimeGroupingObject:(id)arg3 issues:(id)arg4 session:(id)arg5;

@end

