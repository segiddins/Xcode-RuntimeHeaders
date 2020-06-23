//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSString, NSXPCConnection;

@interface DVTDeveloperSystemPolicyHelper : NSObject <DVTInvalidation>
{
    NSXPCConnection *_connection;
}

+ (BOOL)enableDeveloperMode:(id *)arg1;
+ (id)isDeveloperModeEnabled:(id *)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

