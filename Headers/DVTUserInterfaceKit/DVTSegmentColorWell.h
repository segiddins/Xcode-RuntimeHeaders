//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTAbstractColorPicker.h>

@class NSImage, NSImageCell;

@interface DVTSegmentColorWell : DVTAbstractColorPicker
{
    NSImageCell *_iconCell;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)swatchRect;
- (double)swatchHeight;
- (void)mouseDown:(id)arg1;
- (id)effectiveBorderColor;
- (id)effectiveDarkColor;
- (id)effectiveLightColor;
@property(retain, nonatomic) NSImage *icon;

@end

