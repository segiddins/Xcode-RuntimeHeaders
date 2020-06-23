//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DTGraphKit/NSObject-Protocol.h>

@protocol DTObjectGridGraphDataSource <NSObject>
- (void)enumerateOutgoingReferencesForNode:(unsigned int)arg1 withBlock:(void (^)(unsigned int, unsigned int, unsigned int, double, char *))arg2;
- (void)enumerateIncomingReferencesForNode:(unsigned int)arg1 withBlock:(void (^)(unsigned int, unsigned int, unsigned int, double, char *))arg2;

@optional
- (unsigned int)enclosingGroupNodeForNode:(unsigned int)arg1;
- (void)enumerateMemberNodesOfGroupNode:(unsigned int)arg1 withBlock:(void (^)(unsigned int, char *))arg2;
- (long long)memberNodeCountForGroupNode:(unsigned int)arg1;
@end

