//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/NSObject-Protocol.h>

@class DVTDevice, NSString;

@protocol DVTTestDevice <NSObject>
@property(readonly) unsigned long long state;
@property(readonly) DVTDevice *dvtDevice;
@property(readonly, copy) NSString *name;
@property(readonly, copy) NSString *identifier;
@end
