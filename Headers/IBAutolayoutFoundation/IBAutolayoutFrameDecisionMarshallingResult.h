//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBObjectBasedMarshallingResult.h>

@class IBAutolayoutStatus, NSDictionary;
@protocol IBCollection;

@interface IBAutolayoutFrameDecisionMarshallingResult : IBObjectBasedMarshallingResult
{
    NSDictionary *_framesByItem;
    id <IBCollection> _constraintsAdded;
    id <IBCollection> _constraintsRemoved;
    IBAutolayoutStatus *_autolayoutStatus;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IBAutolayoutStatus *autolayoutStatus; // @synthesize autolayoutStatus=_autolayoutStatus;
@property(copy, nonatomic) id <IBCollection> constraintsRemoved; // @synthesize constraintsRemoved=_constraintsRemoved;
@property(copy, nonatomic) id <IBCollection> constraintsAdded; // @synthesize constraintsAdded=_constraintsAdded;
@property(copy, nonatomic) NSDictionary *framesByItem; // @synthesize framesByItem=_framesByItem;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;

@end

