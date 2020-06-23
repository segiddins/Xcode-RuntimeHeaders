//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUToolsServices/DependencyViewerGraphObject.h>

@class DependencyViewerVertex;

@interface DependencyViewerEdge : DependencyViewerGraphObject
{
    DependencyViewerVertex *_from;
    DependencyViewerVertex *_to;
    unsigned long long _port;
}

@property(readonly, nonatomic) unsigned long long port; // @synthesize port=_port;
@property(readonly, nonatomic) __weak DependencyViewerVertex *to; // @synthesize to=_to;
@property(readonly, nonatomic) __weak DependencyViewerVertex *from; // @synthesize from=_from;
- (void).cxx_destruct;
- (id)initWithID:(unsigned long long)arg1 graph:(id)arg2 data:(id)arg3 u:(id)arg4 v:(id)arg5 port:(unsigned long long)arg6;

@end

