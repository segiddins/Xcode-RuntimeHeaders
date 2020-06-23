//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/DVTHUDPopUpContentViewController.h>

@class DVTObservingToken, DVTStackView_ML, IBButtonComboBox, IBDocument, IBMutableIdentityDictionary, IBSourceCodeConnectionContext, IBSourceCodeConnectionErrorView, NSArray, NSPopUpButton, NSString, NSTextField, NSView;

@interface IBSourceCodeConnectionPopUpContentController : DVTHUDPopUpContentViewController
{
    IBMutableIdentityDictionary *_connectionContextToOptionsViewControllerMap;
    CDUnknownBlockType _typeSuggestionsBlock;
    DVTObservingToken *_kvoConnectionOptionsControllerValidToken;
    DVTObservingToken *_kvoConnectionInsertionErrorToken;
    DVTObservingToken *_kvoConnectionActiveTargetToken;
    BOOL _typeIsValid;
    BOOL _nameIsValid;
    BOOL _selectedConnectionContextOptionsViewControllerIsPreventingConnectionInsertion;
    IBSourceCodeConnectionContext *_selectedConnectionContext;
    NSArray *_connectionContexts;
    IBDocument *_document;
    NSArray *_typeSuggestions;
    IBSourceCodeConnectionErrorView *_errorView;
    NSView *_connectionTypePopUpContainerView;
    NSPopUpButton *_connectionTypePopUp;
    NSView *_objectPopUpContainerView;
    NSView *_objectLabelContainerView;
    DVTStackView_ML *_contentStackView;
    IBButtonComboBox *_typeComboBox;
    NSPopUpButton *_objectPopUp;
    NSView *_nameContainerView;
    NSTextField *_nameTextField;
    NSView *_typeContainerView;
}

+ (id)keyPathsForValuesAffectingShadowedSelectedConnectionContextType;
+ (id)keyPathsForValuesAffectingShadowedSelectedConnectionContextName;
+ (id)keyPathsForValuesAffectingCanInsertConnection;
@property(retain) NSView *typeContainerView; // @synthesize typeContainerView=_typeContainerView;
@property(retain) NSTextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property(retain) NSView *nameContainerView; // @synthesize nameContainerView=_nameContainerView;
@property(retain) NSPopUpButton *objectPopUp; // @synthesize objectPopUp=_objectPopUp;
@property(retain) IBButtonComboBox *typeComboBox; // @synthesize typeComboBox=_typeComboBox;
@property(retain) DVTStackView_ML *contentStackView; // @synthesize contentStackView=_contentStackView;
@property(retain) NSView *objectLabelContainerView; // @synthesize objectLabelContainerView=_objectLabelContainerView;
@property(retain) NSView *objectPopUpContainerView; // @synthesize objectPopUpContainerView=_objectPopUpContainerView;
@property(retain) NSPopUpButton *connectionTypePopUp; // @synthesize connectionTypePopUp=_connectionTypePopUp;
@property(retain) NSView *connectionTypePopUpContainerView; // @synthesize connectionTypePopUpContainerView=_connectionTypePopUpContainerView;
@property(retain) IBSourceCodeConnectionErrorView *errorView; // @synthesize errorView=_errorView;
@property(copy) NSArray *typeSuggestions; // @synthesize typeSuggestions=_typeSuggestions;
@property BOOL selectedConnectionContextOptionsViewControllerIsPreventingConnectionInsertion; // @synthesize selectedConnectionContextOptionsViewControllerIsPreventingConnectionInsertion=_selectedConnectionContextOptionsViewControllerIsPreventingConnectionInsertion;
@property BOOL nameIsValid; // @synthesize nameIsValid=_nameIsValid;
@property BOOL typeIsValid; // @synthesize typeIsValid=_typeIsValid;
@property(readonly) IBDocument *document; // @synthesize document=_document;
@property(readonly) NSArray *connectionContexts; // @synthesize connectionContexts=_connectionContexts;
@property(retain, nonatomic) IBSourceCodeConnectionContext *selectedConnectionContext; // @synthesize selectedConnectionContext=_selectedConnectionContext;
- (void).cxx_destruct;
- (void)willInsertConnectionFromContext:(id)arg1;
- (void)updateObjectPopUp;
- (void)selectTargetFromObjectPopUp:(id)arg1;
- (void)updateObjectPopUpSelection;
- (void)updateTypeSuggestions;
- (void)suggestInitialFirstResponder;
- (void)stopObservingSelectedConnectionContextInsertionError;
- (void)startObservingSelectedConnectionContextInsertionError;
- (void)stopObservingSelectedConnectionContextActiveTarget;
- (void)startObservingSelectedConnectionContextActiveTarget;
- (void)stopObservingSelectedConnectionContextOptionsViewController;
- (void)startObservingSelectedConnectionContextOptionsViewController;
@property(copy) NSString *shadowedSelectedConnectionContextType;
- (id)validatedSelectedConnectionContextType:(id)arg1 error:(id *)arg2;
@property(copy) NSString *shadowedSelectedConnectionContextName;
- (id)validatedSelectedConnectionContextName:(id)arg1 error:(id *)arg2;
@property(readonly) BOOL canInsertConnection;
- (id)doneButtonLabel;
- (CDStruct_c519178c)contentInset;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)updateSubviewsForSelectedConnectionContext;
- (void)updateSubviewsForChangeInSelectedConnectionContextInsertionError;
- (BOOL)errorViewIsInstalled;
- (id)optionsViewControllerForConnectionContext:(id)arg1;
- (id)existingOptionsViewControllerForConnectionContext:(id)arg1;
- (void)configureStackViewAfterInstalling;
- (void)configureContentViewAfterInstalling;
- (void)dvt_shouldDeallocate;
- (void)primitiveInvalidate;
- (id)initWithConnectionContexts:(id)arg1 document:(id)arg2 generateTypeSuggestionsBlock:(CDUnknownBlockType)arg3;

@end

