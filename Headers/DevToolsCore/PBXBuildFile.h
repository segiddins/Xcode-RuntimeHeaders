//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXProjectItem.h>

#import <DevToolsCore/PBXPlatformFilterable-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString, PBXBuildPhase, PBXProductDependency, PBXReference, XCBuildInfo;
@protocol DVTMacroExpansion;

@interface PBXBuildFile : PBXProjectItem <PBXPlatformFilterable>
{
    PBXBuildPhase *_buildPhase;
    PBXReference *_fileRef;
    XCBuildInfo *_buildInfo;
    BOOL _hasBuildPhase;
    BOOL _hasOverridingCompilerArgs;
    unsigned int _commonAttrs;
    NSSet *_otherAttrs;
    NSArray<DVTMacroExpansion> *_addlCompilerArgs;
    NSSet *_assetTags;
    NSDictionary *_unknownSettings;
    NSSet *_platformFilters;
    PBXProductDependency *_productReference;
}

+ (void)batchSetAdditionalCompilerArguments:(id)arg1 forBuildFiles:(id)arg2;
+ (id)archiveNameForKey:(id)arg1;
+ (id)archivableWeakRelationshipsForPListArchiver:(id)arg1;
+ (id)archivableRelationships;
+ (id)archivableAttributes;
+ (id)buildFileWithReference:(id)arg1;
@property(readonly) PBXProductDependency *productReference; // @synthesize productReference=_productReference;
- (void).cxx_destruct;
- (BOOL)archiveInPlistOnSingleLine;
- (id)gidCommentForArchive;
- (id)buildFileForAbsolutePath:(id)arg1;
- (id)targetBuildContext;
- (id)displayName;
- (id)preprocessingInfoForIndexing;
- (id)buildInfo;
- (void)setStringValueForPrimaryAttribute:(id)arg1;
- (id)stringValueForPrimaryAttribute;
- (id)primaryAttribute;
- (long long)compareType:(id)arg1;
- (long long)compareName:(id)arg1;
- (long long)compareFullPath:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)buildContext;
- (void)setAssetTags:(id)arg1;
- (id)assetTags;
- (long long)headerVisibility;
- (void)setOverridingAdditionalCompilerArguments:(id)arg1;
- (id)overridingAdditionalCompilerArguments;
- (void)_setAdditionalCompilerArguments:(id)arg1 isBatch:(BOOL)arg2;
- (void)setAdditionalCompilerArguments:(id)arg1;
@property(readonly) NSString *additionalCompilerArgumentsAsString;
- (id)additionalCompilerArguments;
- (void)setBoolValue:(BOOL)arg1 ofAttributeNamed:(id)arg2;
- (BOOL)boolValueOfAttributeNamed:(id)arg1;
- (id)attributes;
- (BOOL)shouldArchivePlatformFilter;
- (void)setPlatformFilter:(id)arg1;
- (id)_platformFilter;
- (BOOL)shouldArchiveFilter;
- (void)setFilter:(id)arg1;
- (id)_filter;
@property(copy) NSSet *platformFilters;
- (void)makeSettingsMatchBuildFile:(id)arg1;
- (void)_setSettings:(id)arg1;
- (void)_addAssetTagsToProjectKnownTags;
- (BOOL)shouldArchiveSettings;
- (id)_settings;
- (void)_upgradeAfterAwakingFromUnarchiver:(id)arg1;
- (void)_setBooleanValue:(BOOL)arg1 ofAttributeNamed:(id)arg2;
- (BOOL)_booleanValueOfAttributeNamed:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)willChange;
- (id)container;
- (id)target;
- (void)_setBuildPhase:(id)arg1;
- (id)buildPhase;
- (id)name;
- (void)_unsetFileReference;
@property(readonly) PBXReference *fileReference;
- (id)innerDescription;
- (id)initWithProductReference:(id)arg1;
- (id)initWithReference:(id)arg1;

@end

