//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBICAbstractCatalogItem.h>

@class IBICManifestArchivist;

@interface IBICFolder : IBICAbstractCatalogItem
{
    IBICManifestArchivist *_manifestArchivist;
    BOOL _providesNamespace;
}

+ (BOOL)supportsCompression;
+ (id)contentReferenceTypeName;
+ (id)catalogItemFileExtension;
+ (Class)requiredChildrenClass;
+ (BOOL)fileNameIsIdentifier;
+ (id)classNameComponents;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(BOOL)arg2;
+ (id)createInstanceNamed:(id)arg1;
+ (id)createDefaultInstancesForUnitTesting;
- (void).cxx_destruct;
@property(nonatomic) BOOL providesNamespace; // @synthesize providesNamespace=_providesNamespace;
- (BOOL)isEqualForUnitTests:(id)arg1;
- (CDStruct_550fdc95)taggingSupport;
- (void)replaceChildrenFromFileSystemSnapshot:(id)arg1 results:(id)arg2;
- (id)imageSetWithName:(id)arg1;
- (id)imageSetWithFileName:(id)arg1;
- (id)folderForFileName:(id)arg1;
- (void)manifestArchivist:(id)arg1 populateManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromManifest:(id)arg2 manifestFileData:(id)arg3;
- (BOOL)manifestArchivist:(id)arg1 validateManifest:(id)arg2 results:(id)arg3;
- (id)initializeManifestArchivist;
- (id)runtimeNamespaceQualifier;
- (id)manifestContent;
- (id)manifestFileName;
- (BOOL)isolatesAndConsolidatesContainedContent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

