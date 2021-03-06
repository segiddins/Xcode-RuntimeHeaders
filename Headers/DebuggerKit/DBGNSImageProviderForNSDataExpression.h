//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerKit/DBGNSImageProvider-Protocol.h>

@class DBGDataValue, DBGNSDataForDataValueProvider, DVTObservingToken, NSImage, NSString;

@interface DBGNSImageProviderForNSDataExpression : NSObject <DBGNSImageProvider>
{
    DBGDataValue *_dataValue;
    NSString *_rawImageDataProductionExpression;
    BOOL _hasImageBeenRetrieved;
    NSImage *_image;
    BOOL _wasCancelled;
    DBGNSDataForDataValueProvider *_nsDataForDataValueProvider;
    DVTObservingToken *_nsDataForDataValueProviderObserver;
}

- (void).cxx_destruct;
@property(readonly) BOOL hasImageBeenRetrieved; // @synthesize hasImageBeenRetrieved=_hasImageBeenRetrieved;
@property(readonly) NSImage *image; // @synthesize image=_image;
- (void)_updateImageOnMainThread:(id)arg1;
- (void)_failedToGetData;
- (void)_startRetrieval;
- (void)cancel;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

