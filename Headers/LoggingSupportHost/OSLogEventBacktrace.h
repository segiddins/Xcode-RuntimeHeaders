//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface OSLogEventBacktrace : NSObject
{
    NSArray *_frames;
}

@property(readonly, nonatomic) NSArray *frames; // @synthesize frames=_frames;
- (void)dealloc;
- (id)initWithFrames:(id)arg1;
- (id)initWithSingleFrame:(id)arg1;
- (id)initWithBacktrace:(struct os_log_backtrace_s *)arg1;

@end

