//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DTGraphKit/NSObject-Protocol.h>

@class CALayer;

@protocol CALayoutManager <NSObject>

@optional
- (void)layoutSublayersOfLayer:(CALayer *)arg1;
- (void)invalidateLayoutOfLayer:(CALayer *)arg1;
- (struct CGSize)preferredSizeOfLayer:(CALayer *)arg1;
@end

