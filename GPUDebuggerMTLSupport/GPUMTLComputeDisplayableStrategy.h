//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GPUMTLDisplayableStrategy.h"

@class GPUMTLTraceTextureDisplayableItem, NSString;

__attribute__((visibility("hidden")))
@interface GPUMTLComputeDisplayableStrategy : NSObject <GPUMTLDisplayableStrategy>
{
    GPUMTLTraceTextureDisplayableItem *_displayableItem;
}

@property(nonatomic) __weak GPUMTLTraceTextureDisplayableItem *displayableItem; // @synthesize displayableItem=_displayableItem;
- (void).cxx_destruct;
- (id)loadDisplaySet;
- (id)initWithTextureDisplayable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

