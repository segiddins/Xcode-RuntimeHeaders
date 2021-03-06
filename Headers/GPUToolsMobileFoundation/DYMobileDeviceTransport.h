//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUToolsCore/DYBaseSocketTransport.h>

@class DYMobileDevice;

__attribute__((visibility("hidden")))
@interface DYMobileDeviceTransport : DYBaseSocketTransport
{
    DYMobileDevice *_device;
    struct _AMDServiceConnection *_servConn;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) DYMobileDevice *device; // @synthesize device=_device;
- (id)connect;
- (void)closeSocketDescriptor;
- (long long)_write:(const void *)arg1 size:(unsigned long long)arg2;
- (long long)_read:(void *)arg1 size:(unsigned long long)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithMobileDevice:(id)arg1;
- (id)init;

@end

