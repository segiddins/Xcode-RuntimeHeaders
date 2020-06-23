//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBICSlot;

@protocol IBICVariantObject <NSObject>
- (long long)compareForVariantMatching:(id)arg1;
- (long long)filteringPriorityForVariantSelection;
- (BOOL)isMinimallyFitForVariantSelection;
- (IBICSlot *)slotForVariantSelection;
@end

