//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBLayoutConstraintMultiplier.h>

@class NSString;

@interface IBRatioLayoutConstraintMultiplier : IBLayoutConstraintMultiplier
{
    double _numerator;
    double _denominator;
    NSString *_separator;
}

@property(readonly, nonatomic) NSString *separator; // @synthesize separator=_separator;
@property(readonly, nonatomic) double denominator; // @synthesize denominator=_denominator;
@property(readonly, nonatomic) double numerator; // @synthesize numerator=_numerator;
- (void).cxx_destruct;
- (id)multiplierBySimplifyingExpression;
- (id)multiplierByIncrementing;
- (id)multiplierByDecrementing;
- (id)multiplierByInverting;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithNumerator:(double)arg1 denominator:(double)arg2 separator:(id)arg3;

@end

