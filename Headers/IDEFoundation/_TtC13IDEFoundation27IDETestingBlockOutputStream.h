//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDETestingOutputStream-Protocol.h>

@class MISSING_TYPE;

@interface _TtC13IDEFoundation27IDETestingBlockOutputStream : NSObject <IDETestingOutputStream>
{
    MISSING_TYPE *writeHandler;
    MISSING_TYPE *finishHandler;
}

- (void).cxx_destruct;
- (id)init;
- (void)finish;
@property(nonatomic, copy) CDUnknownBlockType finishHandler;
- (void)writeString:(id)arg1;
@property(nonatomic, copy) CDUnknownBlockType writeStringHandler;

@end

