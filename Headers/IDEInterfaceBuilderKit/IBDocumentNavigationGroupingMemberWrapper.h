//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBDocumentMemberWrapper.h>

@class NSArray, NSImage, NSString;

@interface IBDocumentNavigationGroupingMemberWrapper : IBDocumentMemberWrapper
{
    NSArray *_childWrappers;
    NSImage *_image;
    NSString *_name;
    NSString *_groupIdentifier;
    id _parentMember;
    NSString *_backingToManyRelationship;
}

@property(readonly, nonatomic) NSString *backingToManyRelationship; // @synthesize backingToManyRelationship=_backingToManyRelationship;
@property(nonatomic) __weak id parentMember; // @synthesize parentMember=_parentMember;
@property(readonly, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (id)name;
- (id)image;
@property(copy, nonatomic) NSArray *childWrappers; // @synthesize childWrappers=_childWrappers;
- (void).cxx_destruct;
- (id)acceptDrop:(id)arg1 childIndex:(long long)arg2;
- (unsigned long long)dragOperationForDropInfo:(id)arg1 proposedIndex:(long long)arg2 acceptingIndex:(long long *)arg3 isAlternativeItem:(BOOL)arg4;
- (id)applicableInspectorSlicesForCategory:(id)arg1 suggestedSlices:(id)arg2;
- (id)navigableDocumentLocation;
- (id)navigableGroupIdentifier;
- (id)identifier;
- (BOOL)wrapsNormalDocumentObject;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 image:(id)arg3 backingToManyRelationship:(id)arg4 document:(id)arg5;

@end

