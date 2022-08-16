# Summary

:sunflower: It is also called `ft_LGPT`

ie. <kbd> Libft - Get_next_line - Printf Toolkit </kbd>

# Usage

:avocado: add the following rules in the <kbd> Makefile </kbd> of the program


###### basic setup

```r
lib_path := ../ft_toolkit/
lib_incl := -I $(lib_path)
lib_name := $(lib_path)ft_toolkit.a
```

###### under target recipe

```r
$(name) : $(bud)
        @ make -C $(lib_path)
```

###### under cleanup

```r
clean :
        @ make -C $(lib_path) clean

fclean : clean
        @ make -C $(lib_path) fclean
```
