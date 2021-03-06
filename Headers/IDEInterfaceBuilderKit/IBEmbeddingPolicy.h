//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTExtension, NSString;

@interface IBEmbeddingPolicy : NSObject
{
    DVTExtension *_representedExtension;
}

+ (id)embeddingPolicyWithRepresentedExtension:(id)arg1;
- (void).cxx_destruct;
@property(readonly) DVTExtension *representedExtension; // @synthesize representedExtension=_representedExtension;
- (void)performEmbedWithObjects:(id)arg1 inDocumentEditor:(id)arg2;
- (BOOL)canEmbedObjects:(id)arg1 fromDocument:(id)arg2;
- (id)embedObjects:(id)arg1 fromDocument:(id)arg2 context:(id)arg3;
@property(readonly) NSString *containerName;
- (id)initWithRepresentedExtension:(id)arg1;

@end

