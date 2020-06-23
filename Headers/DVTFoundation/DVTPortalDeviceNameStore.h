//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DVTCustomDataStoring;

@interface DVTPortalDeviceNameStore : NSObject
{
    id <DVTCustomDataStoring> _store;
}

+ (id)defaultStore;
- (void).cxx_destruct;
- (void)storeDeviceInfo:(id)arg1 forTeamID:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)deviceInfoForTeamID:(id)arg1 error:(id *)arg2;
- (id)_specifierWithTeamID:(id)arg1;
- (id)initWithCustomDataStore:(id)arg1;

@end

