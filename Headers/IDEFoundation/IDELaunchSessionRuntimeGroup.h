//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEIssueRuntimeGroupingObject-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

@interface IDELaunchSessionRuntimeGroup : NSObject <IDEIssueRuntimeGroupingObject>
{
    NSString *_name;
    id _issueTypeIdentifier;
    NSArray *subgroupTypeIdentifiers;
    NSMutableDictionary *_typeIdentifierToSubgroupTypeIdenfiers;
}

@property(copy) NSMutableDictionary *typeIdentifierToSubgroupTypeIdenfiers; // @synthesize typeIdentifierToSubgroupTypeIdenfiers=_typeIdentifierToSubgroupTypeIdenfiers;
@property(copy) NSArray *subgroupTypeIdentifiers; // @synthesize subgroupTypeIdentifiers;
@property(copy) id issueTypeIdentifier; // @synthesize issueTypeIdentifier=_issueTypeIdentifier;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

