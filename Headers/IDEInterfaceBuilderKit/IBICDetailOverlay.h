//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray;

@interface IBICDetailOverlay : NSView
{
    NSArray *_dropIndicatorPaths;
    struct CGRect _bandSelectionRect;
}

@property(nonatomic) struct CGRect bandSelectionRect; // @synthesize bandSelectionRect=_bandSelectionRect;
@property(copy, nonatomic) NSArray *dropIndicatorPaths; // @synthesize dropIndicatorPaths=_dropIndicatorPaths;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)invalidateDrawingForPath:(id)arg1;

@end

