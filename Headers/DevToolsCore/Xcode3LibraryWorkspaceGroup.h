//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DevToolsCore/Xcode3LibraryGroup.h>

@class NSArray, NSString;

@interface Xcode3LibraryWorkspaceGroup : Xcode3LibraryGroup
{
    NSArray *_subgroups;
    NSString *_displayName;
}

+ (id)libraryWorkspaceGroupWithDisplayName:(id)arg1 subgroups:(id)arg2;
- (void).cxx_destruct;
- (id)libraries;
- (id)subgroups;
- (id)displayName;
- (id)initWithDisplayName:(id)arg1 subgroups:(id)arg2;

@end
