//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBCocoaTouchToolFoundation/IBBinaryArchiving-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSSet, NSString;

@interface IBUITraitStorageList : NSObject <IBBinaryArchiving>
{
    NSMutableArray *_traitStorages;
    NSMutableSet *_descendantObjectIDs;
    NSString *_topLevelObjectID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *descendantObjectIDs; // @synthesize descendantObjectIDs=_descendantObjectIDs;
@property(readonly, copy, nonatomic) NSArray *traitStorages; // @synthesize traitStorages=_traitStorages;
@property(readonly, copy, nonatomic) NSString *topLevelObjectID; // @synthesize topLevelObjectID=_topLevelObjectID;
@property(readonly, copy) NSString *description;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)addTraitStorage:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithTopLevelObjectID:(id)arg1 traitStorages:(id)arg2 descendantObjectIDs:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

