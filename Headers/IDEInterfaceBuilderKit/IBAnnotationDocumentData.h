//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSSet;

@interface IBAnnotationDocumentData : NSObject
{
    NSSet *_annotations;
    NSDate *_dateCached;
}

@property(readonly) NSDate *dateCached; // @synthesize dateCached=_dateCached;
@property(readonly) NSSet *annotations; // @synthesize annotations=_annotations;
- (void).cxx_destruct;
- (id)initWithAnnotations:(id)arg1;

@end

