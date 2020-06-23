//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEArchivedContent.h>

#import <IDEFoundation/IDEDistributableApplication-Protocol.h>

@class DVTFilePath, DVTPlatform, NSArray, NSString;

@interface IDEArchivedApplication : IDEArchivedContent <IDEDistributableApplication>
{
}

+ (id)keyPathsForValuesAffectingIconPath;
+ (id)keyPathsForValuesAffectingApplicationPath;
+ (id)archivedContentPathPlistKey;
+ (id)archivedContentPropertiesPlistKey;
+ (BOOL)fillInfoDictionary:(id)arg1 forContentAtPath:(id)arg2 inArchiveProductsDirectory:(id)arg3;
+ (id)soleArchivedContentRelativePathInDirectory:(id)arg1;
@property(readonly) DVTPlatform *platform;
- (id)platformName;
@property(readonly) DVTFilePath *applicationPath;
@property(readonly) NSArray *architectures;
@property(readonly) NSString *teamID;
@property(readonly) NSString *signingIdentity;

// Remaining properties
@property(readonly) NSString *bundleIdentifier;
@property(readonly) NSString *bundleName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTFilePath *path;
@property(readonly) Class superclass;

@end

