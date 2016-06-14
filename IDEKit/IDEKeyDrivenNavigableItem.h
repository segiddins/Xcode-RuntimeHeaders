//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDENavigableItem.h>

@class DVTObservingToken, NSDictionary;
@protocol IDEKeyDrivenNavigableItemRepresentedObject;

@interface IDEKeyDrivenNavigableItem : IDENavigableItem
{
    NSDictionary *_cachedPropertyValues;
    DVTObservingToken *_parentChildBreakdownObserver;
    struct {
        unsigned int _invalidatingChildItems:1;
        unsigned int _disposing:1;
        unsigned int _reserved:30;
    } _idekdniFlags;
}

+ (void)_customizeNewNavigableItemClass:(Class)arg1 forModelObjectClass:(Class)arg2 extension:(id)arg3;
+ (id)_automatic_keyPathsForValuesAffectingMajorGroup;
+ (id)keyPathsForValuesAffectingReferencedContentExists;
+ (id)keyPathsForValuesAffectingContentDocumentLocation;
+ (id)keyPathsForValuesAffectingDocumentType;
+ (id)keyPathsForValuesAffectingFileReference;
+ (id)keyPathsForValuesAffectingGroupIdentifier;
+ (id)keyPathsForValuesAffectingToolTip;
+ (id)keyPathsForValuesAffectingAccessibleDescription;
+ (id)keyPathsForValuesAffectingImage;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingName;
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
+ (id)keyPathsForValuesAffectingLeaf;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (unsigned long long)_countOfNavigableItemsForRepresentedObject:(id)arg1;
+ (id)_navigableItemsForRepresentedObject:(id)arg1;
+ (id)keyPathsForValuesAffectingConflictStateForUpdateOrMerge;
+ (id)keyPathsForValuesAffectingSourceControlCurrentRevision;
+ (id)keyPathsForValuesAffectingSourceControlLastModifiedDate;
+ (id)keyPathsForValuesAffectingSourceControlServerStatusFlag;
+ (id)keyPathsForValuesAffectingSourceControlServerStatus;
+ (id)keyPathsForValuesAffectingSourceControlLocalStatusFlag;
+ (id)keyPathsForValuesAffectingSourceControlLocalStatus;
+ (id)keyPathsForValuesAffectingProgressValue;
- (void).cxx_destruct;
- (id)cachedValueForProperty:(id)arg1;
- (void)cacheValue:(id)arg1 forProperty:(id)arg2;
- (unsigned long long)indexOfChildItemForIdentifier:(id)arg1;
- (id)identifierForChildItem:(id)arg1;
- (BOOL)_automatic_isMajorGroup;
- (BOOL)isMajorGroup;
- (BOOL)missingReferencedContentIsImportant;
- (BOOL)referencedContentExists;
- (id)contentDocumentLocation;
- (id)documentType;
- (id)fileReference;
- (id)groupIdentifier;
- (id)toolTip;
- (id)accessibleImageDescription;
- (id)image;
- (id)subtitle;
- (id)name;
- (void)_setRepresentedObject:(id)arg1;
- (void)_invalidateValueForKey:(id)arg1;
- (id)_cachedValueForProperty:(id)arg1;
- (void)_cacheValue:(id)arg1 forProperty:(id)arg2;
- (id)cachedValueForProperty:(id)arg1 withCreationBlock:(CDUnknownBlockType)arg2;
- (id)cachedPropertyValues;
- (id)_cachedPropertyValues;
- (void)_configurePropertyObservingForKey:(id)arg1;
- (BOOL)_alwaysBypassFilter;
- (BOOL)isLeaf;
- (id)childRepresentedObjects;
- (id)_childItemsKeyPath;
- (id)childItemsKeyPath;
- (void)willAccessChildItems;
- (void)invalidateChildItems;
- (void)_refreshChildItem:(id)arg1;
- (void)_setCoordinator:(id)arg1;
- (void)primitiveInvalidate;
- (void)_removeFromNavigableItemByRepresentedObjectMap;
- (void)_registerInNavigableItemByRepresentedObjectMap;
- (BOOL)representedObjectSupportsVariableConformanceString;
- (id)initWithRepresentedObject:(id)arg1;
- (id)sourceControlSourceTreeName;
- (unsigned long long)conflictStateForUpdateOrMerge;
- (id)sourceControlCurrentRevision;
- (id)sourceControlLastModifiedDate;
- (id)sourceControlServerStatus;
- (int)sourceControlServerStatusFlag;
- (id)sourceControlLocalStatus;
- (int)sourceControlLocalStatusFlag;
- (long long)progressValue;

// Remaining properties
@property(retain) id <IDEKeyDrivenNavigableItemRepresentedObject> representedObject; // @dynamic representedObject;

@end

