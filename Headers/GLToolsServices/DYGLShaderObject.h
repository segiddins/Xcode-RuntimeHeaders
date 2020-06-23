//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GLToolsServices/DYGLResourceObject.h>

@class NSString;

@interface DYGLShaderObject : DYGLResourceObject
{
    BOOL _compiled;
    BOOL _currentSourceIsCompiled;
    unsigned int _shaderType;
    NSString *_compiledSource;
    NSString *_source;
    NSString *_infoLog;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL currentSourceIsCompiled; // @synthesize currentSourceIsCompiled=_currentSourceIsCompiled;
@property(readonly, nonatomic) BOOL compiled; // @synthesize compiled=_compiled;
@property(readonly, nonatomic) unsigned int shaderType; // @synthesize shaderType=_shaderType;
@property(readonly, copy, nonatomic) NSString *infoLog; // @synthesize infoLog=_infoLog;
@property(readonly, copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) NSString *compiledSource; // @synthesize compiledSource=_compiledSource;
- (id)initWithLinkedSource:(id)arg1 shaderType:(unsigned int)arg2 context:(unsigned long long)arg3;
- (id)initWithProperties:(id)arg1;
- (id)initWithResourceObject:(id)arg1 functionStream:(id)arg2 dataResolver:(CDUnknownBlockType)arg3;

@end

