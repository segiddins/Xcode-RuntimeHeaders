//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface DTSysmonProcessRecord : NSObject
{
    int _pid;
    NSArray *_attributes;
}

@property(retain, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) int pid; // @synthesize pid=_pid;
- (void).cxx_destruct;

@end

