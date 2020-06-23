//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBBinaryArchiving-Protocol.h>

@class NSString;

@interface IBPlatformToolExtension : NSObject <IBBinaryArchiving>
{
    NSString *_initializerClassName;
    NSString *_bundlePath;
    NSString *_platformName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *platformName; // @synthesize platformName=_platformName;
@property(readonly, copy, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(readonly, copy, nonatomic) NSString *initializerClassName; // @synthesize initializerClassName=_initializerClassName;
@property(readonly, copy) NSString *description;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithInitializerClassName:(id)arg1 bundlePath:(id)arg2 platformName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

