//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class _TtC13IDEFoundation51SigningEditorCapabilityItemLibraryAssetSourceResult, _TtC13IDEFoundation63SigningEditorCapabilityItemLibraryAssetManagerCoaelescedContext;
@protocol IDESigningEditorCapabilityItemLibraryAssetManagerSourceDelegate;

@protocol IDESigningEditorCapabilityItemLibraryAssetManagerSource
@property(nonatomic) __weak id <IDESigningEditorCapabilityItemLibraryAssetManagerSourceDelegate> delegate;
- (BOOL)isBusyForContext:(_TtC13IDEFoundation63SigningEditorCapabilityItemLibraryAssetManagerCoaelescedContext *)arg1;
- (BOOL)wantsRefreshForContext:(_TtC13IDEFoundation63SigningEditorCapabilityItemLibraryAssetManagerCoaelescedContext *)arg1;
- (_TtC13IDEFoundation51SigningEditorCapabilityItemLibraryAssetSourceResult *)resultForContext:(_TtC13IDEFoundation63SigningEditorCapabilityItemLibraryAssetManagerCoaelescedContext *)arg1;
- (void)refreshForContext:(_TtC13IDEFoundation63SigningEditorCapabilityItemLibraryAssetManagerCoaelescedContext *)arg1;
@end

