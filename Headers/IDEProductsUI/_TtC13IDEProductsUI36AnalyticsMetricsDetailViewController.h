//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class DVTPopUpButtonCell, DVTReplacementView, NSButton, NSPopUpButton, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface _TtC13IDEProductsUI36AnalyticsMetricsDetailViewController : DVTViewController
{
    // Error parsing type: , name: headerView
    // Error parsing type: , name: devicePopUp
    // Error parsing type: , name: percentilePopUp
    // Error parsing type: , name: lastUpdatedField
    // Error parsing type: , name: replacementView
    // Error parsing type: , name: helpButton
    // Error parsing type: , name: deviceButtonCell
    // Error parsing type: , name: percentileButtonCell
    // Error parsing type: , name: updatingPopups
    // Error parsing type: , name: errorButton
    // Error parsing type: , name: busy
    // Error parsing type: , name: currentError
    // Error parsing type: , name: currentProduct
    // Error parsing type: , name: lastUpdatedDateFormatter
    // Error parsing type: , name: selectedCategoryType
    // Error parsing type: , name: productData
    // Error parsing type: , name: delegate
    // Error parsing type: , name: allVersions
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

