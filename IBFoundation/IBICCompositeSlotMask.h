//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlotMask.h>

@class NSArray;

@interface IBICCompositeSlotMask : IBICSlotMask
{
    NSArray *_masks;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqualToSlotMaskWithIdenticalClass:(id)arg1;
- (id)descriptionWithIndent:(long long)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithMasks:(id)arg1;

@end

