//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBICBundleIconSet.h>

@class NSOrderedSet, NSSet;

@interface IBICAppIconSet : IBICBundleIconSet
{
}

+ (id)importPriority;
+ (id)contentReferenceTypeName;
+ (id)classNameComponents;
+ (id)catalogItemFileExtension;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(BOOL)arg2;
+ (id)defaultName;
+ (Class)assetRepClass;
+ (id)createInstanceNamed:(id)arg1 forIdioms:(id)arg2 usingRenderer:(CDUnknownBlockType)arg3;
+ (id)createDefaultInstancesForUnitTesting;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromChildEntry:(id)arg2 toChild:(id)arg3 results:(id)arg4;
@property(readonly, nonatomic) NSOrderedSet *intrinsicallyOrderedChildren;
@property(readonly, nonatomic) NSSet *children;
- (id)assetRepForStructuredIdentifier:(id)arg1;
- (id)childForIdentifier:(id)arg1;
- (id)assetRepForIdentifier:(id)arg1;
- (id)conflictFreeChildForSlot:(id)arg1;
- (id)assetRepMatchingVariant:(id)arg1 forPlatform:(id)arg2;
- (id)slotForChild:(id)arg1;
- (id)assetRepForSlot:(id)arg1;
- (void)createChildrenForSlots:(id)arg1 usingRenderer:(CDUnknownBlockType)arg2;

@end

