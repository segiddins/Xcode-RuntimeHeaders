//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/Xcode3Library.h>

@class NSString, XCLibraryDescriptor;

@interface Xcode3LibraryDescriptor : Xcode3Library
{
    XCLibraryDescriptor *_libraryDescriptor;
    NSString *_disambiguationString;
}

+ (id)libraryForLibraryDescriptor:(id)arg1;
@property(readonly) XCLibraryDescriptor *libraryDescriptor; // @synthesize libraryDescriptor=_libraryDescriptor;
- (void).cxx_destruct;
- (void)_setDisambiguationString:(id)arg1;
- (void)_computeDisambiguationString;
- (id)disambiguationString;
- (id)displayName;
- (id)fileURL;
- (id)path;
- (id)name;
- (id)initWithLibraryDescriptor:(id)arg1;

@end

