//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebuggerMTLSupport/NSObject-Protocol.h>

@class DYFuture, GPUMTLTraceTextureDisplayableItem;

@protocol GPUMTLDisplayableStrategy <NSObject>
@property(nonatomic) __weak GPUMTLTraceTextureDisplayableItem *displayableItem;
- (DYFuture *)loadDisplaySet;
- (id)initWithTextureDisplayable:(GPUMTLTraceTextureDisplayableItem *)arg1;
@end

