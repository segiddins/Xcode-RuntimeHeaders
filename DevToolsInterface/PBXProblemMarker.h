//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXRulerMarker.h>

@class NSMutableArray, PBXBuildMessage;

@interface PBXProblemMarker : PBXRulerMarker
{
    PBXBuildMessage *_buildMessage;
    id _sender;
    NSMutableArray *_buildMessages;
    long long _lineNumber;
    unsigned long long _timestamp;
}

+ (id)bigProblemIcon;
+ (id)problemIcon;
+ (id)warningIcon;
+ (id)errorIcon;
- (id)tooltipString;
- (void)didSingleClickWithModifierFlags:(unsigned long long)arg1;
- (id)image;
- (void)didMove;
- (id)buildMessage;
- (void)setBuildMessage:(id)arg1;
- (id)buildMessages;
- (void)addBuildMessage:(id)arg1;
- (long long)lineNumber;
- (unsigned long long)timestamp;
- (void)setLineNumber:(long long)arg1;
- (void)dealloc;
- (id)initWithRulerView:(id)arg1 location:(double)arg2 lineNumber:(long long)arg3 timestamp:(unsigned long long)arg4 representedObject:(id)arg5 sender:(id)arg6;

@end

