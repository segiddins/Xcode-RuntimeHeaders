//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBICSlotFilter.h>

@interface IBICBinaryOperatorSlotFilter : IBICSlotFilter
{
    IBICSlotFilter *_lhs;
    IBICSlotFilter *_rhs;
}

- (void).cxx_destruct;
@property(retain) IBICSlotFilter *rhs; // @synthesize rhs=_rhs;
@property(retain) IBICSlotFilter *lhs; // @synthesize lhs=_lhs;
- (BOOL)_continueEnumeratingUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)matchesSlot:(id)arg1;
- (id)descriptionWithIndent:(long long)arg1;
- (id)descriptionName;
- (void)ibic_generateSubNodes:(CDUnknownBlockType)arg1;
- (BOOL)isEqualToSlotFilterWithKnownIdenticalClass:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithSlotClass:(Class)arg1 leftHandSide:(id)arg2 rightHandSide:(id)arg3;

@end

