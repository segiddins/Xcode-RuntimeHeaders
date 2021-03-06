//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUGenericNavigableItem.h>

#import <GPUDebugger/GPUStringFilterableNavigableItem-Protocol.h>

@class GPUFilterTokenPredicate, GPUTraceShaderDebuggerExecutionHistoryItem, NSArray, NSString;

@interface GPUShaderExecutionHistoryNavigableItem : GPUGenericNavigableItem <GPUStringFilterableNavigableItem>
{
    NSArray *_cachedChildRepresentedObjects;
    GPUFilterTokenPredicate *_filterPredicate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GPUFilterTokenPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
- (void)invalidateChildItems;
@property(readonly, nonatomic) NSArray *childRepresentedObjects;
- (id)_filterChildren;
- (void)primitiveInvalidate;
- (id)initWithRepresentedObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) GPUTraceShaderDebuggerExecutionHistoryItem *representedObject; // @dynamic representedObject;
@property(readonly) Class superclass;

@end

