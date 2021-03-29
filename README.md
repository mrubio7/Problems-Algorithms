## [1] Running Sum of 1d Array (*LeetCode Nº* 1480)

[![C](./Img/C.png)](https://github.com/mrubio7/Problems-Algorithms/blob/main/C/1480_RunningSumArray1D.c)
&nbsp; &nbsp; &nbsp; 
[![C#](./Img/Cs.png)](https://github.com/mrubio7/Problems-Algorithms/blob/main/C%23/1480_RunningSumArray1D.cs)


Given an array ``nums``. We define a running sum of an array as ``runningSum[i] = sum(nums[0]…nums[i])``.<br/>

Return the running sum of ``nums``.

#### Example 1:
``Input: nums = [1,2,3,4]``<br/>
``Output: [1,3,6,10]``<br/>
``Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].``<br/>
<br/>
<br/>

## [2] Jewels and Stones (*LeetCode Nº* 771)

[![C](./Img/C.png)](https://github.com/mrubio7/Problems-Algorithms/blob/main/C/771_JewelsAndStones.c)
&nbsp; &nbsp; &nbsp;
[![C#](./Img/Cs.png)](https://github.com/mrubio7/Problems-Algorithms/blob/main/C%23/771_JewelsAndStones.cs)

You're given strings ``jewels`` representing the types of stones that are jewels, and ``stones`` representing the stones you have. Each character in ``stones`` is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so ``"a"`` is considered a different type of stone from ``"A"``.

#### Example 1:
``Input: jewels = "aA", stones = "aAAbbbb"``<br/>
``Output: 3``<br/>
<br/>
<br/>

## [3] Valid Number (*LeetCode Nº* 65)

[![C](./Img/C.png)](https://github.com/mrubio7/Problems-Algorithms/blob/main/C/65_ValidNumber.c)
&nbsp; &nbsp; &nbsp;


A **valid number** can be split up into these components (in order):

A **decimal number** or an **integer**.
(Optional) An ``'e'`` or ``'E'``, followed by an integer.
A **valid number** can be split up into these components (in order):
A decimal number can be split up into these components (in order):

(Optional) A sign character (either ``'+'`` or ``'-'``).
One of the following formats:
At least one digit, followed by a dot ``'.'``.
At least one digit, followed by a dot ``'.'``, followed by at least one digit.
A dot ``'.'``, followed by at least one digit.
An integer can be split up into these components (in order):

(Optional) A sign character (either
``'+'`` or ``'-'``).
At least one digit.
For example, all the following are valid numbers:<br/>
``["2", "0089", "-0.1", "+3.14", "4.", "-.9", "2e10", "-90E3", "3e+7", "+6e-1", "53.5e93", "-123.456e789"]``, while the following are not valid numbers: ``["abc", "1a", "1e", "e3", "99e2.5", "--6", "-+3", "95a54e53"]`.

Given a string ``s``, return ``true`` if ``s`` is a **valid number**.<br/>
<br/>
<br/>
