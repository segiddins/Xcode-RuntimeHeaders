//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDESourceKitRequestDictionaryWrapper-Protocol.h>

@class IDESourceKitRequestDictionary;

@interface IDESourceKitRequestIndexable : NSObject <IDESourceKitRequestDictionaryWrapper>
{
    IDESourceKitRequestDictionary *_dict;
}

- (void).cxx_destruct;
- (id)internalDictionary;
- (id)initWithUIDSet:(id)arg1 indexableIdentifier:(id)arg2 fileURLs:(id)arg3 supportedPlatforms:(id)arg4 linkedIndexableIds:(id)arg5 indexableIsUnitTest:(id)arg6;

@end

