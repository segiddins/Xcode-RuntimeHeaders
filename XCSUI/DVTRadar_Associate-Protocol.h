//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCSUI/NSObject-Protocol.h>

@class NSString;

@protocol DVTRadar_Associate <NSObject>
@property(readonly, copy, nonatomic) NSString *radarSummary;
@property(nonatomic) unsigned long long duplicateOfProblemID;
@property(nonatomic) unsigned long long priority;
@property(copy, nonatomic) NSString *resolution;
@property(copy, nonatomic) NSString *assignee;
@property(copy, nonatomic) NSString *substate;
@property(copy, nonatomic) NSString *state;
@end

