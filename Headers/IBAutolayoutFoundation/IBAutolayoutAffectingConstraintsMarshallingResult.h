//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBObjectBasedMarshallingResult.h>

@class NSSet;

@interface IBAutolayoutAffectingConstraintsMarshallingResult : IBObjectBasedMarshallingResult
{
    NSSet *_constraintAbstractions;
}

@property(copy, nonatomic) NSSet *constraintAbstractions; // @synthesize constraintAbstractions=_constraintAbstractions;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;

@end

