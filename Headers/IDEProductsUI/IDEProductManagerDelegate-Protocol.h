//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEProductsUI/NSObject-Protocol.h>

@class IDEProductManager, IDEProductSource, NSArray;

@protocol IDEProductManagerDelegate <NSObject>
- (void)productManager:(IDEProductManager *)arg1 receivedErrors:(NSArray *)arg2 fromSource:(IDEProductSource *)arg3;
@end

