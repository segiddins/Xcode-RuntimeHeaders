//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDelayedInvocation, DVTDeviceOperation, DVTObservingToken, IDEActivityReport, IDEActivityReporter, NSString;

@interface IDEDeviceOperationReport : NSObject
{
    DVTObservingToken *_progressObservingToken;
    DVTObservingToken *_descriptionObservingToken;
    DVTObservingToken *_isUserInitiatedObservingToken;
    DVTDelayedInvocation *_activityUpdateInvocation;
    _Bool cachedIsUserRequested;
    IDEActivityReport *cachedActivityReport;
    long long cachedProgress;
    NSString *cachedTitle;
    DVTDeviceOperation *_deviceOperation;
    IDEActivityReporter *_activityReporter;
}

@property(readonly) __weak IDEActivityReporter *activityReporter; // @synthesize activityReporter=_activityReporter;
@property(readonly) DVTDeviceOperation *deviceOperation; // @synthesize deviceOperation=_deviceOperation;
@property _Bool cachedIsUserRequested; // @synthesize cachedIsUserRequested;
@property(copy) NSString *cachedTitle; // @synthesize cachedTitle;
@property long long cachedProgress; // @synthesize cachedProgress;
@property(retain) IDEActivityReport *cachedActivityReport; // @synthesize cachedActivityReport;
- (void).cxx_destruct;
- (void)_finishActivityReport;
- (void)_updateActivityReportCoallesced;
- (void)_configureNewActivityReport;
- (void)_setupObservers;
- (void)finish;
- (void)startActivityReporting;
- (id)initWithDeviceOperation:(id)arg1 activityReporter:(id)arg2;

@end

