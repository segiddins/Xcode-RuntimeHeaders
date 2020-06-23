//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIStoryboardSegueTemplate.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class NSString;

@interface IBUIStoryboardReplaceSegueTemplate : IBUIStoryboardSegueTemplate <IBDocumentArchiving>
{
    long long _destinationContainmentContext;
    long long _splitViewControllerIndex;
}

@property long long splitViewControllerIndex; // @synthesize splitViewControllerIndex=_splitViewControllerIndex;
@property long long destinationContainmentContext; // @synthesize destinationContainmentContext=_destinationContainmentContext;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

