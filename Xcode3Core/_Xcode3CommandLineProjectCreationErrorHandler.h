//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Xcode3Core/Xcode3ProjectCreationErrorHandling-Protocol.h>

@class NSString;

@interface _Xcode3CommandLineProjectCreationErrorHandler : NSObject <Xcode3ProjectCreationErrorHandling>
{
    BOOL _didEncounterFatalError;
    NSString *_errorMessage;
}

@property(copy) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property BOOL didEncounterFatalError; // @synthesize didEncounterFatalError=_didEncounterFatalError;
- (void).cxx_destruct;
- (BOOL)shouldOpenProjectReadOnlyAtPath:(id)arg1;
- (void)unableToOpenProjectAtPath:(id)arg1 reason:(id)arg2;
- (BOOL)shouldOpenProjectOfMismatchingVersion:(unsigned long long)arg1 atPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

