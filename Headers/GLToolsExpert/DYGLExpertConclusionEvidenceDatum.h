//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GLToolsExpert/DYGLExpertConclusionEvidenceNamed.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface DYGLExpertConclusionEvidenceDatum : DYGLExpertConclusionEvidenceNamed
{
    int _relOp;
    NSNumber *_value;
    NSNumber *_compareValue;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *compareValue; // @synthesize compareValue=_compareValue;
@property(readonly, nonatomic) int relOp; // @synthesize relOp=_relOp;
@property(readonly, nonatomic) NSNumber *value; // @synthesize value=_value;
- (void)debugPrintFormatted;
- (void)translateIntoArray:(id)arg1 withRationale:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithName:(id)arg1 value:(id)arg2 relOp:(int)arg3 compareValue:(id)arg4;

@end

