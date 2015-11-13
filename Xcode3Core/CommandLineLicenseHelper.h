//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTLicenseAgreementHelper, NSBundle, NSString;

@interface CommandLineLicenseHelper : NSObject
{
    NSString *_licensePath;
    NSBundle *_xcodeBundle;
    DVTLicenseAgreementHelper *_licenseAgreementHelper;
}

+ (BOOL)agreeToLicense;
+ (BOOL)hasAgreedToLicense;
+ (unsigned long long)showCommandLineLicenseUIIfNeeded:(BOOL)arg1;
- (void).cxx_destruct;
- (BOOL)_agreeToLicense;
- (unsigned long long)showLicenseUIIfNeeded:(BOOL)arg1;
- (BOOL)_isRunningAsSuperUser;
- (BOOL)_shouldShowLicenseAgreement;
- (BOOL)userHasWriteableHomeDirectory;
- (BOOL)isTTY;
- (unsigned long long)promptForAgreement;
- (void)printLicense;
- (id)launchTaskAndReturnOutputForTaskPath:(id)arg1 taskArguments:(id)arg2;
- (BOOL)displayLicenseHasAgreed:(BOOL)arg1;
- (const char *)getLicensePath;
- (id)initWithXcodeBundle:(id)arg1;

@end

