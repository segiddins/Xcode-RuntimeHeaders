//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFileDataType, DVTLocale, Xcode3VariantFileReference;

@interface _Xcode3LocalizationsInspectorLocale : NSObject
{
    BOOL _localized;
    DVTLocale *_locale;
    Xcode3VariantFileReference *_fileReference;
    DVTFileDataType *_fileDataType;
}

- (void).cxx_destruct;
@property(retain) DVTFileDataType *fileDataType; // @synthesize fileDataType=_fileDataType;
@property BOOL localized; // @synthesize localized=_localized;
@property(retain) Xcode3VariantFileReference *fileReference; // @synthesize fileReference=_fileReference;
@property(readonly) DVTLocale *locale; // @synthesize locale=_locale;
- (id)image;
- (id)initWithLocale:(id)arg1 fileReference:(id)arg2 fileDataType:(id)arg3;

@end

