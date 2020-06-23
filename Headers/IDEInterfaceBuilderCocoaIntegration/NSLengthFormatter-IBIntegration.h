//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSLengthFormatter.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class NSString;

@interface NSLengthFormatter (IBIntegration) <IBDocumentArchiving>
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (unsigned long long)ibMinOSVersionForUseInCell;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (SEL)ibExternalSampleValueTooltipRelatedSelector;
- (id)ibExternalSampleValueDefault;
- (id)ibSwizzledInitWithCoder:(id)arg1;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

