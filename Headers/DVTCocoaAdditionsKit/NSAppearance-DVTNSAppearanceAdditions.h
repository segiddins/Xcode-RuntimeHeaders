//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSAppearance.h>

@interface NSAppearance (DVTNSAppearanceAdditions)
+ (id)dvt_darkAquaAppearance;
+ (id)dvt_lightAquaAppearance;
+ (id)dvt_vibrantDarkAppearance;
+ (id)dvt_vibrantLightAppearance;
+ (void)dvt_useAppearance:(id)arg1 toPerformBlock:(CDUnknownBlockType)arg2;
@property(readonly) NSAppearance *dvt_nonVibrantAppearance;
@property(readonly) BOOL dvt_hasDarkAppearance;
@property(readonly) BOOL dvt_usesMetricsAppearance;
- (void)dvt_performBlock:(CDUnknownBlockType)arg1;
@end

