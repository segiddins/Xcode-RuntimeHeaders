//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDESpriteKitParticleEditor/NSKeyedArchiverDelegate-Protocol.h>

@class NSData, NSKeyedArchiver, NSMutableDictionary, NSString, SKCustomClassStack;

@interface SKSceneCustomClassKeyedArchiver : NSObject <NSKeyedArchiverDelegate>
{
    NSKeyedArchiver *_archiver;
    NSData *_encodedData;
    SKCustomClassStack *_classStack;
    NSMutableDictionary *_classMapping;
}

- (void).cxx_destruct;
- (void)archiver:(id)arg1 didEncodeObject:(id)arg2;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
- (id)encodedData;
- (void)finishEncoding;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeRootObject:(id)arg1;
- (id)initForWritingWithMutableData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

