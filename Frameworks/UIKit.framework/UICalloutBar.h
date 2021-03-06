/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICalloutBar : UIView {
    int  m_arrowDirection;
    double  m_availableSpaceOnLeft;
    double  m_availableSpaceOnRight;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  m_controlFrame;
    NSDictionary * m_currentAppearOrFadeContext;
    int  m_currentPage;
    NSMutableArray * m_currentSystemButtons;
    id  m_delegate;
    bool  m_didPromptForReplace;
    NSMutableArray * m_extraButtons;
    NSArray * m_extraItems;
    bool  m_fadeAfterCommand;
    double  m_fadedTime;
    bool  m_ignoreFade;
    UICalloutBarButton * m_nextButton;
    UICalloutBarBackground * m_overlay;
    int  m_pageCount;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_pointAboveControls;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_pointBelowControls;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_pointLeftOfControls;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_pointRightOfControls;
    UICalloutBarButton * m_previousButton;
    bool  m_recalcVisibleItems;
    NSMutableArray * m_rectsToEvade;
    NSArray * m_replacements;
    id  m_responderTarget;
    bool  m_showAllReplacements;
    bool  m_suppressesAppearance;
    double  m_supressedHorizontalMovementX;
    bool  m_supressesHorizontalMovement;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  m_supressesHorizontalMovementFrame;
    NSArray * m_systemButtonDescriptions;
    int  m_targetDirection;
    bool  m_targetHorizontal;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_targetPoint;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  m_targetRect;
    NSString * m_untruncatedString;
}

@property (nonatomic) int arrowDirection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } controlFrame;
@property (nonatomic, retain) NSDictionary *currentAppearOrFadeContext;
@property (nonatomic) id delegate;
@property (nonatomic, copy) NSArray *extraItems;
@property (nonatomic) struct CGPoint { double x1; double x2; } pointAboveControls;
@property (nonatomic) struct CGPoint { double x1; double x2; } pointBelowControls;
@property (nonatomic) struct CGPoint { double x1; double x2; } pointLeftOfControls;
@property (nonatomic) struct CGPoint { double x1; double x2; } pointRightOfControls;
@property (nonatomic, readonly) NSArray *rectsToEvade;
@property (nonatomic, copy) NSArray *replacements;
@property (nonatomic) UIResponder *responderTarget;
@property (nonatomic) bool showAllReplacements;
@property (nonatomic) bool suppressesAppearance;
@property (nonatomic) bool supressesHorizontalMovement;
@property (nonatomic) int targetDirection;
@property (nonatomic) bool targetHorizontal;
@property (nonatomic) struct CGPoint { double x1; double x2; } targetPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetRect;
@property (nonatomic, copy) NSString *untruncatedString;
@property (nonatomic, readonly) bool visible;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (void)_releaseSharedInstance;
+ (id)activeCalloutBar;
+ (void)fadeSharedCalloutBar;
+ (void)hideSharedCalloutBar;
+ (void)performWithoutAffectingSharedCalloutBar:(id /* block */)arg1;
+ (id)sharedCalloutBar;
+ (bool)sharedCalloutBarIsVisible;

- (void).cxx_destruct;
- (void)_endOngoingAppearOrFadeAnimations;
- (void)_fadeAfterCommand:(SEL)arg1;
- (void)_showNextItems:(id)arg1;
- (void)_showPreviousItems:(id)arg1;
- (bool)_touchesInsideShouldHideCalloutBar;
- (bool)_updateVisibleItemsAnimated:(bool)arg1;
- (void)addRectToEvade:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)adjustFrameToAvoidDividerOnArrow;
- (void)appear;
- (void)appearAnimationDidStopWithContext:(id)arg1;
- (void)applicationDidAddDeactivationReason:(id)arg1;
- (int)arrowDirection;
- (void)buttonHighlighted:(id)arg1 highlighted:(bool)arg2;
- (bool)calculateControlFrameForCalloutSize:(struct CGSize { double x1; double x2; })arg1 below:(bool)arg2;
- (bool)calculateControlFrameForCalloutSize:(struct CGSize { double x1; double x2; })arg1 right:(bool)arg2;
- (bool)calculateControlFrameInsideTargetRect:(struct CGSize { double x1; double x2; })arg1;
- (void)clearEvadeRects;
- (void)clearReplacements;
- (void)clearSupressesHorizontalMovementFrame;
- (void)configureButtons:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })controlFrame;
- (id)currentAppearOrFadeContext;
- (void)dealloc;
- (id)delegate;
- (id)extraItems;
- (void)fadeAnimationDidStopWithContext:(id)arg1 finished:(bool)arg2;
- (bool)hasReplacements;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })pointAboveControls;
- (struct CGPoint { double x1; double x2; })pointBelowControls;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct CGPoint { double x1; double x2; })pointLeftOfControls;
- (struct CGPoint { double x1; double x2; })pointRightOfControls;
- (bool)recentlyFaded;
- (bool)rectClear:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)rectsToEvade;
- (void)removeFromSuperview;
- (id)replacements;
- (void)resetPage;
- (id)responderTarget;
- (void)setArrowDirection:(int)arg1;
- (void)setControlFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCurrentAppearOrFadeContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtraItems:(id)arg1;
- (bool)setFrameForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPointAboveControls:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPointBelowControls:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPointLeftOfControls:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPointRightOfControls:(struct CGPoint { double x1; double x2; })arg1;
- (void)setReplacements:(id)arg1;
- (void)setResponderTarget:(id)arg1;
- (void)setShowAllReplacements:(bool)arg1;
- (void)setSuppressesAppearance:(bool)arg1;
- (void)setSupressesHorizontalMovement:(bool)arg1;
- (void)setTargetDirection:(int)arg1;
- (void)setTargetHorizontal:(bool)arg1;
- (void)setTargetPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 arrowDirection:(int)arg2;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pointBelowControls:(struct CGPoint { double x1; double x2; })arg2 pointAboveControls:(struct CGPoint { double x1; double x2; })arg3;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pointLeftOfControls:(struct CGPoint { double x1; double x2; })arg2 pointRightOfControls:(struct CGPoint { double x1; double x2; })arg3;
- (void)setUntruncatedString:(id)arg1;
- (void)show;
- (bool)showAllReplacements;
- (void)shrinkButtonTextSize:(id)arg1;
- (bool)suppressesAppearance;
- (double)supressHorizontalXMovementIfNeededForPoint:(struct CGPoint { double x1; double x2; })arg1 proposedX:(double)arg2;
- (bool)supressesHorizontalMovement;
- (int)targetDirection;
- (id)targetForAction:(SEL)arg1;
- (bool)targetHorizontal;
- (struct CGPoint { double x1; double x2; })targetPoint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRect;
- (int)textEffectsVisibilityLevel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textEffectsWindowBoundsWithoutStatusBar;
- (id)untruncatedString;
- (void)update;
- (void)updateAnimated:(bool)arg1;
- (void)updateForCurrentPage;
- (bool)visible;

// Image: /System/Library/AccessibilityBundles/QuickSpeak.bundle/QuickSpeak

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityAddSpeakItemToExtras:(id)arg1 selector:(SEL)arg2;
- (void)buttonPressed:(id)arg1;
- (void)fade;
- (void)hide;
- (void)updateAvailableButtons;

@end
