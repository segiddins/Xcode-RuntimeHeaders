//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/DVTInvalidation-Protocol.h>
#import <GPUDebugger/NSObject-Protocol.h>

@class DVTExtension, IDELaunchParametersSnapshot, IDELaunchSession, IDERunDestination, NSString;

@protocol IDEDebuggingAddition <NSObject, DVTInvalidation>
@property(readonly) NSString *identifier;
@property(readonly, nonatomic) IDELaunchSession *launchSession;
- (id)initInLaunchSession:(IDELaunchSession *)arg1 withAppDisplayName:(NSString *)arg2 runDestination:(IDERunDestination *)arg3 fromExtension:(DVTExtension *)arg4;

@optional
+ (BOOL)shouldInstantiateInLaunchSession:(IDELaunchSession *)arg1;
- (void)processFinalLaunchParameters:(IDELaunchParametersSnapshot *)arg1;
- (IDELaunchParametersSnapshot *)adjustedLaunchParametersForLaunchParameters:(IDELaunchParametersSnapshot *)arg1;
@end
