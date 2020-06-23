//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebugHierarchyKit/DBGValue-Protocol.h>
#import <DebugHierarchyKit/DBGValueJSONSerialization-Protocol.h>

@class NSString;

@interface DBGInt : NSObject <DBGValueJSONSerialization, DBGValue>
{
    int _intValue;
}

+ (id)withValue:(int)arg1;
+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id *)arg3;
@property int intValue; // @synthesize intValue=_intValue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)objectValue;
- (id)initWithInt:(int)arg1;
- (id)JSONCompatibleRepresentation;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

