//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSAdministration/XCSInitializationOperation.h>

@class NSString;

@interface XCSCreateServiceUsersOperation : XCSInitializationOperation
{
    NSString *_buildServiceUsername;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *buildServiceUsername; // @synthesize buildServiceUsername=_buildServiceUsername;
- (void)undo;
- (id)undoStatusDescription;
- (void)run;
- (id)allUsersIncludingBuildServiceUser;
- (id)buildServiceUser;
- (id)statusDescription;

@end

