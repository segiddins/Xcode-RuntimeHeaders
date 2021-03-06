//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTWarningTextField.h>

@class DVTPredicateTextFieldCell, NSPredicate, NSString;

@interface DVTPredicateTextField : DVTWarningTextField
{
}

+ (void)initialize;
@property(copy) NSPredicate *predicate;
@property(copy) NSString *initialStringValue;
@property(retain) DVTPredicateTextFieldCell *cell;
- (BOOL)textShouldEndEditing:(id)arg1;
- (BOOL)abortEditing;
- (void)textDidBeginEditing:(id)arg1;

@end

