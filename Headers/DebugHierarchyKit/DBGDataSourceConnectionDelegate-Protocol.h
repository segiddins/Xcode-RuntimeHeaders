//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebugHierarchyKit/NSObject-Protocol.h>

@class DebugHierarchyRequest, NSData;

@protocol DBGDataSourceConnectionDelegate <NSObject>
- (void)didReceiveData:(NSData *)arg1 forRequest:(DebugHierarchyRequest *)arg2;
@end

