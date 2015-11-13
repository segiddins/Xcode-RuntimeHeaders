//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBICSchemaProvider-Protocol.h>

@class IBICFileType, IBICPlatform, NSDictionary, NSString;

@interface IBICGenericSchemaPlatform : NSObject <IBICSchemaProvider>
{
    double _precedence;
    NSDictionary *_rawSchema;
    IBICPlatform *_platform;
    NSDictionary *_idioms;
    IBICFileType *_pngFileType;
    IBICFileType *_jpegFileType;
    IBICFileType *_pdfFileType;
}

- (void).cxx_destruct;
- (id)createOrFetchIdiomInSchema:(id)arg1;
- (id)createOrFetchPlatformInSchema:(id)arg1;
- (double)maxDisplayOrderForSlotSuggestionSetsInSchema:(id)arg1;
- (double)maxDisplayOrderForSlotComponentClass:(Class)arg1 schema:(id)arg2;
- (void)registerImageSet:(id)arg1 forIdiom:(id)arg2 inSchema:(id)arg3;
- (void)registerImageSetSlots:(id)arg1;
- (void)captureExistingComponents:(id)arg1;
- (void)registerSchemaComponents:(id)arg1;
- (double)precedence;
- (id)initWithGenericRawSchema:(id)arg1 precedence:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

