//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XCSUser : NSObject
{
    NSString *_ID;
    NSString *_login;
    NSString *_externalID;
    NSString *_shortName;
    NSString *_longName;
}

@property(readonly, copy) NSString *longName; // @synthesize longName=_longName;
@property(readonly, copy) NSString *shortName; // @synthesize shortName=_shortName;
@property(readonly, copy) NSString *externalID; // @synthesize externalID=_externalID;
@property(readonly, copy) NSString *login; // @synthesize login=_login;
@property(readonly, copy) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (id)initWithID:(id)arg1 login:(id)arg2 externalID:(id)arg3 shortName:(id)arg4 longName:(id)arg5;

@end

