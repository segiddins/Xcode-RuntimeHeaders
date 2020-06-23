//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRE/NSXPCListenerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface REResourceFetchServer : NSObject <NSXPCListenerDelegate>
{
    struct ResourceFetchManager *_resourceFetchManager;
}

@property(readonly, nonatomic) struct ResourceFetchManager *resourceFetchManager; // @synthesize resourceFetchManager=_resourceFetchManager;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)invalidate;
- (id)initWithResourceFetchManager:(struct ResourceFetchManager *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
