//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEGeniusResultsFinder.h>

@class DVTObservingToken;

@interface DBGDisassemblyGeniusResultsFinder : IDEGeniusResultsFinder
{
    DVTObservingToken *_instructionPointerObserver;
    BOOL _instructionPointerObserverCreated;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_updateGeniusResults;

@end

