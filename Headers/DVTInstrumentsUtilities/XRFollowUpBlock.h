//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperation;

__attribute__((visibility("hidden")))
@interface XRFollowUpBlock : NSObject
{
    CDUnknownBlockType _block;
    NSOperation *_op;
    XRFollowUpBlock *_myselfOrNil;
    struct atomic<int> _shouldntExecuteBlock;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)go;
- (id)initWithBlock:(CDUnknownBlockType)arg1 operation:(id)arg2;

@end

