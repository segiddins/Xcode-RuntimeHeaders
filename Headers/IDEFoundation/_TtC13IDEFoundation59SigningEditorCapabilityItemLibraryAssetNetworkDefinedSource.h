//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import <IDEFoundation/IDESigningEditorCapabilityItemLibraryAssetManagerSource-Protocol.h>

@class MISSING_TYPE;
@protocol IDESigningEditorCapabilityItemLibraryAssetManagerSourceDelegate;

@interface _TtC13IDEFoundation59SigningEditorCapabilityItemLibraryAssetNetworkDefinedSource : _TtCs12_SwiftObject <IDESigningEditorCapabilityItemLibraryAssetManagerSource>
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *refreshQueue;
    MISSING_TYPE *contextToResult;
    MISSING_TYPE *accountManager;
    MISSING_TYPE *accountManagerSubscription;
    MISSING_TYPE *currentContext;
    MISSING_TYPE *rateLimiter;
}

- (void)refreshForContext:(id)arg1;
- (BOOL)wantsRefreshForContext:(id)arg1;
- (BOOL)isBusyForContext:(id)arg1;
- (id)resultForContext:(id)arg1;
@property(nonatomic, retain) id <IDESigningEditorCapabilityItemLibraryAssetManagerSourceDelegate> delegate; // @synthesize delegate;

@end

