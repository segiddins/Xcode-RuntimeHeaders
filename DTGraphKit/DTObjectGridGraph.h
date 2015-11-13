//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <DTGraphKit/DTObjectGridGraph-Protocol.h>

@class NSString;
@protocol DTObjectGridGraph, DTObjectGridGraphDataSource, DTObjectGridGraphDelegate, DTObjectGridNode, DTObjectGridReference;

@interface DTObjectGridGraph : NSView <DTObjectGridGraph>
{
    NSView<DTObjectGridGraph> *_contentView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <DTObjectGridReference> selectedReference;
@property(readonly, nonatomic) id <DTObjectGridNode> selectedNode;
- (void)deselectAll;
- (void)selectReferenceWithIdentifier:(unsigned int)arg1;
- (void)selectNodeWithIdentifier:(unsigned int)arg1;
- (void)setPivotNodeIdentifier:(unsigned int)arg1 animated:(BOOL)arg2;
@property(nonatomic) unsigned int pivotNodeIdentifier;
@property(nonatomic) struct CGSize gridCellSize;
@property(nonatomic) __weak id <DTObjectGridGraphDelegate> delegate;
@property(nonatomic) __weak id <DTObjectGridGraphDataSource> dataSource;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

