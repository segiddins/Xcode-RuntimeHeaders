//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/PBXTarget.h>

#import <XCBuildSupport/IDEPIFObject-Protocol.h>

@class NSArray, NSString;

@interface PBXTarget (IDEXCBuildSupport) <IDEPIFObject>
+ (id)pifObjectTypeName;
- (id)pifRepresentation:(id)arg1;
@property(nonatomic, readonly) NSArray *pifSubobjects;
- (id)pifInfoForSerializer:(id)arg1;
@property(nonatomic, readonly) NSString *typeForPIFRepresentation;
@end

