//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTWarningTextFieldCell.h>

@class NSPredicate, NSString;

@interface DVTPredicateTextFieldCell : DVTWarningTextFieldCell
{
    NSString *_initialStringValue;
}

@property(copy) NSString *initialStringValue; // @synthesize initialStringValue=_initialStringValue;
- (void).cxx_destruct;
@property(copy) NSPredicate *predicate;
- (BOOL)shouldShowWarning;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

