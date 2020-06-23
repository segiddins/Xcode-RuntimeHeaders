//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTObservingToken, IDEProfileQualification, IDEProvisioningProfileInfoViewController;

@interface IDEProvisioningProfileDownloaderDetailViewController : IDEViewController
{
    BOOL _hasUpdatedPortalProfile;
    IDEProfileQualification *_qualification;
    DVTObservingToken *_qualificationObserver;
    DVTObservingToken *_hasUpdatedPortalProfileObserver;
    IDEProvisioningProfileInfoViewController *_infoViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IDEProvisioningProfileInfoViewController *infoViewController; // @synthesize infoViewController=_infoViewController;
@property(retain, nonatomic) DVTObservingToken *hasUpdatedPortalProfileObserver; // @synthesize hasUpdatedPortalProfileObserver=_hasUpdatedPortalProfileObserver;
@property(retain, nonatomic) DVTObservingToken *qualificationObserver; // @synthesize qualificationObserver=_qualificationObserver;
@property(nonatomic) BOOL hasUpdatedPortalProfile; // @synthesize hasUpdatedPortalProfile=_hasUpdatedPortalProfile;
@property(retain, nonatomic) IDEProfileQualification *qualification; // @synthesize qualification=_qualification;
- (void)primitiveInvalidate;
- (void)setupObservations;
- (void)viewDidLoad;

@end

