//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSString;

@interface XCSUIStackedBarChartBar : NSObject
{
    NSString *_identifier;
    NSString *_name;
    NSColor *_fillColor;
    NSColor *_strokeColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) NSColor *fillColor; // @synthesize fillColor=_fillColor;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 fillColor:(id)arg3 strokeColor:(id)arg4;

@end

