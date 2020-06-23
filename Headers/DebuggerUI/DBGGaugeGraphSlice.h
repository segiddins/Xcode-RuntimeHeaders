//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <DebuggerUI/IDEGraphDelegate-Protocol.h>

@class DVTBorderedView, IDEGraph, NSLayoutConstraint, NSString, NSTextField;

@interface DBGGaugeGraphSlice : IDEViewController <IDEGraphDelegate>
{
    BOOL _shouldRemoveThreadQoSField;
    DVTBorderedView *_titleView;
    DVTBorderedView *_graphView;
    NSTextField *_threadIDField;
    NSTextField *_threadQoSField;
    NSLayoutConstraint *_threadIDFieldTopConstraint;
}

@property __weak NSLayoutConstraint *threadIDFieldTopConstraint; // @synthesize threadIDFieldTopConstraint=_threadIDFieldTopConstraint;
@property __weak NSTextField *threadQoSField; // @synthesize threadQoSField=_threadQoSField;
@property __weak NSTextField *threadIDField; // @synthesize threadIDField=_threadIDField;
@property __weak DVTBorderedView *graphView; // @synthesize graphView=_graphView;
@property __weak DVTBorderedView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (id)colorForChartNamed:(id)arg1;
- (void)removeThreadQoSField;
- (void)_removeThreadQoSField;
- (void)addBottomBorders;
- (void)removeBottomBorders;
- (void)enqueueValues:(id)arg1;
- (void)enqueueValue:(id)arg1;
- (void)loadView;
@property(readonly) NSString *graphTitle;
@property(readonly) IDEGraph *graph;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

