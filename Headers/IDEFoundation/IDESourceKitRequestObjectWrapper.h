//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDESourceKitRequestObjectWrapper : NSObject
{
    struct _sourcekit_object_s *_obj;
}

- (id)description;
- (struct _sourcekit_object_s *)sourceKitObject;
- (void)dealloc;
- (id)init;
- (id)initWithSourceKitObject:(struct _sourcekit_object_s *)arg1;

@end

