//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/_DVTFilterTokenStateValue.h>

@class NSArray;

@interface _DVTFilterExpressionStateValue : _DVTFilterTokenStateValue
{
    NSArray *_enabledButtonFilterIdentifiers;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSArray *enabledButtonFilterIdentifiers; // @synthesize enabledButtonFilterIdentifiers=_enabledButtonFilterIdentifiers;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTokenFieldObjectValue:(id)arg1 operatorType:(int)arg2 recentFilterItems:(id)arg3 enabledButtonFilterIdentifiers:(id)arg4;

@end

