//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (DevToolsFoundationAdditions)
+ (id)dataWithFirstBytes:(unsigned long long)arg1 ofFile:(id)arg2;
- (void)writeToFile:(id)arg1 atomically:(BOOL)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)dataWithMD5Digest;
@end

