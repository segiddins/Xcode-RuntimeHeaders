//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage;

@interface DVTMorphingDragImageView : NSView
{
    NSImage *startImage;
    NSImage *endImage;
    float progress;
}

@property(nonatomic) float progress; // @synthesize progress;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
@property(retain, nonatomic) NSImage *endImage; // @synthesize endImage;
@property(retain, nonatomic) NSImage *startImage; // @synthesize startImage;

@end

