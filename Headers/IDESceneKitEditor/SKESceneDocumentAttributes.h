//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTNotificationToken, NSNumber, NSString, SKESceneDocument, SKESceneImportOptions;

@interface SKESceneDocumentAttributes : NSObject
{
    NSString *_sourceDocumentAbsolutePath;
    BOOL _keepsInSync;
    BOOL _shouldSyncGeometries;
    BOOL _shouldSyncTransforms;
    BOOL _shouldSyncHierarchies;
    BOOL _shouldSyncCameraSettings;
    BOOL _shouldSyncAnimations;
    BOOL _shouldSyncLights;
    unsigned long long _materialSyncPolicy;
    NSNumber *_lastSyncTimestamp;
    unsigned long long _infoTimeStamp;
    unsigned long long _pendingUpdateTimeStamp;
    unsigned long long _lastUpdateTimeStamp;
    long long _polygonCount;
    long long _nodeCount;
    long long _geometryCount;
    long long _materialCount;
    long long _lightCount;
    long long _cameraCount;
    long long _particleSystemCount;
    DVTNotificationToken *_documentChangedToken;
    SKESceneImportOptions *_importOptions;
    struct __CFDictionary *_srcToDst;
    struct __CFDictionary *_dstToSrc;
    BOOL _needsUpdate;
    SKESceneDocument *_document;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SKESceneDocument *document; // @synthesize document=_document;
@property(nonatomic) unsigned long long materialSyncPolicy; // @synthesize materialSyncPolicy=_materialSyncPolicy;
@property(nonatomic) BOOL shouldSyncLights; // @synthesize shouldSyncLights=_shouldSyncLights;
@property(nonatomic) BOOL shouldSyncCameraSettings; // @synthesize shouldSyncCameraSettings=_shouldSyncCameraSettings;
@property(nonatomic) BOOL shouldSyncHierarchies; // @synthesize shouldSyncHierarchies=_shouldSyncHierarchies;
@property(nonatomic) BOOL shouldSyncAnimations; // @synthesize shouldSyncAnimations=_shouldSyncAnimations;
@property(nonatomic) BOOL shouldSyncTransforms; // @synthesize shouldSyncTransforms=_shouldSyncTransforms;
@property(nonatomic) BOOL shouldSyncGeometries; // @synthesize shouldSyncGeometries=_shouldSyncGeometries;
@property(nonatomic) BOOL keepsInSync; // @synthesize keepsInSync=_keepsInSync;
@property(readonly) SKESceneImportOptions *importOptions; // @synthesize importOptions=_importOptions;
@property(retain, nonatomic) NSString *sourceDocumentAbsolutePath; // @synthesize sourceDocumentAbsolutePath=_sourceDocumentAbsolutePath;
- (void)resetWithSourceDocument;
- (void)synchronize;
- (void)collectOrphanNodes:(id)arg1;
- (void)associateNodeTree:(id)arg1 withNodeTree:(id)arg2 speculativeRoot:(id)arg3;
- (id)_findAssociatedNode:(id)arg1 inSubtree:(id)arg2 ignoring:(id)arg3;
- (void)_syncNode:(id)arg1 with:(id)arg2;
- (void)_syncMaterials:(id)arg1 with:(id)arg2;
- (id)transposeContents:(id)arg1 withCatalogPath:(id)arg2;
- (id)transposePath:(id)arg1 withCatalogPath:(id)arg2;
- (id)_srcAssociatedNode:(id)arg1;
- (BOOL)_dstHasAssociatedNode:(id)arg1;
- (void)_associate:(id)arg1 with:(id)arg2;
- (void)startDocumentObservingIfNeeded;
- (void)synchronizeWithSourceDocument;
- (void)synchronizeWithSourceDocumentIfNeeded;
- (id)sourceDocumentTimestamp;
- (id)sourceDocumentRelativePath;
- (id)copySerializedAttributes;
- (BOOL)hasSource;
- (id)particleSystemCountInfo;
- (id)cameraCountInfo;
- (id)lightCountInfo;
- (id)materialCountInfo;
- (id)geometryCountInfo;
- (id)nodeCountInfo;
- (id)polygonCountInfo;
- (void)delayedUpdateDocumentInfo;
- (void)_delayedUpdateDocumentInfo;
- (void)updateDocumentInfo;
- (void)invalidateDocumentInfo;
- (void)dealloc;
- (id)initWithSerializedAttributes:(id)arg1 document:(id)arg2;

@end

