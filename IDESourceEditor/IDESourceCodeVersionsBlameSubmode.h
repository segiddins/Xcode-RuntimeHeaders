//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEComparisonEditorSubmode.h>

#import <IDESourceEditor/IDEComparisonEditorDelegate-Protocol.h>
#import <IDESourceEditor/IDESourceCodeBlameControllerDelegate-Protocol.h>
#import <IDESourceEditor/IDESourceEditorViewControllerHost-Protocol.h>

@class DVTBorderedView, DVTNotificationToken, DVTObservingToken, DVTSourceTextView, IDEEditor, IDESourceCodeBlameController, NSDictionary, NSProgressIndicator, NSString;

@interface IDESourceCodeVersionsBlameSubmode : IDEComparisonEditorSubmode <IDEComparisonEditorDelegate, IDESourceEditorViewControllerHost, IDESourceCodeBlameControllerDelegate>
{
    DVTObservingToken *_loadingObserver;
    DVTNotificationToken *_themeObserver;
    IDESourceCodeBlameController *_blameController;
    NSDictionary *_previouslyRestoredStateDictionary;
    DVTBorderedView *_primaryLayoutView;
    IDEEditor *_primaryEditor;
    DVTNotificationToken *_primaryEditorSetupObservationToken;
    DVTObservingToken *_internalComparisonEditorLocationObservingToken;
    DVTObservingToken *_blameAvailableToken;
    DVTNotificationToken *_textViewBoundsChangedObserverToken;
    NSProgressIndicator *_loadingProgressIndicator;
}

+ (BOOL)automaticallyNotifiesObserversOfPrimaryEditor;
+ (id)keyPathsForValuesAffectingCurrentSelectedDocumentLocations;
+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
+ (id)keyPathsForValuesAffectingKeyEditor;
@property(retain) DVTBorderedView *primaryLayoutView; // @synthesize primaryLayoutView=_primaryLayoutView;
@property(retain) IDESourceCodeBlameController *blameController; // @synthesize blameController=_blameController;
- (void).cxx_destruct;
- (void)revertComparisonEditorStateWithDictionary:(id)arg1;
- (void)commitComparisonEditorStateToDictionary:(id)arg1;
- (void)textViewDidLoadAnnotationProviders:(id)arg1;
- (id)annotationContextForTextView:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)comparisonContextMenu_toggleIgnoreWhitespace:(id)arg1;
- (id)currentSelectedDocumentLocations;
- (id)currentSelectedItems;
- (void)blameController:(id)arg1 didEncounterError:(id)arg2;
- (void)goToBASE:(id)arg1;
- (void)blameController:(id)arg1 showRevision:(id)arg2;
- (void)blameController:(id)arg1 diffAgainstRevision:(id)arg2;
- (void)blameController:(id)arg1 compareToRevision:(id)arg2;
- (void)blameController:(id)arg1 compareRevisionToPreviousRevision:(id)arg2;
- (void)hidePrimaryPlaceholder;
- (void)showPrimaryPlaceholder;
- (void)comparisonEditor:(id)arg1 didReplacePrimaryDocument:(id)arg2;
- (void)comparisonEditor:(id)arg1 willReplacePrimaryDocument:(id)arg2;
- (void)_createBlameController;
- (id)_sourceControlDocumentLocationFromComparisonEditorPrimaryDocumentLocation;
- (void)_observeBlameControllerLoading;
- (void)_observeThemeChanges:(id)arg1;
- (id)_addBlameAreaVisualization;
- (void)_completeSetUpWithEditor:(id)arg1;
- (void)_syncStructureDocument;
- (id)_fileTextSettings;
- (void)primitiveInvalidate;
- (void)willBeRemovedFromComparisonEditor;
- (void)viewDidInstall;
- (void)showEmptyPrimaryEditor:(id)arg1;
- (void)loadView;
@property(retain) IDEEditor *primaryEditor; // @synthesize primaryEditor=_primaryEditor;
@property(readonly) DVTSourceTextView *primaryTextView;
- (id)keyEditor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

