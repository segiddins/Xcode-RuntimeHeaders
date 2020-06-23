//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DiscRecording/DRMSFFormatter.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class NSString;

@interface DRMSFFormatter (IBDRMSFFormatterIntegration) <IBDocumentArchiving>
- (id)ibTypeNameForDefaultLabel;
- (id)ibTitleForEditor;
- (id)ibFormatPresets;
- (id)ibExternalSampleValueDefault;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

