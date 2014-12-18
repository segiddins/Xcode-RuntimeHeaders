//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTDocumentLocation.h"

@class NSImage, NSString;

@interface DBGGaugeDocumentLocation : DVTDocumentLocation
{
    NSString *_navigableName;
    NSImage *_navigableImage;
    NSString *_associatedProcessUUID;
}

@property(readonly) NSString *associatedProcessUUID; // @synthesize associatedProcessUUID=_associatedProcessUUID;
- (void).cxx_destruct;
- (id)navigableItem_image;
- (id)navigableItem_name;
- (id)initWithAssociatedProcessUUID:(id)arg1 documentURL:(id)arg2 navigableName:(id)arg3 navigableImage:(id)arg4;

@end

