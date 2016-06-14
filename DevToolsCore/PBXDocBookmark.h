//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXBookmark.h>

@class NSString, NSURL;

@interface PBXDocBookmark : PBXBookmark
{
    unsigned long long _glyphRangeLocation;
    unsigned long long _glyphRangeLength;
    NSString *_htmlAnchor;
    NSString *_docSetIdentifier;
    NSURL *_absoluteURL;
}

+ (id)archivableAttributes;
+ (id)bookmarkWithFileReference:(id)arg1 gylphRange:(struct _NSRange)arg2 anchor:(id)arg3;
+ (id)bookmarkWithFileReference:(id)arg1 gylphRange:(struct _NSRange)arg2 anchor:(id)arg3 docSetIdentifier:(id)arg4 absoluteURL:(id)arg5;
@property(retain) NSURL *absoluteURL; // @synthesize absoluteURL=_absoluteURL;
@property(retain) NSString *docSetIdentifier; // @synthesize docSetIdentifier=_docSetIdentifier;
- (void)dealloc;
- (BOOL)isSimpleBookmark;
- (void)setGlyphRangeLength:(unsigned long long)arg1;
- (void)setGlyphRangeLocation:(unsigned long long)arg1;
- (void)setGlyphRange:(struct _NSRange)arg1;
- (unsigned long long)glyphRangeLength;
- (unsigned long long)glyphRangeLocation;
- (void)setAnchor:(id)arg1;
- (id)anchor;
- (id)fileURL;
- (id)initWithFileReference:(id)arg1 gylphRange:(struct _NSRange)arg2 anchor:(id)arg3 docSetIdentifier:(id)arg4 absoluteURL:(id)arg5;
- (id)initWithFileReference:(id)arg1 gylphRange:(struct _NSRange)arg2 anchor:(id)arg3;

@end

