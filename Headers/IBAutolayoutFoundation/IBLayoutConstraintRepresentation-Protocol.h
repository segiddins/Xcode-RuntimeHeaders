//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBAutolayoutFoundation/NSObject-Protocol.h>

@class IBLayoutConstant, IBLayoutConstraintMultiplier, NSObject, NSString;
@protocol IBLayoutConstraintRepresentation;

@protocol IBLayoutConstraintRepresentation <NSObject>
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property(readonly, nonatomic) double scoringType;
@property(readonly, nonatomic) long long scoringClass;
@property(readonly, nonatomic) id containingViewRepresentation;
@property(readonly, nonatomic) double priority;
@property(readonly, nonatomic) IBLayoutConstant *constant;
@property(readonly, nonatomic) IBLayoutConstraintMultiplier *multiplier;
@property(readonly, nonatomic) unsigned long long secondAttribute;
@property(readonly, nonatomic) id secondItemRepresentation;
@property(readonly, nonatomic) long long relation;
@property(readonly, nonatomic) unsigned long long firstAttribute;
@property(readonly, nonatomic) id firstItemRepresentation;
- (unsigned long long)hashOfComponentsIgnoringScoring;
- (unsigned long long)hashOfComponents;
- (BOOL)hasComponentsEqualToComponentsOfRepresentationAllowingReversingIgnoringScoring:(NSObject<IBLayoutConstraintRepresentation> *)arg1;
- (BOOL)hasComponentsEqualToComponentsOfRepresentationAllowingReversing:(NSObject<IBLayoutConstraintRepresentation> *)arg1;
- (BOOL)hasComponentsEqualToComponentsOfRepresentation:(NSObject<IBLayoutConstraintRepresentation> *)arg1;
@end

