//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDETestingLaunchSession-Protocol.h>

@class MISSING_TYPE;
@protocol IDETestingOutputStream;

@interface _TtC13IDEFoundation23IDETestingLaunchSession : NSObject <IDETestingLaunchSession>
{
    MISSING_TYPE *consoleAdaptorsObservingToken;
    MISSING_TYPE *consoleAdaptor;
    MISSING_TYPE *outputStream;
    MISSING_TYPE *hasStarted;
    MISSING_TYPE *filter;
    MISSING_TYPE *receivedRunnablePID;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) CDUnknownBlockType receivedRunnablePID;
@property(nonatomic, copy) CDUnknownBlockType filter;
@property(nonatomic, readonly) BOOL isFinishedReceivingData;
@property(nonatomic) BOOL hasStarted; // @synthesize hasStarted;
- (void)invalidate;
- (void)dealloc;
- (id)initWithIDELaunchSession:(id)arg1;
@property(nonatomic, retain) id <IDETestingOutputStream> outputStream; // @synthesize outputStream;

@end

