//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFTouchPassThroughViewController.h"

#import "SBFloatingDockViewControllerDelegate.h"
#import "SBGrabberTongueDelegate.h"
#import "SBIconViewQuerying.h"
#import "UIGestureRecognizerDelegate.h"

@class FBDisplayLayoutElement, NSString, SBAnalyticsClient, SBAppSuggestionManager, SBApplicationController, SBFloatingDockViewController, SBFolderController, SBGrabberTongue, SBIconController, SBIconListView, SBLayoutStateTransitionCoordinator, SBRecentDisplayItemsController, SBRecentDisplayItemsDataStore, UIPanGestureRecognizer, UIView, _UILegibilitySettings;

@interface SBFloatingDockRootViewController : SBFTouchPassThroughViewController <SBFloatingDockViewControllerDelegate, UIGestureRecognizerDelegate, SBGrabberTongueDelegate, SBIconViewQuerying>
{
    struct {
        unsigned int floatingDockRootViewControllerShouldHandlePanGestureRecognizer:1;
        unsigned int floatingDockRootViewControllerShouldBeginScreenEdgeGestureRecognizer:1;
    } _delegateRespondsTo;
    UIView *_floatingDockView;
    double _presentedProgress;
    _Bool _supressingKeyboard;
    _UILegibilitySettings *_legibilitySettings;
    _Bool _transitioningPresentation;
    id <SBFloatingDockRootViewControllerDelegate> _delegate;
    SBIconController *_iconController;
    SBApplicationController *_applicationController;
    SBAppSuggestionManager *_appSuggestionManager;
    SBFloatingDockViewController *_floatingDockViewController;
    SBLayoutStateTransitionCoordinator *_transitionCoordinator;
    SBRecentDisplayItemsController *_recentsController;
    SBRecentDisplayItemsDataStore *_recentsDataStore;
    FBDisplayLayoutElement *_displayLayoutElement;
    SBGrabberTongue *_grabberTongue;
    SBAnalyticsClient *_analyticsClient;
}

@property(retain, nonatomic) SBAnalyticsClient *analyticsClient; // @synthesize analyticsClient=_analyticsClient;
@property(retain, nonatomic) SBGrabberTongue *grabberTongue; // @synthesize grabberTongue=_grabberTongue;
@property(readonly, nonatomic) FBDisplayLayoutElement *displayLayoutElement; // @synthesize displayLayoutElement=_displayLayoutElement;
@property(retain, nonatomic) SBRecentDisplayItemsDataStore *recentsDataStore; // @synthesize recentsDataStore=_recentsDataStore;
@property(retain, nonatomic) SBRecentDisplayItemsController *recentsController; // @synthesize recentsController=_recentsController;
@property(retain, nonatomic) SBLayoutStateTransitionCoordinator *transitionCoordinator; // @synthesize transitionCoordinator=_transitionCoordinator;
@property(retain, nonatomic) SBFloatingDockViewController *floatingDockViewController; // @synthesize floatingDockViewController=_floatingDockViewController;
@property(readonly, nonatomic) SBAppSuggestionManager *appSuggestionManager; // @synthesize appSuggestionManager=_appSuggestionManager;
@property(readonly, nonatomic) SBApplicationController *applicationController; // @synthesize applicationController=_applicationController;
@property(readonly, nonatomic) SBIconController *iconController; // @synthesize iconController=_iconController;
@property(nonatomic, getter=isTransitioningPresentation) _Bool transitioningPresentation; // @synthesize transitioningPresentation=_transitioningPresentation;
@property(nonatomic) __weak id <SBFloatingDockRootViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)floatingDockViewController:(id)arg1 willPerformTransitionWithFolder:(id)arg2 presenting:(_Bool)arg3 withTransitionCoordinator:(id)arg4;
- (void)floatingDockViewController:(id)arg1 didChangeContentHeight:(double)arg2;
- (void)floatingDockViewController:(id)arg1 wantsToBePresented:(_Bool)arg2;
- (void)grabberTongueCanceledPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueEndedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueUpdatedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueBeganPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (_Bool)grabberTongueRequiredOutsideGrabberFreeRegion:(id)arg1;
- (_Bool)grabberTongueRequiredForWholeEdge:(id)arg1;
- (_Bool)grabberTongueOrPullEnabled:(id)arg1;
- (_Bool)grabberTongueHonorsAmbiguousActivationMargin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)_shouldShowGrabberOnFirstSwipe;
- (double)_floatingDockViewTopMargin;
- (double)_floatingDockViewTranslation;
- (double)_floatingDockViewTranslationForHeight:(double)arg1;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (void)_handleScreenEdgePanGestureRecognizer:(id)arg1;
- (struct CGRect)_calculateStandardDockFrame;
- (void)_endPresentationTransition;
- (void)_beginPresentationTransition;
- (void)_setPresentedProgress:(double)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_layoutFloatingDockViewWithProgress:(double)arg1;
- (double)_translationForProgress:(double)arg1;
- (double)_translationForProgress:(double)arg1 dockHeight:(double)arg2;
- (_Bool)isDisplayingIcon:(id)arg1 inLocation:(long long)arg2;
- (id)iconViewForIcon:(id)arg1 location:(long long)arg2;
- (void)registerSystemGestures;
- (void)cleanupAfterTransitionToEnvironmentMode:(long long)arg1;
- (void)prepareForTransitionToEnvironmentMode:(long long)arg1 fromDockVisible:(_Bool)arg2 toDockVisible:(_Bool)arg3;
- (_Bool)isDisplayingIcon:(id)arg1;
- (void)dismissPresentedFolderAnimated:(_Bool)arg1 withTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentFolderForIcon:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setPresentationProgress:(double)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3;
- (void)setPresentationProgress:(double)arg1 interactive:(_Bool)arg2;
- (void)setPresentationProgressInteractively:(double)arg1;
- (void)setPresentationProgress:(double)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)setPresentationProgress:(double)arg1 interactive:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setPresentationProgressInteractively:(double)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) struct CGRect floatingDockScreenPresentationFrame;
@property(readonly, nonatomic) struct CGRect floatingDockScreenFrame;
@property(readonly, nonatomic) SBIconListView *suggestionsIconListView;
@property(readonly, nonatomic) SBIconListView *userIconListView;
@property(readonly, nonatomic) double presentedProgress;
- (void)layoutUserControlledIconLists:(double)arg1 animationType:(long long)arg2 forceRelayout:(_Bool)arg3;
@property(readonly, nonatomic) UIPanGestureRecognizer *screenEdgePanGestureRecognizer;
@property(readonly, nonatomic) SBFolderController *presentedFolderController;
@property(readonly, nonatomic, getter=isPresentingFolder) _Bool presentingFolder;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) double translationFromFullyPresentedFrame;
@property(readonly, nonatomic) double preferredVerticalMargin;
@property(readonly, nonatomic) double effectiveFloatingDockHeight;
@property(readonly, nonatomic) double floatingDockHeight;
@property(readonly, nonatomic) double maximumFloatingDockHeight;
@property(readonly, nonatomic) _Bool requiresGrabberOnNextSwipe;
@property(readonly, nonatomic, getter=isFloatingDockFullyPresented) _Bool floatingDockFullyPresented;
@property(readonly, nonatomic, getter=isFloatingDockPresented) _Bool floatingDockPresented;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithIconController:(id)arg1 applicationController:(id)arg2 recentsController:(id)arg3 recentsDataStore:(id)arg4 appSuggestionManager:(id)arg5 transitionCoordinator:(id)arg6 analyticsClient:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

