//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/PBXGroup.h>

@class PBXFileReference, PBXFileType;

@interface XCVersionGroup : PBXGroup
{
    PBXFileReference *_currentVersion;
    PBXFileType *_versionedFileType;
    BOOL _currentVersionSaveIsPending;
}

+ (id)archivableRelationships;
+ (id)archivableAttributes;
+ (id)versionGroupByWrappingReference:(id)arg1 usingPathExtension:(id)arg2;
+ (void)_replaceBuildFilesForReference:(id)arg1 withBuildFilesForReference:(id)arg2;
- (void).cxx_destruct;
- (void)willMoveItem:(id)arg1 toGroup:(id)arg2;
- (void)setGroup:(id)arg1;
- (void)didRemoveItem:(id)arg1;
- (void)didAddItem:(id)arg1;
- (void)willAddItem:(id)arg1;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (BOOL)isVersionGroup;
- (BOOL)makeVersionWithName:(id)arg1;
- (BOOL)makeVersionWithName:(id)arg1 basedOnReference:(id)arg2;
- (id)versionForName:(id)arg1;
- (BOOL)ensureHasDefaultReference;
- (id)defaultReference;
- (void)setVersionGroupType:(id)arg1;
- (id)versionGroupType;
- (void)setVersionedFileType:(id)arg1;
- (id)versionedFileType;
- (id)fileType;
- (BOOL)saveCurrentVersion;
- (void)setCurrentVersion:(id)arg1;
- (id)currentVersion;
- (BOOL)allowsSubgroups;
- (void)configureFromOnDiskContents;
- (id)initWithName:(id)arg1 versionedFileType:(id)arg2 path:(id)arg3 sourceTree:(id)arg4;

@end

