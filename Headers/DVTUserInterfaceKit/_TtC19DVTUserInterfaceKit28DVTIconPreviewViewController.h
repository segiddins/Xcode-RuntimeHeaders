//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class DVTFilterTokenField, MISSING_TYPE, NSButton, NSCollectionView, NSGridView, NSPopUpButton, NSScrollView, NSVisualEffectView;

__attribute__((visibility("hidden")))
@interface _TtC19DVTUserInterfaceKit28DVTIconPreviewViewController : NSViewController
{
    MISSING_TYPE *backgroundVisualEffectView;
    MISSING_TYPE *collectionView;
    MISSING_TYPE *previewSizeChooserGrid;
    MISSING_TYPE *exportButton;
    MISSING_TYPE *backgroundMaterialChooser;
    MISSING_TYPE *contentScrollView;
    MISSING_TYPE *settingsPanel;
    MISSING_TYPE *filterTokenField;
    MISSING_TYPE *_selectedMaterialDefaultsKey;
    MISSING_TYPE *_selectedMaterialDefaultValue;
    MISSING_TYPE *_backgroundMaterialList;
    MISSING_TYPE *_backgroundMaterials;
    MISSING_TYPE *_filterDefaultsKey;
    MISSING_TYPE *_filteredIconSetModel;
    MISSING_TYPE *_selectedPreviewSizeDefaultsKey;
    MISSING_TYPE *_selectedPreviewSizeDefaultValues;
    MISSING_TYPE *_previewSizeGrid;
    MISSING_TYPE *_previewSizeList;
    MISSING_TYPE *_previewSizesByName;
    MISSING_TYPE *_previewSizeToggleButtons;
    MISSING_TYPE *_fragmentHighlighter;
    MISSING_TYPE *_filterExpressionFieldController;
    MISSING_TYPE *_predicateProducer;
    MISSING_TYPE *_filterSession;
    MISSING_TYPE *selectedPreviewSizes;
    MISSING_TYPE *selectedBackgroundMaterialName;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)export:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)updatePreviewSizes:(id)arg1;
- (void)updateBackgroundMaterial:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic, retain) DVTFilterTokenField *filterTokenField; // @synthesize filterTokenField;
@property(nonatomic, retain) NSVisualEffectView *settingsPanel; // @synthesize settingsPanel;
@property(nonatomic, retain) NSScrollView *contentScrollView; // @synthesize contentScrollView;
@property(nonatomic, retain) NSPopUpButton *backgroundMaterialChooser; // @synthesize backgroundMaterialChooser;
@property(nonatomic, retain) NSButton *exportButton; // @synthesize exportButton;
@property(nonatomic, retain) NSGridView *previewSizeChooserGrid; // @synthesize previewSizeChooserGrid;
@property(nonatomic, retain) NSCollectionView *collectionView; // @synthesize collectionView;
@property(nonatomic, retain) NSVisualEffectView *backgroundVisualEffectView; // @synthesize backgroundVisualEffectView;

@end

