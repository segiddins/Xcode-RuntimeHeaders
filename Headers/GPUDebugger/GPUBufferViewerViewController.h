//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <GPUDebugger/NSMenuDelegate-Protocol.h>

@class GPUBufferViewerDataSourceViewController, GPUBufferViewerDefaults, NSPopUpButton, NSSegmentedControl, NSString, NSTextField, NSView;
@protocol GPUBufferViewerDataSource, GPUBufferViewerDataSourceProvider, GPUBufferViewerLayout;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerViewController : NSViewController <NSMenuDelegate>
{
    NSPopUpButton *_layoutView;
    NSPopUpButton *_columnView;
    NSTextField *_offsetView;
    NSSegmentedControl *_styleView;
    NSView *_controlBarView;
    id <GPUBufferViewerLayout> _layout;
    unsigned long long _customLayoutType;
    unsigned long long _customLayoutColumns;
    id <GPUBufferViewerDataSource> _dataSource;
    NSView *_containerView;
    Class _dataSourceViewControllerClass;
    GPUBufferViewerDataSourceViewController *_dataSourceViewController;
    GPUBufferViewerDefaults *_defaults;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GPUBufferViewerDefaults *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) GPUBufferViewerDataSourceViewController *dataSourceViewController; // @synthesize dataSourceViewController=_dataSourceViewController;
@property(retain, nonatomic) Class dataSourceViewControllerClass; // @synthesize dataSourceViewControllerClass=_dataSourceViewControllerClass;
@property(nonatomic) __weak NSView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) id <GPUBufferViewerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long customLayoutColumns; // @synthesize customLayoutColumns=_customLayoutColumns;
@property(nonatomic) unsigned long long customLayoutType; // @synthesize customLayoutType=_customLayoutType;
@property(retain, nonatomic) id <GPUBufferViewerLayout> layout; // @synthesize layout=_layout;
@property(nonatomic) __weak NSView *controlBarView; // @synthesize controlBarView=_controlBarView;
@property(nonatomic) __weak NSSegmentedControl *styleView; // @synthesize styleView=_styleView;
@property(nonatomic) __weak NSTextField *offsetView; // @synthesize offsetView=_offsetView;
@property(nonatomic) __weak NSPopUpButton *columnView; // @synthesize columnView=_columnView;
@property(nonatomic) __weak NSPopUpButton *layoutView; // @synthesize layoutView=_layoutView;
- (struct CGSize)sizeForDisplayingAllData;
- (void)changeStyle:(id)arg1;
- (void)updateStyleView;
- (void)changeOffset:(id)arg1;
- (void)updateOffsetView;
- (void)changeColumns:(id)arg1;
- (void)updateColumnView;
- (void)selectLayout:(id)arg1;
- (void)updateLayoutView;
- (void)updateDataSourceViewController;
- (void)update;
@property(retain) id <GPUBufferViewerDataSourceProvider> representedObject; // @dynamic representedObject;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
