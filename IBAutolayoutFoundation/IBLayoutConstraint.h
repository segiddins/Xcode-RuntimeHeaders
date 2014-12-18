//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBLayoutConstraintRepresentation.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IBLayoutConstant, IBLayoutConstraintMultiplier, NSObject<IBAutolayoutItem>, NSString;

@interface IBLayoutConstraint : NSObject <NSCopying, NSCoding, IBLayoutConstraintRepresentation>
{
    BOOL _contentTypeNeedsToBeInferred;
    BOOL _placeholder;
    NSObject<IBAutolayoutItem> *_firstItem;
    unsigned long long _firstAttribute;
    long long _relation;
    NSObject<IBAutolayoutItem> *_secondItem;
    unsigned long long _secondAttribute;
    IBLayoutConstraintMultiplier *_multiplier;
    IBLayoutConstant *_constant;
    double _priority;
    NSObject<IBAutolayoutItem> *_containingView;
    long long _contentType;
    long long _scoringClass;
    double _scoringType;
}

+ (id)dvt_keysToSkipWeakReferenceObservingValidation;
+ (Class)archivableRepresentationClass;
+ (id)keyPathsForValuesAffectingUserDefined;
+ (id)keyPathsForValuesAffectingContentType;
+ (double)minimumPriority;
+ (double)maximumPriority;
+ (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 layoutInfo:(id)arg5;
+ (id)explicitLayoutConstraintWithItem:(id)arg1 attribute:(unsigned long long)arg2 constant:(id)arg3 layoutInfo:(id)arg4;
+ (id)explicitLayoutConstraintWithFirstItem:(id)arg1 firstAttribute:(unsigned long long)arg2 relation:(long long)arg3 secondItem:(id)arg4 secondAttribute:(unsigned long long)arg5 constant:(id)arg6 layoutInfo:(id)arg7;
+ (id)systemRequiredLayoutConstraintWithItem:(id)arg1 attribute:(unsigned long long)arg2 constant:(id)arg3 layoutInfo:(id)arg4;
+ (id)systemRequiredLayoutConstraintWithFirstItem:(id)arg1 firstAttribute:(unsigned long long)arg2 relation:(long long)arg3 secondItem:(id)arg4 secondAttribute:(unsigned long long)arg5 constant:(id)arg6 layoutInfo:(id)arg7;
+ (id)userDefinedLayoutConstraintWithItem:(id)arg1 attribute:(unsigned long long)arg2 constant:(id)arg3 layoutInfo:(id)arg4;
+ (id)userDefinedLayoutConstraintWithFirstItem:(id)arg1 firstAttribute:(unsigned long long)arg2 relation:(long long)arg3 secondItem:(id)arg4 secondAttribute:(unsigned long long)arg5 constant:(id)arg6 layoutInfo:(id)arg7;
+ (id)explicitLayoutConstraintWithItem:(id)arg1 attribute:(unsigned long long)arg2 constant:(id)arg3;
+ (id)explicitLayoutConstraintWithFirstItem:(id)arg1 firstAttribute:(unsigned long long)arg2 relation:(long long)arg3 secondItem:(id)arg4 secondAttribute:(unsigned long long)arg5 constant:(id)arg6;
+ (id)systemRequiredLayoutConstraintWithItem:(id)arg1 attribute:(unsigned long long)arg2 constant:(id)arg3;
+ (id)systemRequiredLayoutConstraintWithFirstItem:(id)arg1 firstAttribute:(unsigned long long)arg2 relation:(long long)arg3 secondItem:(id)arg4 secondAttribute:(unsigned long long)arg5 constant:(id)arg6;
+ (id)userDefinedLayoutConstraintWithItem:(id)arg1 attribute:(unsigned long long)arg2 constant:(id)arg3;
+ (id)userDefinedLayoutConstraintWithFirstItem:(id)arg1 firstAttribute:(unsigned long long)arg2 relation:(long long)arg3 secondItem:(id)arg4 secondAttribute:(unsigned long long)arg5 constant:(id)arg6;
@property(nonatomic, getter=isPlaceholder) BOOL placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) double scoringType; // @synthesize scoringType=_scoringType;
@property(nonatomic) long long scoringClass; // @synthesize scoringClass=_scoringClass;
@property(nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) NSObject<IBAutolayoutItem> *containingView; // @synthesize containingView=_containingView;
@property(nonatomic) double priority; // @synthesize priority=_priority;
@property(retain, nonatomic) IBLayoutConstant *constant; // @synthesize constant=_constant;
@property(retain, nonatomic) IBLayoutConstraintMultiplier *multiplier; // @synthesize multiplier=_multiplier;
@property(nonatomic) unsigned long long secondAttribute; // @synthesize secondAttribute=_secondAttribute;
@property(nonatomic) NSObject<IBAutolayoutItem> *secondItem; // @synthesize secondItem=_secondItem;
@property(nonatomic) long long relation; // @synthesize relation=_relation;
@property(nonatomic) unsigned long long firstAttribute; // @synthesize firstAttribute=_firstAttribute;
@property(nonatomic) NSObject<IBAutolayoutItem> *firstItem; // @synthesize firstItem=_firstItem;
- (void).cxx_destruct;
- (Class)classForArchiver;
- (void)ibVerifyAfterUnarchivingWithLayoutInfo:(id)arg1;
- (id)convertConstantToView:(id)arg1;
@property(readonly, nonatomic, getter=isInstallable) BOOL installable;
- (BOOL)satisfyConstantUpdatingIfNeededWithLayoutInfo:(id)arg1 substitutingCurrentConstant:(id)arg2 context:(id)arg3;
- (unsigned long long)satisfiabilityStateAccordingToFrameworkMetricsWithLayoutDirection:(long long)arg1 substitutingConstant:(id)arg2 returningCurrentCanvasConstant:(double *)arg3 differenceBetweenDeclaredConstantAndCurrentCanvasConstant:(double *)arg4 context:(id)arg5;
- (double)roundingAdjustmentWithUserInterfaceLayoutDirection:(long long)arg1;
- (CDStruct_474337f7)geometricDescriptionInCoordinateSpaceOfView:(id)arg1 userInterfaceLayoutDirection:(long long)arg2;
- (id)suggestedViewForGeometricDescription;
- (CDStruct_474337f7)relativeGeometricDescriptionInCoordinateSpaceOfView:(id)arg1 userInterfaceLayoutDirection:(long long)arg2;
- (CDStruct_474337f7)absoluteGeometricDescriptionInCoordinateSpaceOfView:(id)arg1 userInterfaceLayoutDirection:(long long)arg2 ofItem:(id)arg3 attribute:(unsigned long long)arg4;
- (void)enumerateItems:(CDUnknownBlockType)arg1;
- (id)itemNotMatchingItem:(id)arg1;
- (id)constraintByReplacingView:(id)arg1 withView:(id)arg2 andReplacingView:(id)arg3 withView:(id)arg4;
- (id)constraintByReplacingView:(id)arg1 withView:(id)arg2;
- (id)constraintByReversingFirstAndSecondItem;
- (void)reverseFirstAndSecondItem;
- (id)generateNSLayoutConstraintWithContext:(id)arg1;
- (id)generateNSLayoutConstraintWithContext:(id)arg1 constraintClass:(Class)arg2;
- (unsigned long long)hashOfComponents;
- (BOOL)hasComponentsEqualToComponentsOfConstraintAllowingReversing:(id)arg1;
- (BOOL)hasComponentsEqualToComponentsOfConstraint:(id)arg1;
- (long long)geometricCompare:(id)arg1 withUserInterfaceLayoutDirection:(long long)arg2;
- (long long)compare:(id)arg1 withUserInterfaceLayoutDirection:(long long)arg2;
- (id)representationByReversingFirstAndSecondItem;
- (BOOL)hasComponentsEqualToComponentsOfRepresentationAllowingReversing:(id)arg1;
- (BOOL)hasComponentsEqualToComponentsOfRepresentation:(id)arg1;
@property(readonly, nonatomic) id containingViewRepresentation;
@property(readonly, nonatomic) id secondItemRepresentation;
@property(readonly, nonatomic) id firstItemRepresentation;
- (id)archivableRepresentationWithRepresentationForItemBlock:(CDUnknownBlockType)arg1;
- (void)setScoringType:(double)arg1 andScoringClass:(long long)arg2 basedUponLayoutInfo:(id)arg3;
@property(nonatomic, getter=isUserDefined) BOOL userDefined;
@property(readonly, nonatomic, getter=isAbsolute) BOOL absolute;
@property(readonly, copy) NSString *description;
- (id)descriptionOfComponents;
- (CDStruct_60a219bf)scoreVector;
@property(readonly, nonatomic) double inferredScoringType;
- (long long)inferredContentType;
- (id)initWithNSLayoutConstraint:(id)arg1 layoutInfo:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRepresentation:(id)arg1 itemForItemRepresentationBlock:(CDUnknownBlockType)arg2;
- (id)initWithItem:(id)arg1 attribute:(unsigned long long)arg2 constant:(id)arg3;
- (id)initWithFirstItem:(id)arg1 firstAttribute:(unsigned long long)arg2 relation:(long long)arg3 secondItem:(id)arg4 secondAttribute:(unsigned long long)arg5 constant:(id)arg6;
- (id)initWithFirstItem:(id)arg1 firstAttribute:(unsigned long long)arg2 relation:(long long)arg3 secondItem:(id)arg4 secondAttribute:(unsigned long long)arg5 multiplier:(id)arg6 constant:(id)arg7 priority:(double)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

