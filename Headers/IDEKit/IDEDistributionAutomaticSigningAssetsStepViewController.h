//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEDistributionStepViewController.h>

@class DVTReplacementView, IDEProvisioningCreateTeamOwnedCertificateUserAction, IDEViewController, NSOrderedSet;
@protocol DVTInvalidation, IDEDistributionStepInterstitialViewController;

@interface IDEDistributionAutomaticSigningAssetsStepViewController : IDEDistributionStepViewController
{
    unsigned int accountNotificationResponderGeneration;
    unsigned int certificateNotificationResponderGeneration;
    DVTReplacementView *_replacementView;
    NSOrderedSet *_errors;
    IDEProvisioningCreateTeamOwnedCertificateUserAction *_createCertificateAction;
    id <DVTInvalidation> _accountsToken;
    id <DVTInvalidation> _certificatesToken;
    long long _state;
}

+ (BOOL)skipStepForContext:(id)arg1 assistantDirection:(long long)arg2;
+ (id)keyPathsForValuesAffectingAdditionalActionTitle;
+ (id)keyPathsForValuesAffectingWantsPreviousAction;
+ (id)keyPathsForValuesAffectingWantsNextAction;
+ (id)keyPathsForValuesAffectingNextButtonTitle;
+ (id)keyPathsForValuesAffectingCanGoNext;
+ (id)keyPathsForValuesAffectingCanGoPrevious;
+ (id)_errorForCertificatePermissions:(id)arg1 sessionProvider:(id)arg2 team:(id)arg3;
+ (id)_accountErrorWithUnderlyingError:(id)arg1;
+ (id)accountIssueDetailsForContext:(id)arg1 issue:(id)arg2;
+ (long long)_requiredRoleForError:(id)arg1;
+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingInterstitialViewController;
+ (Class)correspondingStepClass;
- (void).cxx_destruct;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) id <DVTInvalidation> certificatesToken; // @synthesize certificatesToken=_certificatesToken;
@property(retain, nonatomic) id <DVTInvalidation> accountsToken; // @synthesize accountsToken=_accountsToken;
@property(retain, nonatomic) IDEProvisioningCreateTeamOwnedCertificateUserAction *createCertificateAction; // @synthesize createCertificateAction=_createCertificateAction;
@property(retain, nonatomic) NSOrderedSet *errors; // @synthesize errors=_errors;
@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
- (void)takeAdditionalAction;
- (id)additionalActionTitle;
- (void)takePreviousAction;
- (BOOL)wantsPreviousAction;
- (void)takeNextAction;
- (BOOL)wantsNextAction;
- (id)nextButtonTitle;
- (BOOL)canGoNext;
- (BOOL)canGoPrevious;
- (id)_makeErrorsPresentables:(id)arg1;
- (void)generateDistributionCertificate;
- (void)asyncGetAccountDetailsAndUpdateState:(id)arg1;
- (id)_evaluateProvisioning:(id *)arg1;
- (id)_noAccountForTeamErrorFromErrors:(id)arg1;
- (id)_loginErrorFromErrors:(id)arg1;
- (id)_permissionsErrorFromErrors:(id)arg1;
- (id)_accountIssueFromErrors:(id)arg1;
- (id)_missingPrivateKeyErrorFromErrors:(id)arg1;
- (void)_locateSigningAssets;
- (void)viewDidLoad;
- (id)title;
@property(readonly, nonatomic) IDEViewController<IDEDistributionStepInterstitialViewController> *interstitialViewController;
- (void)updateStateWithRepairErrors:(id)arg1;
- (void)updateStateToExportCertificate:(id)arg1;
- (void)updateStateWithMissingPrivateKeyError:(id)arg1;
- (void)updateStateWithAccountDetails:(id)arg1 triggeringIssue:(id)arg2;
- (void)updateStateToGenerateCertificateWithCreateCertificateAction:(id)arg1;
- (void)updateStateWithCreateCertificateAction:(id)arg1;
- (void)updateStateToLocatingSigningAssets;
- (void)_setState:(long long)arg1 userAction:(id)arg2 errors:(id)arg3 subcontrollerClass:(Class)arg4;
- (id)backgroundQueue;
- (id)nibName;
- (void)primitiveInvalidate;

@end

