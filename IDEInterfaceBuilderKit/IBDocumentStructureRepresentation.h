//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface IBDocumentStructureRepresentation : NSObject
{
    NSMutableDictionary *_oidToObjectInfo;
    NSMutableArray *_topLevelObjects;
    NSMutableArray *_topLevelConcreteObjects;
    NSMutableDictionary *_connectionsToObject;
    NSMutableDictionary *_connectionsFromObject;
}

- (void).cxx_destruct;
- (id)objectOIDConnectedFromObjectWithOID:(id)arg1 byWayOfConnectionLabeled:(id)arg2;
- (id)objectsConnectedForObjectWithOID:(id)arg1;
- (id)objectsConnectedFromObjectWithOID:(id)arg1;
- (id)objectsConnectedToObjectWithOID:(id)arg1;
- (id)childrenOIDsOfObjectWithOID:(id)arg1;
- (id)parentOIDOfObjectWithOID:(id)arg1;
- (id)topLevelObjectIDs;
- (id)effectiveClassNameForObjectWithOID:(id)arg1;
- (id)initWithDocument:(id)arg1;

@end

