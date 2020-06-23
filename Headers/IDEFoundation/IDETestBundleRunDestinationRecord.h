//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDETestBundleDeviceRecord, NSString;

@interface IDETestBundleRunDestinationRecord : NSObject
{
    NSString *_targetArchitecture;
    IDETestBundleDeviceRecord *_targetDevice;
    IDETestBundleDeviceRecord *_localComputer;
}

@property(retain) IDETestBundleDeviceRecord *localComputer; // @synthesize localComputer=_localComputer;
@property(retain) IDETestBundleDeviceRecord *targetDevice; // @synthesize targetDevice=_targetDevice;
@property(retain) NSString *targetArchitecture; // @synthesize targetArchitecture=_targetArchitecture;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRunDestinationRecord:(id)arg1;
- (id)initWithTargetArchitecture:(id)arg1 targetDeviceRecord:(id)arg2 localComputerRecord:(id)arg3;
- (id)init;

@end

