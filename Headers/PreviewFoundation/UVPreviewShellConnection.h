//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PreviewFoundation/UVXcodeToShellProtocol-Protocol.h>

@class BSServiceConnection;

@interface UVPreviewShellConnection : NSObject <UVXcodeToShellProtocol>
{
    BSServiceConnection *_serviceConnection;
    CDUnknownBlockType _invalidationHandler;
}

+ (id)create:(id *)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (id)_createConnectionError;
- (id)_machLookupError;
- (id)_messageSendError;
- (oneway void)sendMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_serviceConnectionInvalidated;
- (void)invalidate;
- (void)activate;
- (id)_init:(id *)arg1;

@end

