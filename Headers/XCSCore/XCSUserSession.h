//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, XCSUser;

@interface XCSUserSession : NSObject
{
    NSString *_guid;
    XCSUser *_user;
    NSDate *_createTime;
    NSDate *_updateTime;
    NSDate *_expireTime;
}

- (void).cxx_destruct;
@property(readonly, copy) NSDate *expireTime; // @synthesize expireTime=_expireTime;
@property(readonly, copy) NSDate *updateTime; // @synthesize updateTime=_updateTime;
@property(readonly, copy) NSDate *createTime; // @synthesize createTime=_createTime;
@property(readonly, copy) XCSUser *user; // @synthesize user=_user;
@property(readonly, copy) NSString *guid; // @synthesize guid=_guid;
- (id)initWithGUID:(id)arg1 user:(id)arg2 createTime:(id)arg3 updateTime:(id)arg4 expireTime:(id)arg5;

@end

