//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBNSViewPriorityCellDelegate-Protocol.h>
#import <IDEInterfaceBuilderCocoaIntegration/IBNSViewPrioritySliderDelegate-Protocol.h>
#import <IDEInterfaceBuilderCocoaIntegration/NSTableViewDataSource-Protocol.h>
#import <IDEInterfaceBuilderCocoaIntegration/NSTableViewDelegate-Protocol.h>

@class IBCancellationToken, IBInspectorViewController, IBNSViewLongListInspectorLayoutView, IBNSViewPriorityPopoverViewController, IDEInspectorKeyPath, NSPopover, NSString, NSTableView, NSTextField;

@interface IBNSViewPriorityListInspectorProperty : IDEInspectorProperty <IBNSViewPrioritySliderDelegate, NSTableViewDelegate, NSTableViewDataSource, IBNSViewPriorityCellDelegate>
{
    IDEInspectorKeyPath *_valueKeyPath;
    IBCancellationToken *_highlightToken;
    NSPopover *_popover;
    IBNSViewPriorityPopoverViewController *_popoverViewController;
    IBNSViewLongListInspectorLayoutView *_layoutContainerView;
    NSTableView *_tableView;
    NSTextField *_sectionTitle;
    double _minimumValue;
    double _maximumValue;
    NSString *_customPriorityType;
}

- (void).cxx_destruct;
@property(nonatomic) NSString *customPriorityType; // @synthesize customPriorityType=_customPriorityType;
@property(nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) NSTextField *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) IBNSViewLongListInspectorLayoutView *layoutContainerView; // @synthesize layoutContainerView=_layoutContainerView;
@property(nonatomic) IBNSViewPriorityPopoverViewController *popoverViewController; // @synthesize popoverViewController=_popoverViewController;
@property(nonatomic) NSPopover *popover; // @synthesize popover=_popover;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)mouseExitedTableViewCell:(id)arg1;
- (id)interestingViewsForPriorityAtIndex:(long long)arg1;
- (void)mouseEnteredTableViewCell:(id)arg1;
- (void)viewPrioritySlider:(id)arg1 didStopTrackingAtPoint:(struct CGPoint)arg2;
- (void)viewPrioritySlider:(id)arg1 didContinueTrackingAtPoint:(struct CGPoint)arg2;
- (void)viewPrioritySlider:(id)arg1 didStartTrackingAtPoint:(struct CGPoint)arg2;
- (id)descriptiveTextForPriority:(long long)arg1;
- (void)syncPopoverWithSliderKnobOfSlider:(id)arg1;
- (id)labelForAdjusterAtRow:(long long)arg1;
- (void)updateConstraintPriority:(id)arg1;
- (id)ibInspectorController;
- (void)tearDownRefreshTriggers;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)invalidateTableViewAndLayout;
- (id)inspectedViews;
- (id)inspectedView;
- (void)setInspectedConstraintPriorities:(id)arg1;
- (id)inspectedConstraintPriorities;
@property(readonly) IBInspectorViewController *inspectorController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

