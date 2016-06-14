//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTObservingToken, DVTPerformanceMetric, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface DSMDocSetLoader : NSObject
{
    NSMutableArray *_loadedDocSets;
    NSMutableDictionary *_docSetGroups;
    NSMutableArray *_docSetRecords;
    NSMutableDictionary *m_sdkAndPlatformAdvertisedDocSets;
    NSMutableArray *_watchedDirectories;
    BOOL m_testingMode;
    NSMutableArray *_nonstandardDocSetPaths;
    CDUnknownBlockType _findAndLoadDocSetsInPathsBlock;
    NSMutableArray *_docSetIdentifiersInUpdateInstallationPhase;
    BOOL _hasPerformedInitialDocSetLoad;
    unsigned long long _docSetLoadingProgress;
    DVTPerformanceMetric *_docSetLoadingPerformanceMetric;
    DVTObservingToken *_checkAndInstallWatcher;
    BOOL _isLoadingDocSets;
    NSMutableArray *_mutableDocSetLoaderListeners;
    NSMutableArray *_mutableDocSetLocations;
    CDUnknownBlockType _docSetLoadingCompletionBlock;
    NSMutableArray *_mutableDocSetSubscriptionListeners;
    NSDictionary *_docSetRecordsByFamily;
}

+ (id)nodeForBookmark:(id)arg1 URL:(id *)arg2;
+ (id)dvtFilePathsFromPathStrings:(id)arg1;
+ (id)docSetPaths;
+ (id)docSetFilePathLocations;
+ (id)otherDocSetLocations;
+ (id)libraryDocSetLocations;
+ (id)sharedDocSetLoader;
@property unsigned long long docSetLoadingProgress; // @synthesize docSetLoadingProgress=_docSetLoadingProgress;
@property(copy) NSArray *docSetRecords; // @synthesize docSetRecords=_docSetRecords;
@property(copy) NSMutableArray *nonstandardDocSetPaths; // @synthesize nonstandardDocSetPaths=_nonstandardDocSetPaths;
@property BOOL testingMode; // @synthesize testingMode=m_testingMode;
- (void).cxx_destruct;
- (void)docSetUpdateEnteredInstallationPhase:(id)arg1;
- (void)docSetDidLoad:(id)arg1;
- (void)docSetDidUnload:(id)arg1;
- (void)docSetWillBeUnloadedOrUpdated:(id)arg1;
@property(readonly, copy) NSArray *recordsForEnabledDocSets;
- (void)loadDocSetsWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSArray *docSetLocations;
- (void)addDocSetLocation:(id)arg1;
- (id)docSetLoaderListeners;
- (void)removeDocSetLoaderListener:(id)arg1;
- (void)addDocSetLoaderListener:(id)arg1;
- (void)downloadableStatusChanged:(id)arg1;
- (void)docSetDownloadbleDidBeginInstall:(id)arg1;
- (void)docSetDownloadbleWillBeginInstall:(id)arg1;
- (id)xcodeHomePageURL;
- (id)xcodeContinuousIntegrationGuideNode;
- (id)xcodeSourceControlManagementNode;
- (id)gdbToLLDBTransitionGuideNode;
- (id)xcodeHomePageNode;
- (id)whatsNewInXcodeNode;
- (id)xcodeReleaseNotesNode;
- (id)xcodeUserGuideNode;
- (id)xcodeGuidesLandingPageNode;
- (BOOL)fileExistsAtPath:(id)arg1;
- (id)docSetWithXcodeReference;
- (id)docSetWithAppleCoreReference;
- (id)docSetWithPackageID:(id)arg1;
- (id)_appleDocSetWithPackageID:(id)arg1;
- (id)nodeForURL:(id)arg1 outDocSet:(id *)arg2;
- (void)resolveURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)newestDocSetRecordsByPlatformFamily:(id)arg1;
- (id)loadedDocSetMatchingBundleIdentifier:(id)arg1;
- (id)createDocSetRecordForDocSet:(id)arg1;
- (id)fileModificationDateForPath:(id)arg1;
- (id)docSetRecordForDocSet:(id)arg1;
- (id)docSetRecordForDocSetIdentifier:(id)arg1;
- (id)docSetRecordForDocSetAtPath:(id)arg1;
- (void)addDocSetRecord:(id)arg1;
- (void)removeDocSetRecordForDocSet:(id)arg1;
- (id)pathsOfDocSetsInFilePaths:(id)arg1;
- (BOOL)docSetIsValidForThisVersionOfXcode:(id)arg1;
- (CDStruct_aac1954a)runningXcodeVersion;
- (void)unloadAllDocSets;
- (void)removeDocSet:(id)arg1;
- (void)_registerAndConfigureFSEventStreamForDocSet:(id)arg1;
- (id)docSetsMatchingIdentifier:(id)arg1;
- (void)removeDocSets:(id)arg1;
- (void)tellManagerDocSetWasRemoved:(id)arg1;
- (void)tellManagerDocSetWillBeRemoved:(id)arg1;
- (void)tellManagerDocSetDidLoad:(id)arg1;
- (void)findAndLoadDocSetsInPaths:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)pruneOlderDocSets;
- (void)resetHasPerformedInitialDocSetLoad;
- (void)_loadDocSetsInFilePaths:(id)arg1;
- (id)watchFilePath:(id)arg1;
- (void)_pathChanged:(id)arg1;
- (void)_configureFSEventStreamForDocSet:(id)arg1;
- (void)processFileSystemEventStreamChangeAtPath:(id)arg1;
- (BOOL)_docSetModificationDateChanged:(id)arg1;
- (id)_docSetsRemovedFromPath:(id)arg1;
- (id)_docSetPathsInPath:(id)arg1;
- (BOOL)_pathIsADocSetBundle:(id)arg1;
- (id)loadDocSetAtPath:(id)arg1;
- (id)existingDocSetRecordForDocSetAtPath:(id)arg1;
- (BOOL)isDSAVersion:(CDStruct_aac1954a)arg1 newerThanDSAVersion:(CDStruct_aac1954a)arg2;
- (BOOL)isDSAVersionParseable:(CDStruct_aac1954a)arg1;
- (void)_registerDocSet:(id)arg1;
- (id)feedIdentifierForDocSet:(id)arg1;
@property(readonly, copy) NSArray *enabledDocSetRecords;
- (BOOL)_isDocSetWithIdentifierInUpdateInstallationPhase:(id)arg1;
- (void)dealloc;
- (id)init;

@end

