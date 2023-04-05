Cau 1: 
    *p3 = B, p3 = 0x5678
    *p3 = A, p3 = 0x1234
    *p1 = B, p1 = 0x1234

Cau 2:
    Chi co lenh *p = 5;
    - k = 5; gán giá trị 5 cho biến k.
    - *k = 5; không hợp lệ vì k không phải là con trỏ.
    - p = 5; gán giá trị 5 cho con trỏ p, nhưng đây là địa chỉ không hợp lệ, 
    vì không có vùng nhớ nào được phân bổ cho giá trị 5.

Cau 3: 
    a value of type "char *" cannot be used to initialize an entity of type "double *
    Gán địa chỉ của biến kiểu char c cho con trỏ kiểu double p là không hợp lệ: địa chỉ của một biến kiểu char 
    là một số nguyên 8-bit trong khi địa chỉ của một biến kiểu double là một số nguyên 64-bit.