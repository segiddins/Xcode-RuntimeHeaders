//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBBinaryArchiving-Protocol.h>
#import <IBFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IBICSlotMask : NSObject <NSCopying, IBBinaryArchiving>
{
}

+ (id)slotMaskMatchingEverything;
+ (id)slotMaskForComponents:(id)arg1 withValuesFromSlots:(id)arg2;
+ (id)slotMaskForComponent:(Class)arg1 withComponentIdentifiers:(id)arg2;
+ (id)slotMaskForComponents:(id)arg1 withValuesFromRepIdentifiers:(id)arg2;
+ (id)slotMaskForComponents:(id)arg1 withValuesFromRepIdentifiers:(id)arg2 withEmptySetReplacements:(id)arg3;
+ (id)slotMaskWithComponentIdentifiersByComponentClass:(id)arg1;
+ (id)nullWidthHeightAndGPUMask;
+ (id)nullGPUMask;
+ (id)allSizeClassesMask;
+ (id)nullWidthNullHeightMask;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSlotMask:(id)arg1;
- (BOOL)isEqualToSlotMaskWithIdenticalClass:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)descriptionWithIndent:(long long)arg1;
- (BOOL)matchesAssetRep:(id)arg1;
- (BOOL)matchesSlot:(id)arg1;
- (id)maskIntersectedWithMask:(id)arg1;
- (id)invertedMask;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

