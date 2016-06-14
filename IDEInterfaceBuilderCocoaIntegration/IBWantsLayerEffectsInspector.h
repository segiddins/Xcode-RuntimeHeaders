//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBInspectorViewController.h>

#import <IDEInterfaceBuilderCocoaIntegration/NSTableViewDelegate-Protocol.h>

@class DVTTableView, IBWantsLayerContainerView, NSArrayController, NSString, NSView;

@interface IBWantsLayerEffectsInspector : IBInspectorViewController <NSTableViewDelegate>
{
    NSArrayController *renderTreeViewsArrayController;
    IBWantsLayerContainerView *containerView;
    DVTTableView *tableView;
    NSView *lastInspectedView;
}

+ (id)keyPathsForValuesAffectingInspectedView;
- (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)loadView;
- (void)setContent:(id)arg1;
- (id)inspectedView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

