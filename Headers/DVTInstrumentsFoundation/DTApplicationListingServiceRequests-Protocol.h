//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol DTApplicationListingServiceRequests <DTXAllowedRPC>
- (void)unregisterUpdateToken:(NSString *)arg1;
- (NSArray *)installedApplicationsMatching:(NSDictionary *)arg1 registerUpdateToken:(NSString *)arg2;
@end

