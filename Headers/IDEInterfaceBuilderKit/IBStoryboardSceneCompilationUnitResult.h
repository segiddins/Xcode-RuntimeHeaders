//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IBXIBDocument, NSFileWrapper;
@protocol IBPrimarySceneObject;

@interface IBStoryboardSceneCompilationUnitResult : NSObject
{
    NSObject<IBPrimarySceneObject> *_storyboardViewController;
    NSFileWrapper *_compiledPackage;
    IBXIBDocument *_document;
}

- (void).cxx_destruct;
@property(readonly) IBXIBDocument *document; // @synthesize document=_document;
@property(readonly) NSFileWrapper *compiledPackage; // @synthesize compiledPackage=_compiledPackage;
@property(readonly) NSObject<IBPrimarySceneObject> *storyboardViewController; // @synthesize storyboardViewController=_storyboardViewController;
- (id)initWithDocument:(id)arg1 compiledPackage:(id)arg2;
- (id)initWithStoryboardViewController:(id)arg1 document:(id)arg2 compiledPackage:(id)arg3;

@end

