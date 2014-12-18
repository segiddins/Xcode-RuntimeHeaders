//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAutolayoutFrameDecider.h>

@class NSView;

@interface IBAutolayoutViewSizingFrameDecider : IBAutolayoutFrameDecider
{
    NSView *_sizingView;
}

+ (void)decideAndSetFramesOfEntireViewHierarchyForSizingView:(id)arg1 toLayoutSize:(struct CGSize)arg2 suggestedLayoutOrigin:(struct CGPoint)arg3 allowTopLevelResize:(BOOL)arg4 layoutInfo:(id)arg5 delegate:(id)arg6;
- (void).cxx_destruct;
- (void)decideAndSetFramesOfEntireViewHierarchyForSizingViewToLayoutSize:(struct CGSize)arg1 suggestedLayoutOrigin:(struct CGPoint)arg2;
- (id)initWithArbitrationUnit:(id)arg1 driverOptions:(id)arg2 delegate:(id)arg3 sizingView:(id)arg4 statusInitializationBlock:(CDUnknownBlockType)arg5;

@end

