//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBBinaryArchiving-Protocol.h>

@class NSSet, NSString;

@interface IBICSlotComponentFilter : NSObject <IBBinaryArchiving>
{
    NSSet *_validComponents;
    Class _slotComponentClass;
}

@property(readonly) Class slotComponentClass; // @synthesize slotComponentClass=_slotComponentClass;
- (void).cxx_destruct;
- (void)ibic_generateSubNodes:(CDUnknownBlockType)arg1;
- (void)ibic_generateAttributes:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (id)matchingComponents;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSlotComponentFilter:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)matchesComponent:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithSlotComponentClass:(Class)arg1 matchingInstances:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

