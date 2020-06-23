//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DTXConnectionServices/DTXService.h>

#import <DVTInstrumentsFoundation/DTAssetServiceProtocol-Protocol.h>

@class DTAssetHTTPServer, NSString, NSXPCConnection;

@interface DTAssetService : DTXService <DTAssetServiceProtocol>
{
    DTAssetHTTPServer *_server;
    NSXPCConnection *_ondemandConnection;
}

+ (id)translatedManifest:(id)arg1 withAssetServicePort:(unsigned int)arg2;
- (void).cxx_destruct;
@property(retain) NSXPCConnection *ondemandConnection; // @synthesize ondemandConnection=_ondemandConnection;
@property(retain) DTAssetHTTPServer *server; // @synthesize server=_server;
- (id)registerApplicationIdentifier:(id)arg1 manifest:(id)arg2;
- (void)connectToOnDemandDaemon;
- (id)startServer;
- (id)startServerForApplicationWithDevicePath:(id)arg1;
- (void)messageReceived:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

