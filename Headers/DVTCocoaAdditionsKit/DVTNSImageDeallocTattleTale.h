//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTStackBacktrace, NSString;

@interface DVTNSImageDeallocTattleTale : NSObject
{
    DVTStackBacktrace *_creationBacktrace;
    NSString *_imageDescription;
}

- (void).cxx_destruct;
@property(retain) NSString *imageDescription; // @synthesize imageDescription=_imageDescription;
@property(retain) DVTStackBacktrace *creationBacktrace; // @synthesize creationBacktrace=_creationBacktrace;
- (void)dealloc;

@end
