//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTWarningTextFieldCell.h>

@class NSPredicate, NSString;

@interface DVTPredicateTextFieldCell : DVTWarningTextFieldCell
{
    NSString *_initialStringValue;
}

- (void).cxx_destruct;
@property(copy) NSString *initialStringValue; // @synthesize initialStringValue=_initialStringValue;
@property(copy) NSPredicate *predicate;
- (BOOL)shouldShowWarning;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

