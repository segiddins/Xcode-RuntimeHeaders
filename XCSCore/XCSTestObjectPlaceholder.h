//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSCore/XCSPlaceholderProtocol-Protocol.h>

@class NSArray, NSNumber, NSString, XCSDevice, XCSIntegration;

@interface XCSTestObjectPlaceholder : NSObject <XCSPlaceholderProtocol>
{
    XCSIntegration *_integration;
    XCSTestObjectPlaceholder *_parent;
    NSString *_name;
    NSArray *_children;
    long long _status;
    NSString *_keyPath;
    XCSDevice *_deviceFilter;
    NSNumber *_hasPerfMetricsCachedValue;
}

@property(retain, nonatomic) NSNumber *hasPerfMetricsCachedValue; // @synthesize hasPerfMetricsCachedValue=_hasPerfMetricsCachedValue;
@property(retain, nonatomic) XCSDevice *deviceFilter; // @synthesize deviceFilter=_deviceFilter;
@property(retain, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak XCSTestObjectPlaceholder *parent; // @synthesize parent=_parent;
@property(nonatomic) __weak XCSIntegration *integration; // @synthesize integration=_integration;
- (void).cxx_destruct;
- (BOOL)_validateWithIntegration:(id)arg1 name:(id)arg2 keyPath:(id)arg3 validationErrors:(id *)arg4;
- (id)_statusInfoForKeyPath:(id)arg1;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)description;
@property(readonly, nonatomic) BOOL hasPerfTests;
@property(readonly, nonatomic) long long aggregatedStatus;
- (double)statusValueForDeviceIdentifier:(id)arg1;
- (long long)statusForDeviceIdentifier:(id)arg1;
- (id)initWithIntegration:(id)arg1 name:(id)arg2 keyPath:(id)arg3 validationErrors:(id *)arg4;

@end

