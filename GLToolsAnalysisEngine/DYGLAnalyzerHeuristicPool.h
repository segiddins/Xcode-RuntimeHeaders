//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUToolsServices/DYAnalyzerHeuristicPool.h>

@interface DYGLAnalyzerHeuristicPool : DYAnalyzerHeuristicPool
{
    BOOL _firstBindAfterOutOfContextUpdate;
}

@property(nonatomic) BOOL firstBindAfterOutOfContextUpdate; // @synthesize firstBindAfterOutOfContextUpdate=_firstBindAfterOutOfContextUpdate;
- (void)processPreMirrorHeuristics:(const struct Function *)arg1 captureBlockMode:(int)arg2 functionIndex:(int)arg3;
- (id)initWithEngine:(id)arg1 graphicsEngineID:(unsigned long long)arg2;

@end

