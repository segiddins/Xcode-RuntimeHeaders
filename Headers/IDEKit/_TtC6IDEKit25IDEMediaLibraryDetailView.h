//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSImage, NSString;

@interface _TtC6IDEKit25IDEMediaLibraryDetailView : NSView
{
    // Error parsing type: , name: image
    // Error parsing type: , name: title
    // Error parsing type: , name: alternateSections
    // Error parsing type: , name: titleField
    // Error parsing type: , name: separator
    // Error parsing type: , name: imageView
    // Error parsing type: , name: alternateSectionTitles
    // Error parsing type: , name: alternateTextFields
    // Error parsing type: , name: alternateImageViews
    // Error parsing type: , name: contentInset
}

+ (double)imageHeight;
- (void).cxx_destruct;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, copy) NSArray *alternateSections;
@property(nonatomic, copy) NSString *title;
@property(nonatomic, retain) NSImage *image; // @synthesize image;

// Remaining properties
@property(nonatomic, readonly) BOOL flipped;

@end

