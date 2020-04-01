//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBSceneUpdateProcessingRequest.h>

@class IBAutolayoutArbitrationUnit, IBAutolayoutArbitrationUnitSparseRepresentation, NSDictionary;

@interface IBAutolayoutStatusProcessingRequest : IBSceneUpdateProcessingRequest
{
    IBAutolayoutArbitrationUnitSparseRepresentation *_sparseRepresentation;
    IBAutolayoutArbitrationUnit *_arbitrationUnit;
    NSDictionary *_arbitrationOptions;
}

@property(readonly, nonatomic) NSDictionary *arbitrationOptions; // @synthesize arbitrationOptions=_arbitrationOptions;
@property(readonly, nonatomic) IBAutolayoutArbitrationUnit *arbitrationUnit; // @synthesize arbitrationUnit=_arbitrationUnit;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithArbitrationUnit:(id)arg1 arbitrationOptions:(id)arg2 resultPhase:(long long)arg3 postProcessingBlock:(CDUnknownBlockType)arg4;

@end

