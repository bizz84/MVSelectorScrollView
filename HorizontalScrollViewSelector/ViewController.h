//
//  ViewController.h
//  HorizontalScrollViewSelector
//
//  Created by Andrea Bizzotto on 12/04/2013.
//  Copyright (c) 2013 musevisions. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MVSelectorScrollView.h"

@interface ViewController : UIViewController<MVSelectorScrollViewDelegate>

@property IBOutlet MVSelectorScrollView *scrollView1;
@property IBOutlet UILabel *indicator1;

@property IBOutlet MVSelectorScrollView *scrollView2;
@property IBOutlet UILabel *indicator2;

@end
