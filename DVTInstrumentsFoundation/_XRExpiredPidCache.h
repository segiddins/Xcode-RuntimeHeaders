//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _XRExpiredPidCache : NSObject
{
    struct TFPPidWatcher pidWatcher;
    int enableCount;
    NSMutableDictionary *signatures;
}

- (void).cxx_destruct;

@end

