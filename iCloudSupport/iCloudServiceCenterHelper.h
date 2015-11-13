//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCloudSupport/iCloudMonitorLineProcessor-Protocol.h>

@class NSMutableSet, NSRecursiveLock, NSString, iCloudMonitor, iCloudServiceCenter;

@interface iCloudServiceCenterHelper : NSObject <iCloudMonitorLineProcessor>
{
    NSMutableSet *_observers;
    NSRecursiveLock *_observersLock;
    iCloudServiceCenter *_serviceCenter;
    iCloudMonitor *_monitor;
    NSString *_token;
}

@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) iCloudMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) iCloudServiceCenter *serviceCenter; // @synthesize serviceCenter=_serviceCenter;
- (void).cxx_destruct;
- (void)monitor:(id)arg1 didReceiveResponseCode:(unsigned long long)arg2 response:(id)arg3 forToken:(id)arg4 responseContinues:(BOOL)arg5;
- (id)sendCommandWithFormat:(id)arg1;
- (id)sendCommandWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
- (id)sendCommand:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObservers:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)observers;
- (id)initWithServiceCenter:(id)arg1 monitor:(id)arg2;

@end

