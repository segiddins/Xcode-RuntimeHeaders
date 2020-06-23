//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSFileHandle, NSURL;
@protocol OS_os_log;

@interface XRXMLValidator : NSObject
{
    NSURL *_url;
    NSURL *_schemaURL;
    NSArray *_errorReplacements;
    NSFileHandle *_errorFile;
    NSFileHandle *_diagnosticFile;
    NSObject<OS_os_log> *_log;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain) NSFileHandle *diagnosticFile; // @synthesize diagnosticFile=_diagnosticFile;
@property(retain) NSFileHandle *errorFile; // @synthesize errorFile=_errorFile;
- (BOOL)validate;
- (id)findErrorMessageForErrorPtr:(struct _xmlError *)arg1;
- (id)initWithSourceURL:(id)arg1 schemaURL:(id)arg2;

@end

