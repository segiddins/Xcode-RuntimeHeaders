//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSPressGestureRecognizer.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class NSNumber, NSString;

@interface NSPressGestureRecognizer (IBNSPressGestureRecognizerIntegration) <IBDocumentArchiving>
+ (id)keyPathsForValuesAffectingIbShadowedMinimumPressDuration;
+ (id)keyPathsForValuesAffectingIbShadowedAllowableMovement;
@property(retain, nonatomic) NSNumber *ibShadowedMinimumPressDuration;
@property(retain, nonatomic) NSNumber *ibShadowedAllowableMovement;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

