//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GPUToolsServices/DYStackFrame.h>

@class IDELaunchSession;

@interface GPUStackFrame : DYStackFrame
{
    IDELaunchSession *_launchSession;
}

@property(retain, nonatomic) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithLaunchSession:(id)arg1;

@end

