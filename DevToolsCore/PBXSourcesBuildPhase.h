//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXBuildPhase.h>

@interface PBXSourcesBuildPhase : PBXBuildPhase
{
}

+ (id)allowedFileTypes;
+ (id)defaultName;
+ (id)identifier;
- (Class)dependencyGraphSnapshotClass;
- (id)primaryAttributeForBuildFile:(id)arg1;
- (void)removeBuildFile:(id)arg1;
- (BOOL)insertBuildFiles:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)phaseContainsNonJavaFiles;
- (BOOL)phaseContainsJavaFiles;
- (unsigned long long)countBuildFilesWithExtensionInSet:(id)arg1;
- (void)setDefaultAttributesForNewBuildFile:(id)arg1;

@end

