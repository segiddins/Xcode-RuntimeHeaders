//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEBatchFindFilePathPredicate.h>

@class NSArray;

@interface IDEBatchFindWorkspaceLocationPredicate : IDEBatchFindFilePathPredicate
{
    NSArray *_pathComponents;
    long long _root;
}

+ (id)propertyListIdentifier;
+ (id)decodeFromPropertyListRepresentation:(id)arg1;
@property(readonly) long long root; // @synthesize root=_root;
@property(readonly) NSArray *pathComponents; // @synthesize pathComponents=_pathComponents;
- (void).cxx_destruct;
- (BOOL)isWorkspaceSpecific;
- (id)propertyListRepresentation;
- (CDUnknownBlockType)filterBoundToWorkspace:(id)arg1;
- (id)containerItemGivenWorkspace:(id)arg1;
- (id)rootGroupGivenWorkspace:(id)arg1;
- (BOOL)isEqualToFilePathPredicateWithIdenticalClass:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPathComponents:(id)arg1;
- (id)initWithPathComponents:(id)arg1 root:(long long)arg2;

@end

