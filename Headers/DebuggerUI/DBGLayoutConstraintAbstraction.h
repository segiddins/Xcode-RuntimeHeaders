//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBAutolayoutFoundation/IBAbstractLayoutConstraintAbstraction.h>

@class DBGLayoutConstraint, DBGOverlayLayoutConstraint;

@interface DBGLayoutConstraintAbstraction : IBAbstractLayoutConstraintAbstraction
{
    DBGOverlayLayoutConstraint *dbgConstraint;
    DBGLayoutConstraint *_constraintModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) DBGLayoutConstraint *constraintModel; // @synthesize constraintModel=_constraintModel;
- (id)constraintInDocument;
- (id)makeRepresentingConstraintWithProvider:(id)arg1;
- (double)priority;
- (BOOL)isEqualToAbstraction:(id)arg1;
- (Class)representationClass;
- (id)initWithConstraintModel:(id)arg1;

@end

