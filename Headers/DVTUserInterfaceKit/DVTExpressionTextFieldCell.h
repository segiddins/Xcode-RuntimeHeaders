//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTWarningTextFieldCell.h>

@class NSExpression, NSString;

@interface DVTExpressionTextFieldCell : DVTWarningTextFieldCell
{
    NSString *_initialStringValue;
}

@property(copy) NSString *initialStringValue; // @synthesize initialStringValue=_initialStringValue;
- (void).cxx_destruct;
@property(copy) NSExpression *expression;
- (BOOL)shouldShowWarning;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

