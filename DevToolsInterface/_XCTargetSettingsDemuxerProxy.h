//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PBXTarget, XCBuildConfiguration;

@interface _XCTargetSettingsDemuxerProxy : NSObject
{
    PBXTarget *_realTarget;
    XCBuildConfiguration *_configuration;
}

+ (id)targetSettingsDemuxerProxyWithTarget:(id)arg1 configuration:(id)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (Class)class;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 configuration:(id)arg2;

@end

