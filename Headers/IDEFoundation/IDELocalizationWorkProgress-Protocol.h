//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class NSString;

@protocol IDELocalizationWorkProgress <NSObject>
@property(readonly, copy) NSString *workTitle;
@property(readonly, copy) NSString *phase;
@property(readonly) long long progress;
@property(readonly) BOOL complete;
@end

