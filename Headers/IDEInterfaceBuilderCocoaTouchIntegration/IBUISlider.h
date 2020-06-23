//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIControl.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class IBColor, NSImage, NSString;

@interface IBUISlider : IBUIControl <IBDocumentArchiving>
{
    BOOL _continuous;
    double _minValue;
    double _value;
    double _maxValue;
    NSImage *_minimumValueImage;
    NSImage *_maximumValueImage;
    IBColor *_minimumTrackTintColor;
    IBColor *_maximumTrackTintColor;
    IBColor *_thumbTintColor;
}

+ (void)registerMarshallingRecordHandlers;
+ (BOOL)ibSupportsCocoaTouchAccessibility;
+ (id)keyPathsForValuesAffectingIbInspectedMaxValue;
+ (id)keyPathsForValuesAffectingIbInspectedMinValue;
+ (id)keyPathsForValuesAffectingIbInspectedValue;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) IBColor *thumbTintColor; // @synthesize thumbTintColor=_thumbTintColor;
@property(copy, nonatomic) IBColor *maximumTrackTintColor; // @synthesize maximumTrackTintColor=_maximumTrackTintColor;
@property(copy, nonatomic) IBColor *minimumTrackTintColor; // @synthesize minimumTrackTintColor=_minimumTrackTintColor;
@property(retain, nonatomic) NSImage *maximumValueImage; // @synthesize maximumValueImage=_maximumValueImage;
@property(retain, nonatomic) NSImage *minimumValueImage; // @synthesize minimumValueImage=_minimumValueImage;
@property(nonatomic) BOOL continuous; // @synthesize continuous=_continuous;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
- (void)willChangeTargetRuntimeInDocument:(id)arg1 withContext:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)ibDefaultAccessibilityTraits;
- (BOOL)ibIsAccessibilityElementByDefault;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (id)ibLocalPerConfigurationAttributeKeyPaths;
- (void)setIbInspectedMaxValue:(double)arg1;
- (double)ibInspectedMaxValue;
- (void)setIbInspectedMinValue:(double)arg1;
- (double)ibInspectedMinValue;
- (void)setIbInspectedValue:(double)arg1;
- (struct CGRect)ibSquashedXcode7InitialFrameFromAddingToNonAnyAny;
- (double)ibInspectedValue;
- (unsigned long long)ibPreferredActionEventType;
- (id)ibWidgetType;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

