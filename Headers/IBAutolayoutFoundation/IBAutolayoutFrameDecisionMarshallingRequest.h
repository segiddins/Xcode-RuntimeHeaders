//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBAutolayoutFoundation/IBAutolayoutOperationMarshallingRequest.h>

@class NSDictionary, NSNumber;

@interface IBAutolayoutFrameDecisionMarshallingRequest : IBAutolayoutOperationMarshallingRequest
{
    NSDictionary *_frameDecisionDriverOptions;
    NSNumber *_mutuallyExclusiveConstraintBreakageStrategy;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *mutuallyExclusiveConstraintBreakageStrategy; // @synthesize mutuallyExclusiveConstraintBreakageStrategy=_mutuallyExclusiveConstraintBreakageStrategy;
@property(copy, nonatomic) NSDictionary *frameDecisionDriverOptions; // @synthesize frameDecisionDriverOptions=_frameDecisionDriverOptions;
- (id)debugDescription;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;

@end

