//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEIssueRuntimeGroupingObject-Protocol.h>

@class DVTObservingToken, NSArray, NSMutableDictionary, NSString;

@interface IDEDebugSessionRuntimeGroup : NSObject <IDEIssueRuntimeGroupingObject>
{
    DVTObservingToken *_processPIDObservingToken;
    NSString *_name;
    id _issueTypeIdentifier;
    NSArray *subgroupTypeIdentifiers;
    NSMutableDictionary *_typeIdentifierToSubgroupTypeIdenfiers;
}

- (void).cxx_destruct;
@property(copy) NSMutableDictionary *typeIdentifierToSubgroupTypeIdenfiers; // @synthesize typeIdentifierToSubgroupTypeIdenfiers=_typeIdentifierToSubgroupTypeIdenfiers;
@property(copy) NSArray *subgroupTypeIdentifiers; // @synthesize subgroupTypeIdentifiers;
@property(copy) id issueTypeIdentifier; // @synthesize issueTypeIdentifier=_issueTypeIdentifier;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (id)initWithDebugProcess:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

