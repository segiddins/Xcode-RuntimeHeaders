//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebugger/NSObject-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

@protocol IDEIssueRuntimeGroupingObject <NSObject>
@property(copy) NSString *name;

@optional
@property(copy) NSMutableDictionary *typeIdentifierToSubgroupTypeIdenfiers;
@property(copy) NSArray *subgroupTypeIdentifiers;
@property(copy) id issueTypeIdentifier;
@end

