//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC7XCSCore19XCSResponseRecorder : NSObject
{
    MISSING_TYPE *options;
    MISSING_TYPE *info;
}

+ (void)setCurrentRecorder:(id)arg1;
+ (id)currentRecorder;
- (void).cxx_destruct;
- (id)init;
- (BOOL)recordRequest:(id)arg1 downloadedURL:(id)arg2 error:(id *)arg3;
- (BOOL)recordRequest:(id)arg1 response:(id)arg2 data:(id)arg3 error:(id *)arg4;
- (BOOL)recordResponse:(id)arg1 error:(id *)arg2;
- (void)setServerVersion:(id)arg1 forHost:(id)arg2;
- (void)setUsername:(id)arg1 forHost:(id)arg2;

@end
