//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUTraceOutlineItem.h>

@class GPUTraceAPIItem, NSDictionary;

__attribute__((visibility("hidden")))
@interface GPUTracePixelHistoryDrawItem : GPUTraceOutlineItem
{
    GPUTraceAPIItem *_apiItem;
    NSDictionary *_pixelAtDrawDictionary;
    GPUTracePixelHistoryDrawItem *_previousPixelHistoryDrawItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GPUTracePixelHistoryDrawItem *previousPixelHistoryDrawItem; // @synthesize previousPixelHistoryDrawItem=_previousPixelHistoryDrawItem;
@property(retain, nonatomic) NSDictionary *pixelAtDrawDictionary; // @synthesize pixelAtDrawDictionary=_pixelAtDrawDictionary;
- (id)geniusGeometryItem;
- (id)geniusFramebufferItem;
- (id)APIItem;
- (long long)compareFunctionIndex:(id)arg1;
- (BOOL)isAPIItemNewEncoder;
- (id)previousPixelHistoryDrawItemWithTextureID:(id)arg1;
- (id)initWithController:(id)arg1 parent:(id)arg2 apiItem:(id)arg3;
- (id)initWithController:(id)arg1 parent:(id)arg2 realFunctionIndex:(int)arg3;
- (id)navigableItem_image;
- (id)navigableItem_name;
- (BOOL)navigableItem_isLeaf;

@end

