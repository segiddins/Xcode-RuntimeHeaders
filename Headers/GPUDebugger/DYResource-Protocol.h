//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/NSObject-Protocol.h>
#import <GPUDebugger/NSSecureCoding-Protocol.h>

@class DYFunctionStream, NSDictionary, NSMutableDictionary, NSString;

@protocol DYResource <NSObject, NSSecureCoding>
+ (NSString *)keyForResourceWithID:(unsigned long long)arg1 type:(unsigned int)arg2 containerID:(unsigned long long)arg3;
- (id)initUpdateWithType:(unsigned int)arg1 objectID:(unsigned long long)arg2 containerID:(unsigned long long)arg3 changes:(NSDictionary *)arg4;
@property(nonatomic, readonly) BOOL isStatic;
@property(nonatomic, readonly) CDStruct_b00b4bef resolution;
@property(nonatomic, readonly) NSMutableDictionary *properties;
@property(nonatomic, readonly) NSString *label;
@property(nonatomic, readonly) unsigned long long objectID;
@property(nonatomic, readonly) unsigned long long containerID;
@property(nonatomic, readonly) unsigned int resourceType;

@optional
- (NSDictionary *)streamDictAtFunctionIndex:(unsigned long long)arg1;
- (NSString *)keyWithSharegroupID:(unsigned long long)arg1;
- (id)createFullObjectWithFunctionStream:(DYFunctionStream *)arg1 dataResolver:(NSData * (^)(char *))arg2;
@end

