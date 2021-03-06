//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet, NSMutableString, NSOutputStream, NSString;
@protocol OS_dispatch_queue;

@interface IDETestOutputProcessor : NSObject
{
    NSString *_barrierString;
    NSCharacterSet *_barrierStringCharacterSet;
    NSCharacterSet *_safeCharacterSet;
    NSObject<OS_dispatch_queue> *_consoleProcessingQueue;
    NSString *_partialConsoleChunkFromLastOutput;
    NSString *_unconsumedOutputPossiblyTerminatedByToken;
    NSMutableString *_unconsumedOutputNotTerminatedByToken;
    NSString *_unprintedConsoleOutput;
    NSOutputStream *_rawOutputStream;
}

- (void).cxx_destruct;
@property(retain) NSOutputStream *rawOutputStream; // @synthesize rawOutputStream=_rawOutputStream;
@property(retain) NSString *unprintedConsoleOutput; // @synthesize unprintedConsoleOutput=_unprintedConsoleOutput;
@property(retain) NSMutableString *unconsumedOutputNotTerminatedByToken; // @synthesize unconsumedOutputNotTerminatedByToken=_unconsumedOutputNotTerminatedByToken;
@property(retain) NSString *unconsumedOutputPossiblyTerminatedByToken; // @synthesize unconsumedOutputPossiblyTerminatedByToken=_unconsumedOutputPossiblyTerminatedByToken;
@property(retain) NSString *partialConsoleChunkFromLastOutput; // @synthesize partialConsoleChunkFromLastOutput=_partialConsoleChunkFromLastOutput;
@property(retain) NSObject<OS_dispatch_queue> *consoleProcessingQueue; // @synthesize consoleProcessingQueue=_consoleProcessingQueue;
@property(retain) NSCharacterSet *safeCharacterSet; // @synthesize safeCharacterSet=_safeCharacterSet;
@property(retain) NSCharacterSet *barrierStringCharacterSet; // @synthesize barrierStringCharacterSet=_barrierStringCharacterSet;
@property(retain) NSString *barrierString; // @synthesize barrierString=_barrierString;
- (id)_subStringToLastCharacterInSet:(id)arg1 ofString:(id *)arg2;
- (BOOL)_isStringPossiblyTerminatedByBarrier:(id)arg1;
- (id)outputResultForRawOutput:(id)arg1;
- (id)remainingUnprocessedOutput;
- (void)logRawOutputToFileAtPath:(id)arg1;
- (void)dealloc;
- (id)initWithBarrierString:(id)arg1;

@end

