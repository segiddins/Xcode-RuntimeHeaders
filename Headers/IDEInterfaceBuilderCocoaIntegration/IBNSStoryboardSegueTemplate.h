//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractStoryboardSegueTemplate.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class NSStoryboard, NSString;

@interface IBNSStoryboardSegueTemplate : IBAbstractStoryboardSegueTemplate <IBDocumentArchiving>
{
    BOOL _encodeAsRuntimeInstance;
    NSStoryboard *_storyboard;
}

+ (id)codingKeyForPropertyName:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSStoryboard *storyboard; // @synthesize storyboard=_storyboard;
- (id)ibRuntimeClassName;
- (Class)classForDocumentArchiver:(id)arg1;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (BOOL)ibRequiresOutletToStoryboard;
- (Class)classForCoder;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

