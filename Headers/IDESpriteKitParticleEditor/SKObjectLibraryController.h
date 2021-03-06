//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
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
    NSArray *_pasteboardTypes;
}

+ (id)activeController;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *pasteboardTypes; // @synthesize pasteboardTypes=_pasteboardTypes;
- (BOOL)canRemoveAsset:(id)arg1;
- (BOOL)canEditAsset:(id)arg1;
- (BOOL)removeAssets:(id)arg1 error:(id *)arg2;
- (id)insertAssetFromPasteboard:(id)arg1;
- (void)populatePasteboard:(id)arg1 withAssets:(id)arg2;
- (BOOL)canCreateAssetsFromPasteboard:(id)arg1;
- (id)readableAssetPasteboardTypes;
@property(readonly, nonatomic) BOOL allowObjectLibrary;
- (void)libraryDidLoad;
- (void)refreshAssetsFromProvider:(id)arg1;
- (void)refreshAssetsFromDocument:(id)arg1;
- (void)activeEditorDidChange:(id)arg1;
- (void)clearCurrentCustomGroupIdentifier;
- (void)populateObjectLibrary;
- (void)updateObjectsLibraryArrayFromProvider:(id)arg1 forceUpdate:(BOOL)arg2;
@property(readonly, nonatomic) NSMutableArray *staticObjectLibraryAssets;
@property(readonly, nonatomic) NSString *objectsLibraryCustomGroupIdentifier;
@property(readonly, nonatomic) NSString *objectsLibraryTitle;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

