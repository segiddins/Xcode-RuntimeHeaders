//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSSlider.h>

@class NSColor, NSFont, NSNumberFormatter, NSString;

@interface DVTLabeledSlider : NSSlider
{
    NSString *_maxValueLabelOverride;
}

+ (Class)cellClass;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *maxValueLabelOverride; // @synthesize maxValueLabelOverride=_maxValueLabelOverride;
@property(copy, nonatomic) NSString *minValueLabelOverride;
@property(retain, nonatomic) NSColor *labelColor;
@property(retain, nonatomic) NSFont *labelFont;
@property(retain, nonatomic) NSNumberFormatter *labelFormatter;
- (id)sliderCell;

@end

