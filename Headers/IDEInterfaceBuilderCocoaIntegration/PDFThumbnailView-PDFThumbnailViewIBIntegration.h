//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Quartz/PDFThumbnailView.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class NSString;

@interface PDFThumbnailView (PDFThumbnailViewIBIntegration) <IBDocumentArchiving>
+ (id)keyPathsForValuesAffectingIbInspectedMaximumNumberOfColumns;
- (void)ibSwizzledSetBackgroundColor:(id)arg1;
- (void)setIbInspectedMaximumNumberOfColumns:(id)arg1;
- (id)ibInspectedMaximumNumberOfColumns;
- (id)ibInspectedDefaultMaximumNumberOfColumns;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

