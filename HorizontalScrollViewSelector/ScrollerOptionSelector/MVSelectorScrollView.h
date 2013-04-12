//
//  ScrollerOptionSelector.h
//  OpenSignalMaps
//
//  Created by Andrea Bizzotto on 12/04/2013.
//  Copyright (c) 2013 Open Signal. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MVSelectorScrollView;

@protocol MVSelectorScrollViewDelegate
/**
 * Method called when a new page is selected
 * @param page index of selected page
 */
- (void)scrollView:(MVSelectorScrollView *)scrollView pageSelected:(int)pageSelected;
@end

/**
 * Class holding a scroll view with multiple values
 */
@interface MVSelectorScrollView : UIView<UIScrollViewDelegate>

/**
 * Scroll view with page size smaller than full control width
 */
@property IBOutlet UIScrollView *scrollView;
@property IBOutlet UIView *scroller;

/**
 * Array of NSString instances representing values to be displayed
 */
@property (nonatomic) NSArray *values;

/**
 * Currently selected index
 */
@property (nonatomic) int selectedIndex;

/**
 * Method to select index with optional scroll view animation
 */
- (void)setSelectedIndex:(int)selectedIndex animated:(BOOL)animated;

/**
 * Whether the delegate method is called while the view is still scrolling. Fires multiple delegate calls each time a page boundary is crossed.
 * Leave disabled to receive a single delegate call only when the scrolling is completed
 */
@property BOOL updateIndexWhileScrolling;

/**
 * Delegate
 */
@property id<MVSelectorScrollViewDelegate> delegate;

@end
