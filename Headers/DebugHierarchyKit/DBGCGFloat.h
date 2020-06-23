//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebugHierarchyKit/DBGValue-Protocol.h>
#import <DebugHierarchyKit/DBGValueJSONSerialization-Protocol.h>

@class NSString;

@interface DBGCGFloat : NSObject <DBGValueJSONSerialization, DBGValue>
{
    BOOL _backingTypeIsDouble;
    float _floatValue;
    double _doubleValue;
}

+ (id)withValue:(double)arg1;
+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id *)arg3;
@property float floatValue; // @synthesize floatValue=_floatValue;
@property double doubleValue; // @synthesize doubleValue=_doubleValue;
@property BOOL backingTypeIsDouble; // @synthesize backingTypeIsDouble=_backingTypeIsDouble;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)objectValue;
- (id)initWithCGFloat:(double)arg1;
@property double CGFloatValue;
- (id)JSONCompatibleRepresentation;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
