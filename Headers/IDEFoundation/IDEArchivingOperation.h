//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTOperationGroup.h>

@class DVTFilePath, DVTPlatform, DVTToolchain, IDEArchivePathsSnapshot, IDEWorkspaceArena, NSString;

@interface IDEArchivingOperation : DVTOperationGroup
{
    NSString *_archiveName;
    NSString *_schemeName;
    DVTPlatform *_platform;
    DVTFilePath *_archiveBuildFolder;
    DVTFilePath *_dstrootPath;
    DVTFilePath *_symrootPath;
    DVTFilePath *_objrootPath;
    DVTFilePath *_sharedPrecompsPath;
    IDEArchivePathsSnapshot *_archiveSnapshot;
    DVTToolchain *_toolchain;
    BOOL _revealCreatedArchive;
    IDEWorkspaceArena *_workspaceArena;
}

+ (id)overridingMacrosForArchiveBuildWithSchemeName:(id)arg1 workspaceArena:(id)arg2;
+ (void)_calculateArchiveBuildFolder:(id *)arg1 dstrootPath:(id *)arg2 symrootPath:(id *)arg3 objrootPath:(id *)arg4 sharedPrecompsPath:(id *)arg5 givenSchemeName:(id)arg6 workspaceArena:(id)arg7;
+ (BOOL)shouldEnableUnsafeIncrementalArchiveBuild;
@property(retain) IDEWorkspaceArena *workspaceArena; // @synthesize workspaceArena=_workspaceArena;
@property(readonly) IDEArchivePathsSnapshot *archiveSnapshot; // @synthesize archiveSnapshot=_archiveSnapshot;
- (void).cxx_destruct;
- (void)main;
- (id)preparatoryOperationForArchiveBuild;
- (id)initWithArchiveName:(id)arg1 schemeName:(id)arg2 workspaceArena:(id)arg3 platform:(id)arg4 toolchain:(id)arg5 revealCreatedArchive:(BOOL)arg6;

@end

