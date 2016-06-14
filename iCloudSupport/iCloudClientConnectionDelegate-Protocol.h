//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iCloudSupport/NSObject-Protocol.h>

@class NSError, iCloudClientConnection;

@protocol iCloudClientConnectionDelegate <NSObject>

@optional
- (void)connection:(iCloudClientConnection *)arg1 processInput:(const char *)arg2 length:(unsigned long long)arg3;
- (void)connection:(iCloudClientConnection *)arg1 didCloseWithError:(NSError *)arg2;
- (void)connection:(iCloudClientConnection *)arg1 willCloseWithError:(NSError *)arg2;
@end

