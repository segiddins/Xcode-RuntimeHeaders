//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IBAutolayoutStatus;
@protocol IBAutolayoutConcreteConstraintProvider, IBLayoutConstraintDrawingDestination, IBLayoutConstraintStatusProvider;

@interface IBLayoutConstraintDrawableProvider : NSObject
{
    id <IBLayoutConstraintStatusProvider> _constraintStatusProvider;
    id <IBLayoutConstraintDrawingDestination> _drawingDestination;
    id <IBAutolayoutConcreteConstraintProvider> _concreteConstraintProvider;
    IBAutolayoutStatus *_autolayoutStatus;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IBAutolayoutStatus *autolayoutStatus; // @synthesize autolayoutStatus=_autolayoutStatus;
@property(retain, nonatomic) id <IBAutolayoutConcreteConstraintProvider> concreteConstraintProvider; // @synthesize concreteConstraintProvider=_concreteConstraintProvider;
@property(retain, nonatomic) id <IBLayoutConstraintDrawingDestination> drawingDestination; // @synthesize drawingDestination=_drawingDestination;
@property(retain, nonatomic) id <IBLayoutConstraintStatusProvider> constraintStatusProvider; // @synthesize constraintStatusProvider=_constraintStatusProvider;
- (struct CGRect)rectForGuideLine:(CDStruct_f6143a38)arg1;
- (CDStruct_f6143a38)guideLineForConstraintAttribute:(unsigned long long)arg1 ofItem:(id)arg2 forDrawable:(id)arg3;
- (id)determineConstraintDrawableGuideLinesForDrawables:(id)arg1 givenMovedDrawableIndexes:(id)arg2;
- (id)moveDrawablesToAvoidOverlapping:(id)arg1 givenMoveableDrawableIndexes:(id)arg2 movingToAvoidDrawablesAtIndexes:(id)arg3 insettingToAvoidDrawablesAtIndexes:(id)arg4;
- (BOOL)attemptToInsetDrawable:(id)arg1 toAvoidDrawable:(id)arg2;
- (BOOL)isDrawable:(id)arg1 intersectingDrawable:(id)arg2;
- (CDStruct_f6143a38)_adjustConstraintDrawableLineForIllegalStates:(CDStruct_f6143a38)arg1 forConstraint:(id)arg2 attribute:(unsigned long long)arg3;
- (CDUnknownBlockType)constraintDrawableOrderingComparator;
- (void)_configureNonBadgeAutolayoutStatusForDrawable:(id)arg1 atIndex:(unsigned long long)arg2 forAbstraction:(id)arg3 representingConstraint:(id)arg4 isConflicting:(BOOL)arg5 isAmbiguous:(BOOL)arg6 isMisplaced:(BOOL)arg7 misplacementDelta:(double)arg8;
- (void)_insetDrawableToAvoidResizeKnobsIfNecessary:(id)arg1;
- (void)_configureBadgeForDrawable:(id)arg1 atIndex:(unsigned long long)arg2 asPrimaryDrawable:(BOOL)arg3 forAbstraction:(id)arg4 representingConstraint:(id)arg5 isConflicting:(BOOL)arg6 isAmbiguous:(BOOL)arg7 isMisplaced:(BOOL)arg8 misplacementDelta:(double)arg9;
- (id)effectiveDrawableTintColorForDrawable:(id)arg1 atIndex:(unsigned long long)arg2 forAbstraction:(id)arg3 isConflicting:(BOOL)arg4 isAmbiguous:(BOOL)arg5 isMisplaced:(BOOL)arg6;
- (void)_configureDrawable:(id)arg1 atIndex:(unsigned long long)arg2 asPrimaryDrawable:(BOOL)arg3 forAbstraction:(id)arg4 representingConstraint:(id)arg5 engineEvaluatedConstant:(id)arg6;
- (void)_configureBasePropertiesForDrawable:(id)arg1 forAbstraction:(id)arg2 representingConstraint:(id)arg3;
- (id)edgeBiasForLayoutAttribute:(unsigned long long)arg1;
- (id)constraintDrawablesForConstraintAbstraction:(id)arg1 constraintsByAbstraction:(id)arg2 constantsByConstraint:(id)arg3;
- (id)absoluteConstraintDrawableForConstraint:(id)arg1 item:(id)arg2 attribute:(unsigned long long)arg3;
- (id)relativeConstraintDrawableForConstraint:(id)arg1;
- (void)determineConstraintDrawablesAndGuideLinesForOrderedConstraintAbstractions:(id)arg1 constraintsByAbstraction:(id)arg2 constantsByConstraint:(id)arg3 populatingConstraintDrawables:(id)arg4 populatingWrappedGuideLines:(id)arg5;

@end

