//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTAnnotationProvider.h>

#import <IDEInterfaceBuilderKit/DVTTextAnnotationDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/NSMenuDelegate-Protocol.h>

@class IBAnnotationDataCache, IBCancellationToken, IBIndexClassDescriber, IDEAnnotationContext, NSPopUpButtonCell, NSString;

@interface IBAnnotationProvider : DVTAnnotationProvider <DVTTextAnnotationDelegate, NSMenuDelegate>
{
    IDEAnnotationContext *_annotationContext;
    NSPopUpButtonCell *_annotationPopUpCell;
    IBIndexClassDescriber *_indexClassDescriber;
    IBAnnotationDataCache *_annotationDataCache;
    BOOL _shouldUpdateFromParserImmediately;
    BOOL _annotationsShouldBeInteractive;
    unsigned int _parseAnnotationsBlockGeneration;
    id _sourceCodeDocumentDidChangeToken;
    id _sourceCodeDocumentDidAdjustNodeTypesToken;
    id _ibDidAddConnectionToken;
    id _ibDidRemoveConnectionToken;
    id _ibDidChangeConnectionPropertToken;
    IBCancellationToken *_targetIdentifierCancellationToken;
}

+ (id)annotationProviderForContext:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (void)annotation:(id)arg1 willDrawInTextSidebarView:(id)arg2 withAnnotationsInSameLine:(id)arg3;
- (BOOL)annotation:(id)arg1 shouldDrawInTextSidebarView:(id)arg2 withAnnotationsInSameLine:(id)arg3;
- (void)didDeleteOrReplaceParagraphForAnnotation:(id)arg1;
- (void)didEndRolloverOnAnnotation:(id)arg1 inTextSidebarView:(id)arg2 event:(id)arg3;
- (void)didBeginRolloverOnAnnotation:(id)arg1 inTextSidebarView:(id)arg2 event:(id)arg3;
- (void)didDragAnnotation:(id)arg1 inTextSidebar:(id)arg2 event:(id)arg3;
- (void)didDragAnnotation:(id)arg1 inTextSidebarView:(id)arg2 event:(id)arg3;
- (void)didClickAnnotation:(id)arg1 inTextSidebar:(id)arg2 event:(id)arg3;
- (void)didClickAnnotation:(id)arg1 inTextSidebarView:(id)arg2 event:(id)arg3;
- (BOOL)shouldPermitConnectingFromAnnotation;
- (void)handleSingleClickOnAnnotation:(id)arg1 inTextSidebar:(id)arg2;
- (id)referencingLocationsSortedForDisplayInPopUp:(id)arg1;
- (id)menuItemAttributedStringForConnectionAtLocation:(id)arg1;
- (void)annotationPopUpAction:(id)arg1;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (void)highlightIBObjectsAssociatedWithAnnotation:(id)arg1;
- (void)highlightDestinationObjectInAllOpenEditorsForConnectionAtLocation:(id)arg1;
- (void)stopHighlightingAssociatedIBObjects;
- (void)revealDestinationObjectForConnectionAtLocation:(id)arg1;
- (id)destinationObjectLocationForConnection:(id)arg1 fromDocument:(id)arg2;
- (void)rebuildAnnotationsUsingDataCache;
- (id)rebuiltAnnotationFromCachedAnnotation:(id)arg1;
- (void)rebuildAnnotationsUsingParserAfterDelay;
- (void)updateExistingAnnotationsUsingOpenIBDocuments;
- (id)existingAnnotationsForConnection:(id)arg1;
- (id)existingAnnotationNamed:(id)arg1 inClassNamed:(id)arg2 matchingKind:(unsigned long long)arg3 inSet:(id)arg4;
- (void)removeAnnotation:(id)arg1;
- (void)stopObservingIBDocumentConnectionChanges;
- (void)startObservingIBDocumentConnectionChanges;
- (void)handleChangeInConnectionStateForConnection:(id)arg1 isConnected:(BOOL)arg2;
- (id)connectionLocationForConnection:(id)arg1;
- (void)stopObservingSourceCodeDocumentChanges;
- (void)startObservingSourceCodeDocumentChanges;
- (void)handleChangeInSourceCodeDocument:(id)arg1;
- (void)updateAnnotations;
- (id)updateAnnotationsByParsingDocument;
- (struct _NSRange)itemRangeForAnnotationInParsedDocument:(id)arg1;
- (void)recordAnnotationNamed:(id)arg1 type:(id)arg2 at:(struct _NSRange)arg3 inClassNamed:(id)arg4 matchingKind:(unsigned long long)arg5;
- (id)document;
- (id)classNamesInParsedDocument;
- (void)cacheAnnotations;
- (void)primitiveInvalidate;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

