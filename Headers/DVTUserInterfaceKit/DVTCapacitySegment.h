//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSColor, NSString;

@interface DVTCapacitySegment : NSObject
{
    double _value;
    NSAttributedString *_valueString;
    NSColor *_color;
    NSString *_label;
}

- (void).cxx_destruct;
@property(copy) NSString *label; // @synthesize label=_label;
@property(retain) NSColor *color; // @synthesize color=_color;
@property(copy) NSAttributedString *valueString; // @synthesize valueString=_valueString;
@property double value; // @synthesize value=_value;
- (id)initWithValue:(double)arg1 color:(id)arg2 label:(id)arg3 valueString:(id)arg4;
- (id)initWithValue:(double)arg1 color:(id)arg2 label:(id)arg3;

@end

