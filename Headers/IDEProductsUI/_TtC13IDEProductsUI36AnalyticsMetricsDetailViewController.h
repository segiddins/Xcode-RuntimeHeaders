//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class DVTPopUpButtonCell, DVTReplacementView, MISSING_TYPE, NSButton, NSPopUpButton, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface _TtC13IDEProductsUI36AnalyticsMetricsDetailViewController : DVTViewController
{
    MISSING_TYPE *headerView;
    MISSING_TYPE *devicePopUp;
    MISSING_TYPE *percentilePopUp;
    MISSING_TYPE *lastUpdatedField;
    MISSING_TYPE *replacementView;
    MISSING_TYPE *helpButton;
    MISSING_TYPE *deviceButtonCell;
    MISSING_TYPE *percentileButtonCell;
    MISSING_TYPE *updatingPopups;
    MISSING_TYPE *errorButton;
    MISSING_TYPE *busy;
    MISSING_TYPE *currentError;
    MISSING_TYPE *currentProduct;
    MISSING_TYPE *lastUpdatedDateFormatter;
    MISSING_TYPE *selectedCategoryType;
    MISSING_TYPE *productData;
    MISSING_TYPE *delegate;
    MISSING_TYPE *allVersions;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)percentileSelected:(id)arg1;
- (void)deviceSelected:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewDidLoad;
- (void)loadView;
- (void)helpButtonClicked:(id)arg1;
- (void)viewError:(id)arg1;
@property(nonatomic, retain) NSButton *errorButton; // @synthesize errorButton;
@property(nonatomic, retain) DVTPopUpButtonCell *percentileButtonCell; // @synthesize percentileButtonCell;
@property(nonatomic, retain) DVTPopUpButtonCell *deviceButtonCell; // @synthesize deviceButtonCell;
@property(nonatomic, retain) NSButton *helpButton; // @synthesize helpButton;
@property(nonatomic, retain) DVTReplacementView *replacementView; // @synthesize replacementView;
@property(nonatomic, retain) NSTextField *lastUpdatedField; // @synthesize lastUpdatedField;
@property(nonatomic, retain) NSPopUpButton *percentilePopUp; // @synthesize percentilePopUp;
@property(nonatomic, retain) NSPopUpButton *devicePopUp; // @synthesize devicePopUp;
@property(nonatomic, retain) NSView *headerView; // @synthesize headerView;

@end

