//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, NSXPCConnection;
@protocol _TtP15XCSourceControl33XCSourceControlXPCServiceProtocol_, _TtP15XCSourceControl41XCSourceControlXPCExportedServiceProtocol_;

@interface _TtC15XCSourceControl31XCSourceControlXPCServiceClient : NSObject
{
    MISSING_TYPE *serviceIdentifier;
    MISSING_TYPE *exportedObject;
    MISSING_TYPE *xpcConnection;
    MISSING_TYPE *$__lazy_storage_$_serviceProxy;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, retain) id <_TtP15XCSourceControl33XCSourceControlXPCServiceProtocol_> serviceProxy;
@property(nonatomic, readonly) NSXPCConnection *connection;
- (id)initWithIdentifier:(id)arg1 exportedObject:(id)arg2;
@property(nonatomic, readonly) id <_TtP15XCSourceControl41XCSourceControlXPCExportedServiceProtocol_> exportedObject; // @synthesize exportedObject;
@property(nonatomic, readonly) NSString *serviceIdentifier;

@end
