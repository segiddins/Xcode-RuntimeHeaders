//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_$s12DVTAnalytics19AnalyticsReportTypeCN.h"

@class NSString, _TtC15IDEAnalyticsKit25IDEAnalyticsKitReportType;
@protocol IDEAnalyticsKitReportTypeProvider;

@interface _$s12DVTAnalytics19AnalyticsReportTypeCN (IDEAnalyticsKit)
@property(nonatomic, readonly) Class logViewControllerClass;
- (id)analyticsPointSourceCollectionsFor:(id)arg1 extensionIdentifier:(id)arg2 productVersion:(id)arg3 versionCachePath:(id)arg4;
- (id)sourceCollectionToolTip:(BOOL)arg1 version:(id)arg2 build:(id)arg3;
- (id)debuggerPointWithAnalyticsPoint:(id)arg1 workspace:(id)arg2 productVersion:(id)arg3 analyticsLog:(id)arg4 initialStackFrame:(id)arg5 error:(id *)arg6;
- (void)updateLogViewController:(id)arg1 withAnalyticsPoint:(id)arg2 withAnalyticsLog:(id)arg3 withLogContainerViewController:(id)arg4;
- (void)updateLogViewController:(id)arg1 withAnalyticsPoint:(id)arg2 withLogContainerViewController:(id)arg3;
@property(nonatomic, readonly) NSString *previousTopPointsDescription;
@property(nonatomic, readonly) NSString *userDefaultsKey;
@property(nonatomic, readonly) NSString *filterDefinitionIdentifier;
@property(nonatomic, readonly) NSString *showsSystemTerminationEventsOnlyRestorationKey;
@property(nonatomic, readonly) NSString *unresolvedPointsOnlyStateRestorationKey;
@property(nonatomic, readonly) NSString *selectedPointStateRestorationKey;
@property(nonatomic, readonly) NSString *menuDefinitionIdentifier;
@property(nonatomic, readonly) NSString *emptyMenuDefinitionIdentifier;
@property(nonatomic, readonly) id <IDEAnalyticsKitReportTypeProvider> ideKitProvider;
@property(nonatomic, readonly) _TtC15IDEAnalyticsKit25IDEAnalyticsKitReportType *ideKitType;
@end
