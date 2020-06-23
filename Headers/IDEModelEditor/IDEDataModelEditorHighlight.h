//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IDEDMModelObject;

@interface IDEDataModelEditorHighlight : NSObject
{
    BOOL _active;
    id <IDEDMModelObject> _modelObject;
    NSString *_highlightProperty;
    unsigned long long _numberOfInternalHits;
    struct _NSRange _highlightRange;
}

- (void).cxx_destruct;
@property unsigned long long numberOfInternalHits; // @synthesize numberOfInternalHits=_numberOfInternalHits;
@property(getter=isActive) BOOL active; // @synthesize active=_active;
@property(readonly, copy) NSString *highlightProperty; // @synthesize highlightProperty=_highlightProperty;
@property(readonly) struct _NSRange highlightRange; // @synthesize highlightRange=_highlightRange;
@property(readonly) id <IDEDMModelObject> modelObject; // @synthesize modelObject=_modelObject;
- (id)initWithModelObject:(id)arg1 range:(struct _NSRange)arg2 property:(id)arg3;

@end

