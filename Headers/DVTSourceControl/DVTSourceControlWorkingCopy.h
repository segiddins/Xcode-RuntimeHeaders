//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTSourceControl/DVTSourceControlDisplayable-Protocol.h>
#import <DVTSourceControl/DVTSourceControlIdentifiable-Protocol.h>
#import <DVTSourceControl/NSSecureCoding-Protocol.h>

@class DVTSourceControlBranchAndTagLocations, DVTSourceControlRemoteRepository, DVTSourceControlRepository, DVTSourceControlRevision, DVTSourceControlRevisionLocation, NSDate, NSMapTable, NSMutableSet, NSSet, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface DVTSourceControlWorkingCopy : NSObject <DVTSourceControlIdentifiable, NSSecureCoding, DVTSourceControlDisplayable>
{
    NSMutableSet *_cachedRemoteRepositories;
    NSDate *_cachedStatusUpdateDate;
    NSMapTable *_cachedLocalStatus;
    NSMapTable *_cachedRemoteStatus;
    NSObject<OS_dispatch_queue> *_cachedStatusChangeQueue;
    NSObject<OS_dispatch_queue> *_pathsStatusChangeQueue;
    BOOL _needsUpgrade;
    NSString *__id;
    NSURL *_fileURL;
    DVTSourceControlRepository *_repository;
    DVTSourceControlBranchAndTagLocations *_branchAndTagLocations;
    unsigned long long _state;
    DVTSourceControlRevision *_cachedBaseRevision;
    DVTSourceControlRevisionLocation *_cachedCurrentLocation;
    DVTSourceControlRemoteRepository *_primaryRemoteRepository;
}

+ (id)defaultImage;
+ (BOOL)supportsSecureCoding;
+ (id)scanForWorkingCopiesInFolderPaths:(id)arg1 traversingUp:(BOOL)arg2 usingSourceControlSystems:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
@property(readonly) DVTSourceControlRemoteRepository *primaryRemoteRepository; // @synthesize primaryRemoteRepository=_primaryRemoteRepository;
@property(retain) DVTSourceControlRevisionLocation *cachedCurrentLocation; // @synthesize cachedCurrentLocation=_cachedCurrentLocation;
@property(retain) DVTSourceControlRevision *cachedBaseRevision; // @synthesize cachedBaseRevision=_cachedBaseRevision;
@property BOOL needsUpgrade; // @synthesize needsUpgrade=_needsUpgrade;
@property unsigned long long state; // @synthesize state=_state;
@property(retain) DVTSourceControlBranchAndTagLocations *branchAndTagLocations; // @synthesize branchAndTagLocations=_branchAndTagLocations;
@property(retain) DVTSourceControlRepository *repository; // @synthesize repository=_repository;
@property(retain) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(copy) NSString *_id; // @synthesize _id=__id;
- (void).cxx_destruct;
- (id)upgradeWithProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)baseRevisionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)switchLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)currentLocationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)historyFromRevision:(id)arg1 toRevision:(id)arg2 inclusionType:(unsigned long long)arg3 maximumLogItems:(long long)arg4 searchString:(id)arg5 searchType:(unsigned long long)arg6 includeFilePaths:(BOOL)arg7 incrementalLogBlock:(CDUnknownBlockType)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (id)updateWorkingCopyFromRepository:(id)arg1 location:(id)arg2 pathsToUpdate:(id)arg3 progressBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)fastUpdateWorkingCopyFromRepository:(id)arg1 location:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)forceUpdateWorkingCopyFromRepository:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)mergeBranch:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)commitDetails:(id)arg1 incrementalLogBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)historyOfFileWithNameStatus:(id)arg1 fromRevisionLocation:(id)arg2 maxLogItems:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)historyOfFile:(id)arg1 incrementalLogBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)blameFile:(id)arg1 revision:(id)arg2 ignoreWhitespace:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)blameFile:(id)arg1 revision:(id)arg2 fromLocation:(id)arg3 ignoreWhitespace:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)commitDetailsWithParents:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)blameFile:(id)arg1 fromRevisionLocation:(id)arg2 ignoreWhitespace:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)exportFile:(id)arg1 fromRevision:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)exportFile:(id)arg1 fromRevision:(id)arg2 location:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)exportFile:(id)arg1 fromRevisionLocation:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)exportFileWithParent:(id)arg1 revision:(id)arg2 status:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)commitFiles:(id)arg1 message:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)markAsResolvedFiles:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)discardAllChangesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)discardChangesInFiles:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)createDirectory:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)moveFiles:(id)arg1 toFilePaths:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)copyFiles:(id)arg1 toFilePaths:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)removeFiles:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)addFiles:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly) NSSet *cachedPathsWithRemoteStatus;
@property(readonly) NSSet *cachedPathsWithLocalStatus;
@property(readonly) NSSet *cachedPathsWithStatus;
- (unsigned long long)cachedSourceControlRemoteStatusForFile:(id)arg1;
- (unsigned long long)cachedSourceControlLocalStatusForFile:(id)arg1;
@property(readonly) NSDate *cachedStatusLastUpdatedDate;
- (id)filesAndStatusWithRemoteStatus:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)updateRepositoryIdentifierWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *displayName;
@property(readonly, copy) NSString *description;
- (id)initWithUpgradableFileURL:(id)arg1 repository:(id)arg2;
- (id)initWithFileURL:(id)arg1 repository:(id)arg2 locationInRepository:(id)arg3 branchAndTagLocations:(id)arg4;
- (id)initWithFileURL:(id)arg1 repository:(id)arg2 locationInRepository:(id)arg3;
- (id)initWithFileURL:(id)arg1 unidentifiableRepository:(id)arg2;
- (id)initWithFileURL:(id)arg1 repository:(id)arg2;
- (id)_initWithFileURL:(id)arg1 repository:(id)arg2 enforceRepositoryIdentifier:(BOOL)arg3;
- (id)_init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)__id;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
