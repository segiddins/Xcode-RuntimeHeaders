//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DTDKApplication, DVTiOSDevice;

@interface _RuntimeProfileWorker : NSObject
{
    DVTiOSDevice *_device;
    DTDKApplication *_app;
}

+ (id)workerForDevice:(id)arg1 applicationBundleID:(id)arg2 outError:(id *)arg3;
- (void).cxx_destruct;
@property(readonly) DTDKApplication *app; // @synthesize app=_app;
@property(readonly) DVTiOSDevice *device; // @synthesize device=_device;
- (BOOL)downloadRuntimeProfilesFromDeviceDirectories:(id)arg1 toLocalDirectory:(id)arg2 error:(id *)arg3;
- (id)createRuntimeProfileDirectory:(id *)arg1;
- (id)initWithDevice:(id)arg1 app:(id)arg2;

@end

