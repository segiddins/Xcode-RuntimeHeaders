//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBBinaryArchiving-Protocol.h>

@class IBUITraitCollection, NSMutableSet, NSSet, NSString;

@interface IBUIRelationshipTraitStorageRecord : NSObject <IBBinaryArchiving>
{
    NSMutableSet *_addedObjectIDs;
    NSMutableSet *_removedObjectIDs;
    IBUITraitCollection *_traitCollection;
}

@property(readonly, copy, nonatomic) NSSet *removedObjectIDs; // @synthesize removedObjectIDs=_removedObjectIDs;
@property(readonly, copy, nonatomic) NSSet *addedObjectIDs; // @synthesize addedObjectIDs=_addedObjectIDs;
@property(readonly, copy, nonatomic) IBUITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (void).cxx_destruct;
- (void)removeObjectIDs:(id)arg1;
- (void)addObjectIDs:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithTraitCollection:(id)arg1 addedObjectIDs:(id)arg2 removedObjectIDs:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

