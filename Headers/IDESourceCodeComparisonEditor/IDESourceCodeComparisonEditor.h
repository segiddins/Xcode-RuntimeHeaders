//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEComparisonEditor.h>

#import <IDESourceCodeComparisonEditor/IDEJumpToLineDestination-Protocol.h>
#import <IDESourceCodeComparisonEditor/IDESourceExpressionSource-Protocol.h>
#import <IDESourceCodeComparisonEditor/NSMenuDelegate-Protocol.h>
#import <IDESourceCodeComparisonEditor/NSUserInterfaceValidations-Protocol.h>

@class DVTBorderedView, DVTSDK, DVTSourceExpression, DVTSourceLanguageService, DVTStackBacktrace, DVTStateToken, NSDictionary, NSString;

@interface IDESourceCodeComparisonEditor : IDEComparisonEditor <IDESourceExpressionSource, NSUserInterfaceValidations, NSMenuDelegate, IDEJumpToLineDestination>
{
    NSDictionary *_previouslyRestoredStateDictionary;
    DVTStateToken *_stateToken;
    DVTBorderedView *_borderedView;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)defaultViewNibName;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
@property(readonly, nonatomic) DVTSourceExpression *mouseOverExpression;
@property(readonly, nonatomic) struct CGRect currentSelectionFrame;
@property(readonly, nonatomic) DVTSourceExpression *selectedExpression;
@property(readonly) DVTSourceExpression *contextMenuExpression;
- (id)stateToken;
- (void)setStateToken:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)commitEditingAndReturnError:(id *)arg1;
- (void)symbolsForExpression:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)isExpressionPoundImport:(id)arg1;
- (BOOL)isExpressionModuleImport:(id)arg1;
- (BOOL)isExpressionInPlainCode:(id)arg1;
- (BOOL)isExpressionInFunctionOrMethodBody:(id)arg1;
- (BOOL)isExpressionFunctionOrMethodDefinition:(id)arg1;
- (BOOL)isExpressionFunctionOrMethodCall:(id)arg1;
- (BOOL)expressionContainsExecutableCode:(id)arg1;
- (struct CGRect)expressionFrameForExpression:(id)arg1;
- (void)performTextFinderAction:(id)arg1;
- (BOOL)providesOwnFindBar;
- (id)initialQueryForJumpToLine;
- (id)documentLocationForJumpToLineQuery:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (id)_stateDictionariesForDocuments;
- (id)_transientStateDictionaryForDocument:(id)arg1;
- (void)restoreInternalComparisonDocumentLocationWithStateDictionary:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)setEditorSubmode:(int)arg1 client:(unsigned long long)arg2;
- (void)_updateViewBasedOnSubmode;
- (struct CGRect)overlayFrameForView:(id)arg1;
- (id)pathCell:(id)arg1 menuItemForItem:(id)arg2 defaultMenuItem:(id)arg3;
- (BOOL)pathCell:(id)arg1 shouldInitiallyShowMenuSearch:(id)arg2;
- (BOOL)pathCell:(id)arg1 shouldSeparateDisplayOfChildItemsForItem:(id)arg2;
- (BOOL)canBecomeMainViewController;
- (void)viewDidLoad;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic) DVTSourceLanguageService *languageService;
@property(readonly) DVTSourceExpression *quickHelpExpression;
@property(readonly) DVTSDK *sdk;
@property(readonly, nonatomic) NSString *selectedText;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

