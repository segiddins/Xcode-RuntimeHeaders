//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DevToolsSupport/TSOutputStreams-Protocol.h>

@class NSString;

@interface TSOutputStream : NSObject <TSOutputStreams>
{
}

- (void)writeData:(id)arg1;
- (void)close;
- (void)flush;
- (void)writeBytes:(const void *)arg1 length:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

