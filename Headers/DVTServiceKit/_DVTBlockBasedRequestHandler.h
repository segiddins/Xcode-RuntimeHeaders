//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTServiceKit/DVTRequestHandler.h>

@interface _DVTBlockBasedRequestHandler : DVTRequestHandler
{
    CDUnknownBlockType _requestHandlerBlock;
}

@property(readonly, copy) CDUnknownBlockType requestHandlerBlock; // @synthesize requestHandlerBlock=_requestHandlerBlock;
- (void).cxx_destruct;
- (id)handleRequest:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
