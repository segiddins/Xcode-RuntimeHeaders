//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBAutolayoutFoundation/IBLayoutConstraintMultiplier.h>

@class NSString;

@interface IBPercentageLayoutConstraintMultiplier : IBLayoutConstraintMultiplier
{
    NSString *_percentSignSuffix;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *percentSignSuffix; // @synthesize percentSignSuffix=_percentSignSuffix;
- (id)multiplierBySimplifyingExpression;
- (id)multiplierByIncrementing;
- (id)multiplierByDecrementing;
- (id)multiplierByInverting;
- (id)initWithValue:(double)arg1 percentSignSuffix:(id)arg2;

@end

