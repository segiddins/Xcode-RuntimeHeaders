//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/NSObject-Protocol.h>

@class IBICSlot;

@protocol IBICVariantObject <NSObject>
- (long long)compareForVariantMatching:(id)arg1;
- (long long)filteringPriorityForVariantSelection;
- (BOOL)isMinimallyFitForVariantSelection;
- (IBICSlot *)slotForVariantSelection;
@end

