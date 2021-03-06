//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIntentBuilderCore/NSObject-Protocol.h>

@class IDEIntentBuilderObjectGroupItem, NSArray, NSString;
@protocol IDEIntentBuilderPropertyType;

@protocol IDEIntentBuilderPropertyType <NSObject>
+ (id <IDEIntentBuilderPropertyType>)defaultType;
@property(readonly, nonatomic) BOOL resolutionResultSupportsDisambiguation;
@property(readonly, nonatomic) BOOL resolutionResultSupportsConfirmation;
@property(readonly, copy, nonatomic) NSString *resolutionResultClassName;
@property(readonly, nonatomic, getter=isSupportedAsOutput) BOOL supportedAsOutput;
@property(readonly, nonatomic, getter=isSupportedAsInput) BOOL supportedAsInput;
@property(readonly, nonatomic) NSArray *unsupportedReasons;
@property(readonly, nonatomic) NSArray *promptDialogTokens;
@property(readonly, nonatomic) NSArray *relationshipPredicates;
@property(readonly, copy, nonatomic) NSString *typeGroupName;
@property(readonly, copy, nonatomic) NSString *metadataTypeName;
@property(readonly, nonatomic) BOOL requiresDynamicEnumeration;
@property(readonly, nonatomic) BOOL supportsDynamicEnumeration;
@property(readonly, nonatomic) BOOL supportsMultipleValues;
@property(readonly, copy, nonatomic) NSString *namespace;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *name;
- (NSString *)APIAvailabilityForSourceLanguage:(unsigned long long)arg1 internal:(BOOL)arg2;
- (BOOL)isCollectionOptionalForSourceLanguage:(unsigned long long)arg1 objectGroupItem:(IDEIntentBuilderObjectGroupItem *)arg2;
- (BOOL)isOptionalForSourceLanguage:(unsigned long long)arg1 objectGroupItem:(IDEIntentBuilderObjectGroupItem *)arg2;
- (NSString *)defaultValueForSourceLanguage:(unsigned long long)arg1;
- (NSString *)forwardDeclarationForSourceLanguage:(unsigned long long)arg1 objectGroupItem:(IDEIntentBuilderObjectGroupItem *)arg2;
- (NSString *)importStatementForSourceLanguage:(unsigned long long)arg1 objectGroupItem:(IDEIntentBuilderObjectGroupItem *)arg2;
- (NSString *)collectionPropertyAttributesForSourceLanguage:(unsigned long long)arg1 objectGroupItem:(IDEIntentBuilderObjectGroupItem *)arg2;
- (NSString *)propertyAttributesForSourceLanguage:(unsigned long long)arg1 objectGroupItem:(IDEIntentBuilderObjectGroupItem *)arg2;
- (NSString *)collectionTypeNameForSourceLanguage:(unsigned long long)arg1 objectGroupItem:(IDEIntentBuilderObjectGroupItem *)arg2;
- (NSString *)referenceTypeNameForSourceLanguage:(unsigned long long)arg1 objectGroupItem:(IDEIntentBuilderObjectGroupItem *)arg2;
- (NSString *)typeNameForSourceLanguage:(unsigned long long)arg1 objectGroupItem:(IDEIntentBuilderObjectGroupItem *)arg2;

@optional
@property(readonly, copy, nonatomic) NSString *imageName;
@end

