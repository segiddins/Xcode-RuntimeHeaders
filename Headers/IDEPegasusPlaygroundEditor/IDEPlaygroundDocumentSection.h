//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEPegasusPlaygroundEditor/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEEditorDocument, NSString;
@protocol IDEPlaygroundHostingDocument;

@interface IDEPlaygroundDocumentSection : NSObject <DVTInvalidation>
{
    NSString *_identifier;
    IDEEditorDocument<IDEPlaygroundHostingDocument> *_playgroundDocument;
}

+ (id)contentPathsToPreserveOnSave;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) IDEEditorDocument<IDEPlaygroundHostingDocument> *playgroundDocument; // @synthesize playgroundDocument=_playgroundDocument;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void)primitiveInvalidate;
- (id)content;
- (id)initWithIdentifier:(id)arg1 inPlaygroundDocument:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

