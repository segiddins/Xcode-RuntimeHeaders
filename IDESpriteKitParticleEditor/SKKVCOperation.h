//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESpriteKitParticleEditor/SKDocumentOperation.h>

@class NSString;

@interface SKKVCOperation : SKDocumentOperation
{
    NSString *_keypath;
    id _target;
    id _oldValue;
    id _newValue;
}

- (void).cxx_destruct;
- (BOOL)revert;
- (BOOL)apply;
- (id)initWithDocument:(id)arg1 target:(id)arg2 newValue:(id)arg3 oldValue:(id)arg4 keyPath:(id)arg5;

@end

