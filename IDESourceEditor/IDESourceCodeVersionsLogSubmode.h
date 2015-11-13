//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEComparisonEditorSubmode.h>

#import <IDESourceEditor/DVTSourceTextViewDelegate-Protocol.h>
#import <IDESourceEditor/IDEComparisonEditorDelegate-Protocol.h>
#import <IDESourceEditor/IDESourceEditorViewControllerHost-Protocol.h>

@class DVTBorderedView, DVTSourceTextView, IDEEditor, NSDictionary, NSString;

@interface IDESourceCodeVersionsLogSubmode : IDEComparisonEditorSubmode <IDEComparisonEditorDelegate, IDESourceEditorViewControllerHost, DVTSourceTextViewDelegate>
{
    NSDictionary *_previouslyRestoredStateDictionary;
    DVTBorderedView *_primaryLayoutView;
    IDEEditor *_primaryEditor;
    id _primaryEditorSetupObservationToken;
}

+ (id)keyPathsForValuesAffectingCurrentSelectedDocumentLocations;
+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
+ (id)keyPathsForValuesAffectingKeyEditor;
@property(retain) DVTBorderedView *primaryLayoutView; // @synthesize primaryLayoutView=_primaryLayoutView;
- (void).cxx_destruct;
- (void)textViewDidLoadAnnotationProviders:(id)arg1;
- (void)revertComparisonEditorStateWithDictionary:(id)arg1;
- (void)commitComparisonEditorStateToDictionary:(id)arg1;
- (id)currentSelectedDocumentLocations;
- (id)currentSelectedItems;
- (void)showEmptyPrimaryEditor:(id)arg1;
- (void)hidePrimaryPlaceholder;
- (void)showPrimaryPlaceholder;
- (void)comparisonEditor:(id)arg1 didReplacePrimaryDocument:(id)arg2;
- (void)comparisonEditor:(id)arg1 willReplacePrimaryDocument:(id)arg2;
- (void)_syncStructureDocument;
- (id)_fileTextSettings;
- (void)primitiveInvalidate;
- (void)willBeRemovedFromComparisonEditor;
- (void)viewDidInstall;
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

