//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDELocalizationWorkContext.h>

@class DVTFilePath, DVTLocale, IDEContainer, IDEGroup;
@protocol IDELocalizedContainer, IDELocalizedGroup;

@interface _IDELocalizationAddFileReferenceContext : IDELocalizationWorkContext
{
    IDEContainer<IDELocalizedContainer> *_container;
    IDEGroup<IDELocalizedGroup> *_group;
    DVTLocale *_locale;
    DVTFilePath *_filePath;
}

@property(retain) DVTFilePath *filePath; // @synthesize filePath=_filePath;
@property(retain) DVTLocale *locale; // @synthesize locale=_locale;
@property(retain) IDEGroup<IDELocalizedGroup> *group; // @synthesize group=_group;
@property(retain) IDEContainer<IDELocalizedContainer> *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)primitiveInvalidate;

@end

