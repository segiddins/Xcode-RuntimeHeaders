//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBCocoaTouchToolFoundation/IBBinaryArchiving-Protocol.h>

@class NSDictionary, NSString;

@interface IBUIMetricRepresentation : NSObject <IBBinaryArchiving>
{
    NSDictionary *_keyValues;
}

- (void).cxx_destruct;
@property(readonly, copy) NSDictionary *keyValues; // @synthesize keyValues=_keyValues;
- (BOOL)isEqualToMetricRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)applyToObject:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithKeyValues:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

