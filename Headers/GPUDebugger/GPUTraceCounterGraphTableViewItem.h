//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebugger/GPUFilterableObject-Protocol.h>

@class GPUTraceCounterGraphDataItem, NSArray, NSImage, NSMutableSet, NSSet, NSString;
@protocol GPUTraceCounterGraphTableViewDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface GPUTraceCounterGraphTableViewItem : NSObject <GPUFilterableObject>
{
    NSString *_drawLabel;
    NSString *_encoderLabel;
    NSString *_pipelineLabel;
    NSImage *_icon;
    NSMutableSet *_filterItems;
    id <GPUTraceCounterGraphTableViewDataSourceDelegate> _delegate;
    GPUTraceCounterGraphDataItem *_dataItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GPUTraceCounterGraphDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) NSSet *filterItems; // @synthesize filterItems=_filterItems;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSImage *icon;
@property(readonly, nonatomic) NSString *drawLabel;
@property(readonly, nonatomic) NSString *label;
@property(readonly, nonatomic) NSString *encoderLabel;
@property(readonly, nonatomic) NSString *pipelineLabel;
- (id)_parentEncoderItem;
- (long long)compare:(id)arg1;
- (id)initWithDataItem:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *filterableChildObjects;
@property(readonly, nonatomic) NSSet *parentFilterItems;
@property(readonly) Class superclass;

@end

