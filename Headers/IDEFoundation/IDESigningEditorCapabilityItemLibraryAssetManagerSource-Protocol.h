//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SigningEditorCapabilityItemLibraryAssetManagerCoaelescedContext, SigningEditorCapabilityItemLibraryAssetSourceResult;
@protocol IDESigningEditorCapabilityItemLibraryAssetManagerSourceDelegate;

@protocol IDESigningEditorCapabilityItemLibraryAssetManagerSource
@property(nonatomic) __weak id <IDESigningEditorCapabilityItemLibraryAssetManagerSourceDelegate> delegate;
- (BOOL)isBusyForContext:(SigningEditorCapabilityItemLibraryAssetManagerCoaelescedContext *)arg1;
- (BOOL)wantsRefreshForContext:(SigningEditorCapabilityItemLibraryAssetManagerCoaelescedContext *)arg1;
- (SigningEditorCapabilityItemLibraryAssetSourceResult *)resultForContext:(SigningEditorCapabilityItemLibraryAssetManagerCoaelescedContext *)arg1;
- (void)refreshForContext:(SigningEditorCapabilityItemLibraryAssetManagerCoaelescedContext *)arg1;
@end

