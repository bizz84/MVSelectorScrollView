//
//  ScrollerClipView.h
//  Horizontal Scroll View Selector
//
//  Created by Andrea Bizzotto on 12/04/2013.
//  Copyright (c) 2013 Andrea Bizzotto. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 * Class to delegate scrolling to a UIScrollView instance
 * @see http://stackoverflow.com/questions/1677085/paging-uiscrollview-in-increments-smaller-than-frame-size
 */
@interface MVScrollerClipView : UIView

/**
 * Referenced scroll view
 */
@property IBOutlet UIScrollView *scrollView;

@end
