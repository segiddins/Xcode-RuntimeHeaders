//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBICAbstractCatalogItem.h>

#import <IBFoundation/IBICCompilableSticker-Protocol.h>

@class IBICManifestArchivist, NSString;

@interface IBICStickerPack : IBICAbstractCatalogItem <IBICCompilableSticker>
{
    IBICManifestArchivist *_manifestArchivist;
    long long _gridSize;
}

+ (id)importPriority;
+ (BOOL)fileNameIsIdentifier;
+ (id)displayNameForChildren;
+ (Class)requiredChildrenClass;
+ (id)contentReferenceTypeName;
+ (id)classNameComponents;
+ (id)catalogItemFileExtension;
+ (id)defaultEmptyInstanceWithName:(id)arg1;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(BOOL)arg2;
+ (id)createInstanceNamed:(id)arg1;
+ (id)createDefaultInstancesForUnitTesting;
- (void).cxx_destruct;
@property(nonatomic) long long gridSize; // @synthesize gridSize=_gridSize;
- (BOOL)isEqualForUnitTests:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)manifestArchivist:(id)arg1 populateManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromManifest:(id)arg2 manifestFileData:(id)arg3;
- (Class)manifestArchivist:(id)arg1 childClassForChildEntry:(id)arg2 results:(id)arg3;
- (BOOL)manifestArchivist:(id)arg1 validateManifest:(id)arg2 results:(id)arg3;
- (BOOL)manifestArchivist:(id)arg1 childHasDataToRecordInManifest:(id)arg2;
- (id)initializeManifestArchivist;
- (long long)displayPositionForProposedChild:(id)arg1 temporarilyValidatingFileName:(BOOL)arg2;
- (id)classesForImportingLooseFilesInImportOrder;
- (id)destinationContainerForItemsInDropIncludingReceiver:(id)arg1;
- (id)manifestContent;
- (id)manifestFileName;
- (void)replaceChildrenFromFileSystemSnapshot:(id)arg1 results:(id)arg2;
- (CDStruct_550fdc95)taggingSupport;
- (long long)childOrdering;
- (id)effectiveModificationDateForCARCompiler;
- (id)displayName;
- (id)defaultUnqualifiedRuntimeName;
- (id)init;
- (BOOL)compileToPath:(id)arg1 options:(id)arg2 results:(id)arg3;
- (id)effectiveBundleIDWithPrefix:(id)arg1;
- (id)compiledStickerpackFileName;
- (BOOL)compileInfoPlist:(id)arg1 toPath:(id)arg2 options:(id)arg3 results:(id)arg4;
- (BOOL)compileStringFilesToPath:(id)arg1 options:(id)arg2 results:(id)arg3;
- (BOOL)compileChildrenToPath:(id)arg1 options:(id)arg2 results:(id)arg3;
- (void)createSampleStickersWithBaseName:(id)arg1 size:(struct CGSize)arg2 count:(long long)arg3 usingRenderer:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

