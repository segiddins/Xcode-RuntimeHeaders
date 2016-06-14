//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIControl.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>

@class NSColor, NSImage, NSString;

@interface IBUISlider : IBUIControl <IBDocumentArchiving, NSCoding>
{
    double minValue;
    double value;
    double maxValue;
    BOOL continuous;
    NSImage *minimumValueImage;
    NSImage *maximumValueImage;
    NSColor *minimumTrackTintColor;
    NSColor *maximumTrackTintColor;
    NSColor *thumbTintColor;
}

+ (void)registerMarshallingRecordHandlers;
+ (BOOL)ibSupportsCocoaTouchAccessibility;
+ (id)keyPathsForValuesAffectingIbInspectedMaxValue;
+ (id)keyPathsForValuesAffectingIbInspectedMinValue;
+ (id)keyPathsForValuesAffectingIbInspectedValue;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(copy, nonatomic) NSColor *thumbTintColor; // @synthesize thumbTintColor;
@property(copy, nonatomic) NSColor *maximumTrackTintColor; // @synthesize maximumTrackTintColor;
@property(copy, nonatomic) NSColor *minimumTrackTintColor; // @synthesize minimumTrackTintColor;
- (void).cxx_destruct;
- (void)willChangeTargetRuntimeInDocument:(id)arg1 withContext:(id)arg2;
- (void)setMaximumValueImage:(id)arg1;
- (id)maximumValueImage;
- (void)setMinimumValueImage:(id)arg1;
- (id)minimumValueImage;
- (void)setContinuous:(BOOL)arg1;
- (BOOL)continuous;
- (void)setMaxValue:(double)arg1;
- (double)maxValue;
- (void)setValue:(double)arg1;
- (double)value;
- (void)setMinValue:(double)arg1;
- (double)minValue;
- (unsigned long long)ibDefaultAccessibilityTraits;
- (BOOL)ibIsAccessibilityElementByDefault;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (id)ibLocalPerConfigurationAttributeKeyPaths;
- (void)setIbInspectedMaxValue:(double)arg1;
- (double)ibInspectedMaxValue;
- (void)setIbInspectedMinValue:(double)arg1;
- (double)ibInspectedMinValue;
- (void)setIbInspectedValue:(double)arg1;
- (double)ibInspectedValue;
- (unsigned long long)ibPreferredActionEventType;
- (id)ibWidgetType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

