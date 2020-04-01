//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/Xcode3Library.h>

@class NSString, Xcode3FileReference;

@interface Xcode3LibraryReference : Xcode3Library
{
    Xcode3FileReference *_fileReference;
    NSString *_disambiguationString;
}

+ (id)libraryForFileReference:(id)arg1;
@property(readonly) Xcode3FileReference *fileReference; // @synthesize fileReference=_fileReference;
- (void).cxx_destruct;
- (void)_setDisambiguationString:(id)arg1;
- (void)_computeDisambiguationString;
- (id)disambiguationString;
- (id)displayName;
- (id)fileURL;
- (id)path;
- (id)name;
- (id)initWithFileReference:(id)arg1;

@end

