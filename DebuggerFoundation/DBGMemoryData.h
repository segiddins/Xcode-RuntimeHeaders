//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerFoundation/DVTInvalidation-Protocol.h>
#import <DebuggerFoundation/IDEDebugNavigableModel-Protocol.h>

@class DBGProcess, DVTStackBacktrace, IDELaunchSession, NSArray, NSData, NSString, NSURL;

@interface DBGMemoryData : NSObject <IDEDebugNavigableModel, DVTInvalidation>
{
    BOOL _shouldAutoUpdate;
    BOOL _memoryFaulted;
    BOOL _showsAsMemoryFaulted;
    unsigned long long _startingAddress;
    NSString *_expression;
    unsigned long long _numberOfBytes;
    NSData *_rawMemoryData;
    NSData *_shadowMemoryData;
    DBGProcess *_parentProcess;
    NSArray *_recordedThreads;
    NSString *_pointerDescription;
    NSString *_uuid;
    NSURL *_url;
}

+ (void)initialize;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(readonly) NSString *uuid; // @synthesize uuid=_uuid;
@property BOOL showsAsMemoryFaulted; // @synthesize showsAsMemoryFaulted=_showsAsMemoryFaulted;
@property(nonatomic, getter=isMemoryFaulted) BOOL memoryFaulted; // @synthesize memoryFaulted=_memoryFaulted;
@property(readonly, copy) NSString *pointerDescription; // @synthesize pointerDescription=_pointerDescription;
@property(readonly, copy) NSArray *recordedThreads; // @synthesize recordedThreads=_recordedThreads;
@property(retain) DBGProcess *parentProcess; // @synthesize parentProcess=_parentProcess;
@property BOOL shouldAutoUpdate; // @synthesize shouldAutoUpdate=_shouldAutoUpdate;
@property(copy) NSData *shadowMemoryData; // @synthesize shadowMemoryData=_shadowMemoryData;
@property(copy) NSData *rawMemoryData; // @synthesize rawMemoryData=_rawMemoryData;
@property unsigned long long numberOfBytes; // @synthesize numberOfBytes=_numberOfBytes;
@property(copy) NSString *expression; // @synthesize expression=_expression;
@property unsigned long long startingAddress; // @synthesize startingAddress=_startingAddress;
- (void).cxx_destruct;
- (void)gatherAdditionalInformationForAddress:(unsigned long long)arg1 numberOfBytes:(unsigned long long)arg2;
- (void)primitiveInvalidate;
- (void)_updateUsingExpression:(id)arg1 numberOfBytes:(unsigned long long)arg2;
- (void)updateNumberOfBytes:(unsigned long long)arg1;
- (void)updateUsingExpression:(id)arg1;
- (void)update;
- (void)autoUpdate;
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, copy) NSString *associatedProcessUUID;
- (id)initWithExpression:(id)arg1 numberOfBytes:(unsigned long long)arg2 process:(id)arg3;
- (id)generateNewURL;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

