//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError;

@interface XCSimplePlainTextSerializer : NSObject
{
    Class _charsToClasses[26];
    CDStruct_cdb8c6f3 _outputStream;
    NSError *_error;
}

- (id)error;
- (id)data;
- (void)encodeObjectList:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodeString:(id)arg1;
- (void)encodeInteger:(unsigned long long)arg1;
- (Class)classForUppercaseAsciiCharacter:(BOOL)arg1;
- (void)setClass:(Class)arg1 forUppercaseAsciiCharacter:(BOOL)arg2;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

