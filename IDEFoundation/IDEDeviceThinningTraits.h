//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IDEDeviceThinningTraits : NSObject
{
    NSString *_productType;
    NSString *_artworkDeviceIdiom;
    long long _artworkDeviceScaleFactor;
    long long _artworkDeviceSubtype;
    long long _devicePerformanceMemoryClass;
    NSString *_deviceGraphicsFeatureSetClass;
    NSArray *_deviceGraphicsFeatureSetFallbacks;
    NSArray *_artworkHostedIdioms;
}

+ (id)deviceTraitInfoForProductType:(id)arg1 fromPlatform:(id)arg2 error:(id *)arg3;
@property(readonly) NSArray *artworkHostedIdioms; // @synthesize artworkHostedIdioms=_artworkHostedIdioms;
@property(readonly) NSArray *deviceGraphicsFeatureSetFallbacks; // @synthesize deviceGraphicsFeatureSetFallbacks=_deviceGraphicsFeatureSetFallbacks;
@property(readonly) NSString *deviceGraphicsFeatureSetClass; // @synthesize deviceGraphicsFeatureSetClass=_deviceGraphicsFeatureSetClass;
@property(readonly) long long devicePerformanceMemoryClass; // @synthesize devicePerformanceMemoryClass=_devicePerformanceMemoryClass;
@property(readonly) long long artworkDeviceSubtype; // @synthesize artworkDeviceSubtype=_artworkDeviceSubtype;
@property(readonly) long long artworkDeviceScaleFactor; // @synthesize artworkDeviceScaleFactor=_artworkDeviceScaleFactor;
@property(readonly) NSString *artworkDeviceIdiom; // @synthesize artworkDeviceIdiom=_artworkDeviceIdiom;
@property(readonly) NSString *productType; // @synthesize productType=_productType;
- (void).cxx_destruct;
- (id)initWithProductType:(id)arg1 artworkDeviceIdiom:(id)arg2 artworkDeviceScaleFactor:(long long)arg3 artworkDeviceSubtype:(long long)arg4 devicePerformanceMemoryClass:(long long)arg5 deviceGraphicsFeatureSetClass:(id)arg6 deviceGraphicsFeatureSetFallbacks:(id)arg7 artworkHostedIdioms:(id)arg8;

@end

