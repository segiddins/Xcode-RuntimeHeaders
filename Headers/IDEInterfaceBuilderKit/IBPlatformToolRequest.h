//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IBPlatformToolRequest : NSObject
{
    BOOL _wasSuperseded;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _diagnosticsBlock;
    NSString *_supersessionIdentifier;
    NSString *_requestID;
    id _requestData;
    id _resultData;
}

- (void).cxx_destruct;
@property(retain) id resultData; // @synthesize resultData=_resultData;
@property BOOL wasSuperseded; // @synthesize wasSuperseded=_wasSuperseded;
@property(readonly) id requestData; // @synthesize requestData=_requestData;
@property(readonly, copy) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly, copy) NSString *supersessionIdentifier; // @synthesize supersessionIdentifier=_supersessionIdentifier;
@property(readonly, copy) CDUnknownBlockType diagnosticsBlock; // @synthesize diagnosticsBlock=_diagnosticsBlock;
@property(readonly, copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (id)description;
- (void)runCompletionBlock;
- (id)initWithRequestID:(id)arg1 data:(id)arg2 supersessionIdentifier:(id)arg3 diagnosticsBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end

