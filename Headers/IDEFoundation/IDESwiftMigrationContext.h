//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEMigrationContext.h>

@class NSMapTable;

@interface IDESwiftMigrationContext : IDEMigrationContext
{
    NSMapTable *_convertedFilePathForOriginalFilePathMapTable;
}

+ (Class)migrationTargetSublass;
- (void).cxx_destruct;
- (id)migrateFolderForMigrationTarget:(id)arg1 andScheme:(id)arg2;
- (id)migrationBuildFolderForScheme:(id)arg1;
- (id)convertedFilePathForOriginalFilePath:(id)arg1;
- (unsigned long long)numberOfConvertedFilePaths;
- (id)_convertedFilePathForOriginalFilePathMapTable;
- (void)_collectRemapFilesFromDir:(id)arg1 remapFiles:(id)arg2;
- (void)_convertRemapFiles:(id)arg1;
- (CDUnknownBlockType)setupBuild:(char *)arg1 forScheme:(id)arg2 migrationBuildOptions:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)selectDefaultTargets;

@end

