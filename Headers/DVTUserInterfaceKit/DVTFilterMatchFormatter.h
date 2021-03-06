//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class DVTRangeArray, NSArray, NSString;

@interface DVTFilterMatchFormatter : NSFormatter
{
    long long _backgroundStyle;
    NSArray *_filterMatchStrings;
    DVTRangeArray *_filterMatchRanges;
    NSString *_filterMatchString;
}

+ (id)_filterMatchAttributesForHighContrastDarkBackground;
+ (id)_filterMatchAttributesForDarkBackground;
+ (id)_filterMatchAttributesForLightBackground;
+ (id)filterMatchAttributesForBackgroundStyle:(long long)arg1;
- (void).cxx_destruct;
@property(copy) NSString *filterMatchString; // @synthesize filterMatchString=_filterMatchString;
@property(copy) DVTRangeArray *filterMatchRanges; // @synthesize filterMatchRanges=_filterMatchRanges;
@property(copy, nonatomic) NSArray *filterMatchStrings; // @synthesize filterMatchStrings=_filterMatchStrings;
@property long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
- (void)_highlightFilterMatchSubstringsIfNecessary:(id)arg1;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)stringForObjectValue:(id)arg1;

@end

