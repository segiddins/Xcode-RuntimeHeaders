//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MISSING_TYPE, NSOutlineView, NSTextField, _TtC11GPUDebugger20GPUFindingsInspector, _TtC11GPUDebugger27GPUFindingsSegmentedControl;

__attribute__((visibility("hidden")))
@interface _TtC11GPUDebugger25GPUFindingsViewController : NSViewController
{
    MISSING_TYPE *findingsTable;
    MISSING_TYPE *issueCatagorySegmentedControl;
    MISSING_TYPE *findingsInspectorView;
    MISSING_TYPE *noFindingsMessage;
    MISSING_TYPE *categoryFindings;
    MISSING_TYPE *expandableItems;
    MISSING_TYPE *expandedItems;
    MISSING_TYPE *currentCategory;
    MISSING_TYPE *dataProvider;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;
@property(nonatomic) __weak NSTextField *noFindingsMessage; // @synthesize noFindingsMessage;
@property(nonatomic) __weak _TtC11GPUDebugger20GPUFindingsInspector *findingsInspectorView; // @synthesize findingsInspectorView;
@property(nonatomic) __weak _TtC11GPUDebugger27GPUFindingsSegmentedControl *issueCatagorySegmentedControl; // @synthesize issueCatagorySegmentedControl;
@property(nonatomic) __weak NSOutlineView *findingsTable; // @synthesize findingsTable;

@end
