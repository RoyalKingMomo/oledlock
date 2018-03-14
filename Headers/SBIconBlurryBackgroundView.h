//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "_SBIconWallpaperBackgroundClient.h"

@class NSString;

@interface SBIconBlurryBackgroundView : UIView <_SBIconWallpaperBackgroundClient>
{
    struct CGRect _wallpaperRelativeBounds;
    _Bool _isBlurring;
    _Bool _suppressesExternalUpdates;
    id <SBIconBlurryBackgroundViewObserver> _observer;
    CDUnknownBlockType _wantsBlurEvaluator;
    struct CGPoint _wallpaperRelativeCenter;
}

@property(nonatomic, getter=isSuppressingExternalUpdates) _Bool suppressesExternalUpdates; // @synthesize suppressesExternalUpdates=_suppressesExternalUpdates;
@property(copy, nonatomic) CDUnknownBlockType wantsBlurEvaluator; // @synthesize wantsBlurEvaluator=_wantsBlurEvaluator;
@property(readonly, nonatomic) _Bool isBlurring; // @synthesize isBlurring=_isBlurring;
@property(nonatomic) struct CGPoint wallpaperRelativeCenter; // @synthesize wallpaperRelativeCenter=_wallpaperRelativeCenter;
@property(nonatomic) __weak id <SBIconBlurryBackgroundViewObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setBlurring:(_Bool)arg1;
- (void)setWallpaperBackgroundRect:(struct CGRect)arg1 forContents:(struct CGImage *)arg2 withFallbackColor:(struct CGColor *)arg3;
- (_Bool)wantsBlur:(id)arg1;
- (struct CGRect)wallpaperRelativeBounds;
- (void)didAddSubview:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
