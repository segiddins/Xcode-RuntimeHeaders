//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DSADocSet : NSObject
{
    id _docSetIvars;
}

+ (id)defaultDeveloperDocSetDirectory;
+ (void)cancelTokenSearchForDelegate:(id)arg1 contextInfo:(void *)arg2;
+ (BOOL)searchForTokens:(id)arg1 inDocSets:(id)arg2 withSortDescriptors:(id)arg3 delegate:(id)arg4 contextInfo:(void *)arg5;
+ (id)docSetForManagedObject:(id)arg1;
+ (int)defaultModelVersion;
+ (int)versionForModel:(id)arg1;
+ (id)modelPathForVersion:(int)arg1;
+ (id)modelForVersion:(int)arg1;
+ (id)_URLForModelInBundle:(struct __CFBundle *)arg1 withLocalization:(id)arg2;
+ (id)_URLForStoreInBundle:(struct __CFBundle *)arg1 withLocalization:(id)arg2;
+ (id)_docSetForCoordinator:(id)arg1;
+ (void)_setDocSet:(id)arg1 forCoordinator:(id)arg2;
- (id)nodeForURL:(id)arg1;
- (void)_setupNodesByPath;
- (id)availabilityArchitectures;
- (id)apiLanguages;
- (id)_apiLanguageMOs;
- (id)releaseNoteInformation;
- (id)nodesWithDocumentType:(unsigned long long)arg1;
- (id)nodes;
- (id)nodeWithUUID:(id)arg1;
- (id)nodeWithID:(long long)arg1;
- (void)_loadNodeList;
- (id)sharedBackgroundQueue;
- (id)sharedAPIIndex;
- (id)apiIndexForUpdating:(BOOL)arg1;
- (id)fullTextIndexForUpdating:(BOOL)arg1;
- (id)_indexNamed:(id)arg1 forUpdating:(BOOL)arg2;
- (id)textIndexURL;
- (id)indexDirURL;
- (id)apiIndexURL;
- (id)indexURL;
- (double)offsetIntervalForUpdateCheck;
- (id)updateDownloadURL;
- (id)updateInfoDocSet;
- (id)updateInfoURL;
- (id)dvdRootPath;
@property(readonly) BOOL requiresUpdateForContent;
- (id)certificateIssuer;
- (id)certificateSigner;
- (id)fallbackURL;
- (id)documentsURL;
- (id)docSetURL;
- (CDStruct_6df46f26)maximumSupportedXcodeVersion;
- (CDStruct_6df46f26)minimumSupportedXcodeVersion;
- (CDStruct_6df46f26)platformVersion;
- (id)platformFamily;
- (CDStruct_6df46f26)configurationVersion;
- (long long)compare:(id)arg1;
- (CDStruct_6df46f26)version;
- (id)identifier;
- (id)localizedName;
- (id)feedURL;
- (id)localizedFeedName;
@property(readonly) NSString *publisherIdentifier;
@property(readonly) NSString *localizedPublisherName;
@property(readonly) NSString *localizedDescription;
- (BOOL)isLegacyPackage;
- (id)nodeAtNamedPath:(id)arg1;
- (id)rootNode;
- (id)tokenFileURLs;
- (id)localization;
- (id)_objectForInfoKey:(id)arg1;
- (void)_resetBundle;
- (id)bundle;
- (void)_dump;
- (id)_dumpStr;
- (id)description;
- (void)dealloc;
- (void)invalidate;
- (id)initWithDocRootDirectory:(id)arg1 withXML:(id)arg2;
- (id)initWithDocRootDirectory:(id)arg1;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)initWithBundle:(struct __CFBundle *)arg1 withPersistentStoreURL:(id)arg2 modelVersion:(int)arg3 forLocalization:(id)arg4 error:(id *)arg5;
- (id)initWithDocRootDirectory:(id)arg1 forLocalization:(id)arg2 error:(id *)arg3;
- (id)initWithBundle:(struct __CFBundle *)arg1 withXML:(id)arg2 withPersistentStoreCoordinator:(id)arg3 modelVersion:(int)arg4 forLocalization:(id)arg5 error:(id *)arg6;
- (float)maximumRelevanceForLastTextSearch;
- (void)cancelTokenSearchForDelegate:(id)arg1 contextInfo:(void *)arg2;
- (void)cancelTextSearchForDelegate:(id)arg1 contextInfo:(void *)arg2;
- (BOOL)searchForTokens:(id)arg1 inNodes:(id)arg2 delegate:(id)arg3 contextInfo:(void *)arg4;
- (BOOL)searchForText:(id)arg1 inNodes:(id)arg2 withMatchType:(unsigned long long)arg3 delegate:(id)arg4 contextInfo:(void *)arg5;
- (BOOL)searchForText:(id)arg1 inNodes:(id)arg2 delegate:(id)arg3 contextInfo:(void *)arg4;
- (id)searchForTokens:(id)arg1 inNodes:(id)arg2;
- (BOOL)containsTokens:(id)arg1;
- (id)searchForText:(id)arg1 inNodes:(id)arg2 withMatchType:(unsigned long long)arg3;
- (id)searchForText:(id)arg1 inNodes:(id)arg2;
- (int)modelVersion;
- (BOOL)saveChanges:(id *)arg1;
- (BOOL)migrateDataToURL:(id)arg1 copyModel:(BOOL)arg2 error:(id *)arg3;
- (id)persistentStoreURL;
- (id)managedObjectContext;
- (id)persistentStoreCoordinator;
- (id)managedObjectModel;
- (id)urlForNode:(id)arg1 localizingPath:(BOOL)arg2;
- (id)_urlForNode:(id)arg1 localizingPath:(BOOL)arg2 legacy:(BOOL)arg3;
- (id)localizedPathsForNode:(id)arg1 inBundle:(id)arg2;
- (id)_localizedPathForNode:(id)arg1 inBundle:(id)arg2 forLocalization:(id)arg3;
- (id)_localizedPathInBundle:(id)arg1 forFile:(id)arg2 forLocalization:(id)arg3;
- (id)urlForToken:(id)arg1;
- (id)urlForNode:(id)arg1;
- (id)webRootURL;
- (id)localRootURL;
- (id)documentWithID:(long long)arg1;
- (id)documents;
- (unsigned long long)documentCount;
- (float)packageVersion;
- (id)packageUID;
- (id)rootCategory;

@end

