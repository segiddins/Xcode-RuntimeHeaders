//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDELanguageSupportUI/_IDEPlaygroundDataSerializationOperation-Protocol.h>

@class DVTFilePath, DVTPlaygroundCommunicationListener, IDEPlaygroundDocument, NSString;
@protocol OS_dispatch_queue;

@interface _IDEPlaygroundDataSerializationRead : NSObject <_IDEPlaygroundDataSerializationOperation>
{
    IDEPlaygroundDocument *playgroundDocument;
    DVTFilePath *playgroundPath;
    DVTFilePath *serializedDataPath;
    NSObject<OS_dispatch_queue> *callbackQueue;
    CDUnknownBlockType callbackBlock;
    DVTPlaygroundCommunicationListener *listener;
}

@property(readonly) DVTFilePath *playgroundPath; // @synthesize playgroundPath;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

