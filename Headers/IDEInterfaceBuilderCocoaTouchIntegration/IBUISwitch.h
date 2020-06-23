//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIControl.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class IBColor, NSString;

@interface IBUISwitch : IBUIControl <IBDocumentArchiving>
{
    BOOL _on;
    IBColor *_onTintColor;
    IBColor *_thumbTintColor;
    NSString *_title;
    long long _switchStyle;
}

+ (BOOL)shouldArchiveTintColorWithUIViewProperties;
+ (BOOL)ibSupportsCocoaTouchAccessibility;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) long long switchStyle; // @synthesize switchStyle=_switchStyle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) IBColor *thumbTintColor; // @synthesize thumbTintColor=_thumbTintColor;
@property(copy, nonatomic) IBColor *onTintColor; // @synthesize onTintColor=_onTintColor;
@property(nonatomic) BOOL on; // @synthesize on=_on;
- (void)decodeSwitchFrame:(id)arg1;
- (BOOL)xmlCoder:(id)arg1 shouldEncodeRect:(struct CGRect *)arg2 forKey:(id)arg3 context:(id)arg4;
- (id)xmlCoderEncodingCallbackContext:(id)arg1;
- (struct CGRect)convertNewStyleSwitchFrameToOldStyle:(struct CGRect)arg1;
- (struct CGRect)convertOldStyleSwitchFrameToNewStyle:(struct CGRect)arg1;
- (void)willChangeTargetRuntimeInDocument:(id)arg1 withContext:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)ibDefaultAccessibilityTraits;
- (BOOL)ibIsAccessibilityElementByDefault;
- (BOOL)ibInspectedAreTitleAndStyleAvailable;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (id)ibLocalPerConfigurationAttributeKeyPaths;
- (void)ibPopulateAdditionalKeyValuePairs:(id)arg1 forCompilationWithMarshallingContext:(id)arg2;
- (unsigned long long)ibPreferredActionEventType;
- (id)ibWidgetType;
- (id)ibLocalLocalizableStringsAttributeKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

