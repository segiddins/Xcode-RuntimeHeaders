//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MISSING_TYPE, NSButton, NSSplitView, NSStackView, NSView;

__attribute__((visibility("hidden")))
@interface _TtC11GPUDebugger24GPUMemoryReportSubEditor : NSViewController
{
    MISSING_TYPE *splitView;
    MISSING_TYPE *summaryViewContainer;
    MISSING_TYPE *resourcesViewContainer;
    MISSING_TYPE *filterViewContainer;
    MISSING_TYPE *stackView;
    MISSING_TYPE *issuesButton;
    MISSING_TYPE *summaryViewController;
    MISSING_TYPE *resourcesViewController;
    MISSING_TYPE *filterViewController;
    MISSING_TYPE *issuesViewController;
    MISSING_TYPE *resourcesViewExpandedState;
    MISSING_TYPE *isFiltering;
    MISSING_TYPE *$__lazy_storage_$_resourceInfoViewController;
    MISSING_TYPE *$__lazy_storage_$_popover;
}

+ (id)instantiateFromNibWithDataProvider:(id)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, copy) id representedObject;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)loadView;
@property(nonatomic) __weak NSButton *issuesButton; // @synthesize issuesButton;
@property(nonatomic) __weak NSStackView *stackView; // @synthesize stackView;
@property(nonatomic) __weak NSView *filterViewContainer; // @synthesize filterViewContainer;
@property(nonatomic) __weak NSView *resourcesViewContainer; // @synthesize resourcesViewContainer;
@property(nonatomic) __weak NSView *summaryViewContainer; // @synthesize summaryViewContainer;
@property(nonatomic) __weak NSSplitView *splitView; // @synthesize splitView;
- (void)selectResourceItemWithItem:(id)arg1;

@end

