//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError;

@interface XCSimplePlainTextDeserializer : NSObject
{
    Class _charsToClasses[26];
    NSData *_inputData;
    CDStruct_cdb8c6f3 _inputStream;
    NSError *_error;
}

- (void).cxx_destruct;
- (id)error;
- (id)data;
- (id)decodeObjectList;
- (id)decodeObject;
- (id)decodeString;
- (unsigned long long)decodeInteger;
- (Class)classForUppercaseAsciiCharacter:(BOOL)arg1;
- (void)setClass:(Class)arg1 forUppercaseAsciiCharacter:(BOOL)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithData:(id)arg1;

@end

