//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSTextField, XCRefactoringTransformationSetUpModule;

@interface XCRefactoringSetUpInputFormatter : NSFormatter
{
    XCRefactoringTransformationSetUpModule *transformationSetUpModule;
    NSTextField *textField;
}

- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (BOOL)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (id)stringForObjectValue:(id)arg1;
- (void)awakeFromNib;

@end

