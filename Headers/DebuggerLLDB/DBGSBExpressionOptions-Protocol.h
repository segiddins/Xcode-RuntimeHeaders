//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerLLDB/NSObject-Protocol.h>

@protocol DBGSBExpressionOptions <NSObject>
- (void)SetTrapExceptions:(_Bool)arg1;
- (void)SetFetchDynamicValue:(int)arg1;
- (void)SetLanguage:(int)arg1;
- (void)SetTimeoutInMicroSeconds:(unsigned int)arg1;
- (void)SetUnwindOnError:(_Bool)arg1;
- (void)SetTryAllThreads:(_Bool)arg1;
- (void)SetIgnoreBreakpoints:(_Bool)arg1;
- (id)initWithConnection:(id)arg1;
@end

