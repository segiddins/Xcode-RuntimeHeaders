//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IDESpriteKitParticleEditor/DVTInvalidation-Protocol.h>
#import <IDESpriteKitParticleEditor/GTFFileSystemEventStreamDelegate-Protocol.h>
#import <IDESpriteKitParticleEditor/IDEMediaLibraryDelegate-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, GTFFileSystemEventStream, IDEMediaResourceVariantContext, IDEWorkspace, NSArray, NSMutableDictionary, NSString, NSURL, SKWorkspace, SKWorkspaceBundle;
@protocol DVTInvalidation;

@interface SKResourceManager : NSObject <DVTInvalidation, IDEMediaLibraryDelegate, GTFFileSystemEventStreamDelegate>
{
    BOOL _isMediaCacheInitialized;
    DVTObservingToken *_workspaceFinishedKVOToken;
    id <DVTInvalidation> _variantContextKVOToken;
    IDEMediaResourceVariantContext *_variantContext;
    NSMutableDictionary *_scaleAdjustedImageCache;
    NSMutableDictionary *_fileBasedImageCache;
    NSMutableDictionary *_imageObservers;
    NSMutableDictionary *_soundObservers;
    NSMutableDictionary *_directoryCache;
    GTFFileSystemEventStream *_fsEventStream;
    BOOL _buildingCache;
    BOOL _directoryCacheBuilt;
    SKWorkspaceBundle *_bundle;
    SKWorkspace *_workspace;
}

+ (id)soundMediaTypes;
+ (id)imageMediaTypes;
+ (id)resourceManagerForSKWorkspace:(id)arg1;
+ (void)initialize;
@property(getter=isDirectoryCacheBuilt) BOOL directoryCacheBuilt; // @synthesize directoryCacheBuilt=_directoryCacheBuilt;
@property(getter=isBuildingCache) BOOL buildingCache; // @synthesize buildingCache=_buildingCache;
@property(readonly, nonatomic) SKWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (void)mediaLibraryController:(id)arg1 populatePasteboard:(id)arg2 withMediaResourceVariantSets:(id)arg3;
@property(readonly, nonatomic) SKWorkspaceBundle *bundle; // @synthesize bundle=_bundle;
- (long long)scaleFactorForResource:(id)arg1;
- (id)scaleAdjustedImageNamed:(id)arg1;
- (id)soundResourceNamed:(id)arg1;
- (id)imageResourceNamed:(id)arg1;
- (id)resourceNamed:(id)arg1 ofMediaType:(id)arg2;
- (id)_searchDirectoryForResource:(id)arg1 withExtension:(id)arg2;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (struct NSObject *)registerSoundResourceObserver:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *currentSoundNames;
- (struct NSObject *)registerImageResourceObserver:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *currentImageNames;
- (void)_checkFilePathRequiresTextureCacheReload:(id)arg1;
- (void)fileSystemEventStream:(id)arg1 notedChangeAtPath:(id)arg2 scanRecursively:(BOOL)arg3;
- (void)_startBuildingDirectoryCache;
- (void)_ensureDirectoryCache;
- (id)_variantForMatching;
- (id)_defaultFoldingStrategy;
- (void)_notifyResourceObservers:(id)arg1 withAddedSet:(id)arg2 andRemovedSet:(id)arg3;
- (void)_updateMediaCachesWithAdded:(id)arg1 andRemoved:(id)arg2;
- (void)_startManagingMediaCache;
- (void)_ensureMediaCache;
- (void)startBuildingCache;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) IDEWorkspace *ideWorkspace;
- (void)primitiveInvalidate;
- (id)initWithSKWorkspace:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

