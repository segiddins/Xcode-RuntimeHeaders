//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDELibraryController.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface SKObjectLibraryController : IDELibraryController
{
    NSMutableDictionary *_targetObjectsCacheForSKLibrary;
    NSString *_currentCustomGroupIdentifier;
    NSString *_currentSKLibraryTitle;
    NSArray *_currentStaticObjectsForSKLibrary;
    NSArray *_currentDynamicObjectsForSKLibrary;
    NSMutableArray *_currentUserObjectsForSKLibrary;
}

+ (id)activeController;
- (void).cxx_destruct;
- (id)editorViewControllerForAsset:(id)arg1;
- (BOOL)canRemoveAsset:(id)arg1;
- (BOOL)canEditAsset:(id)arg1;
- (void)userDidEditAsset:(id)arg1;
- (BOOL)removeAssets:(id)arg1 error:(id *)arg2;
- (BOOL)createAsset:(id *)arg1 forLibrarySourceWithIdentifier:(id *)arg2 fromPasteboard:(id)arg3;
- (void)populatePasteboard:(id)arg1 withAssets:(id)arg2;
- (BOOL)canCreateAssetsFromPasteboard:(id)arg1 targetingLibrarySourceIdentifier:(id *)arg2;
- (id)readableAssetPasteboardTypes;
@property(readonly, nonatomic) BOOL allowObjectLibrary;
- (void)libraryDidLoad;
- (void)refreshAssetsFromDocument:(id)arg1;
- (void)activeEditorDocumentDidChange:(id)arg1;
- (void)clearCurrentCustomGroupIdentifier;
- (void)populateObjectLibrary;
- (void)updateObjectsLibraryArrayForSKDocument:(id)arg1 forceUpdate:(BOOL)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

