//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ScopeToken : NSObject
{
    BOOL _saveToken;
    int _token;
}

@property(readonly, nonatomic) BOOL saveToken; // @synthesize saveToken=_saveToken;
@property(readonly, nonatomic) int token; // @synthesize token=_token;
- (id)initWithToken:(int)arg1 saveToken:(BOOL)arg2;

@end

