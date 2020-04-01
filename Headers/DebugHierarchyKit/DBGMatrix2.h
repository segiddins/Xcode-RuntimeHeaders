//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebugHierarchyKit/DBGValue-Protocol.h>
#import <DebugHierarchyKit/DBGValueJSONSerialization-Protocol.h>

@class NSString;

@interface DBGMatrix2 : NSObject <DBGValueJSONSerialization, DBGValue>
{
    union _GLKMatrix2 _matrix2;
}

+ (id)withMatrix2:(union _GLKMatrix2)arg1;
+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id *)arg3;
@property union _GLKMatrix2 matrix2; // @synthesize matrix2=_matrix2;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)objectValue;
- (id)initWithMatrix2:(union _GLKMatrix2)arg1;
- (id)JSONCompatibleRepresentation;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

