//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDESourceEditor/NSCopying-Protocol.h>
#import <IDESourceEditor/NSObject-Protocol.h>

@class DVTFilePath, IDEContainer, IDERefactoringBuildSettings, IDEWorkspace, NSArray, NSDictionary, NSMutableSet, NSString;
@protocol IDEIndexable;

@protocol IDEIndexable <NSObject, NSCopying>
- (IDERefactoringBuildSettings *)buildSettingsForMainFile:(DVTFilePath *)arg1 workspace:(IDEWorkspace *)arg2;
- (NSString *)localizedIndexableDescription;
- (void)languageOfMainFile:(DVTFilePath *)arg1 workspace:(IDEWorkspace *)arg2 completionBlock:(void (^)(DVTSourceCodeLanguage *))arg3;
- (BOOL)requiresMainThread;
- (BOOL)writeProductHeaders:(NSDictionary *)arg1 toFile:(DVTFilePath *)arg2 error:(id *)arg3;
- (void)productHeadersInWorkspace:(IDEWorkspace *)arg1 withCompletionBlock:(void (^)(NSDictionary *))arg2;
- (IDEContainer *)containerForIndexables:(NSMutableSet *)arg1 rootPaths:(NSMutableSet *)arg2;
- (NSArray *)indexableFiles;
- (NSString *)indexName;
- (NSString *)identifier;

@optional
@property(nonatomic) __weak id <IDEIndexable> proxy;
- (BOOL)isUnitTest;
- (NSString *)productType;
- (NSString *)productNameWithBuildSetting:(NSString *)arg1 workspace:(IDEWorkspace *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clearCachedBuildSettings;
- (NSDictionary *)settingsForFile:(DVTFilePath *)arg1;
- (void)settingsForFilesInWorkspace:(IDEWorkspace *)arg1 shouldWriteAuxiliaryFiles:(BOOL)arg2 withCompletionBlock:(void (^)(NSDictionary *))arg3;
@end
