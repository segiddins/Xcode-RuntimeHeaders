//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/_IDEDistributionMethodUIWrapper.h>

@class NSArray;

@interface _IDEDistributionMethodGroupUIWrapper : _IDEDistributionMethodUIWrapper
{
    NSArray *_distributionMethods;
    unsigned long long _selectedMethodIndex;
}

+ (id)keyPathsForValuesAffectingDistributionMethod;
+ (id)wrapperForDistributionMethods:(id)arg1;
@property unsigned long long selectedMethodIndex; // @synthesize selectedMethodIndex=_selectedMethodIndex;
@property(readonly) NSArray *distributionMethods; // @synthesize distributionMethods=_distributionMethods;
- (void).cxx_destruct;
- (BOOL)isGroup;
- (id)title;
- (id)distributionMethod;

@end

