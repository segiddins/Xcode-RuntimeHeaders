//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IBAutolayoutConstraintAdditionValidator : NSObject
{
}

+ (BOOL)canAddConstraintsAligningAttribute:(unsigned long long)arg1 ofItems:(id)arg2 document:(id)arg3;
+ (BOOL)canAddVerticalSpacingConstraintBetweenItem:(id)arg1 andSibling:(id)arg2 document:(id)arg3 returningItem1Attribute:(unsigned long long *)arg4 andItem2Attribute:(unsigned long long *)arg5;
+ (BOOL)canAddHorizontalSpacingConstraintBetweenItem:(id)arg1 andSibling:(id)arg2 document:(id)arg3 returningItem1Attribute:(unsigned long long *)arg4 andItem2Attribute:(unsigned long long *)arg5;
+ (BOOL)canAddNearestNeighborConstraintForItem:(id)arg1 attribute:(unsigned long long)arg2 marginRelativeToContainer:(BOOL)arg3 document:(id)arg4;
+ (BOOL)canAddConstraintToItem:(id)arg1 attribute:(unsigned long long)arg2 document:(id)arg3;
+ (BOOL)canAddConstraintFromAttribute:(unsigned long long)arg1 ofItem:(id)arg2 toAttribute:(unsigned long long)arg3 ofItem:(id)arg4 document:(id)arg5;
+ (BOOL)guessIfCanAddAnyConstraintsFromItem:(id)arg1 toItem:(id)arg2 document:(id)arg3;
+ (BOOL)hasCommonRootForObject:(id)arg1 andObject:(id)arg2;
+ (BOOL)commonCanAddAnyConstraintsFromItemByIgnoringAttributes:(id)arg1 toItem:(id)arg2 type:(long long)arg3 document:(id)arg4;

@end

