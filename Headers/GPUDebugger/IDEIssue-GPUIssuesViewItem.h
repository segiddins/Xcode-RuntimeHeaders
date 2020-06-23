//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEIssue.h>

#import <GPUDebugger/GPUIssuesViewItem-Protocol.h>

@class NSArray, NSString;

@interface IDEIssue (GPUIssuesViewItem) <GPUIssuesViewItem>
@property(readonly, nonatomic) NSArray *subItems;
@property(readonly, nonatomic) NSString *message;
@property(readonly, nonatomic) NSString *synopsis;
@property(readonly, nonatomic) NSString *category;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

