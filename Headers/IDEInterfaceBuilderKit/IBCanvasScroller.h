//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAccessorizedScrollViewScroller.h>

@class IBCanvasScrollView;

@interface IBCanvasScroller : IBAccessorizedScrollViewScroller
{
    IBCanvasScrollView *_canvasScrollView;
}

+ (BOOL)isCompatibleWithOverlayScrollers;
- (void).cxx_destruct;
@property(nonatomic) __weak IBCanvasScrollView *canvasScrollView; // @synthesize canvasScrollView=_canvasScrollView;
- (void)setHidden:(BOOL)arg1;
- (void)setHiddenIgnoringCanUpdateScrollers:(BOOL)arg1;

@end

