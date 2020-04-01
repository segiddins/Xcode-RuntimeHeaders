//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlottedAsset.h>

@class NSOrderedSet, NSSet;

@interface IBICModelSet : IBICSlottedAsset
{
}

+ (id)contentReferenceTypeName;
+ (id)importPriority;
+ (id)classNameComponents;
+ (id)defaultName;
+ (id)catalogItemFileExtension;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(BOOL)arg2;
+ (Class)assetRepClass;
+ (id)createDefaultInstancesForUnitTesting;
+ (id)pathForResourceNamed:(id)arg1 ofType:(id)arg2;
+ (id)bundleForTestResources;
- (CDStruct_550fdc95)taggingSupport;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromChildEntry:(id)arg2 toChild:(id)arg3 results:(id)arg4;
- (id)initializeManifestArchivist;
@property(readonly, nonatomic) NSOrderedSet *intrinsicallyOrderedChildren;
@property(readonly, nonatomic) NSSet *children;
- (id)assetRepForStructuredIdentifier:(id)arg1;
- (id)childForIdentifier:(id)arg1;
- (id)assetRepForIdentifier:(id)arg1;
- (id)conflictFreeChildForSlot:(id)arg1;
- (id)assetRepMatchingVariant:(id)arg1 forPlatform:(id)arg2;
- (id)assetRepForSlot:(id)arg1;

@end

