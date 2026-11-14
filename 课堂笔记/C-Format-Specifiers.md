# C语言格式化输入输出规范总结

## 一、 `printf` 格式化输出

基本语法：`%[flags][width][.prec][hlL]type`

### 1. Flags (标志)
| Flag | 含义 |
| :--- | :--- |
| `-` | 左对齐 |
| `+` | 在前面放 `+` 或 `-` |
| `(space)` | 正数留空 |
| `0` | 0填充 |

### 2. Width / Precision (宽度与精度)
| width 或 prec | 含义 |
| :--- | :--- |
| `number` | 最小字符数 |
| `*` | 下一个参数是字符数 (用于动态指定width) |
| `.number` | 小数点后的位数 |
| `.*` | 下一个参数是小数点后的位数 (用于动态指定prec) |

### 3. 类型修饰 (Length Modifiers)
| 类型修饰 | 含义 |
| :--- | :--- |
| `hh` | 单个字节 |
| `h` | short |
| `l` | long |
| `ll` | long long |
| `L` | long double |

### 4. Type (转换类型)
| type | 用于 | type | 用于 |
| :--- | :--- | :--- | :--- |
| `i` 或 `d` | int | `g` | float |
| `u` | unsigned int | `G` | float |
| `o` | 八进制 | `a` 或 `A` | 十六进制浮点 |
| `x` | 十六进制 | `c` | char |
| `X` | 字母大写的十六进制 | `s` | 字符串 |
| `f` 或 `F` | float, 6 | `p` | 指针 |
| `e` 或 `E` | 指数 | `n` | 读入/写出的个数 |

## 二、 `scanf` 格式化输入

基本语法：`%[flag]type`

### 1. Flag (标志)
| flag | 含义 | flag | 含义 |
| :--- | :--- | :--- | :--- |
| `*` | 跳过 (读入但不赋值) | `l` | long, double |
| `数字` | 最大字符数 | `ll` | long long |
| `hh` | char | `L` | long double |
| `h` | short | | |

### 2. Type (转换类型)
| type | 用于 | type | 用于 |
| :--- | :--- | :--- | :--- |
| `d` | int | `s` | 字符串（单词） |
| `i` | 整数，可能为十六进制或八进制 | `[...]` | 所允许的字符 |
| `u` | unsigned int | `p` | 指针 |
| `o` | 八进制 | | |
| `x` | 十六进制 | | |
| `a,e,f,g` | float | | |
| `c` | char | | |

## 三、 特殊用法：`%[^,]` 与 NMEA 数据解析

### 场景示例
需要解析的 GPS NMEA 语句数据（以逗号分隔）：
`//$GPRMC,004319.00,A,3016.98468,N,12006.39211,E,0.047,,130909,,,D*79`

### 代码示例
```c
scanf("%*[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,]",
      sTime, sAV, sLati, &sNW, sLong, &sEW, sSpeed, sAngle, sDate);
