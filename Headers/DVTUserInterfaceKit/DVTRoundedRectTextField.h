//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class NSColor;

@interface DVTRoundedRectTextField : NSTextField
{
    double _cornerRadius;
    NSColor *_textAndBorderColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *textAndBorderColor; // @synthesize textAndBorderColor=_textAndBorderColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)drawRect:(struct CGRect)arg1;

@end

