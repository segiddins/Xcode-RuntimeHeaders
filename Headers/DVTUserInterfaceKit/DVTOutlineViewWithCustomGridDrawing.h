//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTOutlineView.h>

@interface DVTOutlineViewWithCustomGridDrawing : DVTOutlineView
{
    BOOL _skipGridLinesOnLastRow;
    BOOL _drawsGridLinesForEmptyContent;
}

@property BOOL drawsGridLinesForEmptyContent; // @synthesize drawsGridLinesForEmptyContent=_drawsGridLinesForEmptyContent;
@property BOOL skipGridLinesOnLastRow; // @synthesize skipGridLinesOnLastRow=_skipGridLinesOnLastRow;
- (void)drawGridInClipRect:(struct CGRect)arg1;
- (void)_DVTOutlineViewWithCustomGridDrawingCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

