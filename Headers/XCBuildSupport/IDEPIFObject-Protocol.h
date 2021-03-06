//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCBuildSupport/IDEPIFGenerating-Protocol.h>
#import <XCBuildSupport/NSObject-Protocol.h>

@class IDEPIFObjectInfo, NSArray, NSString;
@protocol IDEPIFSerializer;

@protocol IDEPIFObject <NSObject, IDEPIFGenerating>
+ (NSString *)pifObjectTypeName;
@property(nonatomic, readonly) NSArray *pifSubobjects;
- (IDEPIFObjectInfo *)pifInfoForSerializer:(id <IDEPIFSerializer>)arg1;
@end

