//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEArchivedContent.h>

#import <IDEFoundation/IDEDistributableInAppContent-Protocol.h>

@class DVTFilePath, NSString;

@interface IDEArchivedInAppContent : IDEArchivedContent <IDEDistributableInAppContent>
{
}

+ (id)keyPathsForValuesAffectingInAppContentPath;
+ (id)archivedContentPathPlistKey;
+ (id)archivedContentPropertiesPlistKey;
+ (BOOL)fillInfoDictionary:(id)arg1 forContentAtPath:(id)arg2 inArchiveProductsDirectory:(id)arg3;
+ (id)soleArchivedContentRelativePathInDirectory:(id)arg1;
- (id)teamIdentifier;
@property(readonly) DVTFilePath *inAppContentPath;

// Remaining properties
@property(readonly) NSString *bundleIdentifier;
@property(readonly) NSString *bundleName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTFilePath *path;
@property(readonly) Class superclass;

@end

