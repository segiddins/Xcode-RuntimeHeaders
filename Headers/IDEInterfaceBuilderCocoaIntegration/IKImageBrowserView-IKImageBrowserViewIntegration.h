//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ImageKit/IKImageBrowserView.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class NSString;

@interface IKImageBrowserView (IKImageBrowserViewIntegration) <IBDocumentArchiving>
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibSwizzledSetDraggingDestinationDelegate:(id)arg1;
- (id)ibSwizzledInitWithCoder:(id)arg1;
- (void)_willInitWithCoder;
- (void)ibSwizzledSetDelegate:(id)arg1;
- (BOOL)ib_isInDesignMode;
- (void)setUseSubtitledStyle:(BOOL)arg1;
- (BOOL)useSubtitledStyle;
- (void)setUseTitledStyle:(BOOL)arg1;
- (BOOL)useTitledStyle;
- (void)setUseOutlinedStyle:(BOOL)arg1;
- (BOOL)useOutlinedStyle;
- (void)setUseShadowedStyle:(BOOL)arg1;
- (BOOL)useShadowedStyle;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

