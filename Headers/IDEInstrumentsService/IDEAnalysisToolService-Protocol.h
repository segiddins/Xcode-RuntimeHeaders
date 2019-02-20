//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInstrumentsService/NSObject-Protocol.h>

@class DVTFileDataType, DVTFilePath, DVTOperation, IDEAnalysisTool, IDELaunchParametersSnapshot, IDERunDestination, NSArray, NSString;

@protocol IDEAnalysisToolService <NSObject>
+ (IDEAnalysisTool *)analysisToolWithIdentifier:(NSString *)arg1 platformIdentifier:(NSString *)arg2;
+ (NSArray *)analysisToolsForPlatformIdentifier:(NSString *)arg1;
@property(retain) IDELaunchParametersSnapshot *launchParameters;
@property(copy) IDERunDestination *runDestination;
@property(retain) IDEAnalysisTool *analysisTool;
- (DVTOperation *)operationWithWorkingDirectory:(DVTFilePath *)arg1 workspaceFilePath:(DVTFilePath *)arg2 projectFilePath:(DVTFilePath *)arg3 outError:(id *)arg4;
- (void)setAttachRunnablePID:(int)arg1 applicationName:(NSString *)arg2;
- (id)initWithRunnableUTIType:(DVTFileDataType *)arg1;
@end
