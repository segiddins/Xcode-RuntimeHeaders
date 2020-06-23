//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIntentBuilderCore/IDEIntentBuilderElement.h>

#import <IDEIntentBuilderCore/DVTInvalidation-Protocol.h>
#import <IDEIntentBuilderCore/IDEIntentBuilderIssueGenerator-Protocol.h>
#import <IDEIntentBuilderCore/NSCopying-Protocol.h>

@class DVTStackBacktrace, IDEIntentBuilderObjectGroupItem, IDEIntentBuilderPropertyMetadata, IDEIntentBuilderPropertyRelationship, NSArray, NSNumber, NSString, NSUUID;
@protocol IDEIntentBuilderPropertyType;

@interface IDEIntentBuilderProperty : IDEIntentBuilderElement <NSCopying, DVTInvalidation, IDEIntentBuilderIssueGenerator>
{
    BOOL _supportsMultipleValues;
    BOOL _privateProperty;
    BOOL _defaultProperty;
    BOOL _hidden;
    BOOL _isRemoved;
    id <IDEIntentBuilderPropertyType> _type;
    NSUUID *_identifier;
    NSString *_name;
    NSString *_displayName;
    NSString *_displayNameID;
    NSNumber *_displayPriorityRank;
    IDEIntentBuilderPropertyMetadata *_metadata;
    IDEIntentBuilderPropertyRelationship *_relationship;
    long long _tag;
    IDEIntentBuilderObjectGroupItem *_objectGroupItem;
}

+ (void)initialize;
+ (id)reservedPropertyNames;
+ (id)statePropertyWithType:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=_setRemoved:) BOOL isRemoved; // @synthesize isRemoved=_isRemoved;
@property(nonatomic, setter=_setObjectGroupItem:) __weak IDEIntentBuilderObjectGroupItem *objectGroupItem; // @synthesize objectGroupItem=_objectGroupItem;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) IDEIntentBuilderPropertyRelationship *relationship; // @synthesize relationship=_relationship;
@property(retain, nonatomic) IDEIntentBuilderPropertyMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic, getter=isDefaultProperty) BOOL defaultProperty; // @synthesize defaultProperty=_defaultProperty;
@property(copy, nonatomic) NSNumber *displayPriorityRank; // @synthesize displayPriorityRank=_displayPriorityRank;
@property(copy, nonatomic, setter=_setDisplayNameID:) NSString *displayNameID; // @synthesize displayNameID=_displayNameID;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic, getter=isPrivateProperty) BOOL privateProperty; // @synthesize privateProperty=_privateProperty;
@property(nonatomic) BOOL supportsMultipleValues; // @synthesize supportsMultipleValues=_supportsMultipleValues;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *locationDescription;
- (id)generateIssues;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryKeyForKeyPath:(id)arg1;
- (id)keyPrefix;
- (BOOL)validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (void)primitiveInvalidate;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
@property(readonly, nonatomic) BOOL _hasMetadata;
- (void)_setType:(id)arg1 bumpTag:(BOOL)arg2;
- (void)_bumpTag;
- (void)_registerUndoBlockForFoundProperty:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL hasParent;
@property(readonly, nonatomic) BOOL hasChildren;
@property(readonly, nonatomic) NSArray *childProperties;
@property(copy, nonatomic) id <IDEIntentBuilderPropertyType> type; // @synthesize type=_type;
- (id)availableTokensIncludingCustomTypeProperties:(BOOL)arg1;
- (void)setType:(id)arg1 bumpTag:(BOOL)arg2;
- (id)initWithName:(id)arg1 supportsMultipleValues:(BOOL)arg2;
- (id)codegen_availabilityForSourceLanguage:(unsigned long long)arg1;
- (id)codegen_forwardDeclarationsForSourceLanguage:(unsigned long long)arg1;
- (id)codegen_implementationForSourceLanguage:(unsigned long long)arg1 readonly:(BOOL)arg2 dynamic:(BOOL)arg3;
- (id)codegen_declarationForSourceLanguage:(unsigned long long)arg1 readonly:(BOOL)arg2;
- (id)codegen_typeNameForSourceLanguage:(unsigned long long)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
