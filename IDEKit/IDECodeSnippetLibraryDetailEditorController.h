//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTLibraryDetailEditorController.h>

#import <IDEKit/DVTSourceTextViewDelegate-Protocol.h>

@class DVTStackView_ML, IDECodeSnippet, NSArray, NSMutableArray, NSString;

@interface IDECodeSnippetLibraryDetailEditorController : DVTLibraryDetailEditorController <DVTSourceTextViewDelegate>
{
    DVTStackView_ML *_completionScopesStackView;
    NSMutableArray *_scopeRowControllers;
    NSArray *_platformFamilies;
    NSArray *_languages;
}

+ (id)keyPathsForValuesAffectingCanRemoveCompletionScope;
+ (id)keyPathsForValuesAffectingCanAddCompletionScope;
+ (id)keyPathsForValuesAffectingCompletionScopeRowValues;
+ (void)initialize;
- (void).cxx_destruct;
- (void)didChangeCurrentDetailController;
- (void)willChangeCurrentDetailController;
- (void)_fixKeyViewLoop;
- (void)_updateScopesStackWithInsertHint:(unsigned long long)arg1;
- (BOOL)replaceCompletionScope:(id)arg1 withScope:(id)arg2;
- (BOOL)removeCompletionScope:(id)arg1;
- (BOOL)addCompletionScopeAfterScope:(id)arg1;
@property(readonly) BOOL canRemoveCompletionScope;
@property(readonly) BOOL canAddCompletionScope;
- (void)awakeFromNib;
- (void)textDidChange:(id)arg1;
@property(readonly) IDECodeSnippet *editedCodeSnippet;
- (void)setEditedAsset:(id)arg1;
- (id)sourceTextStorage;
- (id)sourceTextView;
- (id)currentDetailController;
@property(readonly) NSArray *completionScopeRowValues;
- (id)_completionScopesForCurrentLanguage;
@property(readonly) NSArray *platformFamilies;
@property(readonly) NSArray *languages;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (id)initWithDidEditHandlerBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

