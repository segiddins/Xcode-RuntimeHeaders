//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYAnalyzerEngine, DYAnalyzerFinding, NSMutableArray;

@interface DYAnalyzerHeuristicPool : NSObject
{
    int _captureBlockMode;
    BOOL _bInsideCaptureBlock;
    int _functionIndex;
    unsigned int _stateMirrorRetCode;
    DYAnalyzerEngine *_engine;
    NSMutableArray *_heuristicPool;
    DYAnalyzerFinding *_perFrameFindingStats;
    unsigned long long _graphicsEngineID;
}

@property(readonly, nonatomic) unsigned long long graphicsEngineID; // @synthesize graphicsEngineID=_graphicsEngineID;
@property(nonatomic) unsigned int stateMirrorRetCode; // @synthesize stateMirrorRetCode=_stateMirrorRetCode;
@property(readonly, nonatomic) int functionIndex; // @synthesize functionIndex=_functionIndex;
@property(readonly, retain, nonatomic) DYAnalyzerFinding *perFrameFindingStats; // @synthesize perFrameFindingStats=_perFrameFindingStats;
@property(readonly, retain, nonatomic) NSMutableArray *heuristicPool; // @synthesize heuristicPool=_heuristicPool;
@property(readonly, nonatomic) __weak DYAnalyzerEngine *engine; // @synthesize engine=_engine;
- (void).cxx_destruct;
- (void)notifyCompletion;
- (void)endBlock;
- (void)startBlock:(int)arg1;
- (void)processPostMirrorHeuristics:(const struct Function *)arg1 captureBlockMode:(int)arg2 functionIndex:(int)arg3;
- (void)processPreMirrorHeuristics:(const struct Function *)arg1 captureBlockMode:(int)arg2 functionIndex:(int)arg3;
- (void)addHeuristic:(id)arg1;
- (id)initWithEngine:(id)arg1 graphicsEngineID:(unsigned long long)arg2;

@end

