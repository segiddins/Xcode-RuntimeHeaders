//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDETextFragmentProvider.h>

@interface IBICTextFragmentProvider : IDETextFragmentProvider
{
}

+ (void)generateTextFragmentProviderSeedForFilePath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (BOOL)retainsSeed;
- (id)documentLocationForToken:(long long)arg1 documentURL:(id)arg2 timestamp:(id)arg3 range:(struct _NSRange)arg4;
- (void)enumerateTextFragments:(CDUnknownBlockType)arg1;
- (id)seed;

@end

