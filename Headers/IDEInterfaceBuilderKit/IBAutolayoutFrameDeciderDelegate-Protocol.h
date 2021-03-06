//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBAutolayoutFrameDecider, NSObject;
@protocol IBAutolayoutItem;

@protocol IBAutolayoutFrameDeciderDelegate <NSObject>

@optional
- (BOOL)shouldConsiderAutolayoutStatusWhenPropagatingFramesForFrameDecider:(IBAutolayoutFrameDecider *)arg1;
- (void)frameDecider:(IBAutolayoutFrameDecider *)arg1 didPropagateFrameSize:(struct CGSize)arg2 toView:(NSObject<IBAutolayoutItem> *)arg3;
- (void)frameDecider:(IBAutolayoutFrameDecider *)arg1 didPropagateFrame:(struct CGRect)arg2 toView:(NSObject<IBAutolayoutItem> *)arg3;
@end

