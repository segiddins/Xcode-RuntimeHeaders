//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString;

@interface ParseErrorStream : NSObject
{
    NSMutableString *_log;
    BOOL _writeToString;
    BOOL _writeToStderr;
}

- (void)dealloc;
- (id)errorString;
- (void)addInformation:(id)arg1;
- (void)addInformationInFile:(const char *)arg1 atLine:(long long)arg2 withMessage:(id)arg3;
- (void)addWarningInFile:(const char *)arg1 atLine:(long long)arg2 withMessage:(id)arg3;
- (void)addErrorInFile:(const char *)arg1 atLine:(long long)arg2 withMessage:(id)arg3;
- (void)addString:(id)arg1;
- (void)setSendOutputToString:(BOOL)arg1;
- (void)setSendOutputToStderr:(BOOL)arg1;
- (id)init;

@end

