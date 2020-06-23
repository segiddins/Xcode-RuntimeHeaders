//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSKeyBinding, NSString;

@interface PBXArchiveBinding : NSObject
{
    NSKeyBinding *_keyBinding;
    NSString *_key;
    NSString *_archiveKey;
    int _archiveMask;
}

+ (id)bindingWithClass:(Class)arg1 key:(id)arg2 archiveMask:(int)arg3;
- (void).cxx_destruct;
- (Class)targetClass;
- (id)key;
- (int)archiveMask;
- (id)keyBinding;
- (id)initWithKeyBinding:(id)arg1 archiveMask:(int)arg2;

@end

