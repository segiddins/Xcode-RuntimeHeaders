//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsShaderProfiler/NSCopying-Protocol.h>
#import <GPUToolsShaderProfiler/NSSecureCoding-Protocol.h>

@class NSString;

@interface DYShaderInlineBlockInfo : NSObject <NSSecureCoding, NSCopying>
{
    int _lineIndex;
    NSString *_function;
    NSString *_file;
    NSString *_directory;
    NSString *_sourcePath;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) int lineIndex; // @synthesize lineIndex=_lineIndex;
@property(retain, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
@property(retain, nonatomic) NSString *directory; // @synthesize directory=_directory;
@property(retain, nonatomic) NSString *file; // @synthesize file=_file;
@property(retain, nonatomic) NSString *function; // @synthesize function=_function;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

