//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlotFilter.h>

@class NSSet;

@interface IBICEnumeratedSlotFilter : IBICSlotFilter
{
    NSSet *_enumeratedSlots;
}

- (void).cxx_destruct;
- (void)ibic_generateSubNodes:(CDUnknownBlockType)arg1;
- (id)descriptionWithIndent:(long long)arg1;
- (BOOL)_continueEnumeratingUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)matchesSlot:(id)arg1;
- (BOOL)isEqualToSlotFilterWithKnownIdenticalClass:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithSlotClass:(Class)arg1 slots:(id)arg2;

@end

