//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUTraceOutlineItem.h>

@class GPUTraceCommandEncoderGroupItem, GPUTracePixelHistoryDrawItem, NSDictionary, NSMutableDictionary, NSObject, NSSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GPUTracePixelHistoryItem : GPUTraceOutlineItem
{
    GPUTracePixelHistoryDrawItem *_singleSkeleton;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_pixelHistory;
    long long _x;
    long long _y;
    GPUTraceCommandEncoderGroupItem *_encoderItem;
    NSSet *_textures;
    NSDictionary *_textureRenderingAttributes;
    NSMutableDictionary *_pixelPreviews;
    NSMutableDictionary *_pixelLabels;
}

+ (BOOL)pixelHistoryEnabled;
+ (id)keyPathsForValuesAffectingNavigableItem_childRepresentedObjects;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *pixelLabels; // @synthesize pixelLabels=_pixelLabels;
@property(retain, nonatomic) NSMutableDictionary *pixelPreviews; // @synthesize pixelPreviews=_pixelPreviews;
@property(retain, nonatomic) NSDictionary *textureRenderingAttributes; // @synthesize textureRenderingAttributes=_textureRenderingAttributes;
@property(readonly, nonatomic) NSSet *textures; // @synthesize textures=_textures;
@property(readonly, nonatomic) GPUTraceCommandEncoderGroupItem *encoderItem; // @synthesize encoderItem=_encoderItem;
@property(readonly, nonatomic) long long y; // @synthesize y=_y;
@property(readonly, nonatomic) long long x; // @synthesize x=_x;
- (id)processPixelPreview:(id)arg1 withPixelFormat:(unsigned long long)arg2 renderingAttributes:(id)arg3 showDepth:(BOOL)arg4 resourceManager:(id)arg5;
- (void)processPixelPreviews;
- (void)rebuildPixelHistory:(id)arg1 updateState:(CDUnknownBlockType)arg2 childrenWillChange:(CDUnknownBlockType)arg3 childrenDidChange:(CDUnknownBlockType)arg4 requestPixelHistoryDrawItem:(id)arg5 options:(id)arg6;
- (void)collectPixelHistory:(id)arg1 updateState:(CDUnknownBlockType)arg2 childrenWillChange:(CDUnknownBlockType)arg3 childrenDidChange:(CDUnknownBlockType)arg4 requestPixelHistoryDrawItem:(id)arg5 options:(id)arg6;
- (BOOL)isPixelHistoryAvailable;
- (id)getSkeletonDrawItem:(id)arg1;
- (void)clearPixelHistoryCache;
- (void)_reset;
- (void)resetWithTextures:(id)arg1 atX:(long long)arg2 y:(long long)arg3;
- (void)resetWithEncoderItem:(id)arg1 atX:(long long)arg2 y:(long long)arg3;
- (id)initWithController:(id)arg1 parent:(id)arg2;
- (id)navigableItem_childRepresentedObjects;
- (BOOL)navigableItem_isLeaf;

@end

