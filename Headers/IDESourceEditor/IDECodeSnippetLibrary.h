//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDELibraryController.h>

#import <IDESourceEditor/_TtP15IDESourceEditor39IDECodeSnippetLibraryDetailViewDelegate_-Protocol.h>

@class DVTLibrarySection, DVTObservingToken, NSDictionary, NSMapTable, NSSet, _TtC15IDESourceEditor31IDECodeSnippetLibraryDetailView;

@interface IDECodeSnippetLibrary : IDELibraryController <_TtP15IDESourceEditor39IDECodeSnippetLibraryDetailViewDelegate_>
{
    DVTObservingToken *_kvoSnippetRepositoryToken;
    NSMapTable *_strongSnippetToAssetMap;
    NSSet *_lastSnippets;
    _TtC15IDESourceEditor31IDECodeSnippetLibraryDetailView *_inlineDetailView;
    DVTLibrarySection *_userSection;
    NSDictionary *_languageSections;
}

+ (id)orderedLanguages;
- (void).cxx_destruct;
- (void)codeSnippetLibraryDeleteView:(id)arg1 userDidDeleteSnippet:(id)arg2;
- (void)activeEditorDidChange:(id)arg1;
- (BOOL)canRemoveAsset:(id)arg1;
- (BOOL)canEditAsset:(id)arg1;
- (BOOL)removeAssets:(id)arg1 error:(id *)arg2;
- (id)insertAssetFromPasteboard:(id)arg1;
- (BOOL)canCreateAssetsFromPasteboard:(id)arg1;
- (id)readableAssetPasteboardTypes;
- (void)dealloc;
- (void)viewWillUninstall;
- (void)primitiveInvalidate;
- (void)libraryDidLoad;
- (void)populatePasteboard:(id)arg1 withAssets:(id)arg2;
- (void)addUserSnippet:(id)arg1 withAsset:(id)arg2;
- (void)codeSnippetsDidUpdate;
- (void)removeAssetForCodeSnippet:(id)arg1;
- (void)addAssetForCodeSnippet:(id)arg1;
- (void)setLibraryAsset:(id)arg1 forCodeSnippet:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingSnippet:(id)arg1;
- (void)startObservingSnippet:(id)arg1;
- (id)observingKeyPathsForCodeSnippet:(id)arg1;
- (id)libraryAssetForCodeSnippet:(id)arg1;
- (id)createLibraryAssetForCodeSnippet:(id)arg1;
- (BOOL)editSelectedAsset;
- (id)inlineDetailViewForAssets:(id)arg1;
- (BOOL)showsSectionHeaders;
- (BOOL)supportsAssetViewStyle:(long long)arg1;
- (void)loadView;

@end

