//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface IDEPlaygroundLoggerObjectReflectionDecoderFactory : NSObject
{
    NSMapTable *_tagToDecoderInstanceMap;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_decoderExtensionForTag:(id)arg1;
- (id)decoderInstanceForTag:(id)arg1;
- (id)init;

@end

