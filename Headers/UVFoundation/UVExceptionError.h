//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSException;

@interface UVExceptionError : NSError
{
    NSException *_exception;
}

@property(readonly, nonatomic) NSException *exception; // @synthesize exception=_exception;
- (void).cxx_destruct;
- (id)initWithException:(id)arg1;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;

@end

