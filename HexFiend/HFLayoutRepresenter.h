//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HexFiend/HFRepresenter.h>

@class NSMutableArray;

@interface HFLayoutRepresenter : HFRepresenter
{
    NSMutableArray *representers;
    BOOL maximizesBytesPerLine;
}

- (void)controllerDidChange:(unsigned long long)arg1;
- (double)minimumViewWidthForLayoutInProposedWidth:(double)arg1;
- (BOOL)maximizesBytesPerLine;
- (void)setMaximizesBytesPerLine:(BOOL)arg1;
- (id)createView;
- (void)initializeView;
- (void)frameChanged:(id)arg1;
- (void)removeRepresenter:(id)arg1;
- (void)addRepresenter:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)invalidateRepresenter;
- (void)dealloc;
- (id)init;
- (id)representers;
- (void)performLayout;
- (void)_distributeVerticalSpace:(double)arg1 toArraysOfLayoutInfos:(id)arg2;
- (BOOL)_addVerticalHeight:(double)arg1 andOffset:(double)arg2 toLayoutInfos:(id)arg3;
- (BOOL)_anyLayoutInfoIsVerticallyResizable:(id)arg1;
- (unsigned long long)_computeBytesPerLineForArraysOfLayoutInfos:(id)arg1 forLayoutInRect:(struct CGRect)arg2;
- (double)minimumViewWidthForBytesPerLine:(unsigned long long)arg1;
- (void)_layoutInfosHorizontally:(id)arg1 inRect:(struct CGRect)arg2 withBytesPerLine:(unsigned long long)arg3;
- (void)_applyYLocation:(double)arg1 andMinHeight:(double)arg2 toInfos:(id)arg3;
- (double)_computeMinHeightForLayoutInfos:(id)arg1;
- (struct CGRect)boundsRectForLayout;
- (id)arraysOfLayoutInfos;

@end

