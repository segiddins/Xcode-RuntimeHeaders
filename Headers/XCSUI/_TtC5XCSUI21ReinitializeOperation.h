//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSUI/_TtC5XCSUI12XPCOperation.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC5XCSUI21ReinitializeOperation : _TtC5XCSUI12XPCOperation
{
    MISSING_TYPE *didFinishHandler;
    MISSING_TYPE *userName;
}

- (void).cxx_destruct;
- (id)initWithClient:(id)arg1;
- (void)start;
@property(nonatomic, copy) NSString *userName;
- (id)initWithClient:(id)arg1 finishHandler:(CDUnknownBlockType)arg2;
@property(nonatomic, copy) CDUnknownBlockType didFinishHandler;

@end
