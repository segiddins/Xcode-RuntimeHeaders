//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUTraceOutlineItem.h>

@class GPUTraceAPIItem;

@interface GPUTraceFramebufferItem : GPUTraceOutlineItem
{
}

- (id)APIItem;
- (id)initWithController:(id)arg1 parent:(id)arg2;
- (id)categoryIdentifier;
- (BOOL)navigableItem_isLeaf;
- (id)navigableItem_image;
- (id)navigableItem_name;

// Remaining properties
@property(readonly, nonatomic) __weak GPUTraceAPIItem *parent; // @dynamic parent;

@end

