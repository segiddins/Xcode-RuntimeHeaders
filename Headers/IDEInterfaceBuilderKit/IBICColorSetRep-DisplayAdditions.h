//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICColorSetRep.h>

#import <IDEInterfaceBuilderKit/IBICMediaResourceProvider-Protocol.h>

@class IBICColor, NSColor, NSDictionary, NSString;

@interface IBICColorSetRep (DisplayAdditions) <IBICMediaResourceProvider>
+ (id)keyPathsForValuesAffectingIbInspectedColorSpaceHasExtendedRange;
+ (id)keyPathsForValuesAffectingIbInspectedShowGraySliders;
+ (id)keyPathsForValuesAffectingIbInspectedShowRGBASliders;
+ (id)keyPathsForValuesAffectingShowColorDetails;
@property(readonly, nonatomic) NSString *syntheticAbsoluteFilePath;
@property(readonly, nonatomic) NSString *syntheticFileName;
- (id)mediaResource;
- (BOOL)shouldIncludeInMediaLibrary;
- (void)populateChildrenForInclusionInMediaLibrary:(id)arg1;
- (id)image;
- (id)icon;
@property(readonly, nonatomic) NSDictionary *alternateColorSetRepsByAppearanceName;
@property(readonly, nonatomic) IBICColor *representativeColor;
- (void)setIbInspectedHexadecimalRepresentation:(id)arg1;
- (id)ibInspectedHexadecimalRepresentation;
- (void)setIbInspectedComponentInterpretation:(long long)arg1;
- (long long)ibInspectedComponentInterpretation;
- (void)setIbInspectedAlphaComponent:(double)arg1;
- (double)ibInspectedAlphaComponent;
- (void)setIbInspectedWhiteComponent:(double)arg1;
- (double)ibInspectedWhiteComponent;
- (void)setIbInspectedBlueComponent:(double)arg1;
- (double)ibInspectedBlueComponent;
- (void)setIbInspectedGreenComponent:(double)arg1;
- (double)ibInspectedGreenComponent;
- (void)setIbInspectedRedComponent:(double)arg1;
- (double)ibInspectedRedComponent;
@property(retain, nonatomic) NSColor *ibInspectedCocoaColor;
- (void)setIbInspectedColor:(id)arg1;
- (id)ibInspectedColor;
- (void)setIbInspectedColorSpace:(long long)arg1;
- (long long)ibInspectedColorSpace;
- (BOOL)ibInspectedColorSpaceHasExtendedRange;
- (BOOL)ibInspectedShowGraySliders;
- (BOOL)ibInspectedShowRGBASliders;
- (BOOL)showColorDetails;
- (void)setIbInspectedReferenceColor:(id)arg1;
- (void)setIbInspectedColorChoice:(id)arg1;
- (id)ibInspectedColorChoice;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

