//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/OSActivityStreamDelegate-Protocol.h>

@class NSDateFormatter, NSFileHandle, NSMutableArray, NSMutableData, NSString, NSTimer, OSActivityStream;
@protocol IDEConsoleAdaptorDelegateProtocol, OS_dispatch_queue;

@interface IDEConsoleAdaptor : NSObject <OSActivityStreamDelegate>
{
    OSActivityStream *_stream;
    NSDateFormatter *_dateFormatter;
    int _pid;
    NSString *_type;
    NSObject<OS_dispatch_queue> *_writeSerialQueue;
    NSTimer *_endOfStandardOutputReadTimer;
    NSTimer *_endOfStandardErrorReadTimer;
    BOOL _finishedReceivingData;
    BOOL _ignoreFutureOutput;
    NSFileHandle *_standardInput;
    NSFileHandle *_standardOutput;
    NSFileHandle *_standardError;
    NSMutableData *_currentOutputOverflow;
    NSMutableData *_currentErrorOverflow;
    NSTimer *_targetOutputOverflowTimer;
    id <IDEConsoleAdaptorDelegateProtocol> _delegate;
    unsigned long long _currNumStoredChars;
    struct __CFDictionary *_completeContent;
    struct __CFArray *_completeContentSequences;
    struct __CFArray *_standardInputSequences;
    struct __CFArray *_standardOutputSequences;
    struct __CFArray *_standardErrorSequences;
    NSMutableArray *_fileReadTokenArray;
}

+ (id)standardErrorItemsForAdaptors:(id)arg1;
+ (id)standardOutputItemsForAdaptors:(id)arg1;
+ (id)standardInputItemsForAdaptors:(id)arg1;
+ (id)allConsoleItemsForAdaptors:(id)arg1;
+ (id)_itemsForAdaptors:(id)arg1 sequencesSelector:(SEL)arg2;
+ (unsigned long long)_nextContentSequence;
+ (void)initialize;
@property(readonly) struct __CFArray *standardErrorSequences; // @synthesize standardErrorSequences=_standardErrorSequences;
@property(readonly) struct __CFArray *standardOutputSequences; // @synthesize standardOutputSequences=_standardOutputSequences;
@property(readonly) struct __CFArray *standardInputSequences; // @synthesize standardInputSequences=_standardInputSequences;
@property(readonly) struct __CFArray *completeContentSequences; // @synthesize completeContentSequences=_completeContentSequences;
@property(readonly) struct __CFDictionary *completeContent; // @synthesize completeContent=_completeContent;
@property(retain) id <IDEConsoleAdaptorDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property BOOL ignoreFutureOutput; // @synthesize ignoreFutureOutput=_ignoreFutureOutput;
@property BOOL finishedReceivingData; // @synthesize finishedReceivingData=_finishedReceivingData;
@property(readonly) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (BOOL)activityStream:(id)arg1 results:(id)arg2;
- (void)setupLoggingStreamForPid:(int)arg1 withDevice:(id)arg2;
- (id)standardErrorItems;
- (id)standardOutputItems;
- (id)standardInputItems;
- (id)allConsoleItems;
- (id)_itemsForSequences:(struct __CFArray *)arg1;
- (void)_setStandardError:(id)arg1;
- (void)_setStandardOutput:(id)arg1;
- (void)_addObserverToReadCompletion:(id)arg1 selector:(SEL)arg2;
- (void)_getError:(id)arg1;
- (void)_getOutput:(id)arg1;
- (void)_timerFiredToCheckEndOfRead:(id)arg1;
- (void)_fileHandleCompletedRead:(id)arg1;
- (id)_getData:(id)arg1 overflowBuffer:(id *)arg2;
- (void)_timerFiredForTargetOutputOverflow:(id)arg1;
- (void)_setStandardInput:(id)arg1;
- (void)outputForStandardError:(id)arg1 kind:(int)arg2;
- (void)outputForStandardError:(id)arg1;
- (void)outputForStandardOutput:(id)arg1;
- (void)outputForStandardOutput:(id)arg1 isPrompt:(BOOL)arg2 isOutputRequestedByUser:(BOOL)arg3;
- (void)_postOnMainThreadForNotification:(id)arg1 consoleItem:(id)arg2;
- (void)inputForStandardInput:(id)arg1;
- (void)inputFromConsole:(id)arg1 echo:(BOOL)arg2;
- (void)makeExpired;
- (void)_makeExpired;
- (void)_addToCompleteContent:(id)arg1 andSupportingSequences:(struct __CFArray *)arg2;
- (BOOL)_removeSequence:(unsigned long long)arg1 fromSupportingSequences:(struct __CFArray *)arg2;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithType:(id)arg1 standardInput:(id)arg2 standardOutput:(id)arg3 standardError:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

