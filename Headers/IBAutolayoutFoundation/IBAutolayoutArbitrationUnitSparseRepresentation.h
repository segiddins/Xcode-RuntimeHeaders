//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBAutolayoutFoundation/IBBinaryArchiving-Protocol.h>

@class IBSparseAutolayoutInfo, NSString;

@interface IBAutolayoutArbitrationUnitSparseRepresentation : NSObject <IBBinaryArchiving>
{
    id _rootObject;
    IBSparseAutolayoutInfo *_sparseInfo;
}

- (void).cxx_destruct;
@property(readonly) IBSparseAutolayoutInfo *sparseInfo; // @synthesize sparseInfo=_sparseInfo;
@property(readonly) id rootObject; // @synthesize rootObject=_rootObject;
@property(readonly) Class arbitrationUnitClass;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithRootObject:(id)arg1 sparseInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

