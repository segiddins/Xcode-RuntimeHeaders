//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEWorkspace.h>

#import <XCBuildSupport/IDEPIFObject-Protocol.h>
#import <XCBuildSupport/NSObject-Protocol.h>

@class IDEPIFGUID, NSArray;

@interface IDEWorkspace (IDEXCBuildSupport) <IDEPIFObject, NSObject>
+ (id)pifObjectTypeName;
- (void)pifObjectsIncrementally:(CDUnknownBlockType)arg1;
@property(nonatomic, readonly) NSArray *pifObjects;
- (id)pifRepresentation:(id)arg1;
@property(nonatomic, readonly) NSArray *pifSubobjects;
- (id)pifInfoForSerializer:(id)arg1;
@property(nonatomic, readonly) IDEPIFGUID *PIFGUID;
- (id)allBinaryPIFObjects;
@end

