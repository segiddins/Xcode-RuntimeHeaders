//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTCrashLogParsedBinaryImage, NSString;

@interface DVTCrashLogBinaryImage : NSObject
{
    DVTCrashLogParsedBinaryImage *_parsedBinaryImage;
    NSString *_rawText;
}

- (void).cxx_destruct;
@property(readonly) NSString *rawText; // @synthesize rawText=_rawText;
- (id)description;
@property(readonly) DVTCrashLogParsedBinaryImage *parsedBinaryImage; // @synthesize parsedBinaryImage=_parsedBinaryImage;
- (id)_binaryImageParsers;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithText:(id)arg1;

@end

