//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TtC15IDEAnalyticsKit39IDEAnalyticsKitReportTypeDiskWritePoint : NSObject
{
}

- (id)init;
- (id)analyticsPointSourceCollectionsForAppIdentifier:(id)arg1 extensionIdentifier:(id)arg2 productVersion:(id)arg3 versionCachePath:(id)arg4;
- (id)sourceCollectionToolTip:(BOOL)arg1 version:(id)arg2 build:(id)arg3;
- (id)debuggerPointFor:(id)arg1 workspace:(id)arg2 productVersion:(id)arg3 analyticsLog:(id)arg4 initialStackFrame:(id)arg5 error:(id *)arg6;
- (void)updateLogViewController:(id)arg1 withAnalyticsPoint:(id)arg2 withAnalyticsLog:(id)arg3 withLogContainerViewController:(id)arg4;
- (void)updateLogViewController:(id)arg1 withAnalyticsPoint:(id)arg2 withLogContainerViewController:(id)arg3;

@end

