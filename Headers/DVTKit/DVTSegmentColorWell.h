//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTAbstractColorPicker.h>

@class NSImage;

@interface DVTSegmentColorWell : DVTAbstractColorPicker
{
    NSImage *_icon;
}

@property(copy, nonatomic) NSImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)swatchRect;
- (double)swatchHeight;
- (void)mouseDown:(id)arg1;
- (id)effectiveBorderColor;
- (id)effectiveDarkColor;
- (id)effectiveLightColor;

@end
