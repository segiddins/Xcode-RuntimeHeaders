//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCEActivity.h>

@class XCESignal;

@interface XCEActivitySignal : XCEActivity
{
    XCESignal *_signal;
}

@property(retain, nonatomic) XCESignal *signal; // @synthesize signal=_signal;
- (void)dealloc;
- (id)value;
- (void)setValue:(id)arg1;
- (BOOL)supportsValue;
- (void)stopBeingActive;
- (void)startBeingActive;
- (id)initWithSignal:(id)arg1 context:(id)arg2;

@end

