//
//  ScrollerOptionSelectorSubview.h
//  OpenSignalMaps
//
//  Created by Andrea Bizzotto on 12/04/2013.
//  Copyright (c) 2013 Open Signal. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 * Custom subview to be used to fill the scroll view content
 */
@interface MVSelectorContentView : UIView

/**
 * @param frame frame to be used
 * @param text text to be used with label
 */
- (instancetype)initWithFrame:(CGRect)frame text:(NSString *)text;

/**
 * UILabel subview
 */
@property UILabel *label;

/**
 * Selected state for label.
 */
@property (nonatomic) BOOL selected;

@end
