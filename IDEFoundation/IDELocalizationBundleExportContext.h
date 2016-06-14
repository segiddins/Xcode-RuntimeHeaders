//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDELocalizationWorkContext.h>

#import <IDEFoundation/IDELocalizationWorkProvider-Protocol.h>

@class IDEContainer, NSArray, NSString, NSURL;
@protocol IDELocalizedContainer;

@interface IDELocalizationBundleExportContext : IDELocalizationWorkContext <IDELocalizationWorkProvider>
{
    NSURL *_destinationUrl;
    IDEContainer<IDELocalizedContainer> *_container;
    NSString *_sourceLanguage;
    NSArray *_targetLanguages;
}

+ (id)contextWithParent:(id)arg1 destinationUrl:(id)arg2 container:(id)arg3 sourceLanguage:(id)arg4 targetLanguages:(id)arg5;
@property(retain) NSArray *targetLanguages; // @synthesize targetLanguages=_targetLanguages;
@property(retain) NSString *sourceLanguage; // @synthesize sourceLanguage=_sourceLanguage;
@property(retain) IDEContainer<IDELocalizedContainer> *container; // @synthesize container=_container;
@property(retain) NSURL *destinationUrl; // @synthesize destinationUrl=_destinationUrl;
- (void).cxx_destruct;
- (id)work;
- (void)primitiveInvalidate;

@end

