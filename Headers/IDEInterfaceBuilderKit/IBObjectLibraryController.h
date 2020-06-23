//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDELibraryController.h>

#import <IDEInterfaceBuilderKit/IBObjectContainerArchivingDelegate-Protocol.h>

@class DVTNotificationToken, DVTObservingToken, DVTPerformanceMetric, IBMutableIdentityDictionary, IBObjectContainer, IBObjectLibraryDetailView, IBTargetRuntime, NSString;

@interface IBObjectLibraryController : IDELibraryController <IBObjectContainerArchivingDelegate>
{
    DVTNotificationToken *_documentDidAddDraggedObjectsToken;
    DVTObservingToken *_documentTargetRuntimeObservationToken;
    IBMutableIdentityDictionary *_assetProviders;
    IBObjectContainer *_metadataContainer;
    IBObjectLibraryDetailView *_detailView;
    IBTargetRuntime *_targetRuntime;
    Class _documentClass;
    NSString *_currentDragMarker;
    DVTPerformanceMetric *_objectLibraryLoadingPerformanceMetric;
}

- (void).cxx_destruct;
@property(retain) DVTPerformanceMetric *objectLibraryLoadingPerformanceMetric; // @synthesize objectLibraryLoadingPerformanceMetric=_objectLibraryLoadingPerformanceMetric;
@property(copy) NSString *currentDragMarker; // @synthesize currentDragMarker=_currentDragMarker;
@property(retain, nonatomic) Class documentClass; // @synthesize documentClass=_documentClass;
@property(retain, nonatomic) IBTargetRuntime *targetRuntime; // @synthesize targetRuntime=_targetRuntime;
- (void)libraryDidLoad;
- (void)activeEditorDidChange:(id)arg1;
- (id)inlineDetailViewForAssets:(id)arg1;
- (void)loadAvailableLibraryAssetProviders;
- (BOOL)depositAssets:(id)arg1;
- (void)documentDidAddDraggedObjects:(id)arg1;
- (id)readableAssetPasteboardTypes;
- (void)populatePasteboard:(id)arg1 withAssets:(id)arg2 defaultDraggedImageState:(id *)arg3 identifierMapTable:(id *)arg4;
- (id)lastActiveDocumentEditor;
- (id)viewBackedDragImageOfAsset:(id)arg1;
- (id)bitmapDragImageOfAsset:(id)arg1;
- (void)populatePasteboard:(id)arg1 withAssets:(id)arg2;
- (void)populatePasteboard:(id)arg1 withAssets:(id)arg2 identifierMapTable:(id *)arg3;
- (void)prepareDocumentlessMetadataDuring:(CDUnknownBlockType)arg1;
- (void)putObjectContainer:(id)arg1 onPasteboard:(id)arg2;
- (void)objectContainerClass:(Class)arg1 didCreateObjectContainerWithCoder:(id)arg2;
- (void)objectContainerClass:(Class)arg1 willCreateObjectContainerWithCoder:(id)arg2;
- (void)objectContainer:(id)arg1 didCreateDataRepresentationWithCoder:(id)arg2 context:(id)arg3;
- (void)objectContainer:(id)arg1 willCreateDataRepresentationWithCoder:(id)arg2 context:(id)arg3;
- (id)searchStringsForAsset:(id)arg1;
- (void)viewDidChangeEffectiveAppearance;
- (CDUnknownBlockType)initialAssetComparator;
- (id)loadAssetsFromAssetProvider:(id)arg1;
- (void)prepareObjectLibraryAssetForAssetCreation:(id)arg1 fromProvider:(id)arg2;
- (id)createLibraryAssetForObjectAsset:(id)arg1 inNamespace:(id)arg2;
- (id)fullDescriptionAttributes;
- (id)fullDescriptionParagraphStyle;
- (id)_createImageFromObjectAsset:(id)arg1;
- (id)objectLibraryAssetsFromNibContent:(id)arg1 fromProvider:(id)arg2;
- (BOOL)shouldIncludeObjectLibraryAsset:(id)arg1 fromProvider:(id)arg2;
- (id)idiom;
- (id)platform;
- (id)allObjectLibraryAssetProviderExtensions;
- (id)assetProviderForExtension:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

