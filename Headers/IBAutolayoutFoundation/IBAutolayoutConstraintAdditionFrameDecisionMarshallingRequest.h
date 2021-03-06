//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBAutolayoutFoundation/IBAutolayoutFrameDecisionMarshallingRequest.h>

@protocol IBCollection;

@interface IBAutolayoutConstraintAdditionFrameDecisionMarshallingRequest : IBAutolayoutFrameDecisionMarshallingRequest
{
    id <IBCollection> _constraintsToAdd;
    id <IBCollection> _constraintsToRemove;
    id <IBCollection> _itemsToEnforceCurrentSize;
}

+ (id)requestWithMarshallableObjectPackage:(id)arg1 arbitrationUnit:(id)arg2 constraintsToAdd:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) id <IBCollection> itemsToEnforceCurrentSize; // @synthesize itemsToEnforceCurrentSize=_itemsToEnforceCurrentSize;
@property(copy, nonatomic) id <IBCollection> constraintsToRemove; // @synthesize constraintsToRemove=_constraintsToRemove;
@property(readonly, nonatomic) id <IBCollection> constraintsToAdd; // @synthesize constraintsToAdd=_constraintsToAdd;
- (id)debugDescription;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithIdentifier:(id)arg1 marshallableObjectPackage:(id)arg2 arbitrationUnit:(id)arg3 constraintsToAdd:(id)arg4;

@end

