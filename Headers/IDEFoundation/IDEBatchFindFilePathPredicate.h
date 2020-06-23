//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEBatchFindPlistCodable-Protocol.h>
#import <IDEFoundation/NSCopying-Protocol.h>

@interface IDEBatchFindFilePathPredicate : NSObject <NSCopying, IDEBatchFindPlistCodable>
{
}

+ (id)plistDecoder;
+ (id)propertyListIdentifier;
+ (id)decodeFromPropertyListRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToFilePathPredicate:(id)arg1;
- (BOOL)isEqualToFilePathPredicateWithIdenticalClass:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isWorkspaceSpecific;
- (id)description;
- (id)propertyListRepresentation;
- (CDUnknownBlockType)filterBoundToWorkspace:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
