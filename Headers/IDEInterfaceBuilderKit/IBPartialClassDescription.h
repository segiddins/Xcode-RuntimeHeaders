//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/NSCoding-Protocol.h>
#import <IDEInterfaceBuilderKit/NSCopying-Protocol.h>
#import <IDEInterfaceBuilderKit/NSMutableCopying-Protocol.h>

@class IBClassDescriptionSource, NSArray, NSMutableArray, NSString;

@interface IBPartialClassDescription : NSObject <NSCoding, NSCopying, NSMutableCopying>
{
    NSString *_className;
    NSString *_superclassName;
    NSMutableArray *_relationships;
    IBClassDescriptionSource *_sourceIdentifier;
    BOOL _designable;
    BOOL _requiresClassNameFormatting;
}

+ (id)descriptionWithClassName:(id)arg1;
+ (id)userDescriptionWithClassName:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) IBClassDescriptionSource *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(readonly, nonatomic) BOOL requiresClassNameFormatting; // @synthesize requiresClassNameFormatting=_requiresClassNameFormatting;
@property(readonly, nonatomic, getter=isDesignable) BOOL designable; // @synthesize designable=_designable;
@property(readonly, copy, nonatomic) NSString *superclassName; // @synthesize superclassName=_superclassName;
@property(readonly, copy, nonatomic) NSString *className; // @synthesize className=_className;
- (id)partialClassDescriptionBySettingSourceIdentifier:(id)arg1;
- (BOOL)describesAnyRelationships;
- (BOOL)isPrimaryDefinition;
- (id)typeForInspectable:(id)arg1;
- (id)collectionTypeForToManyOutlet:(id)arg1;
- (id)typeForToManyOutlet:(id)arg1;
- (id)typeForToOneOutlet:(id)arg1;
- (id)typeForAction:(id)arg1;
- (id)inspectableNames;
- (id)toManyOutletNames;
- (id)toOneOutletNames;
- (id)actionNames;
- (BOOL)describesInspectable:(id)arg1;
- (BOOL)describesToManyOutlet:(id)arg1;
- (BOOL)describesToOneOutlet:(id)arg1;
- (BOOL)describesAnyAction:(id)arg1;
- (BOOL)describesAction:(id)arg1;
- (long long)numberOfRelationsOfRelationshipType:(long long)arg1;
- (id)relationshipInfosOfRelationshipType:(long long)arg1;
- (id)namedRelationsOfRelationshipType:(long long)arg1;
- (id)typeForNamedRelation:(id)arg1 ofRelationshipType:(long long)arg2;
- (BOOL)describesNamedRelation:(id)arg1 ofRelationshipType:(long long)arg2;
- (BOOL)describesAnyNamedRelation:(id)arg1 ofRelationshipType:(long long)arg2;
- (id)relationshipInfoForNamedRelation:(id)arg1 ofRelationshipType:(long long)arg2;
@property(readonly, nonatomic) NSString *workspaceDocumentRelativeInterfaceFile;
- (id)description;
@property(readonly, nonatomic, getter=isCategory) BOOL category;
@property(readonly, nonatomic) NSArray *relationshipInfos;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStaticDescription:(id)arg1 andSourceIdentifier:(id)arg2;
- (id)initWithName:(id)arg1 andSourceIdentifier:(id)arg2;
- (id)initWithName:(id)arg1 requiresClassNameFormatting:(BOOL)arg2 source:(id)arg3 superclassName:(id)arg4 isDesignable:(BOOL)arg5 relationshipsKnownToBeUniqueByNamePerType:(id)arg6;

@end

