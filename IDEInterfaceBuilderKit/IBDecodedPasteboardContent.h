//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IBDocument, NSArray, NSDictionary, NSString;

@interface IBDecodedPasteboardContent : NSObject <DVTInvalidation>
{
    IBDocument *_document;
    NSArray *_topLevelObjects;
    NSDictionary *_originalOIDToDecodedOIDMap;
    NSDictionary *_decodedOIDToOriginalOIDMap;
}

+ (void)initialize;
+ (id)contentWithDocument:(id)arg1 topLevelObjects:(id)arg2 decodedOIDToOriginalOIDMap:(id)arg3;
@property(readonly) NSDictionary *decodedOIDToOriginalOIDMap; // @synthesize decodedOIDToOriginalOIDMap=_decodedOIDToOriginalOIDMap;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)objectInDestinationDocumentForObject:(id)arg1 inSourceDocument:(id)arg2;
- (id)identifiedTopLevelObjectsUsingStrategy:(long long)arg1;
- (id)identifierForObject:(id)arg1 usingStrategy:(long long)arg2;
@property(readonly) NSArray *topLevelObjects; // @dynamic topLevelObjects;
@property(readonly) IBDocument *document;
@property(readonly) NSDictionary *originalOIDToDecodedOIDMap;
- (id)initWithDocument:(id)arg1 topLevelObjects:(id)arg2 decodedOIDToOriginalOIDMap:(id)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

