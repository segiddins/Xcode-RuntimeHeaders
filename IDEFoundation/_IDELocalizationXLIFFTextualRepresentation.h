//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString;

@interface _IDELocalizationXLIFFTextualRepresentation : NSObject
{
    NSMutableString *_representation;
}

@property(retain) NSMutableString *representation; // @synthesize representation=_representation;
- (void).cxx_destruct;
- (unsigned long long)length;
- (BOOL)createDirectoryAndWriteToURL:(id)arg1 error:(id *)arg2;
- (struct _NSRange)appendResource:(id)arg1 translationUnits:(id)arg2;
- (void)appendResourceEnd:(id)arg1;
- (void)appendResourceStart:(id)arg1;
- (struct _NSRange)appendGap;
- (struct _NSRange)appendTranslationUnit:(id)arg1;
- (id)init;

@end

