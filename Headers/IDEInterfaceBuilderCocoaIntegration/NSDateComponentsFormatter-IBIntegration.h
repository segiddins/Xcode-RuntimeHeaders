//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDateComponentsFormatter.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class NSString;

@interface NSDateComponentsFormatter (IBIntegration) <IBDocumentArchiving>
+ (id)keyPathsForValuesAffectingZeroFormattingBehavior;
+ (id)keyPathsForValuesAffectingIbInspectedCustomizeZeroFormattingBehavior;
+ (id)keyPathsForValuesAffectingAllowedUnits;
+ (id)keyPathsForValuesAffectingIbInspectedCustomizeAllowedUnits;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (unsigned long long)ibMinOSVersionForUseInCell;
- (id)ibExternalSampleValue;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (void)setIbInspectedCustomizeZeroFormattingBehavior:(long long)arg1;
- (long long)ibInspectedCustomizeZeroFormattingBehavior;
- (void)setIbInspectedCustomizeAllowedUnits:(BOOL)arg1;
- (BOOL)ibInspectedCustomizeAllowedUnits;
- (id)_getAssociatedObjectForKey:(const void *)arg1 orSetAndReturnDefaultWithPolicy:(unsigned long long)arg2 fromBlock:(CDUnknownBlockType)arg3;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

