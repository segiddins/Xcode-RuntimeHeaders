//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iCloudSupport/iCloudServiceCenterHelper.h>

@class NSDateFormatter, NSMutableArray;

@interface iCloudServiceCenterListHelper : iCloudServiceCenterHelper
{
    NSMutableArray *_items;
    NSDateFormatter *_dateFormatter;
}

- (void).cxx_destruct;
- (void)listContainer:(id)arg1;
- (void)monitor:(id)arg1 didReceiveResponseCode:(unsigned long long)arg2 response:(id)arg3 forToken:(id)arg4 responseContinues:(BOOL)arg5;
- (id)initWithServiceCenter:(id)arg1 monitor:(id)arg2;

@end

