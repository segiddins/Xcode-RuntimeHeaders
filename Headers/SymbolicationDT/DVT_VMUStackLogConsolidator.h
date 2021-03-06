//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVT_VMUDebugTimer;
@protocol VMUCommonGraphInterface, VMUStackLogReader;

@interface DVT_VMUStackLogConsolidator : NSObject
{
    id <VMUCommonGraphInterface> _graph;
    id <VMUStackLogReader> _stackLogReader;
    DVT_VMUDebugTimer *_debugTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DVT_VMUDebugTimer *debugTimer; // @synthesize debugTimer=_debugTimer;
- (id)callTreeWithOptions:(unsigned long long)arg1 nodeFilter:(CDUnknownBlockType)arg2;
- (id)stackIDsToNodesWithFilter:(CDUnknownBlockType)arg1;
- (id)initWithGraph:(id)arg1 stackLogReader:(id)arg2;

@end

