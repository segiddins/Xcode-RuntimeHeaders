//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class NSData, NSNumber, NSString;

@protocol DTAssetServiceProtocol <DTXAllowedRPC>
- (id)registerApplicationIdentifier:(NSString *)arg1 manifest:(NSData *)arg2;
- (NSNumber *)startServer;
- (NSNumber *)startServerForApplicationWithDevicePath:(NSString *)arg1;
@end

