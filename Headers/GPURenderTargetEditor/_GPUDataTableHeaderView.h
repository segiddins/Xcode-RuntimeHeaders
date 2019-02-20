//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableHeaderView.h>

@class NSArray, NSColor, NSDictionary, NSGradient;

__attribute__((visibility("hidden")))
@interface _GPUDataTableHeaderView : NSTableHeaderView
{
    NSDictionary *_fontDrawingAttributes;
    NSColor *_backgroundColor;
    NSColor *_borderColor;
    NSGradient *_borderGradient;
    NSArray *_columnGroups;
}

@property(retain, nonatomic) NSArray *columnGroups; // @synthesize columnGroups=_columnGroups;
- (void).cxx_destruct;
- (void)drawGroupedColumnWithTitle:(id)arg1 inRect:(struct CGRect)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawHeaderBackgroundInRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
