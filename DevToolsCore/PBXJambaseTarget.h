//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXTarget.h>

@interface PBXJambaseTarget : PBXTarget
{
}

+ (id)jambasePlatformFilePath;
+ (id)jambasePath;
+ (id)buildSystemDefaultBuildSettings_asPropertyValues;
+ (id)buildSystemDefaultBuildSettings;
- (BOOL)buildSettingsDictionaryShouldExtractQuotedBuildSettingsWhenSplitting:(id)arg1;
- (id)commandsForCleaningInBuildContext:(id)arg1;
- (BOOL)shouldWriteAuxiliaryFilesForBuildAction:(id)arg1;
- (Class)dependencyGraphSnapshotClass;

@end

