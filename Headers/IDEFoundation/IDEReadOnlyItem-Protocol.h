//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class NSURL;

@protocol IDEReadOnlyItem <NSObject>
@property(readonly) NSURL *readOnlyItemURL;
@property(readonly) int readOnlyStatus;
- (BOOL)makeWritableWithError:(id *)arg1;
@end

