//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <PlistEditor/DVTFindBarFindable-Protocol.h>
#import <PlistEditor/DVTPlistViewControllerProtocol-Protocol.h>
#import <PlistEditor/DVTSourceExpressionSource-Protocol.h>
#import <PlistEditor/NSUserInterfaceValidations-Protocol.h>

@class DVTNotificationToken, DVTObservingToken, DVTPlistViewController, DVTSDK, DVTSourceExpression, DVTSourceLanguageService, DVTStackBacktrace, NSString;

@interface IDEPlistEditor : IDEEditor <DVTPlistViewControllerProtocol, DVTSourceExpressionSource, DVTFindBarFindable, NSUserInterfaceValidations>
{
    DVTPlistViewController *_plistViewController;
    DVTSourceExpression *_selectedExpression;
    DVTObservingToken *_selectionObservingToken;
    DVTNotificationToken *_plistDocumentWillSaveNotification;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
@property(retain, nonatomic) DVTSourceExpression *selectedExpression; // @synthesize selectedExpression=_selectedExpression;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)revealNode:(id)arg1;
- (BOOL)commitEdits;
- (BOOL)editInProgress;
- (void)propertyListChanged:(id)arg1;
- (void)selectDocumentLocations:(id)arg1;
- (struct CGRect)expressionFrameForExpression:(id)arg1;
@property(readonly, nonatomic) DVTSourceExpression *mouseOverExpression;
@property(readonly) DVTSourceExpression *contextMenuExpression;
@property(readonly, nonatomic) struct CGRect currentSelectionFrame;
- (void)updateSelectedExpression;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateCurrentResult:(id)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateResults:(id)arg2;
- (void)changeStructureDefinitionAction:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)takeFocus;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (BOOL)canBecomeMainViewController;

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

