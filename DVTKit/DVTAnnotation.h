//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVTAnnotation : NSObject
{
    double _precedence;
    id _representedObject;
    BOOL _visible;
}

@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
@property(getter=isVisible) BOOL visible; // @synthesize visible=_visible;
@property double precedence; // @synthesize precedence=_precedence;
- (void).cxx_destruct;
@property(readonly) BOOL hideCarets;
- (id)annotationDisplayDescription;
- (id)annotationDisplayName;
- (long long)comparePrecedence:(id)arg1;
- (id)init;

@end

