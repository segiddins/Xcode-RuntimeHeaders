//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebugHierarchyFoundation/NSObject-Protocol.h>

@class NSDictionary;
@protocol DebugHierarchyRequestAction;

@protocol DebugHierarchyRequestAction <NSObject>
+ (id <DebugHierarchyRequestAction>)actionWithDictionary:(NSDictionary *)arg1;
- (NSDictionary *)dictionaryRepresentation;
@end

