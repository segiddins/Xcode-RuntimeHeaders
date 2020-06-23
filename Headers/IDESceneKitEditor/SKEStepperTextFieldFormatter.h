//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSNumberFormatter.h>

@class NSFormatter, NSString;

@interface SKEStepperTextFieldFormatter : NSNumberFormatter
{
    NSFormatter *_wrappedFormatter;
    NSString *_prefix;
    NSString *_suffix;
}

+ (id)_labelAttributes;
- (void).cxx_destruct;
@property(copy) NSString *suffix; // @synthesize suffix=_suffix;
@property(copy) NSString *prefix; // @synthesize prefix=_prefix;
@property(copy) NSFormatter *wrappedFormatter; // @synthesize wrappedFormatter=_wrappedFormatter;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)stringForObjectValue:(id)arg1;
- (id)init;

@end

