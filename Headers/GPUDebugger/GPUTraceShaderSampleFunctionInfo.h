//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GPUTraceShaderSampleFunctionInfo : NSObject
{
    int _lineIndex;
    NSString *_displayName;
    NSString *_function;
    NSString *_filePath;
}

@property(nonatomic) int lineIndex; // @synthesize lineIndex=_lineIndex;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *function; // @synthesize function=_function;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (unsigned long long)hashWithoutLine;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithInlineBlockInfo:(id)arg1;

@end

