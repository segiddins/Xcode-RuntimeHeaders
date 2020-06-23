//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DYCaptureSessionInfo, NSURL;

@interface DysonSourceGenerator : NSObject
{
    BOOL _skipOptionalFunctions;
    BOOL _shouldFilterAppleInternalContexts;
    BOOL _emitErrorChecks;
    NSURL *_outputURL;
    NSURL *_sourceDirectoryURL;
    DYCaptureSessionInfo *_captureSessionInfo;
}

+ (Class)generatorForIdentifier:(id)arg1;
+ (id)availableGenerators;
+ (void)_registerGenerators;
+ (void)_registerGenerator:(Class)arg1;
+ (id)identifier;
@property(nonatomic) BOOL emitErrorChecks; // @synthesize emitErrorChecks=_emitErrorChecks;
@property(nonatomic) BOOL shouldFilterAppleInternalContexts; // @synthesize shouldFilterAppleInternalContexts=_shouldFilterAppleInternalContexts;
@property(nonatomic) BOOL skipOptionalFunctions; // @synthesize skipOptionalFunctions=_skipOptionalFunctions;
@property(nonatomic) DYCaptureSessionInfo *captureSessionInfo; // @synthesize captureSessionInfo=_captureSessionInfo;
@property(readonly, retain, nonatomic) NSURL *sourceDirectoryURL; // @synthesize sourceDirectoryURL=_sourceDirectoryURL;
@property(readonly, retain, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
- (void).cxx_destruct;
- (void)processArchive:(id)arg1;
- (id)pathForResource:(id)arg1;
- (void)_createOutputDirectory;
- (void)dealloc;
- (id)initWithOutputURL:(id)arg1;
- (id)init;

@end

