//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class IBICStickerFrameSet, NSButton, NSTrackingArea;

@interface IBICStickerFrameSetPreview : NSView
{
    NSButton *_playPauseButton;
    long long _frameIndex;
    NSTrackingArea *_primaryTrackingArea;
    BOOL _playing;
    IBICStickerFrameSet *_frameSet;
    CDStruct_c519178c _imagePadding;
}

+ (CDStruct_c519178c)defaultImagePadding;
@property(nonatomic) CDStruct_c519178c imagePadding; // @synthesize imagePadding=_imagePadding;
@property(retain, nonatomic) IBICStickerFrameSet *frameSet; // @synthesize frameSet=_frameSet;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateTrackingAreas;
- (void)playOrPause:(id)arg1;
- (void)stopPlayback:(id)arg1;
- (void)startPlayback:(id)arg1;
- (void)incrementToNextFrame;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) long long frameCount;
@property(nonatomic) long long frameIndex;
- (id)initWithFrame:(struct CGRect)arg1;

@end

