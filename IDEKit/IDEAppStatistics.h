//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEAppStatistics : NSObject
{
}

+ (void)recordDocDownloadInteraction:(id)arg1;
+ (void)recordDocViewNavigationForURL:(id)arg1;
+ (id)_setOfNavigatedSchemesUsedByDocViewer;
+ (void)recordAppDidShutdown:(id)arg1;
+ (void)recordAppAboutToShutdown;
+ (void)scheduleAppReportWithStartTime:(double)arg1;
+ (void)recordAppUsedGPUDebugger;
+ (void)_reportLVStatus;
+ (void)_performAppReportWithStartupDuration:(double)arg1;
+ (id)_diskTypes;
+ (id)_diskTypeFor:(struct __DADisk *)arg1 withDiskManager:(id)arg2;
+ (unsigned long long)_memInUse;
+ (unsigned long long)_totalRam;

@end

