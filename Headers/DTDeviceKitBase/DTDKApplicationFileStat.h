//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DTDKApplicationFileStat : NSObject
{
    _Bool _deviceIsDir;
    _Bool _deviceIsLnk;
    NSString *_deviceFileSizeString;
    NSString *_deviceModificationTimeString;
}

- (void).cxx_destruct;
@property(copy) NSString *deviceModificationTimeString; // @synthesize deviceModificationTimeString=_deviceModificationTimeString;
@property(copy) NSString *deviceFileSizeString; // @synthesize deviceFileSizeString=_deviceFileSizeString;
@property _Bool deviceIsLnk; // @synthesize deviceIsLnk=_deviceIsLnk;
@property _Bool deviceIsDir; // @synthesize deviceIsDir=_deviceIsDir;

@end

