//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTDeviceInstalledRoot : NSObject
{
    NSString *_uuid;
    NSString *_name;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *uuid; // @synthesize uuid=_uuid;
- (id)initWithUUID:(id)arg1 name:(id)arg2;

@end

