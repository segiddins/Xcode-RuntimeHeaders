//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GPUDebuggerFoundation/GPUTraceProgramItem.h>

@class GPUTraceGroupItem;

@interface GPUTraceProgramGroup : GPUTraceProgramItem
{
    GPUTraceGroupItem *_relatedDisplayablesGroupItem;
}

@property(readonly, nonatomic) GPUTraceGroupItem *relatedDisplayablesGroupItem; // @synthesize relatedDisplayablesGroupItem=_relatedDisplayablesGroupItem;
- (void).cxx_destruct;
- (unsigned int)functionIndex;
- (id)associatedDisplayableItem;
- (void)primitiveInvalidate;
- (void)addNewDisplayableItem:(id)arg1;
- (id)relatedDisplayableItems;

@end

