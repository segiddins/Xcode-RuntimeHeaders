//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUToolsServices/DYInvestigatorRecommendationItem.h>

@class NSArray, NSMutableArray;

@interface DYInvestigatorRecommendationItemList : DYInvestigatorRecommendationItem
{
    NSMutableArray *value;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *value; // @synthesize value;
- (void)addString:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithArray:(id)arg1;
- (id)init;

@end

