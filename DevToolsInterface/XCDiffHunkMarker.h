//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class XCDiffComparatorView, XCDiffDescriptor;

@interface XCDiffHunkMarker : NSObject
{
    XCDiffComparatorView *_comparatorView;
    XCDiffDescriptor *_descriptor;
    struct CGRect _leftHunkRect;
    struct CGRect _rightHunkRect;
    struct CGRect _mergeHunkRect;
    struct _XCDiffHunkMarkerFlags _dhmFlags;
}

+ (void)initialize;
- (id)hunkHitTestPath;
- (id)hunkFillPath;
- (id)hunkStrokePath;
- (id)_hunkMarkerPathWithType:(int)arg1;
- (struct CGRect)mergeRowRectForRow:(long long)arg1;
- (long long)mergeRowForPoint:(struct CGPoint)arg1;
- (struct CGRect)rightRowRectForRow:(long long)arg1;
- (long long)rightRowForPoint:(struct CGPoint)arg1;
- (struct CGRect)leftRowRectForRow:(long long)arg1;
- (long long)leftRowForPoint:(struct CGPoint)arg1;
- (void)getLeftRowRect:(struct CGRect *)arg1 rightRowRect:(struct CGRect *)arg2 mergeRowRect:(struct CGRect *)arg3 forRow:(long long)arg4;
- (void)getLeftRow:(long long *)arg1 rightRow:(long long *)arg2 mergeRow:(long long *)arg3 forPoint:(struct CGPoint)arg4;
- (void)invalidateHunkRects;
- (BOOL)validateMergeHunkRect;
- (BOOL)validateRightHunkRect;
- (BOOL)validateLeftHunkRect;
- (struct CGRect)drawingMergeHunkRect;
- (struct CGRect)mergeHunkRect;
- (void)setMergeHunkRect:(struct CGRect)arg1;
- (struct CGRect)drawingRightHunkRect;
- (struct CGRect)rightHunkRect;
- (void)setRightHunkRect:(struct CGRect)arg1;
- (struct CGRect)drawingLeftHunkRect;
- (struct CGRect)leftHunkRect;
- (void)setLeftHunkRect:(struct CGRect)arg1;
- (id)diffDescriptor;
- (void)setDiffDescriptor:(id)arg1;
- (id)diffComparatorView;
- (void)setDiffComparatorView:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithDiffComparatorView:(id)arg1 diffDescriptor:(id)arg2;

@end

