//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebugHierarchyKit/DBGValue-Protocol.h>
#import <DebugHierarchyKit/DBGValueJSONSerialization-Protocol.h>

@class NSString;

@interface DBGDouble : NSObject <DBGValueJSONSerialization, DBGValue>
{
    double _doubleValue;
}

+ (id)withValue:(double)arg1;
+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id *)arg3;
@property double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)objectValue;
- (id)initWithDouble:(double)arg1;
- (id)JSONCompatibleRepresentation;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

