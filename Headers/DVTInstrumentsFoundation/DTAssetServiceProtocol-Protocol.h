//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class NSData, NSNumber, NSString;

@protocol DTAssetServiceProtocol <DTXAllowedRPC>
- (id)registerApplicationIdentifier:(NSString *)arg1 manifest:(NSData *)arg2;
- (NSNumber *)startServer;
- (NSNumber *)startServerForApplicationWithDevicePath:(NSString *)arg1;
@end

