//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/Xcode3Project.h>

#import <XCBuildSupport/IDEPIFObject-Protocol.h>

@class IDEPIFGUID, NSArray;

@interface Xcode3Project (IDEXCBuildSupport) <IDEPIFObject>
+ (id)pifObjectTypeName;
- (id)pifRepresentation:(id)arg1;
@property(nonatomic, readonly) NSArray *pifSubobjects;
- (id)pifInfoForSerializer:(id)arg1;
@property(nonatomic, readonly) IDEPIFGUID *PIFGUID;
@end

