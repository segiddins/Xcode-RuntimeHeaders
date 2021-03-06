//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <IDEModelFoundation/CDMIdentification-Protocol.h>
#import <IDEModelFoundation/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTSymbol, IDEFileReference, IDEMappingModelDocument, NSArray, NSDictionary, NSImage, NSNull, NSNumber, NSString, NSURL;

@interface XDDevEntityMapping : NSManagedObject <CDMIdentification, IDEKeyDrivenNavigableItemRepresentedObject>
{
    IDEMappingModelDocument *document;
    NSNumber *uniqueID;
}

+ (id)entityMappingStringFromType:(unsigned long long)arg1;
+ (unsigned long long)entityMappingTypeFromUIString:(id)arg1;
+ (id)defaultEntityMappingUIStrings;
+ (id)keyPathsForValuesAffectingSortedRelationshipMappings;
+ (id)keyPathsForValuesAffectingSortedAttributeMappings;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
+ (id)keyPathsForValuesAffectingUserInfoDictionary;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (void).cxx_destruct;
@property(copy) NSNumber *uniqueID; // @synthesize uniqueID;
@property(retain) IDEMappingModelDocument *document; // @synthesize document;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1;
- (void)addMissingPropertyMappings;
- (id)sortedRelationshipMappings;
- (id)sortedAttributeMappings;
- (id)sortedPropertyMappings;
- (id)destinationEntity;
- (id)sourceEntity;
- (BOOL)hasValidDestinationName;
- (BOOL)hasValidSourceName;
- (id)mappingStatusIcon;
- (id)mappingTypeIcon;
- (id)_mappingTypeIconsByMappingName;
- (void)addPropertyMappingsObject:(id)arg1;
- (void)removeRelationshipMappingsObject:(id)arg1;
- (void)addRelationshipMappingsObject:(id)arg1;
- (void)removeAttributeMappingsObject:(id)arg1;
- (void)addAttributeMappingsObject:(id)arg1;
- (void)setMappingModel:(id)arg1;
- (id)mappingModel;
- (BOOL)validateSourceExpressionAsString:(id *)arg1 error:(id *)arg2;
- (void)setSourceExpressionAsString:(id)arg1;
- (id)sourceExpressionAsString;
- (void)setSourceExpression:(id)arg1;
- (id)sourceExpression;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *navigableItem_name;
- (id)shortMappingTypeName;
- (void)setMappingTypeName:(id)arg1;
- (id)mappingTypeName;
- (void)setMigrationPolicyClassName:(id)arg1;
- (id)migrationPolicyClassName;
- (BOOL)validateSourceFilterPredicateString:(id *)arg1 error:(id *)arg2;
- (void)setSourceFilterPredicateString:(id)arg1;
- (id)sourceFilterPredicateString;
- (void)setSourceExpressionData:(id)arg1;
- (id)sourceExpressionData;
- (void)setUserInfoData:(id)arg1;
- (id)userInfoData;
- (void)setMappingNumber:(id)arg1;
- (id)mappingNumber;
@property(copy) NSDictionary *userInfoDictionary;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (void)setDestinationName:(id)arg1;
- (id)destinationName;
- (void)setSourceName:(id)arg1;
- (id)sourceName;
- (void)setAutoGenerateExpression:(id)arg1;
- (id)autoGenerateExpression;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

