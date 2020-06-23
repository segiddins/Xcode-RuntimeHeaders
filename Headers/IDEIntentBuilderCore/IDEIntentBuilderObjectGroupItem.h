//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIntentBuilderCore/IDEIntentBuilderGroupItem.h>

@class NSArray;

@interface IDEIntentBuilderObjectGroupItem : IDEIntentBuilderGroupItem
{
    unsigned long long _lastPropertyTag;
    NSArray *_properties;
}

+ (Class)propertyClass;
+ (id)defaultPropertyName;
@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(nonatomic) unsigned long long lastPropertyTag; // @synthesize lastPropertyTag=_lastPropertyTag;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)primitiveInvalidate;
- (id)init;
- (void)_reassignDisplayPriority;
- (void)_removeProperty:(id)arg1 undoHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *supportedTypes;
- (id)_supportedTypesForProperty:(id)arg1 includingHidden:(BOOL)arg2;
- (id)propertiesWithTypes:(id)arg1;
- (id)propertyTypeWithName:(id)arg1 namespace:(id)arg2 class:(Class)arg3;
- (id)propertyWithDisplayName:(id)arg1;
- (id)propertyWithName:(id)arg1;
- (id)propertyWithIdentifier:(id)arg1;
- (void)removeProperty:(id)arg1;
- (void)updateIndexesOfProperties:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)addProperty:(id)arg1;
- (id)codegen_importStatementsForSourceLanguage:(unsigned long long)arg1;
- (id)codegen_forwardDeclarationsForSourceLanguage:(unsigned long long)arg1;
- (id)codegen_allProperties;
- (id)codegen_propertyImplementationsForSourceLanguage:(unsigned long long)arg1 readonly:(BOOL)arg2 dynamic:(BOOL)arg3;
- (id)codegen_propertyDeclarationsForSourceLanguage:(unsigned long long)arg1 readonly:(BOOL)arg2;

@end

