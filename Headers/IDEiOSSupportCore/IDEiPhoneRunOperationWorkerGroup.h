//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDERunOperationWorkerGroup.h>

@class DVTiOSDevice;

@interface IDEiPhoneRunOperationWorkerGroup : IDERunOperationWorkerGroup
{
    DVTiOSDevice *_device;
}

- (void).cxx_destruct;
@property(retain) DVTiOSDevice *device; // @synthesize device=_device;
- (void)allSubworkersDidFinishWithError:(id)arg1;

@end

