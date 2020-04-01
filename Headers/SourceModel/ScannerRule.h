//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, SourceScanner;

@interface ScannerRule : NSObject
{
    long long _token;
    NSSet *_tokenSet;
    BOOL _optional;
    BOOL _allowMultiple;
    SourceScanner *_scanner;
}

@property(readonly) SourceScanner *scanner; // @synthesize scanner=_scanner;
@property(readonly) BOOL allowMultiple; // @synthesize allowMultiple=_allowMultiple;
@property(readonly) BOOL optional; // @synthesize optional=_optional;
- (void).cxx_destruct;
- (BOOL)matchesToken:(long long)arg1;
- (id)initWithString:(id)arg1;

@end

