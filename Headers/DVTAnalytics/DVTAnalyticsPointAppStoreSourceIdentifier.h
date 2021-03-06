//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTAnalytics/NSCopying-Protocol.h>

@class DVTAnalyticsAppIdentifier, NSString, _TtC12DVTAnalytics19AnalyticsReportType;

@interface DVTAnalyticsPointAppStoreSourceIdentifier : NSObject <NSCopying>
{
    BOOL _isAppClip;
    DVTAnalyticsAppIdentifier *_appIdentifier;
    NSString *_extensionPointIdentifier;
    _TtC12DVTAnalytics19AnalyticsReportType *_reportType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC12DVTAnalytics19AnalyticsReportType *reportType; // @synthesize reportType=_reportType;
@property(nonatomic) BOOL isAppClip; // @synthesize isAppClip=_isAppClip;
@property(retain, nonatomic) NSString *extensionPointIdentifier; // @synthesize extensionPointIdentifier=_extensionPointIdentifier;
@property(retain, nonatomic) DVTAnalyticsAppIdentifier *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAppIdentifier:(id)arg1 extensionPointIdentifier:(id)arg2 isAppClip:(BOOL)arg3 reportType:(id)arg4;

@end

