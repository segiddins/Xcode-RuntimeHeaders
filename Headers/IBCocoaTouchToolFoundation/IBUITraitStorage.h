//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBCocoaTouchToolFoundation/IBBinaryArchiving-Protocol.h>

@class NSMutableArray, NSString;

@interface IBUITraitStorage : NSObject <IBBinaryArchiving>
{
    NSMutableArray *_records;
    NSString *_keyPath;
    NSString *_objectID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, copy) NSString *description;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)addRecord:(id)arg1;
- (id)existingRecordForTraitCollection:(id)arg1;
- (id)records;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithObjectID:(id)arg1 keyPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
