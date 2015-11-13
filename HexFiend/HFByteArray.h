//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HexFiend/NSCopying-Protocol.h>
#import <HexFiend/NSMutableCopying-Protocol.h>

@interface HFByteArray : NSObject <NSCopying, NSMutableCopying>
{
    unsigned long long changeLockCounter;
    unsigned long long changeGenerationCount;
}

- (void)incrementGenerationOrRaiseIfLockedForSelector:(SEL)arg1;
- (unsigned long long)changeGenerationCount;
- (BOOL)changesAreLocked;
- (void)decrementChangeLockCounter;
- (void)incrementChangeLockCounter;
- (BOOL)_debugIsEqualToData:(id)arg1;
- (BOOL)_debugIsEqual:(id)arg1;
- (unsigned long long)indexOfBytesEqualToBytes:(id)arg1 inRange:(CDStruct_91ee6ea3)arg2 searchingForwards:(BOOL)arg3 trackingProgress:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (void)deleteBytesInRange:(CDStruct_91ee6ea3)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)subarrayWithRange:(CDStruct_91ee6ea3)arg1;
- (void)insertByteArray:(id)arg1 inRange:(CDStruct_91ee6ea3)arg2;
- (id)byteSliceEnumerator;
- (void)insertByteSlice:(id)arg1 inRange:(CDStruct_91ee6ea3)arg2;
- (void)copyBytes:(char *)arg1 range:(CDStruct_91ee6ea3)arg2;
- (unsigned long long)length;
- (id)byteSlices;
- (id)init;
- (unsigned long long)_byteSearchNaive:(id)arg1 inRange:(CDStruct_91ee6ea3)arg2 forwards:(BOOL)arg3 trackingProgress:(id)arg4;
- (unsigned long long)_byteSearchRollingHash:(id)arg1 inRange:(CDStruct_91ee6ea3)arg2 forwards:(BOOL)arg3 trackingProgress:(id)arg4;
- (unsigned long long)_byteSearchSingle:(unsigned char)arg1 inRange:(CDStruct_91ee6ea3)arg2 forwards:(BOOL)arg3 trackingProgress:(id)arg4;
- (unsigned long long)_byteSearchBoyerMoore:(id)arg1 inRange:(CDStruct_91ee6ea3)arg2 forwards:(BOOL)arg3 trackingProgress:(id)arg4;
- (void)_copyBytes:(char *)arg1 range:(CDStruct_91ee6ea3)arg2 forwards:(BOOL)arg3 inEnclosingRange:(CDStruct_91ee6ea3)arg4;
- (BOOL)clearDependenciesOnRanges:(id)arg1 inFile:(id)arg2;
- (id)rangesOfFileModifiedIfSavedToFile:(id)arg1;
- (BOOL)writeToFile:(id)arg1 trackingProgress:(id)arg2 error:(id *)arg3;

@end

