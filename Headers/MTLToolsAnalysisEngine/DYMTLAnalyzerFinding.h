//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUToolsServices/DYAnalyzerFinding.h>

@class NSBundle;

@interface DYMTLAnalyzerFinding : DYAnalyzerFinding
{
    NSBundle *_pluginBundle;
}

- (void).cxx_destruct;
- (BOOL)isTextureImageCompletelyUpdated;
- (BOOL)isBufferDataCompletelyUpdated;
- (BOOL)isInefficientStateUpdate;
- (BOOL)isRedundantCallOrQuery;
- (BOOL)isRedundantCall;
- (BOOL)isEncoderStatistics;
- (BOOL)isFrameStatistics;
- (id)initWithPlatform:(int)arg1;
- (id)initWithPlatform:(int)arg1 unsorted:(BOOL)arg2;
- (BOOL)isDataRestoreUnnecessaryForFunc:(const struct Function *)arg1 targetArgIndex:(int)arg2 objectType:(unsigned int)arg3 analyzerEngine:(id)arg4;
- (id)localizedKind;
- (id)synopsis;
- (id)_getLocalizedStringFromBundle:(id)arg1 withKey:(id)arg2 table:(id)arg3;

@end

