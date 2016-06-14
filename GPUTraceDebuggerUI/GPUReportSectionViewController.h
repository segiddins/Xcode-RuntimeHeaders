//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <GPUTraceDebuggerUI/GPUReportOutlineViewDelegate-Protocol.h>
#import <GPUTraceDebuggerUI/NSTableViewDelegate-Protocol.h>

@class DVTObservingToken, GPUBulletedViewBulletPainter, GPUReportOutlineView, GPUSharedTabUIState, NSArray, NSImageView, NSLayoutConstraint, NSMutableArray, NSScrollView, NSString, NSTableView, NSTextField, NSTreeController, NSView;

__attribute__((visibility("hidden")))
@interface GPUReportSectionViewController : NSViewController <GPUReportOutlineViewDelegate, NSTableViewDelegate>
{
    BOOL _containsUpdatedResults;
    NSLayoutConstraint *_scrollviewHeightConstraint;
    DVTObservingToken *_reportComponentsArrayObservingToken;
    GPUSharedTabUIState *_sharedTabState;
    GPUBulletedViewBulletPainter *_bluePainter;
    GPUBulletedViewBulletPainter *_greenPainter;
    NSScrollView *_editorScrollView;
    unsigned long long _previousContentViewHeight;
    BOOL _completedBuildingTree;
    NSMutableArray *_reportComponentsArray;
    NSView *_programPerformanceGraphKeyView;
    NSArray *_programPerformanceTotalItemArray;
    GPUReportOutlineView *_findingTable;
    GPUReportOutlineView *_programPerformanceTable;
    NSTableView *_programPerformanceTotalTable;
    NSImageView *_currentMSImage;
    NSImageView *_baselineMSImage;
    NSTextField *_baselineTextField;
    NSTextField *_currentMSTextField;
    NSTreeController *_treeController;
    NSLayoutConstraint *_prototypeWidthConstraint;
}

+ (id)listTextAttributes;
@property(retain, nonatomic) NSLayoutConstraint *prototypeWidthConstraint; // @synthesize prototypeWidthConstraint=_prototypeWidthConstraint;
@property(retain) NSTreeController *treeController; // @synthesize treeController=_treeController;
@property(retain) NSTextField *currentMSTextField; // @synthesize currentMSTextField=_currentMSTextField;
@property(retain) NSTextField *baselineTextField; // @synthesize baselineTextField=_baselineTextField;
@property(retain) NSImageView *baselineMSImage; // @synthesize baselineMSImage=_baselineMSImage;
@property(retain) NSImageView *currentMSImage; // @synthesize currentMSImage=_currentMSImage;
@property __weak NSTableView *programPerformanceTotalTable; // @synthesize programPerformanceTotalTable=_programPerformanceTotalTable;
@property(nonatomic) __weak GPUReportOutlineView *programPerformanceTable; // @synthesize programPerformanceTable=_programPerformanceTable;
@property(nonatomic) __weak GPUReportOutlineView *findingTable; // @synthesize findingTable=_findingTable;
@property(retain, nonatomic) NSArray *programPerformanceTotalItemArray; // @synthesize programPerformanceTotalItemArray=_programPerformanceTotalItemArray;
@property(retain, nonatomic) NSView *programPerformanceGraphKeyView; // @synthesize programPerformanceGraphKeyView=_programPerformanceGraphKeyView;
@property(nonatomic) BOOL completedBuildingTree; // @synthesize completedBuildingTree=_completedBuildingTree;
@property(retain, nonatomic) NSMutableArray *reportComponentsArray; // @synthesize reportComponentsArray=_reportComponentsArray;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableColumnDidResizeWidth:(id)arg1;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)stringValueForItem:(id)arg1;
- (id)prototypeNibForViewItem:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemWillExpand:(id)arg1;
- (void)_updateConstraints:(BOOL)arg1;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (void)performRowAction:(id)arg1;
- (void)traverseExpandedTreeNodes:(id)arg1 withActionBlock:(CDUnknownBlockType)arg2;
- (void)loadView;
- (id)_findEditorScrollView;
- (void)dealloc;
- (id)loadedOutlineView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 sharedTabState:(id)arg3 reportComponentsArray:(id)arg4 containsUpdatedResults:(BOOL)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

