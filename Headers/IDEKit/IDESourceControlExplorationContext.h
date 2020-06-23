//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEExplorationContext.h>

@class DVTSourceControlRemoteRepository, NSError;

@interface IDESourceControlExplorationContext : IDEExplorationContext
{
    DVTSourceControlRemoteRepository *_remoteRepository;
    NSError *_underlyingError;
}

@property(readonly) NSError *underlyingError; // @synthesize underlyingError=_underlyingError;
@property(readonly) DVTSourceControlRemoteRepository *remoteRepository; // @synthesize remoteRepository=_remoteRepository;
- (void).cxx_destruct;
- (int)explorationType;
- (id)initWithRemoteRepository:(id)arg1 underlyingError:(id)arg2;

@end

