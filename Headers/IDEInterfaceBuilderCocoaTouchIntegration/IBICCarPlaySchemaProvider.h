//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBICSchemaProvider-Protocol.h>

@class IBICColorSpace, IBICContrastAppearance, IBICIdiom, IBICLanguageDirection, IBICLuminosityAppearance, IBICPlatform, IBICScale, NSString;

@interface IBICCarPlaySchemaProvider : NSObject <IBICSchemaProvider>
{
    IBICPlatform *_carPlayPlatform;
    IBICIdiom *_universalIdiom;
    IBICIdiom *_carPlayIdiom;
    IBICScale *_anyScale;
    IBICScale *_twoXScale;
    IBICScale *_threeXScale;
    IBICColorSpace *_anyColorSpace;
    IBICColorSpace *_sRGBColorSpace;
    IBICColorSpace *_P3ColorSpace;
    IBICLanguageDirection *_anyLanguageDirection;
    IBICLanguageDirection *_leftToRightLanguageDirection;
    IBICLanguageDirection *_rightToLeftLanguageDirection;
    IBICLuminosityAppearance *_anyLightness;
    IBICLuminosityAppearance *_darkAppearance;
    IBICLuminosityAppearance *_lightAppearance;
    IBICContrastAppearance *_anyContrast;
    IBICContrastAppearance *_highContrast;
}

+ (BOOL)supportsRemoteToolsTargetingPlatformNamed:(id)arg1;
- (void).cxx_destruct;
- (id)platformID;
- (void)registerColorSetSlots:(id)arg1;
- (void)registerImageSetSlots:(id)arg1;
- (void)registerSchemaComponents:(id)arg1;
- (void)registerClasses:(id)arg1;
- (void)captureExistingSlotComponents:(id)arg1;
- (void)registerSlotComponents:(id)arg1;
- (double)precedence;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

