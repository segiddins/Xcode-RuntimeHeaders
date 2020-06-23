//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebugHierarchyKit/DBGValue-Protocol.h>
#import <DebugHierarchyKit/DBGValueJSONSerialization-Protocol.h>

@class NSString;

@interface DBGEnumValue : NSObject <DBGValueJSONSerialization, DBGValue>
{
    id _enumValue;
}

+ (id)withValue:(id)arg1;
+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(retain) id enumValue; // @synthesize enumValue=_enumValue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)objectValue;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void)setUnsignedIntegerValue:(unsigned long long)arg1;
- (unsigned long long)unsignedIntegerValue;
- (void)setIntegerValue:(long long)arg1;
- (long long)integerValue;
- (id)initWithCustomValue:(id)arg1;
- (id)JSONCompatibleRepresentation;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

