//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCBuildLogAnalyzerStepMessage.h>

@class NSArray, XCTextFileLocation;

@interface XCBuildLogAnalyzerControlFlowStepMessage : XCBuildLogAnalyzerStepMessage
{
    XCTextFileLocation *_endFileLocation;
    NSArray *_edges;
}

- (void)writeToSerializer:(id)arg1;
- (id)initFromDeserializer:(id)arg1;
- (void)setEdges:(id)arg1;
- (id)edges;
- (id)endFileLocation;
- (id)startFileLocation;
- (BOOL)isAnalyzerControlFlowStepMessage;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 startFileLocation:(id)arg2 endFileLocation:(id)arg3;

@end

