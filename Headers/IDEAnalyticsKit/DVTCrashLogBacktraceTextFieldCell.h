//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class DVTCrashLogParsedStackFrame, NSMutableArray;

@interface DVTCrashLogBacktraceTextFieldCell : NSTextFieldCell
{
    NSMutableArray *_rangeValues;
    DVTCrashLogParsedStackFrame *_parsedStackFrame;
    struct _NSRange _emphasizedRange;
}

+ (id)_filterMatchAttributesForDarkBackground;
+ (id)_filterMatchAttributesForLightBackground;
- (void).cxx_destruct;
@property(retain, nonatomic) DVTCrashLogParsedStackFrame *parsedStackFrame; // @synthesize parsedStackFrame=_parsedStackFrame;
@property(nonatomic) struct _NSRange emphasizedRange; // @synthesize emphasizedRange=_emphasizedRange;
- (id)attributedStringValue;

@end
