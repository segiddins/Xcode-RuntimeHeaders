//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEPlaygroundResult;

@protocol IDEPlaygroundDataHandlerDelegate <NSObject>
- (void)playgroundDataHandlerDidDecodeFinishExpressionResult:(id)arg1;
- (void)playgroundDataHandler:(id)arg1 didDecodeResult:(IDEPlaygroundResult *)arg2;
@end

