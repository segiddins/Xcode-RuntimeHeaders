//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSControl.h>

@class NSMutableArray, SKColorRampStop, SKColorWell;
@protocol SKColorRampControlDelegate;

@interface SKColorRampControl : NSControl
{
    SKColorWell *_fakeColorWell;
    NSMutableArray *_stops;
    unsigned long long _selectedStopIndex;
    BOOL _didDragSelected;
    BOOL _shouldDeleteSelected;
    BOOL _isInputActive;
    id <SKColorRampControlDelegate> _delegate;
}

@property(nonatomic) __weak id <SKColorRampControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isInputActive; // @synthesize isInputActive=_isInputActive;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)displayKeyframeSequence:(id)arg1;
- (id)createKeyframeSequence;
- (id)colorStopAtLocation:(double)arg1;
- (void)removeColorStop:(id)arg1;
- (void)removeAllColorStops;
- (void)addColorStop:(id)arg1;
- (void)_sortColorStops;
- (id)colorStops;
- (void)mouseUp:(id)arg1;
- (void)activateColorPanel;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
@property(retain) SKColorRampStop *selectedColorStop;
- (void)changeColor:(id)arg1;
- (double)_rampLocationOfPoint:(struct CGPoint)arg1;
- (struct CGRect)_colorRampRect;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)deactivate;

@end

