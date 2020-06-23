//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTMetricsReport.h>

@class IBDocumentMetrics, NSString;

@interface IBInternalMetricsReport : DVTMetricsReport
{
    BOOL _usesAutoLayout;
    BOOL _usesSafeAreas;
    BOOL _usesConfigurations;
    NSString *_toolsVersion;
    NSString *_platformSDKBuildVersion;
    NSString *_platformOSName;
    NSString *_documentType;
    long long _objectCount;
    long long _sceneCount;
    long long _connectionCount;
    long long _liveViewCount;
    long long _constraintCount;
    unsigned long long _fileSizeB;
    IBDocumentMetrics *_documentMetrics;
}

+ (void)printSummaryFromMetricReports:(id)arg1;
+ (void)printSummaryWithTitle:(id)arg1 metricReportDatas:(id)arg2;
+ (id)keyPathsForReporting;
+ (id)logAspect;
- (void).cxx_destruct;
@property(retain) IBDocumentMetrics *documentMetrics; // @synthesize documentMetrics=_documentMetrics;
@property unsigned long long fileSizeB; // @synthesize fileSizeB=_fileSizeB;
@property long long constraintCount; // @synthesize constraintCount=_constraintCount;
@property BOOL usesConfigurations; // @synthesize usesConfigurations=_usesConfigurations;
@property BOOL usesSafeAreas; // @synthesize usesSafeAreas=_usesSafeAreas;
@property BOOL usesAutoLayout; // @synthesize usesAutoLayout=_usesAutoLayout;
@property long long liveViewCount; // @synthesize liveViewCount=_liveViewCount;
@property long long connectionCount; // @synthesize connectionCount=_connectionCount;
@property long long sceneCount; // @synthesize sceneCount=_sceneCount;
@property long long objectCount; // @synthesize objectCount=_objectCount;
@property(retain) NSString *documentType; // @synthesize documentType=_documentType;
@property(retain) NSString *platformOSName; // @synthesize platformOSName=_platformOSName;
@property(retain) NSString *platformSDKBuildVersion; // @synthesize platformSDKBuildVersion=_platformSDKBuildVersion;
@property(retain) NSString *toolsVersion; // @synthesize toolsVersion=_toolsVersion;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end
