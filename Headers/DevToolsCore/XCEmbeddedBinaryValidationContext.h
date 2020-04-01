//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, XCEmbeddedBinaryCodeSignatureSource;

@interface XCEmbeddedBinaryValidationContext : NSObject
{
    NSString *_signingCertSHA1;
    NSDictionary *_parentInfoDictionary;
    NSString *_embeddedBinaryPath;
    NSDictionary *_embeddedBinaryInfoDictionary;
    XCEmbeddedBinaryCodeSignatureSource *_signatureSource;
}

@property(retain) XCEmbeddedBinaryCodeSignatureSource *signatureSource; // @synthesize signatureSource=_signatureSource;
@property(retain) NSDictionary *embeddedBinaryInfoDictionary; // @synthesize embeddedBinaryInfoDictionary=_embeddedBinaryInfoDictionary;
@property(retain) NSString *embeddedBinaryPath; // @synthesize embeddedBinaryPath=_embeddedBinaryPath;
@property(retain) NSDictionary *parentInfoDictionary; // @synthesize parentInfoDictionary=_parentInfoDictionary;
@property(retain) NSString *signingCertSHA1; // @synthesize signingCertSHA1=_signingCertSHA1;
- (void).cxx_destruct;

@end

