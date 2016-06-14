//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBDeviceSubtype.h>

@class NSArray, NSMutableDictionary;

@interface IBCocoaTouchDeviceSubtype : IBDeviceSubtype
{
    NSMutableDictionary *_legacyScreenMetricsByAdaptationIdentifier;
    NSArray *_allLegacyScreenMetrics;
}

- (void).cxx_destruct;
- (id)idiom;
- (id)defaultScreenMetrics;
@property(readonly, nonatomic) NSArray *screenMetrics;
- (id)screenMetricsForAdaptationIdentifier:(id)arg1;
- (id)makeScreenMetricsWithIdiom:(id)arg1 displayName:(id)arg2 archiveIdentifier:(id)arg3 landscapeSize:(struct CGSize)arg4 portraitSize:(struct CGSize)arg5 minimumSupportedOSVersion:(id)arg6 legacyIdentifiersForMigration:(id)arg7;
- (id)screenMetricsArchivingIdentifierForAdaptationType:(id)arg1;

@end

